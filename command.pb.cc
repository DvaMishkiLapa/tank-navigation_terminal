// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: command.proto

#include "command.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
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

namespace protocol {
class ActionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Action>
      _instance;
} _Action_default_instance_;
class DataDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Data>
      _instance;
} _Data_default_instance_;
}  // namespace protocol
namespace protobuf_command_2eproto {
static void InitDefaultsAction() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::protocol::_Action_default_instance_;
    new (ptr) ::protocol::Action();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protocol::Action::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Action =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAction}, {}};

static void InitDefaultsData() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::protocol::_Data_default_instance_;
    new (ptr) ::protocol::Data();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protocol::Data::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Data =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsData}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Action.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Data.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protocol::Action, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protocol::Action, action_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protocol::Data, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protocol::Data, speed_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protocol::Data, distance_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protocol::Data, ammo_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protocol::Data, gun_angle_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protocol::Data, protect_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protocol::Data, machine_turn_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protocol::Data, gun_turn_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protocol::Data, x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protocol::Data, y_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::protocol::Action)},
  { 6, -1, sizeof(::protocol::Data)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::protocol::_Action_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::protocol::_Data_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "command.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\rcommand.proto\022\010protocol\"\030\n\006Action\022\016\n\006a"
      "ction\030\001 \001(\t\"\227\001\n\004Data\022\r\n\005speed\030\001 \001(\002\022\020\n\010d"
      "istance\030\002 \001(\002\022\014\n\004ammo\030\003 \001(\005\022\021\n\tgun_angle"
      "\030\004 \001(\002\022\017\n\007protect\030\005 \001(\005\022\024\n\014machine_turn\030"
      "\006 \001(\002\022\020\n\010gun_turn\030\007 \001(\002\022\t\n\001x\030\010 \001(\002\022\t\n\001y\030"
      "\t \001(\002b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 213);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "command.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_command_2eproto
namespace protocol {

// ===================================================================

void Action::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Action::kActionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Action::Action()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_command_2eproto::scc_info_Action.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Action)
}
Action::Action(const Action& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  action_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.action().size() > 0) {
    action_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.action_);
  }
  // @@protoc_insertion_point(copy_constructor:protocol.Action)
}

void Action::SharedCtor() {
  action_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Action::~Action() {
  // @@protoc_insertion_point(destructor:protocol.Action)
  SharedDtor();
}

void Action::SharedDtor() {
  action_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Action::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Action::descriptor() {
  ::protobuf_command_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_command_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Action& Action::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_command_2eproto::scc_info_Action.base);
  return *internal_default_instance();
}


void Action::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Action)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  action_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Action::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Action)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string action = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_action()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->action().data(), static_cast<int>(this->action().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protocol.Action.action"));
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
  // @@protoc_insertion_point(parse_success:protocol.Action)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Action)
  return false;
#undef DO_
}

void Action::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Action)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string action = 1;
  if (this->action().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->action().data(), static_cast<int>(this->action().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Action.action");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->action(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:protocol.Action)
}

::google::protobuf::uint8* Action::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Action)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string action = 1;
  if (this->action().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->action().data(), static_cast<int>(this->action().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protocol.Action.action");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->action(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protocol.Action)
  return target;
}

size_t Action::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Action)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string action = 1;
  if (this->action().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->action());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Action::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Action)
  GOOGLE_DCHECK_NE(&from, this);
  const Action* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Action>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Action)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Action)
    MergeFrom(*source);
  }
}

void Action::MergeFrom(const Action& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Action)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.action().size() > 0) {

    action_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.action_);
  }
}

void Action::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Action)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Action::CopyFrom(const Action& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Action)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Action::IsInitialized() const {
  return true;
}

void Action::Swap(Action* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Action::InternalSwap(Action* other) {
  using std::swap;
  action_.Swap(&other->action_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Action::GetMetadata() const {
  protobuf_command_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_command_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Data::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Data::kSpeedFieldNumber;
const int Data::kDistanceFieldNumber;
const int Data::kAmmoFieldNumber;
const int Data::kGunAngleFieldNumber;
const int Data::kProtectFieldNumber;
const int Data::kMachineTurnFieldNumber;
const int Data::kGunTurnFieldNumber;
const int Data::kXFieldNumber;
const int Data::kYFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Data::Data()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_command_2eproto::scc_info_Data.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Data)
}
Data::Data(const Data& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&speed_, &from.speed_,
    static_cast<size_t>(reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&speed_)) + sizeof(y_));
  // @@protoc_insertion_point(copy_constructor:protocol.Data)
}

void Data::SharedCtor() {
  ::memset(&speed_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y_) -
      reinterpret_cast<char*>(&speed_)) + sizeof(y_));
}

Data::~Data() {
  // @@protoc_insertion_point(destructor:protocol.Data)
  SharedDtor();
}

void Data::SharedDtor() {
}

void Data::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Data::descriptor() {
  ::protobuf_command_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_command_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Data& Data::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_command_2eproto::scc_info_Data.base);
  return *internal_default_instance();
}


