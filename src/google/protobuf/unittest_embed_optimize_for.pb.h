// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_embed_optimize_for.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include "google/protobuf/unittest_optimize_for.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto;
namespace protobuf_unittest {
class TestEmbedOptimizedForSize;
class TestEmbedOptimizedForSizeDefaultTypeInternal;
extern TestEmbedOptimizedForSizeDefaultTypeInternal _TestEmbedOptimizedForSize_default_instance_;
}  // namespace protobuf_unittest
PROTOBUF_NAMESPACE_OPEN
template<> ::protobuf_unittest::TestEmbedOptimizedForSize* Arena::CreateMaybeMessage<::protobuf_unittest::TestEmbedOptimizedForSize>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace protobuf_unittest {

// ===================================================================

class TestEmbedOptimizedForSize :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protobuf_unittest.TestEmbedOptimizedForSize) */ {
 public:
  TestEmbedOptimizedForSize();
  virtual ~TestEmbedOptimizedForSize();

  TestEmbedOptimizedForSize(const TestEmbedOptimizedForSize& from);
  TestEmbedOptimizedForSize(TestEmbedOptimizedForSize&& from) noexcept
    : TestEmbedOptimizedForSize() {
    *this = ::std::move(from);
  }

  inline TestEmbedOptimizedForSize& operator=(const TestEmbedOptimizedForSize& from) {
    CopyFrom(from);
    return *this;
  }
  inline TestEmbedOptimizedForSize& operator=(TestEmbedOptimizedForSize&& from) noexcept {
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
  static const TestEmbedOptimizedForSize& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestEmbedOptimizedForSize* internal_default_instance() {
    return reinterpret_cast<const TestEmbedOptimizedForSize*>(
               &_TestEmbedOptimizedForSize_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(TestEmbedOptimizedForSize* other);
  friend void swap(TestEmbedOptimizedForSize& a, TestEmbedOptimizedForSize& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestEmbedOptimizedForSize* New() const final {
    return CreateMaybeMessage<TestEmbedOptimizedForSize>(nullptr);
  }

  TestEmbedOptimizedForSize* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TestEmbedOptimizedForSize>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TestEmbedOptimizedForSize& from);
  void MergeFrom(const TestEmbedOptimizedForSize& from);
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
  void InternalSwap(TestEmbedOptimizedForSize* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protobuf_unittest.TestEmbedOptimizedForSize";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto);
    return ::descriptor_table_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .protobuf_unittest.TestOptimizedForSize repeated_message = 2;
  int repeated_message_size() const;
  void clear_repeated_message();
  static const int kRepeatedMessageFieldNumber = 2;
  ::protobuf_unittest::TestOptimizedForSize* mutable_repeated_message(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize >*
      mutable_repeated_message();
  const ::protobuf_unittest::TestOptimizedForSize& repeated_message(int index) const;
  ::protobuf_unittest::TestOptimizedForSize* add_repeated_message();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize >&
      repeated_message() const;

  // optional .protobuf_unittest.TestOptimizedForSize optional_message = 1;
  bool has_optional_message() const;
  void clear_optional_message();
  static const int kOptionalMessageFieldNumber = 1;
  const ::protobuf_unittest::TestOptimizedForSize& optional_message() const;
  ::protobuf_unittest::TestOptimizedForSize* release_optional_message();
  ::protobuf_unittest::TestOptimizedForSize* mutable_optional_message();
  void set_allocated_optional_message(::protobuf_unittest::TestOptimizedForSize* optional_message);

  // @@protoc_insertion_point(class_scope:protobuf_unittest.TestEmbedOptimizedForSize)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize > repeated_message_;
  ::protobuf_unittest::TestOptimizedForSize* optional_message_;
  friend struct ::TableStruct_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestEmbedOptimizedForSize

// optional .protobuf_unittest.TestOptimizedForSize optional_message = 1;
inline bool TestEmbedOptimizedForSize::has_optional_message() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::protobuf_unittest::TestOptimizedForSize& TestEmbedOptimizedForSize::optional_message() const {
  const ::protobuf_unittest::TestOptimizedForSize* p = optional_message_;
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestEmbedOptimizedForSize.optional_message)
  return p != nullptr ? *p : *reinterpret_cast<const ::protobuf_unittest::TestOptimizedForSize*>(
      &::protobuf_unittest::_TestOptimizedForSize_default_instance_);
}
inline ::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::release_optional_message() {
  // @@protoc_insertion_point(field_release:protobuf_unittest.TestEmbedOptimizedForSize.optional_message)
  _has_bits_[0] &= ~0x00000001u;
  ::protobuf_unittest::TestOptimizedForSize* temp = optional_message_;
  optional_message_ = nullptr;
  return temp;
}
inline ::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::mutable_optional_message() {
  _has_bits_[0] |= 0x00000001u;
  if (optional_message_ == nullptr) {
    auto* p = CreateMaybeMessage<::protobuf_unittest::TestOptimizedForSize>(GetArenaNoVirtual());
    optional_message_ = p;
  }
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestEmbedOptimizedForSize.optional_message)
  return optional_message_;
}
inline void TestEmbedOptimizedForSize::set_allocated_optional_message(::protobuf_unittest::TestOptimizedForSize* optional_message) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(optional_message_);
  }
  if (optional_message) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      optional_message = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, optional_message, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  optional_message_ = optional_message;
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestEmbedOptimizedForSize.optional_message)
}

// repeated .protobuf_unittest.TestOptimizedForSize repeated_message = 2;
inline int TestEmbedOptimizedForSize::repeated_message_size() const {
  return repeated_message_.size();
}
inline ::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::mutable_repeated_message(int index) {
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestEmbedOptimizedForSize.repeated_message)
  return repeated_message_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize >*
TestEmbedOptimizedForSize::mutable_repeated_message() {
  // @@protoc_insertion_point(field_mutable_list:protobuf_unittest.TestEmbedOptimizedForSize.repeated_message)
  return &repeated_message_;
}
inline const ::protobuf_unittest::TestOptimizedForSize& TestEmbedOptimizedForSize::repeated_message(int index) const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestEmbedOptimizedForSize.repeated_message)
  return repeated_message_.Get(index);
}
inline ::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::add_repeated_message() {
  // @@protoc_insertion_point(field_add:protobuf_unittest.TestEmbedOptimizedForSize.repeated_message)
  return repeated_message_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize >&
TestEmbedOptimizedForSize::repeated_message() const {
  // @@protoc_insertion_point(field_list:protobuf_unittest.TestEmbedOptimizedForSize.repeated_message)
  return repeated_message_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_unittest

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto
