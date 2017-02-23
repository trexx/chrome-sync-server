// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: wifi_credential_specifics.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "wifi_credential_specifics.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_wifi_5fcredential_5fspecifics_2eproto() {
  delete WifiCredentialSpecifics::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_wifi_5fcredential_5fspecifics_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_wifi_5fcredential_5fspecifics_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  WifiCredentialSpecifics::default_instance_ = new WifiCredentialSpecifics();
  WifiCredentialSpecifics::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_wifi_5fcredential_5fspecifics_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_wifi_5fcredential_5fspecifics_2eproto_once_);
void protobuf_AddDesc_wifi_5fcredential_5fspecifics_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_wifi_5fcredential_5fspecifics_2eproto_once_,
                 &protobuf_AddDesc_wifi_5fcredential_5fspecifics_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_wifi_5fcredential_5fspecifics_2eproto {
  StaticDescriptorInitializer_wifi_5fcredential_5fspecifics_2eproto() {
    protobuf_AddDesc_wifi_5fcredential_5fspecifics_2eproto();
  }
} static_descriptor_initializer_wifi_5fcredential_5fspecifics_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
GOOGLE_ATTRIBUTE_NOINLINE static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForWifiCredentialSpecifics(
    WifiCredentialSpecifics* ptr) {
  return ptr->mutable_unknown_fields();
}

bool WifiCredentialSpecifics_SecurityClass_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const WifiCredentialSpecifics_SecurityClass WifiCredentialSpecifics::SECURITY_CLASS_INVALID;
const WifiCredentialSpecifics_SecurityClass WifiCredentialSpecifics::SECURITY_CLASS_NONE;
const WifiCredentialSpecifics_SecurityClass WifiCredentialSpecifics::SECURITY_CLASS_WEP;
const WifiCredentialSpecifics_SecurityClass WifiCredentialSpecifics::SECURITY_CLASS_PSK;
const WifiCredentialSpecifics_SecurityClass WifiCredentialSpecifics::SecurityClass_MIN;
const WifiCredentialSpecifics_SecurityClass WifiCredentialSpecifics::SecurityClass_MAX;
const int WifiCredentialSpecifics::SecurityClass_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int WifiCredentialSpecifics::kSsidFieldNumber;
const int WifiCredentialSpecifics::kSecurityClassFieldNumber;
const int WifiCredentialSpecifics::kPassphraseFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

WifiCredentialSpecifics::WifiCredentialSpecifics()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sync_pb.WifiCredentialSpecifics)
}

void WifiCredentialSpecifics::InitAsDefaultInstance() {
}

WifiCredentialSpecifics::WifiCredentialSpecifics(const WifiCredentialSpecifics& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sync_pb.WifiCredentialSpecifics)
}

void WifiCredentialSpecifics::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ssid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  security_class_ = 0;
  passphrase_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WifiCredentialSpecifics::~WifiCredentialSpecifics() {
  // @@protoc_insertion_point(destructor:sync_pb.WifiCredentialSpecifics)
  SharedDtor();
}

void WifiCredentialSpecifics::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ssid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  passphrase_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void WifiCredentialSpecifics::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const WifiCredentialSpecifics& WifiCredentialSpecifics::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_wifi_5fcredential_5fspecifics_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_wifi_5fcredential_5fspecifics_2eproto();
#endif
  return *default_instance_;
}

WifiCredentialSpecifics* WifiCredentialSpecifics::default_instance_ = NULL;

