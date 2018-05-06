// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: head.proto

#include "head.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace hanplayer {
class ProtoCmdDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ProtoCmd>
      _instance;
} _ProtoCmd_default_instance_;
}  // namespace hanplayer
namespace protobuf_head_2eproto {
void InitDefaultsProtoCmdImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::hanplayer::_ProtoCmd_default_instance_;
    new (ptr) ::hanplayer::ProtoCmd();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::hanplayer::ProtoCmd::InitAsDefaultInstance();
}

void InitDefaultsProtoCmd() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsProtoCmdImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::hanplayer::ProtoCmd, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::hanplayer::ProtoCmd, cmd_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::hanplayer::ProtoCmd, subcmd_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::hanplayer::ProtoCmd)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::hanplayer::_ProtoCmd_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "head.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\nhead.proto\022\thanplayer\"\'\n\010ProtoCmd\022\013\n\003C"
      "md\030\001 \001(\t\022\016\n\006SubCmd\030\002 \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 72);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "head.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_head_2eproto
namespace hanplayer {

// ===================================================================

void ProtoCmd::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProtoCmd::kCmdFieldNumber;
const int ProtoCmd::kSubCmdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProtoCmd::ProtoCmd()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_head_2eproto::InitDefaultsProtoCmd();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:hanplayer.ProtoCmd)
}
ProtoCmd::ProtoCmd(const ProtoCmd& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cmd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.cmd().size() > 0) {
    cmd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.cmd_);
  }
  subcmd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.subcmd().size() > 0) {
    subcmd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.subcmd_);
  }
  // @@protoc_insertion_point(copy_constructor:hanplayer.ProtoCmd)
}

void ProtoCmd::SharedCtor() {
  cmd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  subcmd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

ProtoCmd::~ProtoCmd() {
  // @@protoc_insertion_point(destructor:hanplayer.ProtoCmd)
  SharedDtor();
}

void ProtoCmd::SharedDtor() {
  cmd_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  subcmd_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ProtoCmd::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProtoCmd::descriptor() {
  ::protobuf_head_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_head_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ProtoCmd& ProtoCmd::default_instance() {
  ::protobuf_head_2eproto::InitDefaultsProtoCmd();
  return *internal_default_instance();
}

ProtoCmd* ProtoCmd::New(::google::protobuf::Arena* arena) const {
  ProtoCmd* n = new ProtoCmd;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ProtoCmd::Clear() {
// @@protoc_insertion_point(message_clear_start:hanplayer.ProtoCmd)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cmd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  subcmd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool ProtoCmd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:hanplayer.ProtoCmd)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string Cmd = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_cmd()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->cmd().data(), static_cast<int>(this->cmd().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "hanplayer.ProtoCmd.Cmd"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string SubCmd = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_subcmd()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->subcmd().data(), static_cast<int>(this->subcmd().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "hanplayer.ProtoCmd.SubCmd"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:hanplayer.ProtoCmd)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:hanplayer.ProtoCmd)
  return false;
#undef DO_
}

void ProtoCmd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:hanplayer.ProtoCmd)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string Cmd = 1;
  if (this->cmd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->cmd().data(), static_cast<int>(this->cmd().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "hanplayer.ProtoCmd.Cmd");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->cmd(), output);
  }

  // string SubCmd = 2;
  if (this->subcmd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->subcmd().data(), static_cast<int>(this->subcmd().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "hanplayer.ProtoCmd.SubCmd");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->subcmd(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:hanplayer.ProtoCmd)
}

::google::protobuf::uint8* ProtoCmd::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:hanplayer.ProtoCmd)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string Cmd = 1;
  if (this->cmd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->cmd().data(), static_cast<int>(this->cmd().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "hanplayer.ProtoCmd.Cmd");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->cmd(), target);
  }

  // string SubCmd = 2;
  if (this->subcmd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->subcmd().data(), static_cast<int>(this->subcmd().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "hanplayer.ProtoCmd.SubCmd");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->subcmd(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hanplayer.ProtoCmd)
  return target;
}

size_t ProtoCmd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hanplayer.ProtoCmd)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string Cmd = 1;
  if (this->cmd().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->cmd());
  }

  // string SubCmd = 2;
  if (this->subcmd().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->subcmd());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProtoCmd::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:hanplayer.ProtoCmd)
  GOOGLE_DCHECK_NE(&from, this);
  const ProtoCmd* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ProtoCmd>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:hanplayer.ProtoCmd)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:hanplayer.ProtoCmd)
    MergeFrom(*source);
  }
}

void ProtoCmd::MergeFrom(const ProtoCmd& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:hanplayer.ProtoCmd)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.cmd().size() > 0) {

    cmd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.cmd_);
  }
  if (from.subcmd().size() > 0) {

    subcmd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.subcmd_);
  }
}

void ProtoCmd::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:hanplayer.ProtoCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProtoCmd::CopyFrom(const ProtoCmd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hanplayer.ProtoCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoCmd::IsInitialized() const {
  return true;
}

void ProtoCmd::Swap(ProtoCmd* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProtoCmd::InternalSwap(ProtoCmd* other) {
  using std::swap;
  cmd_.Swap(&other->cmd_);
  subcmd_.Swap(&other->subcmd_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ProtoCmd::GetMetadata() const {
  protobuf_head_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_head_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace hanplayer

// @@protoc_insertion_point(global_scope)
