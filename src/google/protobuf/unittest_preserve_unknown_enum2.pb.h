// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_preserve_unknown_enum2.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto;
namespace proto2_preserve_unknown_enum_unittest {
class MyMessage;
class MyMessageDefaultTypeInternal;
extern MyMessageDefaultTypeInternal _MyMessage_default_instance_;
}  // namespace proto2_preserve_unknown_enum_unittest
PROTOBUF_NAMESPACE_OPEN
template<> ::proto2_preserve_unknown_enum_unittest::MyMessage* Arena::CreateMaybeMessage<::proto2_preserve_unknown_enum_unittest::MyMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace proto2_preserve_unknown_enum_unittest {

enum MyEnum : int {
  FOO = 0,
  BAR = 1,
  BAZ = 2
};
bool MyEnum_IsValid(int value);
constexpr MyEnum MyEnum_MIN = FOO;
constexpr MyEnum MyEnum_MAX = BAZ;
constexpr int MyEnum_ARRAYSIZE = MyEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MyEnum_descriptor();
template<typename T>
inline const std::string& MyEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, MyEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function MyEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    MyEnum_descriptor(), enum_t_value);
}
inline bool MyEnum_Parse(
    const std::string& name, MyEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<MyEnum>(
    MyEnum_descriptor(), name, value);
}
// ===================================================================

class MyMessage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:proto2_preserve_unknown_enum_unittest.MyMessage) */ {
 public:
  MyMessage();
  virtual ~MyMessage();

  MyMessage(const MyMessage& from);
  MyMessage(MyMessage&& from) noexcept
    : MyMessage() {
    *this = ::std::move(from);
  }

