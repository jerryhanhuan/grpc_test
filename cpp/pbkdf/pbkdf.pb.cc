// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pbkdf.proto

#include "pbkdf.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

class PBKDFRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PBKDFRequest> _instance;
} _PBKDFRequest_default_instance_;
class PBKDFResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PBKDFResponse> _instance;
} _PBKDFResponse_default_instance_;
static void InitDefaultsPBKDFRequest_pbkdf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_PBKDFRequest_default_instance_;
    new (ptr) ::PBKDFRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::PBKDFRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_PBKDFRequest_pbkdf_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPBKDFRequest_pbkdf_2eproto}, {}};

static void InitDefaultsPBKDFResponse_pbkdf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_PBKDFResponse_default_instance_;
    new (ptr) ::PBKDFResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::PBKDFResponse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_PBKDFResponse_pbkdf_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPBKDFResponse_pbkdf_2eproto}, {}};

void InitDefaults_pbkdf_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_PBKDFRequest_pbkdf_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_PBKDFResponse_pbkdf_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_pbkdf_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_pbkdf_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_pbkdf_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_pbkdf_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::PBKDFRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::PBKDFRequest, password_),
  PROTOBUF_FIELD_OFFSET(::PBKDFRequest, key_size_),
  PROTOBUF_FIELD_OFFSET(::PBKDFRequest, pseudo_random_function_),
  PROTOBUF_FIELD_OFFSET(::PBKDFRequest, salts_),
  PROTOBUF_FIELD_OFFSET(::PBKDFRequest, iterations_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::PBKDFResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::PBKDFResponse, secret_key_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::PBKDFRequest)},
  { 10, -1, sizeof(::PBKDFResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_PBKDFRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_PBKDFResponse_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_pbkdf_2eproto = {
  {}, AddDescriptors_pbkdf_2eproto, "pbkdf.proto", schemas,
  file_default_instances, TableStruct_pbkdf_2eproto::offsets,
  file_level_metadata_pbkdf_2eproto, 2, file_level_enum_descriptors_pbkdf_2eproto, file_level_service_descriptors_pbkdf_2eproto,
};

const char descriptor_table_protodef_pbkdf_2eproto[] =
  "\n\013pbkdf.proto\"u\n\014PBKDFRequest\022\020\n\010passwor"
  "d\030\001 \001(\014\022\020\n\010key_size\030\002 \001(\005\022\036\n\026pseudo_rand"
  "om_function\030\003 \001(\t\022\r\n\005salts\030\004 \003(\014\022\022\n\niter"
  "ations\030\005 \001(\005\"#\n\rPBKDFResponse\022\022\n\nsecret_"
  "key\030\001 \001(\01428\n\014PBKDFService\022(\n\005Pbkdf\022\r.PBK"
  "DFRequest\032\016.PBKDFResponse\"\000b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_pbkdf_2eproto = {
  false, InitDefaults_pbkdf_2eproto, 
  descriptor_table_protodef_pbkdf_2eproto,
  "pbkdf.proto", &assign_descriptors_table_pbkdf_2eproto, 235,
};

void AddDescriptors_pbkdf_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_pbkdf_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_pbkdf_2eproto = []() { AddDescriptors_pbkdf_2eproto(); return true; }();

// ===================================================================

void PBKDFRequest::InitAsDefaultInstance() {
}
class PBKDFRequest::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PBKDFRequest::kPasswordFieldNumber;
const int PBKDFRequest::kKeySizeFieldNumber;
const int PBKDFRequest::kPseudoRandomFunctionFieldNumber;
const int PBKDFRequest::kSaltsFieldNumber;
const int PBKDFRequest::kIterationsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PBKDFRequest::PBKDFRequest()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:PBKDFRequest)
}
PBKDFRequest::PBKDFRequest(const PBKDFRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      salts_(from.salts_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  password_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.password().size() > 0) {
    password_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.password_);
  }
  pseudo_random_function_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.pseudo_random_function().size() > 0) {
    pseudo_random_function_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.pseudo_random_function_);
  }
  ::memcpy(&key_size_, &from.key_size_,
    static_cast<size_t>(reinterpret_cast<char*>(&iterations_) -
    reinterpret_cast<char*>(&key_size_)) + sizeof(iterations_));
  // @@protoc_insertion_point(copy_constructor:PBKDFRequest)
}

