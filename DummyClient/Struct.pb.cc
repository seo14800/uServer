// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: Struct.proto
// Protobuf C++ Version: 5.27.2

#include "Struct.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace Protocol {

inline constexpr PosInfo::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : object_id_{::uint64_t{0u}},
        x_{0},
        y_{0},
        z_{0},
        yaw_{0},
        state_{static_cast< ::Protocol::MoveState >(0)},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR PosInfo::PosInfo(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct PosInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PosInfoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PosInfoDefaultTypeInternal() {}
  union {
    PosInfo _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PosInfoDefaultTypeInternal _PosInfo_default_instance_;

inline constexpr ObjectInfo::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        pos_info_{nullptr},
        object_id_{::uint64_t{0u}},
        object_type_{static_cast< ::Protocol::ObjectType >(0)} {}

template <typename>
PROTOBUF_CONSTEXPR ObjectInfo::ObjectInfo(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct ObjectInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ObjectInfoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ObjectInfoDefaultTypeInternal() {}
  union {
    ObjectInfo _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ObjectInfoDefaultTypeInternal _ObjectInfo_default_instance_;
}  // namespace Protocol
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_Struct_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_Struct_2eproto = nullptr;
const ::uint32_t
    TableStruct_Struct_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::Protocol::PosInfo, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::Protocol::PosInfo, _impl_.object_id_),
        PROTOBUF_FIELD_OFFSET(::Protocol::PosInfo, _impl_.x_),
        PROTOBUF_FIELD_OFFSET(::Protocol::PosInfo, _impl_.y_),
        PROTOBUF_FIELD_OFFSET(::Protocol::PosInfo, _impl_.z_),
        PROTOBUF_FIELD_OFFSET(::Protocol::PosInfo, _impl_.yaw_),
        PROTOBUF_FIELD_OFFSET(::Protocol::PosInfo, _impl_.state_),
        PROTOBUF_FIELD_OFFSET(::Protocol::ObjectInfo, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::Protocol::ObjectInfo, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::Protocol::ObjectInfo, _impl_.object_id_),
        PROTOBUF_FIELD_OFFSET(::Protocol::ObjectInfo, _impl_.object_type_),
        PROTOBUF_FIELD_OFFSET(::Protocol::ObjectInfo, _impl_.pos_info_),
        ~0u,
        ~0u,
        0,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::Protocol::PosInfo)},
        {14, 25, -1, sizeof(::Protocol::ObjectInfo)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::Protocol::_PosInfo_default_instance_._instance,
    &::Protocol::_ObjectInfo_default_instance_._instance,
};
const char descriptor_table_protodef_Struct_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\014Struct.proto\022\010Protocol\032\nEnum.proto\"n\n\007"
    "PosInfo\022\021\n\tobject_id\030\001 \001(\004\022\t\n\001x\030\002 \001(\002\022\t\n"
    "\001y\030\003 \001(\002\022\t\n\001z\030\004 \001(\002\022\013\n\003yaw\030\005 \001(\002\022\"\n\005stat"
    "e\030\006 \001(\0162\023.Protocol.MoveState\"o\n\nObjectIn"
    "fo\022\021\n\tobject_id\030\001 \001(\004\022)\n\013object_type\030\002 \001"
    "(\0162\024.Protocol.ObjectType\022#\n\010pos_info\030\003 \001"
    "(\0132\021.Protocol.PosInfob\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_Struct_2eproto_deps[1] =
    {
        &::descriptor_table_Enum_2eproto,
};
static ::absl::once_flag descriptor_table_Struct_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_Struct_2eproto = {
    false,
    false,
    269,
    descriptor_table_protodef_Struct_2eproto,
    "Struct.proto",
    &descriptor_table_Struct_2eproto_once,
    descriptor_table_Struct_2eproto_deps,
    1,
    2,
    schemas,
    file_default_instances,
    TableStruct_Struct_2eproto::offsets,
    file_level_enum_descriptors_Struct_2eproto,
    file_level_service_descriptors_Struct_2eproto,
};
namespace Protocol {
// ===================================================================

class PosInfo::_Internal {
 public:
};

PosInfo::PosInfo(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Protocol.PosInfo)
}
PosInfo::PosInfo(
    ::google::protobuf::Arena* arena, const PosInfo& from)
    : PosInfo(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE PosInfo::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void PosInfo::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, object_id_),
           0,
           offsetof(Impl_, state_) -
               offsetof(Impl_, object_id_) +
               sizeof(Impl_::state_));
}
PosInfo::~PosInfo() {
  // @@protoc_insertion_point(destructor:Protocol.PosInfo)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void PosInfo::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
PosInfo::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(PosInfo, _impl_._cached_size_),
              false,
          },
          &PosInfo::MergeImpl,
          &PosInfo::kDescriptorMethods,
          &descriptor_table_Struct_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<3, 6, 0, 0, 2> PosInfo::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    6, 56,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967232,  // skipmap
    offsetof(decltype(_table_), field_entries),
    6,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_PosInfo_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::Protocol::PosInfo>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // uint64 object_id = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint64_t, offsetof(PosInfo, _impl_.object_id_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(PosInfo, _impl_.object_id_)}},
    // float x = 2;
    {::_pbi::TcParser::FastF32S1,
     {21, 63, 0, PROTOBUF_FIELD_OFFSET(PosInfo, _impl_.x_)}},
    // float y = 3;
    {::_pbi::TcParser::FastF32S1,
     {29, 63, 0, PROTOBUF_FIELD_OFFSET(PosInfo, _impl_.y_)}},
    // float z = 4;
    {::_pbi::TcParser::FastF32S1,
     {37, 63, 0, PROTOBUF_FIELD_OFFSET(PosInfo, _impl_.z_)}},
    // float yaw = 5;
    {::_pbi::TcParser::FastF32S1,
     {45, 63, 0, PROTOBUF_FIELD_OFFSET(PosInfo, _impl_.yaw_)}},
    // .Protocol.MoveState state = 6;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(PosInfo, _impl_.state_), 63>(),
     {48, 63, 0, PROTOBUF_FIELD_OFFSET(PosInfo, _impl_.state_)}},
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // uint64 object_id = 1;
    {PROTOBUF_FIELD_OFFSET(PosInfo, _impl_.object_id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt64)},
    // float x = 2;
    {PROTOBUF_FIELD_OFFSET(PosInfo, _impl_.x_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float y = 3;
    {PROTOBUF_FIELD_OFFSET(PosInfo, _impl_.y_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float z = 4;
    {PROTOBUF_FIELD_OFFSET(PosInfo, _impl_.z_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float yaw = 5;
    {PROTOBUF_FIELD_OFFSET(PosInfo, _impl_.yaw_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // .Protocol.MoveState state = 6;
    {PROTOBUF_FIELD_OFFSET(PosInfo, _impl_.state_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kOpenEnum)},
  }},
  // no aux_entries
  {{
  }},
};

PROTOBUF_NOINLINE void PosInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:Protocol.PosInfo)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.object_id_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.state_) -
      reinterpret_cast<char*>(&_impl_.object_id_)) + sizeof(_impl_.state_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* PosInfo::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Protocol.PosInfo)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // uint64 object_id = 1;
  if (this->_internal_object_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        1, this->_internal_object_id(), target);
  }

  // float x = 2;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_x = this->_internal_x();
  ::uint32_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        2, this->_internal_x(), target);
  }

  // float y = 3;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_y = this->_internal_y();
  ::uint32_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        3, this->_internal_y(), target);
  }

  // float z = 4;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_z = this->_internal_z();
  ::uint32_t raw_z;
  memcpy(&raw_z, &tmp_z, sizeof(tmp_z));
  if (raw_z != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        4, this->_internal_z(), target);
  }

  // float yaw = 5;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_yaw = this->_internal_yaw();
  ::uint32_t raw_yaw;
  memcpy(&raw_yaw, &tmp_yaw, sizeof(tmp_yaw));
  if (raw_yaw != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        5, this->_internal_yaw(), target);
  }

  // .Protocol.MoveState state = 6;
  if (this->_internal_state() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        6, this->_internal_state(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Protocol.PosInfo)
  return target;
}

::size_t PosInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Protocol.PosInfo)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // uint64 object_id = 1;
  if (this->_internal_object_id() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
        this->_internal_object_id());
  }

  // float x = 2;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_x = this->_internal_x();
  ::uint32_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    total_size += 5;
  }

  // float y = 3;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_y = this->_internal_y();
  ::uint32_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    total_size += 5;
  }

  // float z = 4;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_z = this->_internal_z();
  ::uint32_t raw_z;
  memcpy(&raw_z, &tmp_z, sizeof(tmp_z));
  if (raw_z != 0) {
    total_size += 5;
  }

  // float yaw = 5;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_yaw = this->_internal_yaw();
  ::uint32_t raw_yaw;
  memcpy(&raw_yaw, &tmp_yaw, sizeof(tmp_yaw));
  if (raw_yaw != 0) {
    total_size += 5;
  }

  // .Protocol.MoveState state = 6;
  if (this->_internal_state() != 0) {
    total_size += 1 +
                  ::_pbi::WireFormatLite::EnumSize(this->_internal_state());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void PosInfo::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<PosInfo*>(&to_msg);
  auto& from = static_cast<const PosInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Protocol.PosInfo)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_object_id() != 0) {
    _this->_impl_.object_id_ = from._impl_.object_id_;
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_x = from._internal_x();
  ::uint32_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    _this->_impl_.x_ = from._impl_.x_;
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_y = from._internal_y();
  ::uint32_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    _this->_impl_.y_ = from._impl_.y_;
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_z = from._internal_z();
  ::uint32_t raw_z;
  memcpy(&raw_z, &tmp_z, sizeof(tmp_z));
  if (raw_z != 0) {
    _this->_impl_.z_ = from._impl_.z_;
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_yaw = from._internal_yaw();
  ::uint32_t raw_yaw;
  memcpy(&raw_yaw, &tmp_yaw, sizeof(tmp_yaw));
  if (raw_yaw != 0) {
    _this->_impl_.yaw_ = from._impl_.yaw_;
  }
  if (from._internal_state() != 0) {
    _this->_impl_.state_ = from._impl_.state_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void PosInfo::CopyFrom(const PosInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Protocol.PosInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void PosInfo::InternalSwap(PosInfo* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PosInfo, _impl_.state_)
      + sizeof(PosInfo::_impl_.state_)
      - PROTOBUF_FIELD_OFFSET(PosInfo, _impl_.object_id_)>(
          reinterpret_cast<char*>(&_impl_.object_id_),
          reinterpret_cast<char*>(&other->_impl_.object_id_));
}

::google::protobuf::Metadata PosInfo::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class ObjectInfo::_Internal {
 public:
  using HasBits =
      decltype(std::declval<ObjectInfo>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(ObjectInfo, _impl_._has_bits_);
};

ObjectInfo::ObjectInfo(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Protocol.ObjectInfo)
}
inline PROTOBUF_NDEBUG_INLINE ObjectInfo::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::Protocol::ObjectInfo& from_msg)
      : _has_bits_{from._has_bits_},
        _cached_size_{0} {}

ObjectInfo::ObjectInfo(
    ::google::protobuf::Arena* arena,
    const ObjectInfo& from)
    : ::google::protobuf::Message(arena) {
  ObjectInfo* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.pos_info_ = (cached_has_bits & 0x00000001u) ? ::google::protobuf::Message::CopyConstruct<::Protocol::PosInfo>(
                              arena, *from._impl_.pos_info_)
                        : nullptr;
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, object_id_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, object_id_),
           offsetof(Impl_, object_type_) -
               offsetof(Impl_, object_id_) +
               sizeof(Impl_::object_type_));

  // @@protoc_insertion_point(copy_constructor:Protocol.ObjectInfo)
}
inline PROTOBUF_NDEBUG_INLINE ObjectInfo::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void ObjectInfo::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, pos_info_),
           0,
           offsetof(Impl_, object_type_) -
               offsetof(Impl_, pos_info_) +
               sizeof(Impl_::object_type_));
}
ObjectInfo::~ObjectInfo() {
  // @@protoc_insertion_point(destructor:Protocol.ObjectInfo)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void ObjectInfo::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  delete _impl_.pos_info_;
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
ObjectInfo::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(ObjectInfo, _impl_._cached_size_),
              false,
          },
          &ObjectInfo::MergeImpl,
          &ObjectInfo::kDescriptorMethods,
          &descriptor_table_Struct_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 1, 0, 2> ObjectInfo::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(ObjectInfo, _impl_._has_bits_),
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_ObjectInfo_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::Protocol::ObjectInfo>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // uint64 object_id = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint64_t, offsetof(ObjectInfo, _impl_.object_id_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(ObjectInfo, _impl_.object_id_)}},
    // .Protocol.ObjectType object_type = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(ObjectInfo, _impl_.object_type_), 63>(),
     {16, 63, 0, PROTOBUF_FIELD_OFFSET(ObjectInfo, _impl_.object_type_)}},
    // .Protocol.PosInfo pos_info = 3;
    {::_pbi::TcParser::FastMtS1,
     {26, 0, 0, PROTOBUF_FIELD_OFFSET(ObjectInfo, _impl_.pos_info_)}},
  }}, {{
    65535, 65535
  }}, {{
    // uint64 object_id = 1;
    {PROTOBUF_FIELD_OFFSET(ObjectInfo, _impl_.object_id_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt64)},
    // .Protocol.ObjectType object_type = 2;
    {PROTOBUF_FIELD_OFFSET(ObjectInfo, _impl_.object_type_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kOpenEnum)},
    // .Protocol.PosInfo pos_info = 3;
    {PROTOBUF_FIELD_OFFSET(ObjectInfo, _impl_.pos_info_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::Protocol::PosInfo>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void ObjectInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:Protocol.ObjectInfo)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.pos_info_ != nullptr);
    _impl_.pos_info_->Clear();
  }
  ::memset(&_impl_.object_id_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.object_type_) -
      reinterpret_cast<char*>(&_impl_.object_id_)) + sizeof(_impl_.object_type_));
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* ObjectInfo::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Protocol.ObjectInfo)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // uint64 object_id = 1;
  if (this->_internal_object_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        1, this->_internal_object_id(), target);
  }

  // .Protocol.ObjectType object_type = 2;
  if (this->_internal_object_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        2, this->_internal_object_type(), target);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // .Protocol.PosInfo pos_info = 3;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        3, *_impl_.pos_info_, _impl_.pos_info_->GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Protocol.ObjectInfo)
  return target;
}

