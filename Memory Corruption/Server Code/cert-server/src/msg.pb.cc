// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/proto.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "msg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto {

namespace {

const ::google::protobuf::Descriptor* CertReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CertReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* CertResp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CertResp_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* CertRespType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_proto_2fproto_2eproto() {
  protobuf_AddDesc_proto_2fproto_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "proto/proto.proto");
  GOOGLE_CHECK(file != NULL);
  CertReq_descriptor_ = file->message_type(0);
  static const int CertReq_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertReq, user_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertReq, nonce_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertReq, data_),
  };
  CertReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CertReq_descriptor_,
      CertReq::default_instance_,
      CertReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CertReq));
  CertResp_descriptor_ = file->message_type(1);
  static const int CertResp_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertResp, resp_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertResp, nonce_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertResp, hmac_),
  };
  CertResp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CertResp_descriptor_,
      CertResp::default_instance_,
      CertResp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertResp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CertResp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CertResp));
  CertRespType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_proto_2fproto_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CertReq_descriptor_, &CertReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CertResp_descriptor_, &CertResp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_proto_2fproto_2eproto() {
  delete CertReq::default_instance_;
  delete CertReq_reflection_;
  delete CertResp::default_instance_;
  delete CertResp_reflection_;
}

void protobuf_AddDesc_proto_2fproto_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021proto/proto.proto\022\005proto\"4\n\007CertReq\022\014\n"
    "\004user\030\001 \002(\014\022\r\n\005nonce\030\002 \002(\014\022\014\n\004data\030\003 \002(\014"
    "\"O\n\010CertResp\022&\n\tresp_type\030\001 \002(\0162\023.proto."
    "CertRespType\022\r\n\005nonce\030\002 \002(\014\022\014\n\004hmac\030\003 \001("
    "\014* \n\014CertRespType\022\006\n\002OK\020\000\022\010\n\004NOPE\020\001", 195);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/proto.proto", &protobuf_RegisterTypes);
  CertReq::default_instance_ = new CertReq();
  CertResp::default_instance_ = new CertResp();
  CertReq::default_instance_->InitAsDefaultInstance();
  CertResp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_proto_2fproto_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_proto_2fproto_2eproto {
  StaticDescriptorInitializer_proto_2fproto_2eproto() {
    protobuf_AddDesc_proto_2fproto_2eproto();
  }
} static_descriptor_initializer_proto_2fproto_2eproto_;
const ::google::protobuf::EnumDescriptor* CertRespType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CertRespType_descriptor_;
}
bool CertRespType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int CertReq::kUserFieldNumber;
const int CertReq::kNonceFieldNumber;
const int CertReq::kDataFieldNumber;
#endif  // !_MSC_VER

CertReq::CertReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CertReq::InitAsDefaultInstance() {
}

CertReq::CertReq(const CertReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CertReq::SharedCtor() {
  _cached_size_ = 0;
  user_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  nonce_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CertReq::~CertReq() {
  SharedDtor();
}

void CertReq::SharedDtor() {
  if (user_ != &::google::protobuf::internal::kEmptyString) {
    delete user_;
  }
  if (nonce_ != &::google::protobuf::internal::kEmptyString) {
    delete nonce_;
  }
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    delete data_;
  }
  if (this != default_instance_) {
  }
}

void CertReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CertReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CertReq_descriptor_;
}

const CertReq& CertReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_proto_2fproto_2eproto();
  return *default_instance_;
}

CertReq* CertReq::default_instance_ = NULL;

CertReq* CertReq::New() const {
  return new CertReq;
}

