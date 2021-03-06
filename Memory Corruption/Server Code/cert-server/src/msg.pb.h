// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/proto.proto

#ifndef PROTOBUF_proto_2fproto_2eproto__INCLUDED
#define PROTOBUF_proto_2fproto_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_proto_2fproto_2eproto();
void protobuf_AssignDesc_proto_2fproto_2eproto();
void protobuf_ShutdownFile_proto_2fproto_2eproto();

class CertReq;
class CertResp;

enum CertRespType {
  OK = 0,
  NOPE = 1
};
bool CertRespType_IsValid(int value);
const CertRespType CertRespType_MIN = OK;
const CertRespType CertRespType_MAX = NOPE;
const int CertRespType_ARRAYSIZE = CertRespType_MAX + 1;

const ::google::protobuf::EnumDescriptor* CertRespType_descriptor();
inline const ::std::string& CertRespType_Name(CertRespType value) {
  return ::google::protobuf::internal::NameOfEnum(
    CertRespType_descriptor(), value);
}
inline bool CertRespType_Parse(
    const ::std::string& name, CertRespType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CertRespType>(
    CertRespType_descriptor(), name, value);
}
// ===================================================================

class CertReq : public ::google::protobuf::Message {
 public:
  CertReq();
  virtual ~CertReq();

  CertReq(const CertReq& from);

  inline CertReq& operator=(const CertReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CertReq& default_instance();

  void Swap(CertReq* other);

  // implements Message ----------------------------------------------

  CertReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CertReq& from);
  void MergeFrom(const CertReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bytes user = 1;
  inline bool has_user() const;
  inline void clear_user();
  static const int kUserFieldNumber = 1;
  inline const ::std::string& user() const;
  inline void set_user(const ::std::string& value);
  inline void set_user(const char* value);
  inline void set_user(const void* value, size_t size);
  inline ::std::string* mutable_user();
  inline ::std::string* release_user();
  inline void set_allocated_user(::std::string* user);

  // required bytes nonce = 2;
  inline bool has_nonce() const;
  inline void clear_nonce();
  static const int kNonceFieldNumber = 2;
  inline const ::std::string& nonce() const;
  inline void set_nonce(const ::std::string& value);
  inline void set_nonce(const char* value);
  inline void set_nonce(const void* value, size_t size);
  inline ::std::string* mutable_nonce();
  inline ::std::string* release_nonce();
  inline void set_allocated_nonce(::std::string* nonce);

  // required bytes data = 3;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 3;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const void* value, size_t size);
  inline ::std::string* mutable_data();
  inline ::std::string* release_data();
  inline void set_allocated_data(::std::string* data);

  // @@protoc_insertion_point(class_scope:proto.CertReq)
 private:
  inline void set_has_user();
  inline void clear_has_user();
  inline void set_has_nonce();
  inline void clear_has_nonce();
  inline void set_has_data();
  inline void clear_has_data();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* user_;
  ::std::string* nonce_;
  ::std::string* data_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_proto_2fproto_2eproto();
  friend void protobuf_AssignDesc_proto_2fproto_2eproto();
  friend void protobuf_ShutdownFile_proto_2fproto_2eproto();

  void InitAsDefaultInstance();
  static CertReq* default_instance_;
};
// -------------------------------------------------------------------

class CertResp : public ::google::protobuf::Message {
 public:
  CertResp();
  virtual ~CertResp();

  CertResp(const CertResp& from);