  inline MyMessage& operator=(const MyMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline MyMessage& operator=(MyMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const MyMessage& default_instance();

  enum OCase {
    kOneofE1 = 5,
    kOneofE2 = 6,
    O_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MyMessage* internal_default_instance() {
    return reinterpret_cast<const MyMessage*>(
               &_MyMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(MyMessage* other);
  friend void swap(MyMessage& a, MyMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MyMessage* New() const final {
    return CreateMaybeMessage<MyMessage>(nullptr);
  }

  MyMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MyMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MyMessage& from);
  void MergeFrom(const MyMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MyMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "proto2_preserve_unknown_enum_unittest.MyMessage";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto);
    return ::descriptor_table_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_e = 2;
  int repeated_e_size() const;
  void clear_repeated_e();
  static const int kRepeatedEFieldNumber = 2;
  ::proto2_preserve_unknown_enum_unittest::MyEnum repeated_e(int index) const;
  void set_repeated_e(int index, ::proto2_preserve_unknown_enum_unittest::MyEnum value);
  void add_repeated_e(::proto2_preserve_unknown_enum_unittest::MyEnum value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& repeated_e() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_repeated_e();

  // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_e = 3 [packed = true];
  int repeated_packed_e_size() const;
  void clear_repeated_packed_e();
  static const int kRepeatedPackedEFieldNumber = 3;
  ::proto2_preserve_unknown_enum_unittest::MyEnum repeated_packed_e(int index) const;
  void set_repeated_packed_e(int index, ::proto2_preserve_unknown_enum_unittest::MyEnum value);
  void add_repeated_packed_e(::proto2_preserve_unknown_enum_unittest::MyEnum value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& repeated_packed_e() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_repeated_packed_e();

  // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_unexpected_e = 4;
  int repeated_packed_unexpected_e_size() const;
  void clear_repeated_packed_unexpected_e();
  static const int kRepeatedPackedUnexpectedEFieldNumber = 4;
  ::proto2_preserve_unknown_enum_unittest::MyEnum repeated_packed_unexpected_e(int index) const;
  void set_repeated_packed_unexpected_e(int index, ::proto2_preserve_unknown_enum_unittest::MyEnum value);
  void add_repeated_packed_unexpected_e(::proto2_preserve_unknown_enum_unittest::MyEnum value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& repeated_packed_unexpected_e() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_repeated_packed_unexpected_e();

  // optional .proto2_preserve_unknown_enum_unittest.MyEnum e = 1;
  bool has_e() const;
  void clear_e();
  static const int kEFieldNumber = 1;
  ::proto2_preserve_unknown_enum_unittest::MyEnum e() const;
  void set_e(::proto2_preserve_unknown_enum_unittest::MyEnum value);

  // optional .proto2_preserve_unknown_enum_unittest.MyEnum oneof_e_1 = 5;
  bool has_oneof_e_1() const;
  void clear_oneof_e_1();
  static const int kOneofE1FieldNumber = 5;
  ::proto2_preserve_unknown_enum_unittest::MyEnum oneof_e_1() const;
  void set_oneof_e_1(::proto2_preserve_unknown_enum_unittest::MyEnum value);

  // optional .proto2_preserve_unknown_enum_unittest.MyEnum oneof_e_2 = 6;
  bool has_oneof_e_2() const;
  void clear_oneof_e_2();
  static const int kOneofE2FieldNumber = 6;
  ::proto2_preserve_unknown_enum_unittest::MyEnum oneof_e_2() const;
  void set_oneof_e_2(::proto2_preserve_unknown_enum_unittest::MyEnum value);

  void clear_o();
  OCase o_case() const;
  // @@protoc_insertion_point(class_scope:proto2_preserve_unknown_enum_unittest.MyMessage)
 private:
  class HasBitSetters;
  void set_has_oneof_e_1();
  void set_has_oneof_e_2();

  inline bool has_o() const;
  inline void clear_has_o();

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> repeated_e_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> repeated_packed_e_;
  mutable std::atomic<int> _repeated_packed_e_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> repeated_packed_unexpected_e_;
  int e_;
  union OUnion {
    OUnion() {}
    int oneof_e_1_;
    int oneof_e_2_;
  } o_;
  ::PROTOBUF_NAMESPACE_ID::uint32 _oneof_case_[1];

  friend struct ::TableStruct_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MyMessage

// optional .proto2_preserve_unknown_enum_unittest.MyEnum e = 1;
inline bool MyMessage::has_e() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MyMessage::clear_e() {
  e_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::e() const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.e)
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(e_);
}
inline void MyMessage::set_e(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  _has_bits_[0] |= 0x00000001u;
  e_ = value;
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.e)
}

// repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_e = 2;
inline int MyMessage::repeated_e_size() const {
  return repeated_e_.size();
}
inline void MyMessage::clear_repeated_e() {
  repeated_e_.Clear();
}
inline ::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::repeated_e(int index) const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_e)
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(repeated_e_.Get(index));
}
inline void MyMessage::set_repeated_e(int index, ::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_e_.Set(index, value);
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_e)
}
inline void MyMessage::add_repeated_e(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_e_.Add(value);
  // @@protoc_insertion_point(field_add:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_e)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>&
MyMessage::repeated_e() const {
  // @@protoc_insertion_point(field_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_e)
  return repeated_e_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
MyMessage::mutable_repeated_e() {
  // @@protoc_insertion_point(field_mutable_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_e)
  return &repeated_e_;
}

// repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_e = 3 [packed = true];
inline int MyMessage::repeated_packed_e_size() const {
  return repeated_packed_e_.size();
}
inline void MyMessage::clear_repeated_packed_e() {
  repeated_packed_e_.Clear();
}
inline ::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::repeated_packed_e(int index) const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_e)
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(repeated_packed_e_.Get(index));
}
inline void MyMessage::set_repeated_packed_e(int index, ::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_packed_e_.Set(index, value);
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_e)
}
inline void MyMessage::add_repeated_packed_e(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_packed_e_.Add(value);
  // @@protoc_insertion_point(field_add:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_e)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>&
MyMessage::repeated_packed_e() const {
  // @@protoc_insertion_point(field_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_e)
  return repeated_packed_e_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
MyMessage::mutable_repeated_packed_e() {
  // @@protoc_insertion_point(field_mutable_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_e)
  return &repeated_packed_e_;
}

// repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_unexpected_e = 4;
inline int MyMessage::repeated_packed_unexpected_e_size() const {
  return repeated_packed_unexpected_e_.size();
}
inline void MyMessage::clear_repeated_packed_unexpected_e() {
  repeated_packed_unexpected_e_.Clear();
}
inline ::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::repeated_packed_unexpected_e(int index) const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_unexpected_e)
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(repeated_packed_unexpected_e_.Get(index));
}
inline void MyMessage::set_repeated_packed_unexpected_e(int index, ::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_packed_unexpected_e_.Set(index, value);
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_unexpected_e)
}
inline void MyMessage::add_repeated_packed_unexpected_e(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_packed_unexpected_e_.Add(value);
  // @@protoc_insertion_point(field_add:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_unexpected_e)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>&
MyMessage::repeated_packed_unexpected_e() const {
  // @@protoc_insertion_point(field_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_unexpected_e)
  return repeated_packed_unexpected_e_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
MyMessage::mutable_repeated_packed_unexpected_e() {
  // @@protoc_insertion_point(field_mutable_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_unexpected_e)
  return &repeated_packed_unexpected_e_;
}

// optional .proto2_preserve_unknown_enum_unittest.MyEnum oneof_e_1 = 5;
inline bool MyMessage::has_oneof_e_1() const {
  return o_case() == kOneofE1;
}
inline void MyMessage::set_has_oneof_e_1() {
  _oneof_case_[0] = kOneofE1;
}
inline void MyMessage::clear_oneof_e_1() {
  if (has_oneof_e_1()) {
    o_.oneof_e_1_ = 0;
    clear_has_o();
  }
}
inline ::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::oneof_e_1() const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.oneof_e_1)
  if (has_oneof_e_1()) {
    return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(o_.oneof_e_1_);
  }
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(0);
}
inline void MyMessage::set_oneof_e_1(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  if (!has_oneof_e_1()) {
    clear_o();
    set_has_oneof_e_1();
  }
  o_.oneof_e_1_ = value;
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.oneof_e_1)
}

// optional .proto2_preserve_unknown_enum_unittest.MyEnum oneof_e_2 = 6;
inline bool MyMessage::has_oneof_e_2() const {
  return o_case() == kOneofE2;
}
inline void MyMessage::set_has_oneof_e_2() {
  _oneof_case_[0] = kOneofE2;
}
inline void MyMessage::clear_oneof_e_2() {
  if (has_oneof_e_2()) {
    o_.oneof_e_2_ = 0;
    clear_has_o();
  }
}
inline ::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::oneof_e_2() const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.oneof_e_2)
  if (has_oneof_e_2()) {
    return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(o_.oneof_e_2_);
  }
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(0);
}
inline void MyMessage::set_oneof_e_2(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  if (!has_oneof_e_2()) {
    clear_o();
    set_has_oneof_e_2();
  }
  o_.oneof_e_2_ = value;
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.oneof_e_2)
}

inline bool MyMessage::has_o() const {
  return o_case() != O_NOT_SET;
}
inline void MyMessage::clear_has_o() {
  _oneof_case_[0] = O_NOT_SET;
}
inline MyMessage::OCase MyMessage::o_case() const {
  return MyMessage::OCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto2_preserve_unknown_enum_unittest

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::proto2_preserve_unknown_enum_unittest::MyEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto2_preserve_unknown_enum_unittest::MyEnum>() {
  return ::proto2_preserve_unknown_enum_unittest::MyEnum_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto
