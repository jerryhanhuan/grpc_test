// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: digest.proto

#ifndef PROTOBUF_INCLUDED_digest_2eproto
#define PROTOBUF_INCLUDED_digest_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_digest_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_digest_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_digest_2eproto();
class DigestRequest;
class DigestRequestDefaultTypeInternal;
extern DigestRequestDefaultTypeInternal _DigestRequest_default_instance_;
class DigestResponse;
class DigestResponseDefaultTypeInternal;
extern DigestResponseDefaultTypeInternal _DigestResponse_default_instance_;
namespace google {
namespace protobuf {
template<> ::DigestRequest* Arena::CreateMaybeMessage<::DigestRequest>(Arena*);
template<> ::DigestResponse* Arena::CreateMaybeMessage<::DigestResponse>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class DigestRequest final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:DigestRequest) */ {
 public:
  DigestRequest();
  virtual ~DigestRequest();

  DigestRequest(const DigestRequest& from);

  inline DigestRequest& operator=(const DigestRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DigestRequest(DigestRequest&& from) noexcept
    : DigestRequest() {
    *this = ::std::move(from);
  }

  inline DigestRequest& operator=(DigestRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const DigestRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DigestRequest* internal_default_instance() {
    return reinterpret_cast<const DigestRequest*>(
               &_DigestRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(DigestRequest* other);
  friend void swap(DigestRequest& a, DigestRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DigestRequest* New() const final {
    return CreateMaybeMessage<DigestRequest>(nullptr);
  }

  DigestRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DigestRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DigestRequest& from);
  void MergeFrom(const DigestRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DigestRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated bytes messages = 2;
  int messages_size() const;
  void clear_messages();
  static const int kMessagesFieldNumber = 2;
  const ::std::string& messages(int index) const;
  ::std::string* mutable_messages(int index);
  void set_messages(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_messages(int index, ::std::string&& value);
  #endif
  void set_messages(int index, const char* value);
  void set_messages(int index, const void* value, size_t size);
  ::std::string* add_messages();
  void add_messages(const ::std::string& value);
  #if LANG_CXX11
  void add_messages(::std::string&& value);
  #endif
  void add_messages(const char* value);
  void add_messages(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField<::std::string>& messages() const;
  ::google::protobuf::RepeatedPtrField<::std::string>* mutable_messages();

  // string transformation = 1;
  void clear_transformation();
  static const int kTransformationFieldNumber = 1;
  const ::std::string& transformation() const;
  void set_transformation(const ::std::string& value);
  #if LANG_CXX11
  void set_transformation(::std::string&& value);
  #endif
  void set_transformation(const char* value);
  void set_transformation(const char* value, size_t size);
  ::std::string* mutable_transformation();
  ::std::string* release_transformation();
  void set_allocated_transformation(::std::string* transformation);

  // @@protoc_insertion_point(class_scope:DigestRequest)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField<::std::string> messages_;
  ::google::protobuf::internal::ArenaStringPtr transformation_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_digest_2eproto;
};
// -------------------------------------------------------------------

class DigestResponse final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:DigestResponse) */ {
 public:
  DigestResponse();
  virtual ~DigestResponse();

  DigestResponse(const DigestResponse& from);

  inline DigestResponse& operator=(const DigestResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DigestResponse(DigestResponse&& from) noexcept
    : DigestResponse() {
    *this = ::std::move(from);
  }

  inline DigestResponse& operator=(DigestResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const DigestResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DigestResponse* internal_default_instance() {
    return reinterpret_cast<const DigestResponse*>(
               &_DigestResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(DigestResponse* other);
  friend void swap(DigestResponse& a, DigestResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DigestResponse* New() const final {
    return CreateMaybeMessage<DigestResponse>(nullptr);
  }

  DigestResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DigestResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DigestResponse& from);
  void MergeFrom(const DigestResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DigestResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes digest = 1;
  void clear_digest();
  static const int kDigestFieldNumber = 1;
  const ::std::string& digest() const;
  void set_digest(const ::std::string& value);
  #if LANG_CXX11
  void set_digest(::std::string&& value);
  #endif
  void set_digest(const char* value);
  void set_digest(const void* value, size_t size);
  ::std::string* mutable_digest();
  ::std::string* release_digest();
  void set_allocated_digest(::std::string* digest);

  // @@protoc_insertion_point(class_scope:DigestResponse)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr digest_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_digest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DigestRequest

// string transformation = 1;
inline void DigestRequest::clear_transformation() {
  transformation_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DigestRequest::transformation() const {
  // @@protoc_insertion_point(field_get:DigestRequest.transformation)
  return transformation_.GetNoArena();
}
inline void DigestRequest::set_transformation(const ::std::string& value) {
  
  transformation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DigestRequest.transformation)
}
#if LANG_CXX11
inline void DigestRequest::set_transformation(::std::string&& value) {
  
  transformation_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DigestRequest.transformation)
}
#endif
inline void DigestRequest::set_transformation(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  transformation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DigestRequest.transformation)
}
inline void DigestRequest::set_transformation(const char* value, size_t size) {
  
  transformation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DigestRequest.transformation)
}
inline ::std::string* DigestRequest::mutable_transformation() {
  
  // @@protoc_insertion_point(field_mutable:DigestRequest.transformation)
  return transformation_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DigestRequest::release_transformation() {
  // @@protoc_insertion_point(field_release:DigestRequest.transformation)
  
  return transformation_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DigestRequest::set_allocated_transformation(::std::string* transformation) {
  if (transformation != nullptr) {
    
  } else {
    
  }
  transformation_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), transformation);
  // @@protoc_insertion_point(field_set_allocated:DigestRequest.transformation)
}

// repeated bytes messages = 2;
inline int DigestRequest::messages_size() const {
  return messages_.size();
}
inline void DigestRequest::clear_messages() {
  messages_.Clear();
}
inline const ::std::string& DigestRequest::messages(int index) const {
  // @@protoc_insertion_point(field_get:DigestRequest.messages)
  return messages_.Get(index);
}
inline ::std::string* DigestRequest::mutable_messages(int index) {
  // @@protoc_insertion_point(field_mutable:DigestRequest.messages)
  return messages_.Mutable(index);
}
inline void DigestRequest::set_messages(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:DigestRequest.messages)
  messages_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void DigestRequest::set_messages(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:DigestRequest.messages)
  messages_.Mutable(index)->assign(std::move(value));
}
#endif
inline void DigestRequest::set_messages(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  messages_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:DigestRequest.messages)
}
inline void DigestRequest::set_messages(int index, const void* value, size_t size) {
  messages_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:DigestRequest.messages)
}
inline ::std::string* DigestRequest::add_messages() {
  // @@protoc_insertion_point(field_add_mutable:DigestRequest.messages)
  return messages_.Add();
}
inline void DigestRequest::add_messages(const ::std::string& value) {
  messages_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:DigestRequest.messages)
}
#if LANG_CXX11
inline void DigestRequest::add_messages(::std::string&& value) {
  messages_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:DigestRequest.messages)
}
#endif
inline void DigestRequest::add_messages(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  messages_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:DigestRequest.messages)
}
inline void DigestRequest::add_messages(const void* value, size_t size) {
  messages_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:DigestRequest.messages)
}
inline const ::google::protobuf::RepeatedPtrField<::std::string>&
DigestRequest::messages() const {
  // @@protoc_insertion_point(field_list:DigestRequest.messages)
  return messages_;
}
inline ::google::protobuf::RepeatedPtrField<::std::string>*
DigestRequest::mutable_messages() {
  // @@protoc_insertion_point(field_mutable_list:DigestRequest.messages)
  return &messages_;
}

// -------------------------------------------------------------------

// DigestResponse

// bytes digest = 1;
inline void DigestResponse::clear_digest() {
  digest_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DigestResponse::digest() const {
  // @@protoc_insertion_point(field_get:DigestResponse.digest)
  return digest_.GetNoArena();
}
inline void DigestResponse::set_digest(const ::std::string& value) {
  
  digest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DigestResponse.digest)
}
#if LANG_CXX11
inline void DigestResponse::set_digest(::std::string&& value) {
  
  digest_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:DigestResponse.digest)
}
#endif
inline void DigestResponse::set_digest(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  digest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DigestResponse.digest)
}
inline void DigestResponse::set_digest(const void* value, size_t size) {
  
  digest_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DigestResponse.digest)
}
inline ::std::string* DigestResponse::mutable_digest() {
  
  // @@protoc_insertion_point(field_mutable:DigestResponse.digest)
  return digest_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DigestResponse::release_digest() {
  // @@protoc_insertion_point(field_release:DigestResponse.digest)
  
  return digest_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DigestResponse::set_allocated_digest(::std::string* digest) {
  if (digest != nullptr) {
    
  } else {
    
  }
  digest_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), digest);
  // @@protoc_insertion_point(field_set_allocated:DigestResponse.digest)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_digest_2eproto