::size_t ObjectInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Protocol.ObjectInfo)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // .Protocol.PosInfo pos_info = 3;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size +=
        1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.pos_info_);
  }

  // uint64 object_id = 1;
  if (this->_internal_object_id() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
        this->_internal_object_id());
  }

  // .Protocol.ObjectType object_type = 2;
  if (this->_internal_object_type() != 0) {
    total_size += 1 +
                  ::_pbi::WireFormatLite::EnumSize(this->_internal_object_type());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void ObjectInfo::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<ObjectInfo*>(&to_msg);
  auto& from = static_cast<const ObjectInfo&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:Protocol.ObjectInfo)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(from._impl_.pos_info_ != nullptr);
    if (_this->_impl_.pos_info_ == nullptr) {
      _this->_impl_.pos_info_ =
          ::google::protobuf::Message::CopyConstruct<::Protocol::PosInfo>(arena, *from._impl_.pos_info_);
    } else {
      _this->_impl_.pos_info_->MergeFrom(*from._impl_.pos_info_);
    }
  }
  if (from._internal_object_id() != 0) {
    _this->_impl_.object_id_ = from._impl_.object_id_;
  }
  if (from._internal_object_type() != 0) {
    _this->_impl_.object_type_ = from._impl_.object_type_;
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void ObjectInfo::CopyFrom(const ObjectInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Protocol.ObjectInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void ObjectInfo::InternalSwap(ObjectInfo* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ObjectInfo, _impl_.object_type_)
      + sizeof(ObjectInfo::_impl_.object_type_)
      - PROTOBUF_FIELD_OFFSET(ObjectInfo, _impl_.pos_info_)>(
          reinterpret_cast<char*>(&_impl_.pos_info_),
          reinterpret_cast<char*>(&other->_impl_.pos_info_));
}

::google::protobuf::Metadata ObjectInfo::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace Protocol
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_Struct_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
