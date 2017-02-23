// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: wifi_credential_specifics.proto

#ifndef PROTOBUF_wifi_5fcredential_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_wifi_5fcredential_5fspecifics_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_wifi_5fcredential_5fspecifics_2eproto();
void protobuf_AssignDesc_wifi_5fcredential_5fspecifics_2eproto();
void protobuf_ShutdownFile_wifi_5fcredential_5fspecifics_2eproto();

class WifiCredentialSpecifics;

enum WifiCredentialSpecifics_SecurityClass {
  WifiCredentialSpecifics_SecurityClass_SECURITY_CLASS_INVALID = 0,
  WifiCredentialSpecifics_SecurityClass_SECURITY_CLASS_NONE = 1,
  WifiCredentialSpecifics_SecurityClass_SECURITY_CLASS_WEP = 2,
  WifiCredentialSpecifics_SecurityClass_SECURITY_CLASS_PSK = 3
};
bool WifiCredentialSpecifics_SecurityClass_IsValid(int value);
const WifiCredentialSpecifics_SecurityClass WifiCredentialSpecifics_SecurityClass_SecurityClass_MIN = WifiCredentialSpecifics_SecurityClass_SECURITY_CLASS_INVALID;
const WifiCredentialSpecifics_SecurityClass WifiCredentialSpecifics_SecurityClass_SecurityClass_MAX = WifiCredentialSpecifics_SecurityClass_SECURITY_CLASS_PSK;
const int WifiCredentialSpecifics_SecurityClass_SecurityClass_ARRAYSIZE = WifiCredentialSpecifics_SecurityClass_SecurityClass_MAX + 1;

// ===================================================================

class WifiCredentialSpecifics : public ::google::protobuf::MessageLite {
 public:
  WifiCredentialSpecifics();
  virtual ~WifiCredentialSpecifics();

  WifiCredentialSpecifics(const WifiCredentialSpecifics& from);

  inline WifiCredentialSpecifics& operator=(const WifiCredentialSpecifics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const WifiCredentialSpecifics& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const WifiCredentialSpecifics* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(WifiCredentialSpecifics* other);

  // implements Message ----------------------------------------------

  inline WifiCredentialSpecifics* New() const { return New(NULL); }

  WifiCredentialSpecifics* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const WifiCredentialSpecifics& from);
  void MergeFrom(const WifiCredentialSpecifics& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(WifiCredentialSpecifics* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef WifiCredentialSpecifics_SecurityClass SecurityClass;
  static const SecurityClass SECURITY_CLASS_INVALID =
    WifiCredentialSpecifics_SecurityClass_SECURITY_CLASS_INVALID;
  static const SecurityClass SECURITY_CLASS_NONE =
    WifiCredentialSpecifics_SecurityClass_SECURITY_CLASS_NONE;
  static const SecurityClass SECURITY_CLASS_WEP =
    WifiCredentialSpecifics_SecurityClass_SECURITY_CLASS_WEP;
  static const SecurityClass SECURITY_CLASS_PSK =
    WifiCredentialSpecifics_SecurityClass_SECURITY_CLASS_PSK;
  static inline bool SecurityClass_IsValid(int value) {
    return WifiCredentialSpecifics_SecurityClass_IsValid(value);
  }
  static const SecurityClass SecurityClass_MIN =
    WifiCredentialSpecifics_SecurityClass_SecurityClass_MIN;
  static const SecurityClass SecurityClass_MAX =
    WifiCredentialSpecifics_SecurityClass_SecurityClass_MAX;
  static const int SecurityClass_ARRAYSIZE =
    WifiCredentialSpecifics_SecurityClass_SecurityClass_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // optional bytes ssid = 1;
  bool has_ssid() const;
  void clear_ssid();
  static const int kSsidFieldNumber = 1;
  const ::std::string& ssid() const;
  void set_ssid(const ::std::string& value);
  void set_ssid(const char* value);
  void set_ssid(const void* value, size_t size);
  ::std::string* mutable_ssid();
  ::std::string* release_ssid();
  void set_allocated_ssid(::std::string* ssid);

  // optional .sync_pb.WifiCredentialSpecifics.SecurityClass security_class = 2;
  bool has_security_class() const;
  void clear_security_class();
  static const int kSecurityClassFieldNumber = 2;
  ::sync_pb::WifiCredentialSpecifics_SecurityClass security_class() const;
  void set_security_class(::sync_pb::WifiCredentialSpecifics_SecurityClass value);

  // optional bytes passphrase = 3;
  bool has_passphrase() const;
  void clear_passphrase();
  static const int kPassphraseFieldNumber = 3;
  const ::std::string& passphrase() const;
  void set_passphrase(const ::std::string& value);
  void set_passphrase(const char* value);
  void set_passphrase(const void* value, size_t size);
  ::std::string* mutable_passphrase();
  ::std::string* release_passphrase();
  void set_allocated_passphrase(::std::string* passphrase);

  // @@protoc_insertion_point(class_scope:sync_pb.WifiCredentialSpecifics)
 private:
  inline void set_has_ssid();
  inline void clear_has_ssid();
  inline void set_has_security_class();
  inline void clear_has_security_class();
  inline void set_has_passphrase();
  inline void clear_has_passphrase();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr ssid_;
  ::google::protobuf::internal::ArenaStringPtr passphrase_;
  int security_class_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_wifi_5fcredential_5fspecifics_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_wifi_5fcredential_5fspecifics_2eproto();
  #endif
  friend void protobuf_AssignDesc_wifi_5fcredential_5fspecifics_2eproto();
  friend void protobuf_ShutdownFile_wifi_5fcredential_5fspecifics_2eproto();

  void InitAsDefaultInstance();
  static WifiCredentialSpecifics* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// WifiCredentialSpecifics

// optional bytes ssid = 1;
inline bool WifiCredentialSpecifics::has_ssid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WifiCredentialSpecifics::set_has_ssid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WifiCredentialSpecifics::clear_has_ssid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WifiCredentialSpecifics::clear_ssid() {
  ssid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_ssid();
}
inline const ::std::string& WifiCredentialSpecifics::ssid() const {
  // @@protoc_insertion_point(field_get:sync_pb.WifiCredentialSpecifics.ssid)
  return ssid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WifiCredentialSpecifics::set_ssid(const ::std::string& value) {
  set_has_ssid();
  ssid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.WifiCredentialSpecifics.ssid)
}
inline void WifiCredentialSpecifics::set_ssid(const char* value) {
  set_has_ssid();
  ssid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.WifiCredentialSpecifics.ssid)
}
inline void WifiCredentialSpecifics::set_ssid(const void* value, size_t size) {
  set_has_ssid();
  ssid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.WifiCredentialSpecifics.ssid)
}
inline ::std::string* WifiCredentialSpecifics::mutable_ssid() {
  set_has_ssid();
  // @@protoc_insertion_point(field_mutable:sync_pb.WifiCredentialSpecifics.ssid)
  return ssid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WifiCredentialSpecifics::release_ssid() {
  // @@protoc_insertion_point(field_release:sync_pb.WifiCredentialSpecifics.ssid)
  clear_has_ssid();
  return ssid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WifiCredentialSpecifics::set_allocated_ssid(::std::string* ssid) {
  if (ssid != NULL) {
    set_has_ssid();
  } else {
    clear_has_ssid();
  }
  ssid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ssid);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.WifiCredentialSpecifics.ssid)
}

// optional .sync_pb.WifiCredentialSpecifics.SecurityClass security_class = 2;
inline bool WifiCredentialSpecifics::has_security_class() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WifiCredentialSpecifics::set_has_security_class() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WifiCredentialSpecifics::clear_has_security_class() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WifiCredentialSpecifics::clear_security_class() {
  security_class_ = 0;
  clear_has_security_class();
}
inline ::sync_pb::WifiCredentialSpecifics_SecurityClass WifiCredentialSpecifics::security_class() const {
  // @@protoc_insertion_point(field_get:sync_pb.WifiCredentialSpecifics.security_class)
  return static_cast< ::sync_pb::WifiCredentialSpecifics_SecurityClass >(security_class_);
}
inline void WifiCredentialSpecifics::set_security_class(::sync_pb::WifiCredentialSpecifics_SecurityClass value) {
  assert(::sync_pb::WifiCredentialSpecifics_SecurityClass_IsValid(value));
  set_has_security_class();
  security_class_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.WifiCredentialSpecifics.security_class)
}

