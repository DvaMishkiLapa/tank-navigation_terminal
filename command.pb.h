// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: command.proto

#ifndef PROTOBUF_INCLUDED_command_2eproto
#define PROTOBUF_INCLUDED_command_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_command_2eproto 

namespace protobuf_command_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_command_2eproto
namespace protocol {
class Action;
class ActionDefaultTypeInternal;
extern ActionDefaultTypeInternal _Action_default_instance_;
class Data;
class DataDefaultTypeInternal;
extern DataDefaultTypeInternal _Data_default_instance_;
}  // namespace protocol
namespace google {
namespace protobuf {
template<> ::protocol::Action* Arena::CreateMaybeMessage<::protocol::Action>(Arena*);
template<> ::protocol::Data* Arena::CreateMaybeMessage<::protocol::Data>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace protocol {

// ===================================================================

class Action : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protocol.Action) */ {
 public:
  Action();
  virtual ~Action();

  Action(const Action& from);

  inline Action& operator=(const Action& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Action(Action&& from) noexcept
    : Action() {
    *this = ::std::move(from);
  }

  inline Action& operator=(Action&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Action& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Action* internal_default_instance() {
    return reinterpret_cast<const Action*>(
               &_Action_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Action* other);
  friend void swap(Action& a, Action& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Action* New() const final {
    return CreateMaybeMessage<Action>(NULL);
  }

  Action* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Action>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Action& from);
  void MergeFrom(const Action& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Action* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string action = 1;
  void clear_action();
  static const int kActionFieldNumber = 1;
  const ::std::string& action() const;
  void set_action(const ::std::string& value);
  #if LANG_CXX11
  void set_action(::std::string&& value);
  #endif
  void set_action(const char* value);
  void set_action(const char* value, size_t size);
  ::std::string* mutable_action();
  ::std::string* release_action();
  void set_allocated_action(::std::string* action);

  // @@protoc_insertion_point(class_scope:protocol.Action)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr action_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_command_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Data : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protocol.Data) */ {
 public:
  Data();
  virtual ~Data();

  Data(const Data& from);

  inline Data& operator=(const Data& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Data(Data&& from) noexcept
    : Data() {
    *this = ::std::move(from);
  }

  inline Data& operator=(Data&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Data& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Data* internal_default_instance() {
    return reinterpret_cast<const Data*>(
               &_Data_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Data* other);
  friend void swap(Data& a, Data& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Data* New() const final {
    return CreateMaybeMessage<Data>(NULL);
  }

  Data* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Data>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Data& from);
  void MergeFrom(const Data& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Data* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // float speed = 1;
  void clear_speed();
  static const int kSpeedFieldNumber = 1;
  float speed() const;
  void set_speed(float value);

  // float distance = 2;
  void clear_distance();
  static const int kDistanceFieldNumber = 2;
  float distance() const;
  void set_distance(float value);

  // int32 ammo = 3;
  void clear_ammo();
  static const int kAmmoFieldNumber = 3;
  ::google::protobuf::int32 ammo() const;
  void set_ammo(::google::protobuf::int32 value);

  // float gun_angle = 4;
  void clear_gun_angle();
  static const int kGunAngleFieldNumber = 4;
  float gun_angle() const;
  void set_gun_angle(float value);

  // int32 protect = 5;
  void clear_protect();
  static const int kProtectFieldNumber = 5;
  ::google::protobuf::int32 protect() const;
  void set_protect(::google::protobuf::int32 value);

  // float machine_turn = 6;
  void clear_machine_turn();
  static const int kMachineTurnFieldNumber = 6;
  float machine_turn() const;
  void set_machine_turn(float value);

  // float gun_turn = 7;
  void clear_gun_turn();
  static const int kGunTurnFieldNumber = 7;
  float gun_turn() const;
  void set_gun_turn(float value);

  // float x = 8;
  void clear_x();
  static const int kXFieldNumber = 8;
  float x() const;
  void set_x(float value);

  // float y = 9;
  void clear_y();
  static const int kYFieldNumber = 9;
  float y() const;
  void set_y(float value);

  // @@protoc_insertion_point(class_scope:protocol.Data)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  float speed_;
  float distance_;
  ::google::protobuf::int32 ammo_;
  float gun_angle_;
  ::google::protobuf::int32 protect_;
  float machine_turn_;
  float gun_turn_;
  float x_;
  float y_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_command_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Action

// string action = 1;
inline void Action::clear_action() {
  action_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Action::action() const {
  // @@protoc_insertion_point(field_get:protocol.Action.action)
  return action_.GetNoArena();
}
inline void Action::set_action(const ::std::string& value) {
  
  action_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.Action.action)
}
#if LANG_CXX11
inline void Action::set_action(::std::string&& value) {
  
  action_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:protocol.Action.action)
}
#endif
inline void Action::set_action(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  action_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.Action.action)
}
inline void Action::set_action(const char* value, size_t size) {
  
  action_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.Action.action)
}
inline ::std::string* Action::mutable_action() {
  
  // @@protoc_insertion_point(field_mutable:protocol.Action.action)
  return action_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Action::release_action() {
  // @@protoc_insertion_point(field_release:protocol.Action.action)
  
  return action_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Action::set_allocated_action(::std::string* action) {
  if (action != NULL) {
    
  } else {
    
  }
  action_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), action);
  // @@protoc_insertion_point(field_set_allocated:protocol.Action.action)
}

// -------------------------------------------------------------------

// Data

// float speed = 1;
inline void Data::clear_speed() {
  speed_ = 0;
}
inline float Data::speed() const {
  // @@protoc_insertion_point(field_get:protocol.Data.speed)
  return speed_;
}
inline void Data::set_speed(float value) {
  
  speed_ = value;
  // @@protoc_insertion_point(field_set:protocol.Data.speed)
}

// float distance = 2;
inline void Data::clear_distance() {
  distance_ = 0;
}
inline float Data::distance() const {
  // @@protoc_insertion_point(field_get:protocol.Data.distance)
  return distance_;
}
inline void Data::set_distance(float value) {
  
  distance_ = value;
  // @@protoc_insertion_point(field_set:protocol.Data.distance)
}

// int32 ammo = 3;
inline void Data::clear_ammo() {
  ammo_ = 0;
}
inline ::google::protobuf::int32 Data::ammo() const {
  // @@protoc_insertion_point(field_get:protocol.Data.ammo)
  return ammo_;
}
inline void Data::set_ammo(::google::protobuf::int32 value) {
  
  ammo_ = value;
  // @@protoc_insertion_point(field_set:protocol.Data.ammo)
}

// float gun_angle = 4;
inline void Data::clear_gun_angle() {
  gun_angle_ = 0;
}
inline float Data::gun_angle() const {
  // @@protoc_insertion_point(field_get:protocol.Data.gun_angle)
  return gun_angle_;
}
inline void Data::set_gun_angle(float value) {
  
  gun_angle_ = value;
  // @@protoc_insertion_point(field_set:protocol.Data.gun_angle)
}

// int32 protect = 5;
inline void Data::clear_protect() {
  protect_ = 0;
}
inline ::google::protobuf::int32 Data::protect() const {
  // @@protoc_insertion_point(field_get:protocol.Data.protect)
  return protect_;
}
inline void Data::set_protect(::google::protobuf::int32 value) {
  
  protect_ = value;
  // @@protoc_insertion_point(field_set:protocol.Data.protect)
}

// float machine_turn = 6;
inline void Data::clear_machine_turn() {
  machine_turn_ = 0;
}
inline float Data::machine_turn() const {
  // @@protoc_insertion_point(field_get:protocol.Data.machine_turn)
  return machine_turn_;
}
inline void Data::set_machine_turn(float value) {
  
  machine_turn_ = value;
  // @@protoc_insertion_point(field_set:protocol.Data.machine_turn)
}

// float gun_turn = 7;
inline void Data::clear_gun_turn() {
  gun_turn_ = 0;
}
inline float Data::gun_turn() const {
  // @@protoc_insertion_point(field_get:protocol.Data.gun_turn)
  return gun_turn_;
}
inline void Data::set_gun_turn(float value) {
  
  gun_turn_ = value;
  // @@protoc_insertion_point(field_set:protocol.Data.gun_turn)
}

// float x = 8;
inline void Data::clear_x() {
  x_ = 0;
}
inline float Data::x() const {
  // @@protoc_insertion_point(field_get:protocol.Data.x)
  return x_;
}
inline void Data::set_x(float value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:protocol.Data.x)
}

// float y = 9;
inline void Data::clear_y() {
  y_ = 0;
}
inline float Data::y() const {
  // @@protoc_insertion_point(field_get:protocol.Data.y)
  return y_;
}
inline void Data::set_y(float value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:protocol.Data.y)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_command_2eproto
