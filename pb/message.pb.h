// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_message_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_message_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_message_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_message_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_message_2eproto;
namespace raft {
class HeartBeatResponse;
class HeartBeatResponseDefaultTypeInternal;
extern HeartBeatResponseDefaultTypeInternal _HeartBeatResponse_default_instance_;
class HeartBeatResquest;
class HeartBeatResquestDefaultTypeInternal;
extern HeartBeatResquestDefaultTypeInternal _HeartBeatResquest_default_instance_;
class VoteRequest;
class VoteRequestDefaultTypeInternal;
extern VoteRequestDefaultTypeInternal _VoteRequest_default_instance_;
class VoteResponse;
class VoteResponseDefaultTypeInternal;
extern VoteResponseDefaultTypeInternal _VoteResponse_default_instance_;
}  // namespace raft
PROTOBUF_NAMESPACE_OPEN
template<> ::raft::HeartBeatResponse* Arena::CreateMaybeMessage<::raft::HeartBeatResponse>(Arena*);
template<> ::raft::HeartBeatResquest* Arena::CreateMaybeMessage<::raft::HeartBeatResquest>(Arena*);
template<> ::raft::VoteRequest* Arena::CreateMaybeMessage<::raft::VoteRequest>(Arena*);
template<> ::raft::VoteResponse* Arena::CreateMaybeMessage<::raft::VoteResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace raft {

// ===================================================================

class HeartBeatResquest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:raft.HeartBeatResquest) */ {
 public:
  HeartBeatResquest();
  virtual ~HeartBeatResquest();

  HeartBeatResquest(const HeartBeatResquest& from);
  HeartBeatResquest(HeartBeatResquest&& from) noexcept
    : HeartBeatResquest() {
    *this = ::std::move(from);
  }

  inline HeartBeatResquest& operator=(const HeartBeatResquest& from) {
    CopyFrom(from);
    return *this;
  }
  inline HeartBeatResquest& operator=(HeartBeatResquest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const HeartBeatResquest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const HeartBeatResquest* internal_default_instance() {
    return reinterpret_cast<const HeartBeatResquest*>(
               &_HeartBeatResquest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(HeartBeatResquest& a, HeartBeatResquest& b) {
    a.Swap(&b);
  }
  inline void Swap(HeartBeatResquest* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline HeartBeatResquest* New() const final {
    return CreateMaybeMessage<HeartBeatResquest>(nullptr);
  }

  HeartBeatResquest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<HeartBeatResquest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const HeartBeatResquest& from);
  void MergeFrom(const HeartBeatResquest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HeartBeatResquest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "raft.HeartBeatResquest";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_message_2eproto);
    return ::descriptor_table_message_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEntriesFieldNumber = 5,
    kTermFieldNumber = 1,
    kLeaderIdFieldNumber = 2,
    kPrevLogIndexFieldNumber = 3,
    kLeaderCommitFieldNumber = 6,
    kPrevLogTermFieldNumber = 4,
  };
  // repeated string entries = 5;
  int entries_size() const;
  private:
  int _internal_entries_size() const;
  public:
  void clear_entries();
  const std::string& entries(int index) const;
  std::string* mutable_entries(int index);
  void set_entries(int index, const std::string& value);
  void set_entries(int index, std::string&& value);
  void set_entries(int index, const char* value);
  void set_entries(int index, const char* value, size_t size);
  std::string* add_entries();
  void add_entries(const std::string& value);
  void add_entries(std::string&& value);
  void add_entries(const char* value);
  void add_entries(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& entries() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_entries();
  private:
  const std::string& _internal_entries(int index) const;
  std::string* _internal_add_entries();
  public:

  // int32 term = 1;
  void clear_term();
  ::PROTOBUF_NAMESPACE_ID::int32 term() const;
  void set_term(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_term() const;
  void _internal_set_term(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 leader_id = 2;
  void clear_leader_id();
  ::PROTOBUF_NAMESPACE_ID::int32 leader_id() const;
  void set_leader_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_leader_id() const;
  void _internal_set_leader_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int64 prev_log_index = 3;
  void clear_prev_log_index();
  ::PROTOBUF_NAMESPACE_ID::int64 prev_log_index() const;
  void set_prev_log_index(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_prev_log_index() const;
  void _internal_set_prev_log_index(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int64 leader_commit = 6;
  void clear_leader_commit();
  ::PROTOBUF_NAMESPACE_ID::int64 leader_commit() const;
  void set_leader_commit(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_leader_commit() const;
  void _internal_set_leader_commit(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int32 prev_log_term = 4;
  void clear_prev_log_term();
  ::PROTOBUF_NAMESPACE_ID::int32 prev_log_term() const;
  void set_prev_log_term(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_prev_log_term() const;
  void _internal_set_prev_log_term(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:raft.HeartBeatResquest)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> entries_;
  ::PROTOBUF_NAMESPACE_ID::int32 term_;
  ::PROTOBUF_NAMESPACE_ID::int32 leader_id_;
  ::PROTOBUF_NAMESPACE_ID::int64 prev_log_index_;
  ::PROTOBUF_NAMESPACE_ID::int64 leader_commit_;
  ::PROTOBUF_NAMESPACE_ID::int32 prev_log_term_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_message_2eproto;
};
// -------------------------------------------------------------------

class HeartBeatResponse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:raft.HeartBeatResponse) */ {
 public:
  HeartBeatResponse();
  virtual ~HeartBeatResponse();

  HeartBeatResponse(const HeartBeatResponse& from);
  HeartBeatResponse(HeartBeatResponse&& from) noexcept
    : HeartBeatResponse() {
    *this = ::std::move(from);
  }

  inline HeartBeatResponse& operator=(const HeartBeatResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline HeartBeatResponse& operator=(HeartBeatResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const HeartBeatResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const HeartBeatResponse* internal_default_instance() {
    return reinterpret_cast<const HeartBeatResponse*>(
               &_HeartBeatResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(HeartBeatResponse& a, HeartBeatResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(HeartBeatResponse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline HeartBeatResponse* New() const final {
    return CreateMaybeMessage<HeartBeatResponse>(nullptr);
  }

  HeartBeatResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<HeartBeatResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const HeartBeatResponse& from);
  void MergeFrom(const HeartBeatResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HeartBeatResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "raft.HeartBeatResponse";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_message_2eproto);
    return ::descriptor_table_message_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTermFieldNumber = 1,
    kSuccessFieldNumber = 2,
  };
  // int64 term = 1;
  void clear_term();
  ::PROTOBUF_NAMESPACE_ID::int64 term() const;
  void set_term(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_term() const;
  void _internal_set_term(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // bool success = 2;
  void clear_success();
  bool success() const;
  void set_success(bool value);
  private:
  bool _internal_success() const;
  void _internal_set_success(bool value);
  public:

  // @@protoc_insertion_point(class_scope:raft.HeartBeatResponse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int64 term_;
  bool success_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_message_2eproto;
};
// -------------------------------------------------------------------

class VoteRequest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:raft.VoteRequest) */ {
 public:
  VoteRequest();
  virtual ~VoteRequest();

  VoteRequest(const VoteRequest& from);
  VoteRequest(VoteRequest&& from) noexcept
    : VoteRequest() {
    *this = ::std::move(from);
  }

  inline VoteRequest& operator=(const VoteRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline VoteRequest& operator=(VoteRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const VoteRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VoteRequest* internal_default_instance() {
    return reinterpret_cast<const VoteRequest*>(
               &_VoteRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(VoteRequest& a, VoteRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(VoteRequest* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline VoteRequest* New() const final {
    return CreateMaybeMessage<VoteRequest>(nullptr);
  }

  VoteRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<VoteRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const VoteRequest& from);
  void MergeFrom(const VoteRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(VoteRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "raft.VoteRequest";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_message_2eproto);
    return ::descriptor_table_message_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTermFieldNumber = 1,
    kCandidateIdFieldNumber = 2,
    kLastIndexFieldNumber = 3,
    kLastTermFieldNumber = 4,
  };
  // int32 term = 1;
  void clear_term();
  ::PROTOBUF_NAMESPACE_ID::int32 term() const;
  void set_term(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_term() const;
  void _internal_set_term(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 candidate_id = 2;
  void clear_candidate_id();
  ::PROTOBUF_NAMESPACE_ID::int32 candidate_id() const;
  void set_candidate_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_candidate_id() const;
  void _internal_set_candidate_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int64 last_index = 3;
  void clear_last_index();
  ::PROTOBUF_NAMESPACE_ID::int64 last_index() const;
  void set_last_index(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_last_index() const;
  void _internal_set_last_index(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int32 last_term = 4;
  void clear_last_term();
  ::PROTOBUF_NAMESPACE_ID::int32 last_term() const;
  void set_last_term(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_last_term() const;
  void _internal_set_last_term(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:raft.VoteRequest)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 term_;
  ::PROTOBUF_NAMESPACE_ID::int32 candidate_id_;
  ::PROTOBUF_NAMESPACE_ID::int64 last_index_;
  ::PROTOBUF_NAMESPACE_ID::int32 last_term_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_message_2eproto;
};
// -------------------------------------------------------------------

class VoteResponse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:raft.VoteResponse) */ {
 public:
  VoteResponse();
  virtual ~VoteResponse();

  VoteResponse(const VoteResponse& from);
  VoteResponse(VoteResponse&& from) noexcept
    : VoteResponse() {
    *this = ::std::move(from);
  }

  inline VoteResponse& operator=(const VoteResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline VoteResponse& operator=(VoteResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const VoteResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VoteResponse* internal_default_instance() {
    return reinterpret_cast<const VoteResponse*>(
               &_VoteResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(VoteResponse& a, VoteResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(VoteResponse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline VoteResponse* New() const final {
    return CreateMaybeMessage<VoteResponse>(nullptr);
  }

  VoteResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<VoteResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const VoteResponse& from);
  void MergeFrom(const VoteResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(VoteResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "raft.VoteResponse";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_message_2eproto);
    return ::descriptor_table_message_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTermFieldNumber = 1,
    kVoteGrantedFieldNumber = 2,
  };
  // int32 term = 1;
  void clear_term();
  ::PROTOBUF_NAMESPACE_ID::int32 term() const;
  void set_term(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_term() const;
  void _internal_set_term(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // bool vote_granted = 2;
  void clear_vote_granted();
  bool vote_granted() const;
  void set_vote_granted(bool value);
  private:
  bool _internal_vote_granted() const;
  void _internal_set_vote_granted(bool value);
  public:

  // @@protoc_insertion_point(class_scope:raft.VoteResponse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 term_;
  bool vote_granted_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_message_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HeartBeatResquest

// int32 term = 1;
inline void HeartBeatResquest::clear_term() {
  term_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 HeartBeatResquest::_internal_term() const {
  return term_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 HeartBeatResquest::term() const {
  // @@protoc_insertion_point(field_get:raft.HeartBeatResquest.term)
  return _internal_term();
}
inline void HeartBeatResquest::_internal_set_term(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  term_ = value;
}
inline void HeartBeatResquest::set_term(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_term(value);
  // @@protoc_insertion_point(field_set:raft.HeartBeatResquest.term)
}

// int32 leader_id = 2;
inline void HeartBeatResquest::clear_leader_id() {
  leader_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 HeartBeatResquest::_internal_leader_id() const {
  return leader_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 HeartBeatResquest::leader_id() const {
  // @@protoc_insertion_point(field_get:raft.HeartBeatResquest.leader_id)
  return _internal_leader_id();
}
inline void HeartBeatResquest::_internal_set_leader_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  leader_id_ = value;
}
inline void HeartBeatResquest::set_leader_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_leader_id(value);
  // @@protoc_insertion_point(field_set:raft.HeartBeatResquest.leader_id)
}

// int64 prev_log_index = 3;
inline void HeartBeatResquest::clear_prev_log_index() {
  prev_log_index_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 HeartBeatResquest::_internal_prev_log_index() const {
  return prev_log_index_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 HeartBeatResquest::prev_log_index() const {
  // @@protoc_insertion_point(field_get:raft.HeartBeatResquest.prev_log_index)
  return _internal_prev_log_index();
}
inline void HeartBeatResquest::_internal_set_prev_log_index(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  prev_log_index_ = value;
}
inline void HeartBeatResquest::set_prev_log_index(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_prev_log_index(value);
  // @@protoc_insertion_point(field_set:raft.HeartBeatResquest.prev_log_index)
}

// int32 prev_log_term = 4;
inline void HeartBeatResquest::clear_prev_log_term() {
  prev_log_term_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 HeartBeatResquest::_internal_prev_log_term() const {
  return prev_log_term_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 HeartBeatResquest::prev_log_term() const {
  // @@protoc_insertion_point(field_get:raft.HeartBeatResquest.prev_log_term)
  return _internal_prev_log_term();
}
inline void HeartBeatResquest::_internal_set_prev_log_term(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  prev_log_term_ = value;
}
inline void HeartBeatResquest::set_prev_log_term(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_prev_log_term(value);
  // @@protoc_insertion_point(field_set:raft.HeartBeatResquest.prev_log_term)
}

// repeated string entries = 5;
inline int HeartBeatResquest::_internal_entries_size() const {
  return entries_.size();
}
inline int HeartBeatResquest::entries_size() const {
  return _internal_entries_size();
}
inline void HeartBeatResquest::clear_entries() {
  entries_.Clear();
}
inline std::string* HeartBeatResquest::add_entries() {
  // @@protoc_insertion_point(field_add_mutable:raft.HeartBeatResquest.entries)
  return _internal_add_entries();
}
inline const std::string& HeartBeatResquest::_internal_entries(int index) const {
  return entries_.Get(index);
}
inline const std::string& HeartBeatResquest::entries(int index) const {
  // @@protoc_insertion_point(field_get:raft.HeartBeatResquest.entries)
  return _internal_entries(index);
}
inline std::string* HeartBeatResquest::mutable_entries(int index) {
  // @@protoc_insertion_point(field_mutable:raft.HeartBeatResquest.entries)
  return entries_.Mutable(index);
}
inline void HeartBeatResquest::set_entries(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:raft.HeartBeatResquest.entries)
  entries_.Mutable(index)->assign(value);
}
inline void HeartBeatResquest::set_entries(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:raft.HeartBeatResquest.entries)
  entries_.Mutable(index)->assign(std::move(value));
}
inline void HeartBeatResquest::set_entries(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  entries_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:raft.HeartBeatResquest.entries)
}
inline void HeartBeatResquest::set_entries(int index, const char* value, size_t size) {
  entries_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:raft.HeartBeatResquest.entries)
}
inline std::string* HeartBeatResquest::_internal_add_entries() {
  return entries_.Add();
}
inline void HeartBeatResquest::add_entries(const std::string& value) {
  entries_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:raft.HeartBeatResquest.entries)
}
inline void HeartBeatResquest::add_entries(std::string&& value) {
  entries_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:raft.HeartBeatResquest.entries)
}
inline void HeartBeatResquest::add_entries(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  entries_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:raft.HeartBeatResquest.entries)
}
inline void HeartBeatResquest::add_entries(const char* value, size_t size) {
  entries_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:raft.HeartBeatResquest.entries)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
HeartBeatResquest::entries() const {
  // @@protoc_insertion_point(field_list:raft.HeartBeatResquest.entries)
  return entries_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
HeartBeatResquest::mutable_entries() {
  // @@protoc_insertion_point(field_mutable_list:raft.HeartBeatResquest.entries)
  return &entries_;
}

// int64 leader_commit = 6;
inline void HeartBeatResquest::clear_leader_commit() {
  leader_commit_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 HeartBeatResquest::_internal_leader_commit() const {
  return leader_commit_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 HeartBeatResquest::leader_commit() const {
  // @@protoc_insertion_point(field_get:raft.HeartBeatResquest.leader_commit)
  return _internal_leader_commit();
}
inline void HeartBeatResquest::_internal_set_leader_commit(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  leader_commit_ = value;
}
inline void HeartBeatResquest::set_leader_commit(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_leader_commit(value);
  // @@protoc_insertion_point(field_set:raft.HeartBeatResquest.leader_commit)
}

// -------------------------------------------------------------------

// HeartBeatResponse

// int64 term = 1;
inline void HeartBeatResponse::clear_term() {
  term_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 HeartBeatResponse::_internal_term() const {
  return term_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 HeartBeatResponse::term() const {
  // @@protoc_insertion_point(field_get:raft.HeartBeatResponse.term)
  return _internal_term();
}
inline void HeartBeatResponse::_internal_set_term(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  term_ = value;
}
inline void HeartBeatResponse::set_term(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_term(value);
  // @@protoc_insertion_point(field_set:raft.HeartBeatResponse.term)
}

// bool success = 2;
inline void HeartBeatResponse::clear_success() {
  success_ = false;
}
inline bool HeartBeatResponse::_internal_success() const {
  return success_;
}
inline bool HeartBeatResponse::success() const {
  // @@protoc_insertion_point(field_get:raft.HeartBeatResponse.success)
  return _internal_success();
}
inline void HeartBeatResponse::_internal_set_success(bool value) {
  
  success_ = value;
}
inline void HeartBeatResponse::set_success(bool value) {
  _internal_set_success(value);
  // @@protoc_insertion_point(field_set:raft.HeartBeatResponse.success)
}

// -------------------------------------------------------------------

// VoteRequest

// int32 term = 1;
inline void VoteRequest::clear_term() {
  term_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 VoteRequest::_internal_term() const {
  return term_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 VoteRequest::term() const {
  // @@protoc_insertion_point(field_get:raft.VoteRequest.term)
  return _internal_term();
}
inline void VoteRequest::_internal_set_term(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  term_ = value;
}
inline void VoteRequest::set_term(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_term(value);
  // @@protoc_insertion_point(field_set:raft.VoteRequest.term)
}

// int32 candidate_id = 2;
inline void VoteRequest::clear_candidate_id() {
  candidate_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 VoteRequest::_internal_candidate_id() const {
  return candidate_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 VoteRequest::candidate_id() const {
  // @@protoc_insertion_point(field_get:raft.VoteRequest.candidate_id)
  return _internal_candidate_id();
}
inline void VoteRequest::_internal_set_candidate_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  candidate_id_ = value;
}
inline void VoteRequest::set_candidate_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_candidate_id(value);
  // @@protoc_insertion_point(field_set:raft.VoteRequest.candidate_id)
}

// int64 last_index = 3;
inline void VoteRequest::clear_last_index() {
  last_index_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 VoteRequest::_internal_last_index() const {
  return last_index_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 VoteRequest::last_index() const {
  // @@protoc_insertion_point(field_get:raft.VoteRequest.last_index)
  return _internal_last_index();
}
inline void VoteRequest::_internal_set_last_index(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  last_index_ = value;
}
inline void VoteRequest::set_last_index(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_last_index(value);
  // @@protoc_insertion_point(field_set:raft.VoteRequest.last_index)
}

// int32 last_term = 4;
inline void VoteRequest::clear_last_term() {
  last_term_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 VoteRequest::_internal_last_term() const {
  return last_term_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 VoteRequest::last_term() const {
  // @@protoc_insertion_point(field_get:raft.VoteRequest.last_term)
  return _internal_last_term();
}
inline void VoteRequest::_internal_set_last_term(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  last_term_ = value;
}
inline void VoteRequest::set_last_term(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_last_term(value);
  // @@protoc_insertion_point(field_set:raft.VoteRequest.last_term)
}

// -------------------------------------------------------------------

// VoteResponse

// int32 term = 1;
inline void VoteResponse::clear_term() {
  term_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 VoteResponse::_internal_term() const {
  return term_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 VoteResponse::term() const {
  // @@protoc_insertion_point(field_get:raft.VoteResponse.term)
  return _internal_term();
}
inline void VoteResponse::_internal_set_term(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  term_ = value;
}
inline void VoteResponse::set_term(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_term(value);
  // @@protoc_insertion_point(field_set:raft.VoteResponse.term)
}

// bool vote_granted = 2;
inline void VoteResponse::clear_vote_granted() {
  vote_granted_ = false;
}
inline bool VoteResponse::_internal_vote_granted() const {
  return vote_granted_;
}
inline bool VoteResponse::vote_granted() const {
  // @@protoc_insertion_point(field_get:raft.VoteResponse.vote_granted)
  return _internal_vote_granted();
}
inline void VoteResponse::_internal_set_vote_granted(bool value) {
  
  vote_granted_ = value;
}
inline void VoteResponse::set_vote_granted(bool value) {
  _internal_set_vote_granted(value);
  // @@protoc_insertion_point(field_set:raft.VoteResponse.vote_granted)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace raft

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_message_2eproto