// optional bytes passphrase = 3;
inline bool WifiCredentialSpecifics::has_passphrase() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WifiCredentialSpecifics::set_has_passphrase() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WifiCredentialSpecifics::clear_has_passphrase() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WifiCredentialSpecifics::clear_passphrase() {
  passphrase_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_passphrase();
}
inline const ::std::string& WifiCredentialSpecifics::passphrase() const {
  // @@protoc_insertion_point(field_get:sync_pb.WifiCredentialSpecifics.passphrase)
  return passphrase_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WifiCredentialSpecifics::set_passphrase(const ::std::string& value) {
  set_has_passphrase();
  passphrase_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.WifiCredentialSpecifics.passphrase)
}
inline void WifiCredentialSpecifics::set_passphrase(const char* value) {
  set_has_passphrase();
  passphrase_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.WifiCredentialSpecifics.passphrase)
}
inline void WifiCredentialSpecifics::set_passphrase(const void* value, size_t size) {
  set_has_passphrase();
  passphrase_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.WifiCredentialSpecifics.passphrase)
}
inline ::std::string* WifiCredentialSpecifics::mutable_passphrase() {
  set_has_passphrase();
  // @@protoc_insertion_point(field_mutable:sync_pb.WifiCredentialSpecifics.passphrase)
  return passphrase_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WifiCredentialSpecifics::release_passphrase() {
  // @@protoc_insertion_point(field_release:sync_pb.WifiCredentialSpecifics.passphrase)
  clear_has_passphrase();
  return passphrase_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WifiCredentialSpecifics::set_allocated_passphrase(::std::string* passphrase) {
  if (passphrase != NULL) {
    set_has_passphrase();
  } else {
    clear_has_passphrase();
  }
  passphrase_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), passphrase);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.WifiCredentialSpecifics.passphrase)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::sync_pb::WifiCredentialSpecifics_SecurityClass> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_wifi_5fcredential_5fspecifics_2eproto__INCLUDED