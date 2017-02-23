// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model_type_store_schema_descriptor.proto

#ifndef PROTOBUF_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto__INCLUDED
#define PROTOBUF_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace sync_pb {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto();
void protobuf_AssignDesc_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto();
void protobuf_ShutdownFile_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto();

class ModelTypeStoreSchemaDescriptor;

// ===================================================================

class ModelTypeStoreSchemaDescriptor : public ::google::protobuf::MessageLite {
 public:
  ModelTypeStoreSchemaDescriptor();
  virtual ~ModelTypeStoreSchemaDescriptor();

  ModelTypeStoreSchemaDescriptor(const ModelTypeStoreSchemaDescriptor& from);

  inline ModelTypeStoreSchemaDescriptor& operator=(const ModelTypeStoreSchemaDescriptor& from) {
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

  static const ModelTypeStoreSchemaDescriptor& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ModelTypeStoreSchemaDescriptor* internal_default_instance() {
    return default_instance_;
  }
  #endif

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ModelTypeStoreSchemaDescriptor* other);

  // implements Message ----------------------------------------------

  inline ModelTypeStoreSchemaDescriptor* New() const { return New(NULL); }

  ModelTypeStoreSchemaDescriptor* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ModelTypeStoreSchemaDescriptor& from);
  void MergeFrom(const ModelTypeStoreSchemaDescriptor& from);
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
  void InternalSwap(ModelTypeStoreSchemaDescriptor* other);
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

  // accessors -------------------------------------------------------

  // optional int64 version_number = 1;
  bool has_version_number() const;
  void clear_version_number();
  static const int kVersionNumberFieldNumber = 1;
  ::google::protobuf::int64 version_number() const;
  void set_version_number(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:sync_pb.ModelTypeStoreSchemaDescriptor)
 private:
  inline void set_has_version_number();
  inline void clear_has_version_number();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 version_number_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto();
  #endif
  friend void protobuf_AssignDesc_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto();
  friend void protobuf_ShutdownFile_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto();

  void InitAsDefaultInstance();
  static ModelTypeStoreSchemaDescriptor* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ModelTypeStoreSchemaDescriptor

// optional int64 version_number = 1;
inline bool ModelTypeStoreSchemaDescriptor::has_version_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ModelTypeStoreSchemaDescriptor::set_has_version_number() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ModelTypeStoreSchemaDescriptor::clear_has_version_number() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ModelTypeStoreSchemaDescriptor::clear_version_number() {
  version_number_ = GOOGLE_LONGLONG(0);
  clear_has_version_number();
}
inline ::google::protobuf::int64 ModelTypeStoreSchemaDescriptor::version_number() const {
  // @@protoc_insertion_point(field_get:sync_pb.ModelTypeStoreSchemaDescriptor.version_number)
  return version_number_;
}
inline void ModelTypeStoreSchemaDescriptor::set_version_number(::google::protobuf::int64 value) {
  set_has_version_number();
  version_number_ = value;
  // @@protoc_insertion_point(field_set:sync_pb.ModelTypeStoreSchemaDescriptor.version_number)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_model_5ftype_5fstore_5fschema_5fdescriptor_2eproto__INCLUDED