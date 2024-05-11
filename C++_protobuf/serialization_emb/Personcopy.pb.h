// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Personcopy.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Personcopy_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Personcopy_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Personcopy_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Personcopy_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Personcopy_2eproto;
class Address2;
struct Address2DefaultTypeInternal;
extern Address2DefaultTypeInternal _Address2_default_instance_;
class Person2;
struct Person2DefaultTypeInternal;
extern Person2DefaultTypeInternal _Person2_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Address2* Arena::CreateMaybeMessage<::Address2>(Arena*);
template<> ::Person2* Arena::CreateMaybeMessage<::Person2>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Address2 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Address2) */ {
 public:
  inline Address2() : Address2(nullptr) {}
  ~Address2() override;
  explicit PROTOBUF_CONSTEXPR Address2(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Address2(const Address2& from);
  Address2(Address2&& from) noexcept
    : Address2() {
    *this = ::std::move(from);
  }

  inline Address2& operator=(const Address2& from) {
    CopyFrom(from);
    return *this;
  }
  inline Address2& operator=(Address2&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Address2& default_instance() {
    return *internal_default_instance();
  }
  static inline const Address2* internal_default_instance() {
    return reinterpret_cast<const Address2*>(
               &_Address2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Address2& a, Address2& b) {
    a.Swap(&b);
  }
  inline void Swap(Address2* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Address2* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Address2* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Address2>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Address2& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Address2& from) {
    Address2::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Address2* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Address2";
  }
  protected:
  explicit Address2(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHouseAddrFieldNumber = 2,
    kHouseIdFieldNumber = 1,
  };
  // bytes house_addr = 2;
  void clear_house_addr();
  const std::string& house_addr() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_house_addr(ArgT0&& arg0, ArgT... args);
  std::string* mutable_house_addr();
  PROTOBUF_NODISCARD std::string* release_house_addr();
  void set_allocated_house_addr(std::string* house_addr);
  private:
  const std::string& _internal_house_addr() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_house_addr(const std::string& value);
  std::string* _internal_mutable_house_addr();
  public:

  // int32 house_id = 1;
  void clear_house_id();
  int32_t house_id() const;
  void set_house_id(int32_t value);
  private:
  int32_t _internal_house_id() const;
  void _internal_set_house_id(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Address2)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr house_addr_;
    int32_t house_id_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Personcopy_2eproto;
};
// -------------------------------------------------------------------

class Person2 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Person2) */ {
 public:
  inline Person2() : Person2(nullptr) {}
  ~Person2() override;
  explicit PROTOBUF_CONSTEXPR Person2(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Person2(const Person2& from);
  Person2(Person2&& from) noexcept
    : Person2() {
    *this = ::std::move(from);
  }

  inline Person2& operator=(const Person2& from) {
    CopyFrom(from);
    return *this;
  }
  inline Person2& operator=(Person2&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Person2& default_instance() {
    return *internal_default_instance();
  }
  static inline const Person2* internal_default_instance() {
    return reinterpret_cast<const Person2*>(
               &_Person2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Person2& a, Person2& b) {
    a.Swap(&b);
  }
  inline void Swap(Person2* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Person2* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Person2* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Person2>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Person2& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Person2& from) {
    Person2::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Person2* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Person2";
  }
  protected:
  explicit Person2(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kSexFieldNumber = 3,
    kAddrFieldNumber = 5,
    kIdFieldNumber = 1,
    kAgeFieldNumber = 4,
  };
  // repeated bytes name = 2;
  int name_size() const;
  private:
  int _internal_name_size() const;
  public:
  void clear_name();
  const std::string& name(int index) const;
  std::string* mutable_name(int index);
  void set_name(int index, const std::string& value);
  void set_name(int index, std::string&& value);
  void set_name(int index, const char* value);
  void set_name(int index, const void* value, size_t size);
  std::string* add_name();
  void add_name(const std::string& value);
  void add_name(std::string&& value);
  void add_name(const char* value);
  void add_name(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& name() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_name();
  private:
  const std::string& _internal_name(int index) const;
  std::string* _internal_add_name();
  public:

  // bytes sex = 3;
  void clear_sex();
  const std::string& sex() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_sex(ArgT0&& arg0, ArgT... args);
  std::string* mutable_sex();
  PROTOBUF_NODISCARD std::string* release_sex();
  void set_allocated_sex(std::string* sex);
  private:
  const std::string& _internal_sex() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_sex(const std::string& value);
  std::string* _internal_mutable_sex();
  public:

  // .Address2 addr = 5;
  bool has_addr() const;
  private:
  bool _internal_has_addr() const;
  public:
  void clear_addr();
  const ::Address2& addr() const;
  PROTOBUF_NODISCARD ::Address2* release_addr();
  ::Address2* mutable_addr();
  void set_allocated_addr(::Address2* addr);
  private:
  const ::Address2& _internal_addr() const;
  ::Address2* _internal_mutable_addr();
  public:
  void unsafe_arena_set_allocated_addr(
      ::Address2* addr);
  ::Address2* unsafe_arena_release_addr();

  // int32 id = 1;
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // int32 age = 4;
  void clear_age();
  int32_t age() const;
  void set_age(int32_t value);
  private:
  int32_t _internal_age() const;
  void _internal_set_age(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Person2)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sex_;
    ::Address2* addr_;
    int32_t id_;
    int32_t age_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Personcopy_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Address2

// int32 house_id = 1;
inline void Address2::clear_house_id() {
  _impl_.house_id_ = 0;
}
inline int32_t Address2::_internal_house_id() const {
  return _impl_.house_id_;
}
inline int32_t Address2::house_id() const {
  // @@protoc_insertion_point(field_get:Address2.house_id)
  return _internal_house_id();
}
inline void Address2::_internal_set_house_id(int32_t value) {
  
  _impl_.house_id_ = value;
}
inline void Address2::set_house_id(int32_t value) {
  _internal_set_house_id(value);
  // @@protoc_insertion_point(field_set:Address2.house_id)
}

// bytes house_addr = 2;
inline void Address2::clear_house_addr() {
  _impl_.house_addr_.ClearToEmpty();
}
inline const std::string& Address2::house_addr() const {
  // @@protoc_insertion_point(field_get:Address2.house_addr)
  return _internal_house_addr();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Address2::set_house_addr(ArgT0&& arg0, ArgT... args) {
 
 _impl_.house_addr_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Address2.house_addr)
}
inline std::string* Address2::mutable_house_addr() {
  std::string* _s = _internal_mutable_house_addr();
  // @@protoc_insertion_point(field_mutable:Address2.house_addr)
  return _s;
}
inline const std::string& Address2::_internal_house_addr() const {
  return _impl_.house_addr_.Get();
}
inline void Address2::_internal_set_house_addr(const std::string& value) {
  
  _impl_.house_addr_.Set(value, GetArenaForAllocation());
}
inline std::string* Address2::_internal_mutable_house_addr() {
  
  return _impl_.house_addr_.Mutable(GetArenaForAllocation());
}
inline std::string* Address2::release_house_addr() {
  // @@protoc_insertion_point(field_release:Address2.house_addr)
  return _impl_.house_addr_.Release();
}
inline void Address2::set_allocated_house_addr(std::string* house_addr) {
  if (house_addr != nullptr) {
    
  } else {
    
  }
  _impl_.house_addr_.SetAllocated(house_addr, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.house_addr_.IsDefault()) {
    _impl_.house_addr_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Address2.house_addr)
}

// -------------------------------------------------------------------

// Person2

// int32 id = 1;
inline void Person2::clear_id() {
  _impl_.id_ = 0;
}
inline int32_t Person2::_internal_id() const {
  return _impl_.id_;
}
inline int32_t Person2::id() const {
  // @@protoc_insertion_point(field_get:Person2.id)
  return _internal_id();
}
inline void Person2::_internal_set_id(int32_t value) {
  
  _impl_.id_ = value;
}
inline void Person2::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Person2.id)
}

// repeated bytes name = 2;
inline int Person2::_internal_name_size() const {
  return _impl_.name_.size();
}
inline int Person2::name_size() const {
  return _internal_name_size();
}
inline void Person2::clear_name() {
  _impl_.name_.Clear();
}
inline std::string* Person2::add_name() {
  std::string* _s = _internal_add_name();
  // @@protoc_insertion_point(field_add_mutable:Person2.name)
  return _s;
}
inline const std::string& Person2::_internal_name(int index) const {
  return _impl_.name_.Get(index);
}
inline const std::string& Person2::name(int index) const {
  // @@protoc_insertion_point(field_get:Person2.name)
  return _internal_name(index);
}
inline std::string* Person2::mutable_name(int index) {
  // @@protoc_insertion_point(field_mutable:Person2.name)
  return _impl_.name_.Mutable(index);
}
inline void Person2::set_name(int index, const std::string& value) {
  _impl_.name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:Person2.name)
}
inline void Person2::set_name(int index, std::string&& value) {
  _impl_.name_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:Person2.name)
}
inline void Person2::set_name(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:Person2.name)
}
inline void Person2::set_name(int index, const void* value, size_t size) {
  _impl_.name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Person2.name)
}
inline std::string* Person2::_internal_add_name() {
  return _impl_.name_.Add();
}
inline void Person2::add_name(const std::string& value) {
  _impl_.name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:Person2.name)
}
inline void Person2::add_name(std::string&& value) {
  _impl_.name_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:Person2.name)
}
inline void Person2::add_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:Person2.name)
}
inline void Person2::add_name(const void* value, size_t size) {
  _impl_.name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:Person2.name)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
