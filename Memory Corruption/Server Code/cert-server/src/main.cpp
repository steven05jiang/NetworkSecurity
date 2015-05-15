#include <memory>
#include <algorithm>
#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <deque>
#include <set>
#include <unordered_map>
#include <unordered_set>

#include <cstdlib>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include <boost/filesystem.hpp>
#include <boost/program_options.hpp>
#include <glog/logging.h>

#include <cryptopp/filters.h>
#include <cryptopp/hex.h>
#include <cryptopp/sha.h>
#include <cryptopp/hmac.h>

#include "msg.pb.h"

#define DO_FORK

namespace fs = boost::filesystem;
namespace opts = boost::program_options;

/**
 * Configuration.
 */
struct Config {
    fs::path cert_log_ = "/dev/null";
    uint16_t port_ = 12002;
};

/**
 * Exception.
 */
class Exception : public std::exception {
public:
    /**
     * Constructor.
     *
     * @param msg Message.
     */
    explicit Exception(const std::string& msg) : msg_(msg) {
    }

    virtual const char* what(void) const noexcept {
        return msg_.c_str();
    }

private:
    const std::string msg_;
};

/**
 * Exit with an error message.
 *
 * @param desc Options.
 * @param msg Message.
 */
static void ExitError(opts::options_description& desc, const std::string msg) {
    std::cout << desc << "\nERROR: " << msg << ".\n";
    exit(1);
}

/**
 * Parse arguments.
 *
 * @param argc Argument count.
 * @param argv Argument vector.
 * @param[out] conf Configuration.
 */
static void ParseArgs(int argc, char** argv, Config& conf) {
    std::stringstream usage;
    usage << "Usage: " PROJECT_NAME " <command> [options]";
    opts::options_description visible_desc(usage.str());

    try {
        opts::options_description common_desc("# Common options");
        common_desc.add_options()
            ("config", opts::value<std::string>(), "Path to configuration file.")
            ("cert-log", opts::value<std::string>(), "Certification log.")
            ("help", "Print this usage information.")
            ("port", opts::value<uint16_t>(), "Port.")
            ;

        visible_desc.add(common_desc);

        opts::variables_map vm;
        opts::store(
            opts::command_line_parser(argc, argv)
                .options(visible_desc)
                .run(),
            vm);

        if (vm.count("config")) {
            fs::path path(vm["config"].as<std::string>());
            if (!fs::exists(path))
                ExitError(visible_desc, "configuration file does not exist");

            try {
                opts::store(opts::parse_config_file<char>(path.c_str(), visible_desc), vm);
            } catch (const std::exception& e) {
                ExitError(visible_desc, "unable to parse configuration file");
            }
        }

        opts::notify(vm);

        if (vm.count("cert-log")) {
            conf.cert_log_ = vm["cert-log"].as<std::string>();
        }

        if (vm.count("port")) {
            conf.port_ = vm["port"].as<uint16_t>();
        }

        if (vm.count("help")) {
            std::cout << visible_desc;
            exit(0);
        }

        FLAGS_logtostderr = true;
    } catch (const std::exception& e) {
        std::stringstream msg;
        msg << "unable to process options -- " << e.what();
        ExitError(visible_desc, msg.str());
    }
}

/**
 * Set a read timeout.
 *
 * @param sk Socket.
 * @return True if successful.
 */
static bool SetReadTimeout(const int sk) {
    timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;
    if (setsockopt(sk, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof(tv)) < 0) {
        LOG(ERROR) << "unable to set read timeout";
        return false;
    }

    return true;
}

/**
 * Read n bytes.
 *
 * @param sk Socket.
 * @param buf Buffer.
 * @param n Number of bytes to read.
 * @return True if successful.
 */
static bool ReadBytes(const int sk, char* buf, const size_t n) {
    char* ptr = buf;
    while (ptr < buf + n) {
        if (!SetReadTimeout(sk)) {
            return false;
        }

        auto ret = recv(sk, ptr, ptr - buf + n, 0);
        if (ret <= 0) {
            LOG(ERROR) << "unable to receive on socket";
            return false;
        }

        ptr += ret;
    }

    return true;
}

/**
 * Write n bytes.
 *
 * @param sk Socket.
 * @param buf Buffer.
 * @param n Number of bytes to write.
 * @return True if successful.
 */
static bool WriteBytes(const int sk, const char* buf, const size_t n) {
    auto ptr = buf;
    while (ptr < buf + n) {
        auto ret = send(sk, ptr, n - (ptr - buf), 0);
        if (ret <= 0) {
            LOG(ERROR) << "unable to send on socket";
            return false;
        }

        ptr += ret;
    }

    return true;
}

/**
 * Log a certification.
 *
 * @param conf Configuration.
 * @param req Request.
 * @param resp Response.
 */
static void LogCertification(
    const Config& conf,
    const proto::CertReq& req,
    const proto::CertResp& resp) {
    char buf[1024];
    snprintf(
        buf,
        sizeof(buf),
        "%s",
        req.user().c_str());

    LOG(INFO) << "handling certification request for " << buf;

    FILE* log_stream = fopen(conf.cert_log_.c_str(), "a");
    if (!log_stream) {
        LOG(ERROR) << "unable to append to certification log";
        exit(0);
    }

    fprintf(
        log_stream,
        req.user().c_str(),
        req.nonce().c_str(),
        req.data().c_str(),
        resp.hmac().c_str());
    fclose(log_stream);
}

/**
 * HMAC a buffer.
 *
 * @param src Source.
 * @return HMAC.
 */
static std::string HMAC(const std::string& data) {
    const uint8_t key[] = "\x4b\xe6\x34\x72\xec\x59\xe9\x8b\x38\x12\xdd\x32\x47\xa4\x03\xc4";
    CryptoPP::SecByteBlock key_blk(reinterpret_cast<const uint8_t*>(key), sizeof(key) - 1);
    CryptoPP::HMAC<CryptoPP::SHA256> hmac(key_blk, key_blk.size());
    std::string output;

    try {
        std::string tmp;
        CryptoPP::StringSource src(
            data,
            true,
            new CryptoPP::HashFilter(
                hmac,
                new CryptoPP::StringSink(tmp)));
        CryptoPP::StringSource enc(
            tmp,
            true,
            new CryptoPP::HexEncoder(
                new CryptoPP::StringSink(output)));
    } catch (const CryptoPP::Exception& e) {
        LOG(ERROR) << "unable to HMAC data";
        LOG(ERROR) << e.what();
        return "";
    }

    return output;
}

/**
 * Handle a client.
 *
 * @param conf Configuration.
 * @param sk Socket.
 */
static void OnClient(const Config& conf, const int sk) {
    while (true) {
        uint16_t msg_len;
        if (!ReadBytes(sk, reinterpret_cast<char*>(&msg_len), sizeof(msg_len))) {
            LOG(ERROR) << "unable to read message length";
            return;
        }

        std::unique_ptr<char[]> data(new char[msg_len]);
        if (!ReadBytes(sk, data.get(), msg_len)) {
            LOG(ERROR) << "unable to read message data";
            return;
        }

        proto::CertReq req;
        if (!req.ParseFromArray(data.get(), msg_len)) {
            LOG(ERROR) << "unable to parse message data";
            return;
        }

        std::stringstream buf;
        buf << req.user() << "\n" << req.data();
        auto hmac = HMAC(buf.str());

        proto::CertResp resp;
        resp.set_resp_type(proto::OK);
        resp.set_nonce(req.nonce());
        resp.set_hmac(hmac);

        std::string output;
        resp.SerializeToString(&output);
        LogCertification(conf, req, resp);

        msg_len = output.length();
        WriteBytes(sk, reinterpret_cast<char*>(&msg_len), sizeof(msg_len));
        WriteBytes(sk, output.data(), msg_len);
    }
}

/**
 * Run the service.
 *
 * @param conf Configuration.
 */
static void RunService(Config& conf) {
    auto sk = socket(AF_INET, SOCK_STREAM, 0);
    if (sk < 0) {
        LOG(ERROR) << "unable to create server socket";
        LOG(ERROR) << strerror(errno);
        return;
    }

    sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(conf.port_);
    addr.sin_addr.s_addr = INADDR_ANY;

    auto opt = 1;
    if (setsockopt(sk, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt)) < 0) {
        LOG(ERROR) << "unable to set REUSE_ADDR on server socket";
        LOG(ERROR) << strerror(errno);
        return;
    }

    if (bind(sk, reinterpret_cast<sockaddr*>(&addr), sizeof(addr)) < 0) {
        LOG(ERROR) << "unable to bind server socket";
        LOG(ERROR) << strerror(errno);
        return;
    }

    if (listen(sk, 16) < 0) {
        LOG(ERROR) << "unable to listen on server socket";
        LOG(ERROR) << strerror(errno);
        return;
    }

    while (true) {
        sockaddr_in client_addr;
        socklen_t addr_len = sizeof(client_addr);
        memset(&client_addr, 0, sizeof(client_addr));
        auto client_sk =
            accept(
                sk,
                reinterpret_cast<sockaddr*>(&client_addr),
                &addr_len);
        if (client_sk < 0) {
            LOG(ERROR) << "unable to accept connection";
            LOG(ERROR) << strerror(errno);
            return;
        }

#ifdef DO_FORK
        pid_t child;
        switch (child = fork()) {
            case -1:
                LOG(ERROR) << "unable to fork client handler";
                LOG(ERROR) << strerror(errno);
                return;

            case 0:
#endif // DO_FORK
                OnClient(conf, client_sk);
#ifdef DO_FORK
                exit(0);

            default:
#endif // DO_FORK
                close(client_sk);
#ifdef DO_FORK
                break;
        }

        int st;
        while (waitpid(-1, &st, WNOHANG) > 0);
#endif // DO_FORK
    }
}

/**
 * Main.
 */
int main(int argc, char** argv) {
    Config conf;
    ParseArgs(argc, argv, conf);
    google::InitGoogleLogging(argv[0]);
    RunService(conf);
    return 0;
}