WifiCredentialSpecifics* WifiCredentialSpecifics::New(::google::protobuf::Arena* arena) const {
  WifiCredentialSpecifics* n = new WifiCredentialSpecifics;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void WifiCredentialSpecifics::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.WifiCredentialSpecifics)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_ssid()) {
      ssid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    security_class_ = 0;
    if (has_passphrase()) {
      passphrase_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool WifiCredentialSpecifics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForWifiCredentialSpecifics, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:sync_pb.WifiCredentialSpecifics)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes ssid = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_ssid()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_security_class;
        break;
      }

      // optional .sync_pb.WifiCredentialSpecifics.SecurityClass security_class = 2;
      case 2: {
        if (tag == 16) {
         parse_security_class:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::sync_pb::WifiCredentialSpecifics_SecurityClass_IsValid(value)) {
            set_security_class(static_cast< ::sync_pb::WifiCredentialSpecifics_SecurityClass >(value));
          } else {
            unknown_fields_stream.WriteVarint32(16);
            unknown_fields_stream.WriteVarint32(value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_passphrase;
        break;
      }

      // optional bytes passphrase = 3;
      case 3: {
        if (tag == 26) {
         parse_passphrase:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_passphrase()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sync_pb.WifiCredentialSpecifics)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sync_pb.WifiCredentialSpecifics)
  return false;
#undef DO_
}

void WifiCredentialSpecifics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sync_pb.WifiCredentialSpecifics)
  // optional bytes ssid = 1;
  if (has_ssid()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->ssid(), output);
  }

  // optional .sync_pb.WifiCredentialSpecifics.SecurityClass security_class = 2;
  if (has_security_class()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->security_class(), output);
  }

  // optional bytes passphrase = 3;
  if (has_passphrase()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->passphrase(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:sync_pb.WifiCredentialSpecifics)
}

int WifiCredentialSpecifics::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.WifiCredentialSpecifics)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 7u) {
    // optional bytes ssid = 1;
    if (has_ssid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->ssid());
    }

    // optional .sync_pb.WifiCredentialSpecifics.SecurityClass security_class = 2;
    if (has_security_class()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->security_class());
    }

    // optional bytes passphrase = 3;
    if (has_passphrase()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->passphrase());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WifiCredentialSpecifics::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const WifiCredentialSpecifics*>(&from));
}