Person2::name() const {
  // @@protoc_insertion_point(field_list:Person2.name)
  return _impl_.name_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
Person2::mutable_name() {
  // @@protoc_insertion_point(field_mutable_list:Person2.name)
  return &_impl_.name_;
}

// bytes sex = 3;
inline void Person2::clear_sex() {
  _impl_.sex_.ClearToEmpty();
}
inline const std::string& Person2::sex() const {
  // @@protoc_insertion_point(field_get:Person2.sex)
  return _internal_sex();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Person2::set_sex(ArgT0&& arg0, ArgT... args) {
 
 _impl_.sex_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Person2.sex)
}
inline std::string* Person2::mutable_sex() {
  std::string* _s = _internal_mutable_sex();
  // @@protoc_insertion_point(field_mutable:Person2.sex)
  return _s;
}
inline const std::string& Person2::_internal_sex() const {
  return _impl_.sex_.Get();
}
inline void Person2::_internal_set_sex(const std::string& value) {
  
  _impl_.sex_.Set(value, GetArenaForAllocation());
}
inline std::string* Person2::_internal_mutable_sex() {
  
  return _impl_.sex_.Mutable(GetArenaForAllocation());
}
inline std::string* Person2::release_sex() {
  // @@protoc_insertion_point(field_release:Person2.sex)
  return _impl_.sex_.Release();
}
inline void Person2::set_allocated_sex(std::string* sex) {
  if (sex != nullptr) {
    
  } else {
    
  }
  _impl_.sex_.SetAllocated(sex, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.sex_.IsDefault()) {
    _impl_.sex_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Person2.sex)
}

// int32 age = 4;
inline void Person2::clear_age() {
  _impl_.age_ = 0;
}
inline int32_t Person2::_internal_age() const {
  return _impl_.age_;
}
inline int32_t Person2::age() const {
  // @@protoc_insertion_point(field_get:Person2.age)
  return _internal_age();
}
inline void Person2::_internal_set_age(int32_t value) {
  
  _impl_.age_ = value;
}
inline void Person2::set_age(int32_t value) {
  _internal_set_age(value);
  // @@protoc_insertion_point(field_set:Person2.age)
}

// .Address2 addr = 5;
inline bool Person2::_internal_has_addr() const {
  return this != internal_default_instance() && _impl_.addr_ != nullptr;
}
inline bool Person2::has_addr() const {
  return _internal_has_addr();
}
inline void Person2::clear_addr() {
  if (GetArenaForAllocation() == nullptr && _impl_.addr_ != nullptr) {
    delete _impl_.addr_;
  }
  _impl_.addr_ = nullptr;
}
inline const ::Address2& Person2::_internal_addr() const {
  const ::Address2* p = _impl_.addr_;
  return p != nullptr ? *p : reinterpret_cast<const ::Address2&>(
      ::_Address2_default_instance_);
}
inline const ::Address2& Person2::addr() const {
  // @@protoc_insertion_point(field_get:Person2.addr)
  return _internal_addr();
}
inline void Person2::unsafe_arena_set_allocated_addr(
    ::Address2* addr) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.addr_);
  }
  _impl_.addr_ = addr;
  if (addr) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Person2.addr)
}
inline ::Address2* Person2::release_addr() {
  
  ::Address2* temp = _impl_.addr_;
  _impl_.addr_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::Address2* Person2::unsafe_arena_release_addr() {
  // @@protoc_insertion_point(field_release:Person2.addr)
  
  ::Address2* temp = _impl_.addr_;
  _impl_.addr_ = nullptr;
  return temp;
}
inline ::Address2* Person2::_internal_mutable_addr() {
  
  if (_impl_.addr_ == nullptr) {
    auto* p = CreateMaybeMessage<::Address2>(GetArenaForAllocation());
    _impl_.addr_ = p;
  }
  return _impl_.addr_;
}
inline ::Address2* Person2::mutable_addr() {
  ::Address2* _msg = _internal_mutable_addr();
  // @@protoc_insertion_point(field_mutable:Person2.addr)
  return _msg;
}
inline void Person2::set_allocated_addr(::Address2* addr) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete _impl_.addr_;
  }
  if (addr) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(addr);
    if (message_arena != submessage_arena) {
      addr = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, addr, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.addr_ = addr;
  // @@protoc_insertion_point(field_set_allocated:Person2.addr)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Personcopy_2eproto