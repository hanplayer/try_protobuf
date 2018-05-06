// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: head.proto

#ifndef PROTOBUF_head_2eproto__INCLUDED
#define PROTOBUF_head_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_head_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsProtoCmdImpl();
void InitDefaultsProtoCmd();
inline void InitDefaults() {
  InitDefaultsProtoCmd();
}
}  // namespace protobuf_head_2eproto
namespace hanplayer {
class ProtoCmd;
class ProtoCmdDefaultTypeInternal;
extern ProtoCmdDefaultTypeInternal _ProtoCmd_default_instance_;
}  // namespace hanplayer
namespace hanplayer {

// ===================================================================

class ProtoCmd : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hanplayer.ProtoCmd) */ {
 public:
  ProtoCmd();
  virtual ~ProtoCmd();

  ProtoCmd(const ProtoCmd& from);

  inline ProtoCmd& operator=(const ProtoCmd& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ProtoCmd(ProtoCmd&& from) noexcept
    : ProtoCmd() {
    *this = ::std::move(from);
  }

  inline ProtoCmd& operator=(ProtoCmd&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ProtoCmd& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProtoCmd* internal_default_instance() {
    return reinterpret_cast<const ProtoCmd*>(
               &_ProtoCmd_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ProtoCmd* other);
  friend void swap(ProtoCmd& a, ProtoCmd& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ProtoCmd* New() const PROTOBUF_FINAL { return New(NULL); }

  ProtoCmd* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ProtoCmd& from);
  void MergeFrom(const ProtoCmd& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ProtoCmd* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string Cmd = 1;
  void clear_cmd();
  static const int kCmdFieldNumber = 1;
  const ::std::string& cmd() const;
  void set_cmd(const ::std::string& value);
  #if LANG_CXX11
  void set_cmd(::std::string&& value);
  #endif
  void set_cmd(const char* value);
  void set_cmd(const char* value, size_t size);
  ::std::string* mutable_cmd();
  ::std::string* release_cmd();
  void set_allocated_cmd(::std::string* cmd);

  // string SubCmd = 2;
  void clear_subcmd();
  static const int kSubCmdFieldNumber = 2;
  const ::std::string& subcmd() const;
  void set_subcmd(const ::std::string& value);
  #if LANG_CXX11
  void set_subcmd(::std::string&& value);
  #endif
  void set_subcmd(const char* value);
  void set_subcmd(const char* value, size_t size);
  ::std::string* mutable_subcmd();
  ::std::string* release_subcmd();
  void set_allocated_subcmd(::std::string* subcmd);

  // @@protoc_insertion_point(class_scope:hanplayer.ProtoCmd)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr cmd_;
  ::google::protobuf::internal::ArenaStringPtr subcmd_;
  mutable int _cached_size_;
  friend struct ::protobuf_head_2eproto::TableStruct;
  friend void ::protobuf_head_2eproto::InitDefaultsProtoCmdImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ProtoCmd

// string Cmd = 1;
inline void ProtoCmd::clear_cmd() {
  cmd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProtoCmd::cmd() const {
  // @@protoc_insertion_point(field_get:hanplayer.ProtoCmd.Cmd)
  return cmd_.GetNoArena();
}
inline void ProtoCmd::set_cmd(const ::std::string& value) {
  
  cmd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:hanplayer.ProtoCmd.Cmd)
}
#if LANG_CXX11
inline void ProtoCmd::set_cmd(::std::string&& value) {
  
  cmd_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:hanplayer.ProtoCmd.Cmd)
}
#endif
inline void ProtoCmd::set_cmd(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  cmd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hanplayer.ProtoCmd.Cmd)
}
inline void ProtoCmd::set_cmd(const char* value, size_t size) {
  
  cmd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hanplayer.ProtoCmd.Cmd)
}
inline ::std::string* ProtoCmd::mutable_cmd() {
  
  // @@protoc_insertion_point(field_mutable:hanplayer.ProtoCmd.Cmd)
  return cmd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProtoCmd::release_cmd() {
  // @@protoc_insertion_point(field_release:hanplayer.ProtoCmd.Cmd)
  
  return cmd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProtoCmd::set_allocated_cmd(::std::string* cmd) {
  if (cmd != NULL) {
    
  } else {
    
  }
  cmd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cmd);
  // @@protoc_insertion_point(field_set_allocated:hanplayer.ProtoCmd.Cmd)
}

// string SubCmd = 2;
inline void ProtoCmd::clear_subcmd() {
  subcmd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProtoCmd::subcmd() const {
  // @@protoc_insertion_point(field_get:hanplayer.ProtoCmd.SubCmd)
  return subcmd_.GetNoArena();
}
inline void ProtoCmd::set_subcmd(const ::std::string& value) {
  
  subcmd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:hanplayer.ProtoCmd.SubCmd)
}
#if LANG_CXX11
inline void ProtoCmd::set_subcmd(::std::string&& value) {
  
  subcmd_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:hanplayer.ProtoCmd.SubCmd)
}
#endif
inline void ProtoCmd::set_subcmd(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  subcmd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hanplayer.ProtoCmd.SubCmd)
}
inline void ProtoCmd::set_subcmd(const char* value, size_t size) {
  
  subcmd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hanplayer.ProtoCmd.SubCmd)
}
inline ::std::string* ProtoCmd::mutable_subcmd() {
  
  // @@protoc_insertion_point(field_mutable:hanplayer.ProtoCmd.SubCmd)
  return subcmd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProtoCmd::release_subcmd() {
  // @@protoc_insertion_point(field_release:hanplayer.ProtoCmd.SubCmd)
  
  return subcmd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProtoCmd::set_allocated_subcmd(::std::string* subcmd) {
  if (subcmd != NULL) {
    
  } else {
    
  }
  subcmd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), subcmd);
  // @@protoc_insertion_point(field_set_allocated:hanplayer.ProtoCmd.SubCmd)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace hanplayer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_head_2eproto__INCLUDED