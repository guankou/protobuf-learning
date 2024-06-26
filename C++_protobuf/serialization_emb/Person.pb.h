// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Person.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Person_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Person_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_Person_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Person_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Person_2eproto;
class Address;
struct AddressDefaultTypeInternal;
extern AddressDefaultTypeInternal _Address_default_instance_;
class Person;
struct PersonDefaultTypeInternal;
extern PersonDefaultTypeInternal _Person_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Address* Arena::CreateMaybeMessage<::Address>(Arena*);
template<> ::Person* Arena::CreateMaybeMessage<::Person>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Address final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Address) */ {
 public:
  inline Address() : Address(nullptr) {}
  ~Address() override;
  explicit PROTOBUF_CONSTEXPR Address(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Address(const Address& from);
  Address(Address&& from) noexcept
    : Address() {
    *this = ::std::move(from);
  }

  inline Address& operator=(const Address& from) {
    CopyFrom(from);
    return *this;
  }
  inline Address& operator=(Address&& from) noexcept {
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
  static const Address& default_instance() {
    return *internal_default_instance();
  }
  static inline const Address* internal_default_instance() {
    return reinterpret_cast<const Address*>(
               &_Address_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Address& a, Address& b) {
    a.Swap(&b);
  }
  inline void Swap(Address* other) {
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
  void UnsafeArenaSwap(Address* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Address* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Address>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Address& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Address& from) {
    Address::MergeImpl(*this, from);
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
  void InternalSwap(Address* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Address";
  }
  protected:
  explicit Address(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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

  // @@protoc_insertion_point(class_scope:Address)
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
  friend struct ::TableStruct_Person_2eproto;
};
// -------------------------------------------------------------------

class Person final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Person) */ {
 public:
  inline Person() : Person(nullptr) {}
  ~Person() override;
  explicit PROTOBUF_CONSTEXPR Person(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Person(const Person& from);
  Person(Person&& from) noexcept
    : Person() {
    *this = ::std::move(from);
  }

  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }
  inline Person& operator=(Person&& from) noexcept {
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
  static const Person& default_instance() {
    return *internal_default_instance();
  }
  static inline const Person* internal_default_instance() {
    return reinterpret_cast<const Person*>(
               &_Person_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Person& a, Person& b) {
    a.Swap(&b);
  }
  inline void Swap(Person* other) {
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
  void UnsafeArenaSwap(Person* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Person* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Person>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Person& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Person& from) {
    Person::MergeImpl(*this, from);
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
  void InternalSwap(Person* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Person";
  }
  protected:
  explicit Person(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
  // bytes name = 2;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
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

  // .Address addr = 5;
  bool has_addr() const;
  private:
  bool _internal_has_addr() const;
  public:
  void clear_addr();
  const ::Address& addr() const;
  PROTOBUF_NODISCARD ::Address* release_addr();
  ::Address* mutable_addr();
  void set_allocated_addr(::Address* addr);
  private:
  const ::Address& _internal_addr() const;
  ::Address* _internal_mutable_addr();
  public:
  void unsafe_arena_set_allocated_addr(
      ::Address* addr);
  ::Address* unsafe_arena_release_addr();

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

  // @@protoc_insertion_point(class_scope:Person)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sex_;
    ::Address* addr_;
    int32_t id_;
    int32_t age_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Person_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Address

// int32 house_id = 1;
inline void Address::clear_house_id() {
  _impl_.house_id_ = 0;
}
inline int32_t Address::_internal_house_id() const {
  return _impl_.house_id_;
}
inline int32_t Address::house_id() const {
  // @@protoc_insertion_point(field_get:Address.house_id)
  return _internal_house_id();
}
inline void Address::_internal_set_house_id(int32_t value) {
  
  _impl_.house_id_ = value;
}
inline void Address::set_house_id(int32_t value) {
  _internal_set_house_id(value);
  // @@protoc_insertion_point(field_set:Address.house_id)
}

// bytes house_addr = 2;
inline void Address::clear_house_addr() {
  _impl_.house_addr_.ClearToEmpty();
}
inline const std::string& Address::house_addr() const {
  // @@protoc_insertion_point(field_get:Address.house_addr)
  return _internal_house_addr();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Address::set_house_addr(ArgT0&& arg0, ArgT... args) {
 
 _impl_.house_addr_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Address.house_addr)
}
inline std::string* Address::mutable_house_addr() {
  std::string* _s = _internal_mutable_house_addr();
  // @@protoc_insertion_point(field_mutable:Address.house_addr)
  return _s;
}
inline const std::string& Address::_internal_house_addr() const {
  return _impl_.house_addr_.Get();
}
inline void Address::_internal_set_house_addr(const std::string& value) {
  
  _impl_.house_addr_.Set(value, GetArenaForAllocation());
}
inline std::string* Address::_internal_mutable_house_addr() {
  
  return _impl_.house_addr_.Mutable(GetArenaForAllocation());
}
inline std::string* Address::release_house_addr() {
  // @@protoc_insertion_point(field_release:Address.house_addr)
  return _impl_.house_addr_.Release();
}
inline void Address::set_allocated_house_addr(std::string* house_addr) {
  if (house_addr != nullptr) {
    
  } else {
    
  }
  _impl_.house_addr_.SetAllocated(house_addr, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.house_addr_.IsDefault()) {
    _impl_.house_addr_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Address.house_addr)
}

// -------------------------------------------------------------------

// Person

// int32 id = 1;
inline void Person::clear_id() {
  _impl_.id_ = 0;
}
inline int32_t Person::_internal_id() const {
  return _impl_.id_;
}
inline int32_t Person::id() const {
  // @@protoc_insertion_point(field_get:Person.id)
  return _internal_id();
}
inline void Person::_internal_set_id(int32_t value) {
  
  _impl_.id_ = value;
}
inline void Person::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Person.id)
}

// bytes name = 2;
inline void Person::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& Person::name() const {
  // @@protoc_insertion_point(field_get:Person.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Person::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Person.name)
}
inline std::string* Person::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Person.name)
  return _s;
}
inline const std::string& Person::_internal_name() const {
  return _impl_.name_.Get();
}
inline void Person::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* Person::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* Person::release_name() {
  // @@protoc_insertion_point(field_release:Person.name)
  return _impl_.name_.Release();
}
inline void Person::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Person.name)
}

// bytes sex = 3;
inline void Person::clear_sex() {
  _impl_.sex_.ClearToEmpty();
}
inline const std::string& Person::sex() const {
  // @@protoc_insertion_point(field_get:Person.sex)
  return _internal_sex();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Person::set_sex(ArgT0&& arg0, ArgT... args) {
 
 _impl_.sex_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Person.sex)
}
inline std::string* Person::mutable_sex() {
  std::string* _s = _internal_mutable_sex();
  // @@protoc_insertion_point(field_mutable:Person.sex)
  return _s;
}
inline const std::string& Person::_internal_sex() const {
  return _impl_.sex_.Get();
}
inline void Person::_internal_set_sex(const std::string& value) {
  
  _impl_.sex_.Set(value, GetArenaForAllocation());
}
inline std::string* Person::_internal_mutable_sex() {
  
  return _impl_.sex_.Mutable(GetArenaForAllocation());
}
inline std::string* Person::release_sex() {
  // @@protoc_insertion_point(field_release:Person.sex)
  return _impl_.sex_.Release();
}
inline void Person::set_allocated_sex(std::string* sex) {
  if (sex != nullptr) {
    
  } else {
    
  }
  _impl_.sex_.SetAllocated(sex, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.sex_.IsDefault()) {
    _impl_.sex_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Person.sex)
}

// int32 age = 4;
inline void Person::clear_age() {
  _impl_.age_ = 0;
}
inline int32_t Person::_internal_age() const {
  return _impl_.age_;
}
inline int32_t Person::age() const {
  // @@protoc_insertion_point(field_get:Person.age)
  return _internal_age();
}
inline void Person::_internal_set_age(int32_t value) {
  
  _impl_.age_ = value;
}
inline void Person::set_age(int32_t value) {
  _internal_set_age(value);
  // @@protoc_insertion_point(field_set:Person.age)
}

// .Address addr = 5;
inline bool Person::_internal_has_addr() const {
  return this != internal_default_instance() && _impl_.addr_ != nullptr;
}
inline bool Person::has_addr() const {
  return _internal_has_addr();
}
inline void Person::clear_addr() {
  if (GetArenaForAllocation() == nullptr && _impl_.addr_ != nullptr) {
    delete _impl_.addr_;
  }
  _impl_.addr_ = nullptr;
}
inline const ::Address& Person::_internal_addr() const {
  const ::Address* p = _impl_.addr_;
  return p != nullptr ? *p : reinterpret_cast<const ::Address&>(
      ::_Address_default_instance_);
}
inline const ::Address& Person::addr() const {
  // @@protoc_insertion_point(field_get:Person.addr)
  return _internal_addr();
}
inline void Person::unsafe_arena_set_allocated_addr(
    ::Address* addr) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.addr_);
  }
  _impl_.addr_ = addr;
  if (addr) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Person.addr)
}
inline ::Address* Person::release_addr() {
  
  ::Address* temp = _impl_.addr_;
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
inline ::Address* Person::unsafe_arena_release_addr() {
  // @@protoc_insertion_point(field_release:Person.addr)
  
  ::Address* temp = _impl_.addr_;
  _impl_.addr_ = nullptr;
  return temp;
}
inline ::Address* Person::_internal_mutable_addr() {
  
  if (_impl_.addr_ == nullptr) {
    auto* p = CreateMaybeMessage<::Address>(GetArenaForAllocation());
    _impl_.addr_ = p;
  }
  return _impl_.addr_;
}
inline ::Address* Person::mutable_addr() {
  ::Address* _msg = _internal_mutable_addr();
  // @@protoc_insertion_point(field_mutable:Person.addr)
  return _msg;
}
inline void Person::set_allocated_addr(::Address* addr) {
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
  // @@protoc_insertion_point(field_set_allocated:Person.addr)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Person_2eproto