void Data::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.Data)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&speed_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&y_) -
      reinterpret_cast<char*>(&speed_)) + sizeof(y_));
  _internal_metadata_.Clear();
}

bool Data::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Data)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float speed = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(13u /* 13 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &speed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float distance = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &distance_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 ammo = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ammo_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float gun_angle = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(37u /* 37 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &gun_angle_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 protect = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &protect_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float machine_turn = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(53u /* 53 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &machine_turn_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float gun_turn = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(61u /* 61 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &gun_turn_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float x = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(69u /* 69 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float y = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(77u /* 77 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &y_)));
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
  // @@protoc_insertion_point(parse_success:protocol.Data)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Data)
  return false;
#undef DO_
}

void Data::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Data)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float speed = 1;
  if (this->speed() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->speed(), output);
  }

  // float distance = 2;
  if (this->distance() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->distance(), output);
  }

  // int32 ammo = 3;
  if (this->ammo() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->ammo(), output);
  }

  // float gun_angle = 4;
  if (this->gun_angle() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->gun_angle(), output);
  }

  // int32 protect = 5;
  if (this->protect() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->protect(), output);
  }

  // float machine_turn = 6;
  if (this->machine_turn() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(6, this->machine_turn(), output);
  }

  // float gun_turn = 7;
  if (this->gun_turn() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(7, this->gun_turn(), output);
  }

  // float x = 8;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(8, this->x(), output);
  }

  // float y = 9;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(9, this->y(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:protocol.Data)
}

::google::protobuf::uint8* Data::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Data)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float speed = 1;
  if (this->speed() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->speed(), target);
  }

  // float distance = 2;
  if (this->distance() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->distance(), target);
  }

  // int32 ammo = 3;
  if (this->ammo() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->ammo(), target);
  }

  // float gun_angle = 4;
  if (this->gun_angle() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->gun_angle(), target);
  }

  // int32 protect = 5;
  if (this->protect() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->protect(), target);
  }

  // float machine_turn = 6;
  if (this->machine_turn() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(6, this->machine_turn(), target);
  }

  // float gun_turn = 7;
  if (this->gun_turn() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(7, this->gun_turn(), target);
  }

  // float x = 8;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(8, this->x(), target);
  }

  // float y = 9;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(9, this->y(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protocol.Data)
  return target;
}

size_t Data::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.Data)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // float speed = 1;
  if (this->speed() != 0) {
    total_size += 1 + 4;
  }

  // float distance = 2;
  if (this->distance() != 0) {
    total_size += 1 + 4;
  }

  // int32 ammo = 3;
  if (this->ammo() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->ammo());
  }

  // float gun_angle = 4;
  if (this->gun_angle() != 0) {
    total_size += 1 + 4;
  }

  // int32 protect = 5;
  if (this->protect() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->protect());
  }

  // float machine_turn = 6;
  if (this->machine_turn() != 0) {
    total_size += 1 + 4;
  }

  // float gun_turn = 7;
  if (this->gun_turn() != 0) {
    total_size += 1 + 4;
  }

  // float x = 8;
  if (this->x() != 0) {
    total_size += 1 + 4;
  }

  // float y = 9;
  if (this->y() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Data::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.Data)
  GOOGLE_DCHECK_NE(&from, this);
  const Data* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Data>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.Data)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.Data)
    MergeFrom(*source);
  }
}

void Data::MergeFrom(const Data& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.Data)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.speed() != 0) {
    set_speed(from.speed());
  }
  if (from.distance() != 0) {
    set_distance(from.distance());
  }
  if (from.ammo() != 0) {
    set_ammo(from.ammo());
  }
  if (from.gun_angle() != 0) {
    set_gun_angle(from.gun_angle());
  }
  if (from.protect() != 0) {
    set_protect(from.protect());
  }
  if (from.machine_turn() != 0) {
    set_machine_turn(from.machine_turn());
  }
  if (from.gun_turn() != 0) {
    set_gun_turn(from.gun_turn());
  }
  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
}

void Data::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.Data)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Data::CopyFrom(const Data& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.Data)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Data::IsInitialized() const {
  return true;
}

void Data::Swap(Data* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Data::InternalSwap(Data* other) {
  using std::swap;
  swap(speed_, other->speed_);
  swap(distance_, other->distance_);
  swap(ammo_, other->ammo_);
  swap(gun_angle_, other->gun_angle_);
  swap(protect_, other->protect_);
  swap(machine_turn_, other->machine_turn_);
  swap(gun_turn_, other->gun_turn_);
  swap(x_, other->x_);
  swap(y_, other->y_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Data::GetMetadata() const {
  protobuf_command_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_command_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protocol
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::protocol::Action* Arena::CreateMaybeMessage< ::protocol::Action >(Arena* arena) {
  return Arena::CreateInternal< ::protocol::Action >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::protocol::Data* Arena::CreateMaybeMessage< ::protocol::Data >(Arena* arena) {
  return Arena::CreateInternal< ::protocol::Data >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
