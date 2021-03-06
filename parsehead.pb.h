// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: parsehead.proto

#ifndef PROTOBUF_parsehead_2eproto__INCLUDED
#define PROTOBUF_parsehead_2eproto__INCLUDED

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
#include "head.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_parsehead_2eproto {
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
void InitDefaultsParseImpl();
void InitDefaultsParse();
inline void InitDefaults() {
  InitDefaultsParse();
}
}  // namespace protobuf_parsehead_2eproto
namespace hanplayer {
class Parse;
class ParseDefaultTypeInternal;
extern ParseDefaultTypeInternal _Parse_default_instance_;
}  // namespace hanplayer
namespace hanplayer {

// ===================================================================

class Parse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hanplayer.Parse) */ {
 public:
  Parse();
  virtual ~Parse();

  Parse(const Parse& from);

  inline Parse& operator=(const Parse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Parse(Parse&& from) noexcept
    : Parse() {
    *this = ::std::move(from);
  }

  inline Parse& operator=(Parse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Parse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Parse* internal_default_instance() {
    return reinterpret_cast<const Parse*>(
               &_Parse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Parse* other);
  friend void swap(Parse& a, Parse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Parse* New() const PROTOBUF_FINAL { return New(NULL); }

  Parse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Parse& from);
  void MergeFrom(const Parse& from);
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
  void InternalSwap(Parse* other);
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

  // .hanplayer.ProtoCmd haha = 1;
  bool has_haha() const;
  void clear_haha();
  static const int kHahaFieldNumber = 1;
  const ::hanplayer::ProtoCmd& haha() const;
  ::hanplayer::ProtoCmd* release_haha();
  ::hanplayer::ProtoCmd* mutable_haha();
  void set_allocated_haha(::hanplayer::ProtoCmd* haha);

  // @@protoc_insertion_point(class_scope:hanplayer.Parse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::hanplayer::ProtoCmd* haha_;
  mutable int _cached_size_;
  friend struct ::protobuf_parsehead_2eproto::TableStruct;
  friend void ::protobuf_parsehead_2eproto::InitDefaultsParseImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Parse

// .hanplayer.ProtoCmd haha = 1;
inline bool Parse::has_haha() const {
  return this != internal_default_instance() && haha_ != NULL;
}
inline const ::hanplayer::ProtoCmd& Parse::haha() const {
  const ::hanplayer::ProtoCmd* p = haha_;
  // @@protoc_insertion_point(field_get:hanplayer.Parse.haha)
  return p != NULL ? *p : *reinterpret_cast<const ::hanplayer::ProtoCmd*>(
      &::hanplayer::_ProtoCmd_default_instance_);
}
inline ::hanplayer::ProtoCmd* Parse::release_haha() {
  // @@protoc_insertion_point(field_release:hanplayer.Parse.haha)
  
  ::hanplayer::ProtoCmd* temp = haha_;
  haha_ = NULL;
  return temp;
}
inline ::hanplayer::ProtoCmd* Parse::mutable_haha() {
  
  if (haha_ == NULL) {
    haha_ = new ::hanplayer::ProtoCmd;
  }
  // @@protoc_insertion_point(field_mutable:hanplayer.Parse.haha)
  return haha_;
}
inline void Parse::set_allocated_haha(::hanplayer::ProtoCmd* haha) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(haha_);
  }
  if (haha) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      haha = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, haha, submessage_arena);
    }
    
  } else {
    
  }
  haha_ = haha;
  // @@protoc_insertion_point(field_set_allocated:hanplayer.Parse.haha)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace hanplayer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_parsehead_2eproto__INCLUDED
