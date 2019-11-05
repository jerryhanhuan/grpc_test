// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: wrapkeys.proto

#include "wrapkeys.pb.h"

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

extern PROTOBUF_INTERNAL_EXPORT_wrapkeys_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Key_wrapkeys_2eproto;
class CipherDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Cipher> _instance;
} _Cipher_default_instance_;
class KeyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Key> _instance;
} _Key_default_instance_;
static void InitDefaultsCipher_wrapkeys_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Cipher_default_instance_;
    new (ptr) ::Cipher();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Cipher::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Cipher_wrapkeys_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsCipher_wrapkeys_2eproto}, {
      &scc_info_Key_wrapkeys_2eproto.base,}};

static void InitDefaultsKey_wrapkeys_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Key_default_instance_;
    new (ptr) ::Key();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Key::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Key_wrapkeys_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsKey_wrapkeys_2eproto}, {}};

void InitDefaults_wrapkeys_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Cipher_wrapkeys_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Key_wrapkeys_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_wrapkeys_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_wrapkeys_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_wrapkeys_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_wrapkeys_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Cipher, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Cipher, transformation_),
  PROTOBUF_FIELD_OFFSET(::Cipher, messages_),
  PROTOBUF_FIELD_OFFSET(::Cipher, wrappingkeys_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Key, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Key, transformation_),
  PROTOBUF_FIELD_OFFSET(::Key, key_size_),
  PROTOBUF_FIELD_OFFSET(::Key, secret_key_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Cipher)},
  { 8, -1, sizeof(::Key)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_Cipher_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_Key_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_wrapkeys_2eproto = {
  {}, AddDescriptors_wrapkeys_2eproto, "wrapkeys.proto", schemas,
  file_default_instances, TableStruct_wrapkeys_2eproto::offsets,
  file_level_metadata_wrapkeys_2eproto, 2, file_level_enum_descriptors_wrapkeys_2eproto, file_level_service_descriptors_wrapkeys_2eproto,
};

const char descriptor_table_protodef_wrapkeys_2eproto[] =
  "\n\016wrapkeys.proto\"N\n\006Cipher\022\026\n\016transforma"
  "tion\030\001 \001(\t\022\020\n\010messages\030\002 \003(\014\022\032\n\014wrapping"
  "Keys\030\003 \003(\0132\004.Key\"C\n\003Key\022\026\n\016transformatio"
  "n\030\001 \001(\t\022\020\n\010key_size\030\002 \001(\005\022\022\n\nsecret_key\030"
  "\004 \001(\0142%\n\007WrapKey\022\032\n\004Wrap\022\007.Cipher\032\007.Ciph"
  "er\"\000b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_wrapkeys_2eproto = {
  false, InitDefaults_wrapkeys_2eproto, 
  descriptor_table_protodef_wrapkeys_2eproto,
  "wrapkeys.proto", &assign_descriptors_table_wrapkeys_2eproto, 212,
};

void AddDescriptors_wrapkeys_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_wrapkeys_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_wrapkeys_2eproto = []() { AddDescriptors_wrapkeys_2eproto(); return true; }();

// ===================================================================

void Cipher::InitAsDefaultInstance() {
}
class Cipher::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Cipher::kTransformationFieldNumber;
const int Cipher::kMessagesFieldNumber;
const int Cipher::kWrappingKeysFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Cipher::Cipher()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Cipher)
}
Cipher::Cipher(const Cipher& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      messages_(from.messages_),
      wrappingkeys_(from.wrappingkeys_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  transformation_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.transformation().size() > 0) {
    transformation_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.transformation_);
  }
  // @@protoc_insertion_point(copy_constructor:Cipher)
}

void Cipher::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Cipher_wrapkeys_2eproto.base);
  transformation_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Cipher::~Cipher() {
  // @@protoc_insertion_point(destructor:Cipher)
  SharedDtor();
}

void Cipher::SharedDtor() {
  transformation_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Cipher::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Cipher& Cipher::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Cipher_wrapkeys_2eproto.base);
  return *internal_default_instance();
}


void Cipher::Clear() {
// @@protoc_insertion_point(message_clear_start:Cipher)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  messages_.Clear();
  wrappingkeys_.Clear();
  transformation_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Cipher::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Cipher*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string transformation = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("Cipher.transformation");
        object = msg->mutable_transformation();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // repeated bytes messages = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          object = msg->add_messages();
          if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
            parser_till_end = ::google::protobuf::internal::GreedyStringParser;
            goto string_till_end;
          }
          GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheck(ptr, size, ctx));
          ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
          ptr += size;
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 18 && (ptr += 1));
        break;
      }
      // repeated .Key wrappingKeys = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          parser_till_end = ::Key::_InternalParse;
          object = msg->add_wrappingkeys();
          if (size > end - ptr) goto len_delim_till_end;
          ptr += size;
          GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
              {parser_till_end, object}, ptr - size, ptr));
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 26 && (ptr += 1));
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
bool Cipher::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Cipher)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string transformation = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_transformation()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->transformation().data(), static_cast<int>(this->transformation().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Cipher.transformation"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated bytes messages = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_messages()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .Key wrappingKeys = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_wrappingkeys()));
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
  // @@protoc_insertion_point(parse_success:Cipher)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Cipher)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Cipher::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Cipher)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string transformation = 1;
  if (this->transformation().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->transformation().data(), static_cast<int>(this->transformation().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Cipher.transformation");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->transformation(), output);
  }

  // repeated bytes messages = 2;
  for (int i = 0, n = this->messages_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->messages(i), output);
  }

  // repeated .Key wrappingKeys = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->wrappingkeys_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3,
      this->wrappingkeys(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Cipher)
}

::google::protobuf::uint8* Cipher::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Cipher)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string transformation = 1;
  if (this->transformation().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->transformation().data(), static_cast<int>(this->transformation().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Cipher.transformation");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->transformation(), target);
  }

  // repeated bytes messages = 2;
  for (int i = 0, n = this->messages_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBytesToArray(2, this->messages(i), target);
  }

  // repeated .Key wrappingKeys = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->wrappingkeys_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->wrappingkeys(static_cast<int>(i)), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Cipher)
  return target;
}

size_t Cipher::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Cipher)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bytes messages = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->messages_size());
  for (int i = 0, n = this->messages_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->messages(i));
  }

  // repeated .Key wrappingKeys = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->wrappingkeys_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->wrappingkeys(static_cast<int>(i)));
    }
  }

  // string transformation = 1;
  if (this->transformation().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->transformation());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Cipher::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Cipher)
  GOOGLE_DCHECK_NE(&from, this);
  const Cipher* source =
      ::google::protobuf::DynamicCastToGenerated<Cipher>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Cipher)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Cipher)
    MergeFrom(*source);
  }
}

void Cipher::MergeFrom(const Cipher& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Cipher)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  messages_.MergeFrom(from.messages_);
  wrappingkeys_.MergeFrom(from.wrappingkeys_);
  if (from.transformation().size() > 0) {

    transformation_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.transformation_);
  }
}

void Cipher::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Cipher)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Cipher::CopyFrom(const Cipher& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Cipher)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Cipher::IsInitialized() const {
  return true;
}

void Cipher::Swap(Cipher* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Cipher::InternalSwap(Cipher* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  messages_.InternalSwap(CastToBase(&other->messages_));
  CastToBase(&wrappingkeys_)->InternalSwap(CastToBase(&other->wrappingkeys_));
  transformation_.Swap(&other->transformation_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata Cipher::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_wrapkeys_2eproto);
  return ::file_level_metadata_wrapkeys_2eproto[kIndexInFileMessages];
}


// ===================================================================

void Key::InitAsDefaultInstance() {
}
class Key::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Key::kTransformationFieldNumber;
const int Key::kKeySizeFieldNumber;
const int Key::kSecretKeyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Key::Key()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Key)
}
Key::Key(const Key& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  transformation_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.transformation().size() > 0) {
    transformation_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.transformation_);
  }
  secret_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.secret_key().size() > 0) {
    secret_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.secret_key_);
  }
  key_size_ = from.key_size_;
  // @@protoc_insertion_point(copy_constructor:Key)
}

