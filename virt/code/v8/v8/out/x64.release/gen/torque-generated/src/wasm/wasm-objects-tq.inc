class WasmInstanceObject;
class WasmFunctionData;
class WasmExportedFunctionData;
class WasmJSFunctionData;
class WasmCapiFunctionData;
class WasmIndirectFunctionTable;
class WasmExceptionTag;
class WasmModuleObject;
class WasmTableObject;
class WasmMemoryObject;
class WasmGlobalObject;
class WasmExceptionObject;
class AsmWasmData;
class WasmTypeInfo;
class WasmObject;
class WasmStruct;
class WasmArray;
// Alias for HeapObject::IsWasmFunctionData() that avoids inlining.
V8_EXPORT_PRIVATE bool IsWasmFunctionData_NonInline(HeapObject o);
template <class D, class P>
class TorqueGeneratedWasmFunctionData : public P {
  static_assert(std::is_same<WasmFunctionData, D>::value,
    "Use this class as direct base for WasmFunctionData.");
  static_assert(std::is_same<Foreign, P>::value,
    "Pass in Foreign as second template parameter for TorqueGeneratedWasmFunctionData.");
 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmFunctionData<D,P>;

  // Torque type: (class Tuple2 | class WasmInstanceObject)
inline HeapObject ref() const;
inline HeapObject ref(PtrComprCageBase cage_base) const;
inline void set_ref(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

inline Code wrapper_code() const;
inline Code wrapper_code(PtrComprCageBase cage_base) const;
inline void set_wrapper_code(Code value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

V8_INLINE static D cast(Object object) {
  return D(object.ptr());
}

V8_INLINE static D unchecked_cast(Object object) {
  return bit_cast<D>(object);
}

#ifdef VERIFY_HEAP
V8_EXPORT_PRIVATE void WasmFunctionDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kRefOffset = P::kHeaderSize;
  static constexpr int kRefOffsetEnd = kRefOffset + kTaggedSize - 1;
  static constexpr int kWrapperCodeOffset = kRefOffsetEnd + 1;
  static constexpr int kWrapperCodeOffsetEnd = kWrapperCodeOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kWrapperCodeOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kWrapperCodeOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kWrapperCodeOffsetEnd + 1;
  static constexpr int kHeaderSize = kWrapperCodeOffsetEnd + 1;
  static constexpr int kSize = kWrapperCodeOffsetEnd + 1;

V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 32);
    int32_t size = kHeaderSize;
    return size;
}

V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
}

  friend class Factory;

 public:
  template <class DAlias = D>
  constexpr TorqueGeneratedWasmFunctionData() : P() {
    static_assert(std::is_base_of<TorqueGeneratedWasmFunctionData, 
      DAlias>::value,
      "class TorqueGeneratedWasmFunctionData should be used as direct base for WasmFunctionData.");
  }
 protected:
  inline explicit TorqueGeneratedWasmFunctionData(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmFunctionData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmExceptionTag() that avoids inlining.
V8_EXPORT_PRIVATE bool IsWasmExceptionTag_NonInline(HeapObject o);
template <class D, class P>
class TorqueGeneratedWasmExceptionTag : public P {
  static_assert(std::is_same<WasmExceptionTag, D>::value,
    "Use this class as direct base for WasmExceptionTag.");
  static_assert(std::is_same<Struct, P>::value,
    "Pass in Struct as second template parameter for TorqueGeneratedWasmExceptionTag.");
 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmExceptionTag<D,P>;

inline int index() const;
inline void set_index(int value);

V8_INLINE static D cast(Object object) {
  return D(object.ptr());
}

V8_INLINE static D unchecked_cast(Object object) {
  return bit_cast<D>(object);
}

#ifdef VERIFY_HEAP
V8_EXPORT_PRIVATE void WasmExceptionTagVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kIndexOffset = P::kHeaderSize;
  static constexpr int kIndexOffsetEnd = kIndexOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kIndexOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kIndexOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kIndexOffsetEnd + 1;
  static constexpr int kHeaderSize = kIndexOffsetEnd + 1;
  static constexpr int kSize = kIndexOffsetEnd + 1;

V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 16);
    int32_t size = kHeaderSize;
    return size;
}

V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
}

  friend class Factory;

 public:
  template <class DAlias = D>
  constexpr TorqueGeneratedWasmExceptionTag() : P() {
    static_assert(std::is_base_of<TorqueGeneratedWasmExceptionTag, 
      DAlias>::value,
      "class TorqueGeneratedWasmExceptionTag should be used as direct base for WasmExceptionTag.");
  }
 protected:
  inline explicit TorqueGeneratedWasmExceptionTag(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmExceptionTag(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmTypeInfo() that avoids inlining.
V8_EXPORT_PRIVATE bool IsWasmTypeInfo_NonInline(HeapObject o);
template <class D, class P>
class TorqueGeneratedWasmTypeInfo : public P {
  static_assert(std::is_same<WasmTypeInfo, D>::value,
    "Use this class as direct base for WasmTypeInfo.");
  static_assert(std::is_same<Foreign, P>::value,
    "Pass in Foreign as second template parameter for TorqueGeneratedWasmTypeInfo.");
 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmTypeInfo<D,P>;

inline FixedArray supertypes() const;
inline FixedArray supertypes(PtrComprCageBase cage_base) const;
inline void set_supertypes(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

inline ArrayList subtypes() const;
inline ArrayList subtypes(PtrComprCageBase cage_base) const;
inline void set_subtypes(ArrayList value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

inline int instance_size() const;
inline void set_instance_size(int value);

V8_INLINE static D cast(Object object) {
  return D(object.ptr());
}

V8_INLINE static D unchecked_cast(Object object) {
  return bit_cast<D>(object);
}

#ifdef VERIFY_HEAP
V8_EXPORT_PRIVATE void WasmTypeInfoVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kSupertypesOffset = P::kHeaderSize;
  static constexpr int kSupertypesOffsetEnd = kSupertypesOffset + kTaggedSize - 1;
  static constexpr int kSubtypesOffset = kSupertypesOffsetEnd + 1;
  static constexpr int kSubtypesOffsetEnd = kSubtypesOffset + kTaggedSize - 1;
  static constexpr int kInstanceSizeOffset = kSubtypesOffsetEnd + 1;
  static constexpr int kInstanceSizeOffsetEnd = kInstanceSizeOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kInstanceSizeOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kInstanceSizeOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kInstanceSizeOffsetEnd + 1;
  static constexpr int kHeaderSize = kInstanceSizeOffsetEnd + 1;
  static constexpr int kSize = kInstanceSizeOffsetEnd + 1;

V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 40);
    int32_t size = kHeaderSize;
    return size;
}

V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
}

  friend class Factory;

 public:
  template <class DAlias = D>
  constexpr TorqueGeneratedWasmTypeInfo() : P() {
    static_assert(std::is_base_of<TorqueGeneratedWasmTypeInfo, 
      DAlias>::value,
      "class TorqueGeneratedWasmTypeInfo should be used as direct base for WasmTypeInfo.");
  }
 protected:
  inline explicit TorqueGeneratedWasmTypeInfo(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmTypeInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmStruct() that avoids inlining.
V8_EXPORT_PRIVATE bool IsWasmStruct_NonInline(HeapObject o);
template <class D, class P>
class TorqueGeneratedWasmStruct : public P {
  static_assert(std::is_same<WasmStruct, D>::value,
    "Use this class as direct base for WasmStruct.");
  static_assert(std::is_same<WasmObject, P>::value,
    "Pass in WasmObject as second template parameter for TorqueGeneratedWasmStruct.");
 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmStruct<D,P>;

V8_INLINE static D cast(Object object) {
  return D(object.ptr());
}

V8_INLINE static D unchecked_cast(Object object) {
  return bit_cast<D>(object);
}

#ifdef VERIFY_HEAP
V8_EXPORT_PRIVATE void WasmStructVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;
  static constexpr int kSize = P::kHeaderSize;

V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 16);
    int32_t size = kHeaderSize;
    return size;
}

V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
}

  friend class Factory;

 public:
  template <class DAlias = D>
  constexpr TorqueGeneratedWasmStruct() : P() {
    static_assert(std::is_base_of<TorqueGeneratedWasmStruct, 
      DAlias>::value,
      "class TorqueGeneratedWasmStruct should be used as direct base for WasmStruct.");
  }
 protected:
  inline explicit TorqueGeneratedWasmStruct(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmStruct(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

// Alias for HeapObject::IsWasmArray() that avoids inlining.
V8_EXPORT_PRIVATE bool IsWasmArray_NonInline(HeapObject o);
template <class D, class P>
class TorqueGeneratedWasmArray : public P {
  static_assert(std::is_same<WasmArray, D>::value,
    "Use this class as direct base for WasmArray.");
  static_assert(std::is_same<WasmObject, P>::value,
    "Pass in WasmObject as second template parameter for TorqueGeneratedWasmArray.");
 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmArray<D,P>;

inline uint32_t length() const;
inline void set_length(uint32_t value);

inline uint32_t optional_padding() const;
inline void set_optional_padding(uint32_t value);

V8_INLINE static D cast(Object object) {
  return D(object.ptr());
}

V8_INLINE static D unchecked_cast(Object object) {
  return bit_cast<D>(object);
}

#ifdef VERIFY_HEAP
V8_EXPORT_PRIVATE void WasmArrayVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kLengthOffset = P::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kInt32Size - 1;
  static constexpr int kOptionalPaddingOffset = kLengthOffsetEnd + 1;
  static constexpr int kOptionalPaddingOffsetEnd = kOptionalPaddingOffset + kInt32Size - 1;
  static constexpr int kStartOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kHeaderSize = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kSize = kOptionalPaddingOffsetEnd + 1;

V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 24);
    int32_t size = kHeaderSize;
    return size;
}

V8_INLINE int32_t AllocatedSize() const {
    return SizeFor();
}

  friend class Factory;

 public:
  template <class DAlias = D>
  constexpr TorqueGeneratedWasmArray() : P() {
    static_assert(std::is_base_of<TorqueGeneratedWasmArray, 
      DAlias>::value,
      "class TorqueGeneratedWasmArray should be used as direct base for WasmArray.");
  }
 protected:
  inline explicit TorqueGeneratedWasmArray(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