void CertReq::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_user()) {
      if (user_ != &::google::protobuf::internal::kEmptyString) {
        user_->clear();
      }
    }
    if (has_nonce()) {
      if (nonce_ != &::google::protobuf::internal::kEmptyString) {
        nonce_->clear();
      }
    }
    if (has_data()) {
      if (data_ != &::google::protobuf::internal::kEmptyString) {
        data_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CertReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bytes user = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_user()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_nonce;
        break;
      }

      // required bytes nonce = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_nonce:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_nonce()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_data;
        break;
      }

      // required bytes data = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CertReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bytes user = 1;
  if (has_user()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->user(), output);
  }

  // required bytes nonce = 2;
  if (has_nonce()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->nonce(), output);
  }

  // required bytes data = 3;
  if (has_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      3, this->data(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CertReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required bytes user = 1;
  if (has_user()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->user(), target);
  }

  // required bytes nonce = 2;
  if (has_nonce()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->nonce(), target);
  }

  // required bytes data = 3;
  if (has_data()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->data(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CertReq::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bytes user = 1;
    if (has_user()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->user());
    }

    // required bytes nonce = 2;
    if (has_nonce()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->nonce());
    }

    // required bytes data = 3;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->data());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CertReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CertReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CertReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CertReq::MergeFrom(const CertReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_user()) {
      set_user(from.user());
    }
    if (from.has_nonce()) {
      set_nonce(from.nonce());
    }
    if (from.has_data()) {
      set_data(from.data());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CertReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CertReq::CopyFrom(const CertReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CertReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void CertReq::Swap(CertReq* other) {
  if (other != this) {
    std::swap(user_, other->user_);
    std::swap(nonce_, other->nonce_);
    std::swap(data_, other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CertReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CertReq_descriptor_;
  metadata.reflection = CertReq_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CertResp::kRespTypeFieldNumber;
const int CertResp::kNonceFieldNumber;
const int CertResp::kHmacFieldNumber;
#endif  // !_MSC_VER

CertResp::CertResp()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CertResp::InitAsDefaultInstance() {
}

CertResp::CertResp(const CertResp& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CertResp::SharedCtor() {
  _cached_size_ = 0;
  resp_type_ = 0;
  nonce_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  hmac_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CertResp::~CertResp() {
  SharedDtor();
}

void CertResp::SharedDtor() {
  if (nonce_ != &::google::protobuf::internal::kEmptyString) {
    delete nonce_;
  }
  if (hmac_ != &::google::protobuf::internal::kEmptyString) {
    delete hmac_;
  }
  if (this != default_instance_) {
  }
}

void CertResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CertResp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CertResp_descriptor_;
}

const CertResp& CertResp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_proto_2fproto_2eproto();
  return *default_instance_;
}

CertResp* CertResp::default_instance_ = NULL;

CertResp* CertResp::New() const {
  return new CertResp;
}

void CertResp::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    resp_type_ = 0;
    if (has_nonce()) {
      if (nonce_ != &::google::protobuf::internal::kEmptyString) {
        nonce_->clear();
      }
    }
    if (has_hmac()) {
      if (hmac_ != &::google::protobuf::internal::kEmptyString) {
        hmac_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CertResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .proto.CertRespType resp_type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::proto::CertRespType_IsValid(value)) {
            set_resp_type(static_cast< ::proto::CertRespType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_nonce;
        break;
      }

      // required bytes nonce = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_nonce:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_nonce()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_hmac;
        break;
      }

      // optional bytes hmac = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_hmac:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_hmac()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CertResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .proto.CertRespType resp_type = 1;
  if (has_resp_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->resp_type(), output);
  }

  // required bytes nonce = 2;
  if (has_nonce()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->nonce(), output);
  }

  // optional bytes hmac = 3;
  if (has_hmac()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      3, this->hmac(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CertResp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .proto.CertRespType resp_type = 1;
  if (has_resp_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->resp_type(), target);
  }

  // required bytes nonce = 2;
  if (has_nonce()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->nonce(), target);
  }

  // optional bytes hmac = 3;
  if (has_hmac()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->hmac(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CertResp::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .proto.CertRespType resp_type = 1;
    if (has_resp_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->resp_type());
    }

    // required bytes nonce = 2;
    if (has_nonce()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->nonce());
    }

    // optional bytes hmac = 3;
    if (has_hmac()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->hmac());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CertResp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CertResp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CertResp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CertResp::MergeFrom(const CertResp& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_resp_type()) {
      set_resp_type(from.resp_type());
    }
    if (from.has_nonce()) {
      set_nonce(from.nonce());
    }
    if (from.has_hmac()) {
      set_hmac(from.hmac());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CertResp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CertResp::CopyFrom(const CertResp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CertResp::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void CertResp::Swap(CertResp* other) {
  if (other != this) {
    std::swap(resp_type_, other->resp_type_);
    std::swap(nonce_, other->nonce_);
    std::swap(hmac_, other->hmac_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CertResp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CertResp_descriptor_;
  metadata.reflection = CertResp_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto

// @@protoc_insertion_point(global_scope)