void Key::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Key_wrapkeys_2eproto.base);
  transformation_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  secret_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  key_size_ = 0;
}

Key::~Key() {
  // @@protoc_insertion_point(destructor:Key)
  SharedDtor();
}

void Key::SharedDtor() {
  transformation_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  secret_key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Key::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Key& Key::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Key_wrapkeys_2eproto.base);
  return *internal_default_instance();
}


void Key::Clear() {
// @@protoc_insertion_point(message_clear_start:Key)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  transformation_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  secret_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  key_size_ = 0;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Key::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Key*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string transformation = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("Key.transformation");
        object = msg->mutable_transformation();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
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
      // bytes secret_key = 4;
      case 4: {
        if (static_cast<::google::protobuf::uint8>(tag) != 34) goto handle_unusual;
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
bool Key::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Key)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string transformation = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_transformation()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->transformation().data(), static_cast<int>(this->transformation().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Key.transformation"));
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

      // bytes secret_key = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (34 & 0xFF)) {
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
  // @@protoc_insertion_point(parse_success:Key)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Key)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Key::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Key)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string transformation = 1;
  if (this->transformation().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->transformation().data(), static_cast<int>(this->transformation().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Key.transformation");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->transformation(), output);
  }

  // int32 key_size = 2;
  if (this->key_size() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->key_size(), output);
  }

  // bytes secret_key = 4;
  if (this->secret_key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->secret_key(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Key)
}

::google::protobuf::uint8* Key::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Key)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string transformation = 1;
  if (this->transformation().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->transformation().data(), static_cast<int>(this->transformation().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Key.transformation");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->transformation(), target);
  }

  // int32 key_size = 2;
  if (this->key_size() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->key_size(), target);
  }

  // bytes secret_key = 4;
  if (this->secret_key().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->secret_key(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Key)
  return target;
}

size_t Key::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Key)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string transformation = 1;
  if (this->transformation().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->transformation());
  }

  // bytes secret_key = 4;
  if (this->secret_key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->secret_key());
  }

  // int32 key_size = 2;
  if (this->key_size() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->key_size());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Key::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Key)
  GOOGLE_DCHECK_NE(&from, this);
  const Key* source =
      ::google::protobuf::DynamicCastToGenerated<Key>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Key)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Key)
    MergeFrom(*source);
  }
}

void Key::MergeFrom(const Key& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Key)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.transformation().size() > 0) {

    transformation_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.transformation_);
  }
  if (from.secret_key().size() > 0) {

    secret_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.secret_key_);
  }
  if (from.key_size() != 0) {
    set_key_size(from.key_size());
  }
}

void Key::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Key)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Key::CopyFrom(const Key& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Key)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Key::IsInitialized() const {
  return true;
}

void Key::Swap(Key* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Key::InternalSwap(Key* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  transformation_.Swap(&other->transformation_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  secret_key_.Swap(&other->secret_key_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(key_size_, other->key_size_);
}

::google::protobuf::Metadata Key::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_wrapkeys_2eproto);
  return ::file_level_metadata_wrapkeys_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::Cipher* Arena::CreateMaybeMessage< ::Cipher >(Arena* arena) {
  return Arena::CreateInternal< ::Cipher >(arena);
}
template<> PROTOBUF_NOINLINE ::Key* Arena::CreateMaybeMessage< ::Key >(Arena* arena) {
  return Arena::CreateInternal< ::Key >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>