  inline CertResp& operator=(const CertResp& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CertResp& default_instance();

  void Swap(CertResp* other);

  // implements Message ----------------------------------------------

  CertResp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CertResp& from);
  void MergeFrom(const CertResp& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .proto.CertRespType resp_type = 1;
  inline bool has_resp_type() const;
  inline void clear_resp_type();
  static const int kRespTypeFieldNumber = 1;
  inline ::proto::CertRespType resp_type() const;
  inline void set_resp_type(::proto::CertRespType value);

  // required bytes nonce = 2;
  inline bool has_nonce() const;
  inline void clear_nonce();
  static const int kNonceFieldNumber = 2;
  inline const ::std::string& nonce() const;
  inline void set_nonce(const ::std::string& value);
  inline void set_nonce(const char* value);
  inline void set_nonce(const void* value, size_t size);
  inline ::std::string* mutable_nonce();
  inline ::std::string* release_nonce();
  inline void set_allocated_nonce(::std::string* nonce);

  // optional bytes hmac = 3;
  inline bool has_hmac() const;
  inline void clear_hmac();
  static const int kHmacFieldNumber = 3;
  inline const ::std::string& hmac() const;
  inline void set_hmac(const ::std::string& value);
  inline void set_hmac(const char* value);
  inline void set_hmac(const void* value, size_t size);
  inline ::std::string* mutable_hmac();
  inline ::std::string* release_hmac();
  inline void set_allocated_hmac(::std::string* hmac);

  // @@protoc_insertion_point(class_scope:proto.CertResp)
 private:
  inline void set_has_resp_type();
  inline void clear_has_resp_type();
  inline void set_has_nonce();
  inline void clear_has_nonce();
  inline void set_has_hmac();
  inline void clear_has_hmac();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* nonce_;
  ::std::string* hmac_;
  int resp_type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_proto_2fproto_2eproto();
  friend void protobuf_AssignDesc_proto_2fproto_2eproto();
  friend void protobuf_ShutdownFile_proto_2fproto_2eproto();

  void InitAsDefaultInstance();
  static CertResp* default_instance_;
};
// ===================================================================


// ===================================================================

// CertReq

// required bytes user = 1;
inline bool CertReq::has_user() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CertReq::set_has_user() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CertReq::clear_has_user() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CertReq::clear_user() {
  if (user_ != &::google::protobuf::internal::kEmptyString) {
    user_->clear();
  }
  clear_has_user();
}
inline const ::std::string& CertReq::user() const {
  return *user_;
}
inline void CertReq::set_user(const ::std::string& value) {
  set_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    user_ = new ::std::string;
  }
  user_->assign(value);
}
inline void CertReq::set_user(const char* value) {
  set_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    user_ = new ::std::string;
  }
  user_->assign(value);
}
inline void CertReq::set_user(const void* value, size_t size) {
  set_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    user_ = new ::std::string;
  }
  user_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CertReq::mutable_user() {
  set_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    user_ = new ::std::string;
  }
  return user_;
}
inline ::std::string* CertReq::release_user() {
  clear_has_user();
  if (user_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = user_;
    user_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CertReq::set_allocated_user(::std::string* user) {
  if (user_ != &::google::protobuf::internal::kEmptyString) {
    delete user_;
  }
  if (user) {
    set_has_user();
    user_ = user;
  } else {
    clear_has_user();
    user_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required bytes nonce = 2;
inline bool CertReq::has_nonce() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CertReq::set_has_nonce() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CertReq::clear_has_nonce() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CertReq::clear_nonce() {
  if (nonce_ != &::google::protobuf::internal::kEmptyString) {
    nonce_->clear();
  }
  clear_has_nonce();
}
inline const ::std::string& CertReq::nonce() const {
  return *nonce_;
}
inline void CertReq::set_nonce(const ::std::string& value) {
  set_has_nonce();
  if (nonce_ == &::google::protobuf::internal::kEmptyString) {
    nonce_ = new ::std::string;
  }
  nonce_->assign(value);
}
inline void CertReq::set_nonce(const char* value) {
  set_has_nonce();
  if (nonce_ == &::google::protobuf::internal::kEmptyString) {
    nonce_ = new ::std::string;
  }
  nonce_->assign(value);
}
inline void CertReq::set_nonce(const void* value, size_t size) {
  set_has_nonce();
  if (nonce_ == &::google::protobuf::internal::kEmptyString) {
    nonce_ = new ::std::string;
  }
  nonce_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CertReq::mutable_nonce() {
  set_has_nonce();
  if (nonce_ == &::google::protobuf::internal::kEmptyString) {
    nonce_ = new ::std::string;
  }
  return nonce_;
}
inline ::std::string* CertReq::release_nonce() {
  clear_has_nonce();
  if (nonce_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = nonce_;
    nonce_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CertReq::set_allocated_nonce(::std::string* nonce) {
  if (nonce_ != &::google::protobuf::internal::kEmptyString) {
    delete nonce_;
  }
  if (nonce) {
    set_has_nonce();
    nonce_ = nonce;
  } else {
    clear_has_nonce();
    nonce_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required bytes data = 3;
inline bool CertReq::has_data() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CertReq::set_has_data() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CertReq::clear_has_data() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CertReq::clear_data() {
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    data_->clear();
  }
  clear_has_data();
}
inline const ::std::string& CertReq::data() const {
  return *data_;
}
inline void CertReq::set_data(const ::std::string& value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void CertReq::set_data(const char* value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void CertReq::set_data(const void* value, size_t size) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CertReq::mutable_data() {
  set_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    data_ = new ::std::string;
  }
  return data_;
}
inline ::std::string* CertReq::release_data() {
  clear_has_data();
  if (data_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = data_;
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CertReq::set_allocated_data(::std::string* data) {
  if (data_ != &::google::protobuf::internal::kEmptyString) {
    delete data_;
  }
  if (data) {
    set_has_data();
    data_ = data;
  } else {
    clear_has_data();
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// CertResp

// required .proto.CertRespType resp_type = 1;
inline bool CertResp::has_resp_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CertResp::set_has_resp_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CertResp::clear_has_resp_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CertResp::clear_resp_type() {
  resp_type_ = 0;
  clear_has_resp_type();
}
inline ::proto::CertRespType CertResp::resp_type() const {
  return static_cast< ::proto::CertRespType >(resp_type_);
}
inline void CertResp::set_resp_type(::proto::CertRespType value) {
  assert(::proto::CertRespType_IsValid(value));
  set_has_resp_type();
  resp_type_ = value;
}

// required bytes nonce = 2;
inline bool CertResp::has_nonce() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CertResp::set_has_nonce() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CertResp::clear_has_nonce() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CertResp::clear_nonce() {
  if (nonce_ != &::google::protobuf::internal::kEmptyString) {
    nonce_->clear();
  }
  clear_has_nonce();
}
inline const ::std::string& CertResp::nonce() const {
  return *nonce_;
}
inline void CertResp::set_nonce(const ::std::string& value) {
  set_has_nonce();
  if (nonce_ == &::google::protobuf::internal::kEmptyString) {
    nonce_ = new ::std::string;
  }
  nonce_->assign(value);
}
inline void CertResp::set_nonce(const char* value) {
  set_has_nonce();
  if (nonce_ == &::google::protobuf::internal::kEmptyString) {
    nonce_ = new ::std::string;
  }
  nonce_->assign(value);
}
inline void CertResp::set_nonce(const void* value, size_t size) {
  set_has_nonce();
  if (nonce_ == &::google::protobuf::internal::kEmptyString) {
    nonce_ = new ::std::string;
  }
  nonce_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CertResp::mutable_nonce() {
  set_has_nonce();
  if (nonce_ == &::google::protobuf::internal::kEmptyString) {
    nonce_ = new ::std::string;
  }
  return nonce_;
}
inline ::std::string* CertResp::release_nonce() {
  clear_has_nonce();
  if (nonce_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = nonce_;
    nonce_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CertResp::set_allocated_nonce(::std::string* nonce) {
  if (nonce_ != &::google::protobuf::internal::kEmptyString) {
    delete nonce_;
  }
  if (nonce) {
    set_has_nonce();
    nonce_ = nonce;
  } else {
    clear_has_nonce();
    nonce_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional bytes hmac = 3;
inline bool CertResp::has_hmac() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CertResp::set_has_hmac() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CertResp::clear_has_hmac() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CertResp::clear_hmac() {
  if (hmac_ != &::google::protobuf::internal::kEmptyString) {
    hmac_->clear();
  }
  clear_has_hmac();
}
inline const ::std::string& CertResp::hmac() const {
  return *hmac_;
}
inline void CertResp::set_hmac(const ::std::string& value) {
  set_has_hmac();
  if (hmac_ == &::google::protobuf::internal::kEmptyString) {
    hmac_ = new ::std::string;
  }
  hmac_->assign(value);
}
inline void CertResp::set_hmac(const char* value) {
  set_has_hmac();
  if (hmac_ == &::google::protobuf::internal::kEmptyString) {
    hmac_ = new ::std::string;
  }
  hmac_->assign(value);
}
inline void CertResp::set_hmac(const void* value, size_t size) {
  set_has_hmac();
  if (hmac_ == &::google::protobuf::internal::kEmptyString) {
    hmac_ = new ::std::string;
  }
  hmac_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CertResp::mutable_hmac() {
  set_has_hmac();
  if (hmac_ == &::google::protobuf::internal::kEmptyString) {
    hmac_ = new ::std::string;
  }
  return hmac_;
}
inline ::std::string* CertResp::release_hmac() {
  clear_has_hmac();
  if (hmac_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = hmac_;
    hmac_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CertResp::set_allocated_hmac(::std::string* hmac) {
  if (hmac_ != &::google::protobuf::internal::kEmptyString) {
    delete hmac_;
  }
  if (hmac) {
    set_has_hmac();
    hmac_ = hmac;
  } else {
    clear_has_hmac();
    hmac_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::CertRespType>() {
  return ::proto::CertRespType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_proto_2fproto_2eproto__INCLUDED