void WifiCredentialSpecifics::MergeFrom(const WifiCredentialSpecifics& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.WifiCredentialSpecifics)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ssid()) {
      set_has_ssid();
      ssid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ssid_);
    }
    if (from.has_security_class()) {
      set_security_class(from.security_class());
    }
    if (from.has_passphrase()) {
      set_has_passphrase();
      passphrase_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.passphrase_);
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void WifiCredentialSpecifics::CopyFrom(const WifiCredentialSpecifics& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.WifiCredentialSpecifics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WifiCredentialSpecifics::IsInitialized() const {

  return true;
}

void WifiCredentialSpecifics::Swap(WifiCredentialSpecifics* other) {
  if (other == this) return;
  InternalSwap(other);
}
void WifiCredentialSpecifics::InternalSwap(WifiCredentialSpecifics* other) {
  ssid_.Swap(&other->ssid_);
  std::swap(security_class_, other->security_class_);
  passphrase_.Swap(&other->passphrase_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string WifiCredentialSpecifics::GetTypeName() const {
  return "sync_pb.WifiCredentialSpecifics";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// WifiCredentialSpecifics

// optional bytes ssid = 1;
bool WifiCredentialSpecifics::has_ssid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void WifiCredentialSpecifics::set_has_ssid() {
  _has_bits_[0] |= 0x00000001u;
}
void WifiCredentialSpecifics::clear_has_ssid() {
  _has_bits_[0] &= ~0x00000001u;
}
void WifiCredentialSpecifics::clear_ssid() {
  ssid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_ssid();
}
 const ::std::string& WifiCredentialSpecifics::ssid() const {
  // @@protoc_insertion_point(field_get:sync_pb.WifiCredentialSpecifics.ssid)
  return ssid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void WifiCredentialSpecifics::set_ssid(const ::std::string& value) {
  set_has_ssid();
  ssid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.WifiCredentialSpecifics.ssid)
}
 void WifiCredentialSpecifics::set_ssid(const char* value) {
  set_has_ssid();
  ssid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.WifiCredentialSpecifics.ssid)
}
 void WifiCredentialSpecifics::set_ssid(const void* value, size_t size) {
  set_has_ssid();
  ssid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.WifiCredentialSpecifics.ssid)
}
 ::std::string* WifiCredentialSpecifics::mutable_ssid() {
  set_has_ssid();
  // @@protoc_insertion_point(field_mutable:sync_pb.WifiCredentialSpecifics.ssid)
  return ssid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* WifiCredentialSpecifics::release_ssid() {
  // @@protoc_insertion_point(field_release:sync_pb.WifiCredentialSpecifics.ssid)
  clear_has_ssid();
  return ssid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void WifiCredentialSpecifics::set_allocated_ssid(::std::string* ssid) {
  if (ssid != NULL) {
    set_has_ssid();
  } else {
    clear_has_ssid();
  }
  ssid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ssid);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.WifiCredentialSpecifics.ssid)
}

// optional .sync_pb.WifiCredentialSpecifics.SecurityClass security_class = 2;
bool WifiCredentialSpecifics::has_security_class() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void WifiCredentialSpecifics::set_has_security_class() {
  _has_bits_[0] |= 0x00000002u;
}
void WifiCredentialSpecifics::clear_has_security_class() {
  _has_bits_[0] &= ~0x00000002u;
}
void WifiCredentialSpecifics::clear_security_class() {
  security_class_ = 0;
  clear_has_security_class();
}
 ::sync_pb::WifiCredentialSpecifics_SecurityClass WifiCredentialSpecifics::security_class() const {
  // @@protoc_insertion_point(field_get:sync_pb.WifiCredentialSpecifics.security_class)
  return static_cast< ::sync_pb::WifiCredentialSpecifics_SecurityClass >(security_class_);
}
 void WifiCredentialSpecifics::set_security_class(::sync_pb::WifiCredentialSpecifics_SecurityClass value) {
  assert(::sync_pb::WifiCredentialSpecifics_SecurityClass_IsValid(value));
  set_has_security_class();
  security_class_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.WifiCredentialSpecifics.security_class)
}

// optional bytes passphrase = 3;
bool WifiCredentialSpecifics::has_passphrase() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void WifiCredentialSpecifics::set_has_passphrase() {
  _has_bits_[0] |= 0x00000004u;
}
void WifiCredentialSpecifics::clear_has_passphrase() {
  _has_bits_[0] &= ~0x00000004u;
}
void WifiCredentialSpecifics::clear_passphrase() {
  passphrase_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_passphrase();
}
 const ::std::string& WifiCredentialSpecifics::passphrase() const {
  // @@protoc_insertion_point(field_get:sync_pb.WifiCredentialSpecifics.passphrase)
  return passphrase_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void WifiCredentialSpecifics::set_passphrase(const ::std::string& value) {
  set_has_passphrase();
  passphrase_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sync_pb.WifiCredentialSpecifics.passphrase)
}
 void WifiCredentialSpecifics::set_passphrase(const char* value) {
  set_has_passphrase();
  passphrase_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sync_pb.WifiCredentialSpecifics.passphrase)
}
 void WifiCredentialSpecifics::set_passphrase(const void* value, size_t size) {
  set_has_passphrase();
  passphrase_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sync_pb.WifiCredentialSpecifics.passphrase)
}
 ::std::string* WifiCredentialSpecifics::mutable_passphrase() {
  set_has_passphrase();
  // @@protoc_insertion_point(field_mutable:sync_pb.WifiCredentialSpecifics.passphrase)
  return passphrase_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* WifiCredentialSpecifics::release_passphrase() {
  // @@protoc_insertion_point(field_release:sync_pb.WifiCredentialSpecifics.passphrase)
  clear_has_passphrase();
  return passphrase_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void WifiCredentialSpecifics::set_allocated_passphrase(::std::string* passphrase) {
  if (passphrase != NULL) {
    set_has_passphrase();
  } else {
    clear_has_passphrase();
  }
  passphrase_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), passphrase);
  // @@protoc_insertion_point(field_set_allocated:sync_pb.WifiCredentialSpecifics.passphrase)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)