void PBKDFRequest::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_PBKDFRequest_pbkdf_2eproto.base);
  password_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pseudo_random_function_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&key_size_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&iterations_) -
      reinterpret_cast<char*>(&key_size_)) + sizeof(iterations_));
}

PBKDFRequest::~PBKDFRequest() {
  // @@protoc_insertion_point(destructor:PBKDFRequest)
  SharedDtor();
}

void PBKDFRequest::SharedDtor() {
  password_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pseudo_random_function_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PBKDFRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PBKDFRequest& PBKDFRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_PBKDFRequest_pbkdf_2eproto.base);
  return *internal_default_instance();
}


void PBKDFRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:PBKDFRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  salts_.Clear();
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pseudo_random_function_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&key_size_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&iterations_) -
      reinterpret_cast<char*>(&key_size_)) + sizeof(iterations_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* PBKDFRequest::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<PBKDFRequest*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // bytes password = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        object = msg->mutable_password();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParser;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheck(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // int32 key_size = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        msg->set_key_size(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // string pseudo_random_function = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("PBKDFRequest.pseudo_random_function");
        object = msg->mutable_pseudo_random_function();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // repeated bytes salts = 4;
      case 4: {
        if (static_cast<::google::protobuf::uint8>(tag) != 34) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          object = msg->add_salts();
          if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
            parser_till_end = ::google::protobuf::internal::GreedyStringParser;
            goto string_till_end;
          }
          GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheck(ptr, size, ctx));
          ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
          ptr += size;
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 34 && (ptr += 1));
        break;
      }
      // int32 iterations = 5;
      case 5: {
        if (static_cast<::google::protobuf::uint8>(tag) != 40) goto handle_unusual;
        msg->set_iterations(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool PBKDFRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PBKDFRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes password = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_password()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 key_size = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &key_size_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string pseudo_random_function = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_pseudo_random_function()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->pseudo_random_function().data(), static_cast<int>(this->pseudo_random_function().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "PBKDFRequest.pseudo_random_function"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated bytes salts = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (34 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_salts()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 iterations = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (40 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &iterations_)));
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
  // @@protoc_insertion_point(parse_success:PBKDFRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PBKDFRequest)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void PBKDFRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PBKDFRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes password = 1;
  if (this->password().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->password(), output);
  }

  // int32 key_size = 2;
  if (this->key_size() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->key_size(), output);
  }

  // string pseudo_random_function = 3;
  if (this->pseudo_random_function().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->pseudo_random_function().data(), static_cast<int>(this->pseudo_random_function().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "PBKDFRequest.pseudo_random_function");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->pseudo_random_function(), output);
  }

  // repeated bytes salts = 4;
  for (int i = 0, n = this->salts_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      4, this->salts(i), output);
  }

  // int32 iterations = 5;
  if (this->iterations() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->iterations(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:PBKDFRequest)
}

::google::protobuf::uint8* PBKDFRequest::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:PBKDFRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes password = 1;
  if (this->password().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->password(), target);
  }

  // int32 key_size = 2;
  if (this->key_size() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->key_size(), target);
  }

  // string pseudo_random_function = 3;
  if (this->pseudo_random_function().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->pseudo_random_function().data(), static_cast<int>(this->pseudo_random_function().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "PBKDFRequest.pseudo_random_function");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->pseudo_random_function(), target);
  }

  // repeated bytes salts = 4;
  for (int i = 0, n = this->salts_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBytesToArray(4, this->salts(i), target);
  }

  // int32 iterations = 5;
  if (this->iterations() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->iterations(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PBKDFRequest)
  return target;
}

size_t PBKDFRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PBKDFRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bytes salts = 4;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->salts_size());
  for (int i = 0, n = this->salts_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->salts(i));
  }

  // bytes password = 1;
  if (this->password().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->password());
  }

  // string pseudo_random_function = 3;
  if (this->pseudo_random_function().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->pseudo_random_function());
  }

  // int32 key_size = 2;
  if (this->key_size() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->key_size());
  }

  // int32 iterations = 5;
  if (this->iterations() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->iterations());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PBKDFRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PBKDFRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const PBKDFRequest* source =
      ::google::protobuf::DynamicCastToGenerated<PBKDFRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PBKDFRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PBKDFRequest)
    MergeFrom(*source);
  }
}

void PBKDFRequest::MergeFrom(const PBKDFRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PBKDFRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  salts_.MergeFrom(from.salts_);
  if (from.password().size() > 0) {

    password_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.password_);
  }
  if (from.pseudo_random_function().size() > 0) {

    pseudo_random_function_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.pseudo_random_function_);
  }
  if (from.key_size() != 0) {
    set_key_size(from.key_size());
  }
  if (from.iterations() != 0) {
    set_iterations(from.iterations());
  }
}

void PBKDFRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PBKDFRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PBKDFRequest::CopyFrom(const PBKDFRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PBKDFRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PBKDFRequest::IsInitialized() const {
  return true;
}

void PBKDFRequest::Swap(PBKDFRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PBKDFRequest::InternalSwap(PBKDFRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  salts_.InternalSwap(CastToBase(&other->salts_));
  password_.Swap(&other->password_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  pseudo_random_function_.Swap(&other->pseudo_random_function_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(key_size_, other->key_size_);
  swap(iterations_, other->iterations_);
}

::google::protobuf::Metadata PBKDFRequest::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_pbkdf_2eproto);
  return ::file_level_metadata_pbkdf_2eproto[kIndexInFileMessages];
}


// ===================================================================

void PBKDFResponse::InitAsDefaultInstance() {
}
class PBKDFResponse::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PBKDFResponse::kSecretKeyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PBKDFResponse::PBKDFResponse()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:PBKDFResponse)
}
PBKDFResponse::PBKDFResponse(const PBKDFResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  secret_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.secret_key().size() > 0) {
    secret_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.secret_key_);
  }
  // @@protoc_insertion_point(copy_constructor:PBKDFResponse)
}

void PBKDFResponse::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_PBKDFResponse_pbkdf_2eproto.base);
  secret_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PBKDFResponse::~PBKDFResponse() {
  // @@protoc_insertion_point(destructor:PBKDFResponse)
  SharedDtor();
}

void PBKDFResponse::SharedDtor() {
  secret_key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PBKDFResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PBKDFResponse& PBKDFResponse::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_PBKDFResponse_pbkdf_2eproto.base);
  return *internal_default_instance();
}


void PBKDFResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:PBKDFResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  secret_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* PBKDFResponse::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<PBKDFResponse*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // bytes secret_key = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        object = msg->mutable_secret_key();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParser;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheck(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool PBKDFResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PBKDFResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes secret_key = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_secret_key()));
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
  // @@protoc_insertion_point(parse_success:PBKDFResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PBKDFResponse)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void PBKDFResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PBKDFResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes secret_key = 1;
  if (this->secret_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->secret_key(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:PBKDFResponse)
}

::google::protobuf::uint8* PBKDFResponse::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:PBKDFResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes secret_key = 1;
  if (this->secret_key().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->secret_key(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PBKDFResponse)
  return target;
}

size_t PBKDFResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PBKDFResponse)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes secret_key = 1;
  if (this->secret_key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->secret_key());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PBKDFResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PBKDFResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const PBKDFResponse* source =
      ::google::protobuf::DynamicCastToGenerated<PBKDFResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PBKDFResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PBKDFResponse)
    MergeFrom(*source);
  }
}

void PBKDFResponse::MergeFrom(const PBKDFResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PBKDFResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.secret_key().size() > 0) {

    secret_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.secret_key_);
  }
}

void PBKDFResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PBKDFResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PBKDFResponse::CopyFrom(const PBKDFResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PBKDFResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PBKDFResponse::IsInitialized() const {
  return true;
}

void PBKDFResponse::Swap(PBKDFResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PBKDFResponse::InternalSwap(PBKDFResponse* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  secret_key_.Swap(&other->secret_key_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata PBKDFResponse::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_pbkdf_2eproto);
  return ::file_level_metadata_pbkdf_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::PBKDFRequest* Arena::CreateMaybeMessage< ::PBKDFRequest >(Arena* arena) {
  return Arena::CreateInternal< ::PBKDFRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::PBKDFResponse* Arena::CreateMaybeMessage< ::PBKDFResponse >(Arena* arena) {
  return Arena::CreateInternal< ::PBKDFResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
