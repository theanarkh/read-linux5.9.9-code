#include "src/wasm/wasm-objects-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {
bool IsWasmFunctionData_NonInline(HeapObject o) {
  return o.IsWasmFunctionData();}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmFunctionData<WasmFunctionData, Foreign>::WasmFunctionDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmFunctionDataVerify(WasmFunctionData::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
bool IsWasmExceptionTag_NonInline(HeapObject o) {
  return o.IsWasmExceptionTag();}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmExceptionTag<WasmExceptionTag, Struct>::WasmExceptionTagVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmExceptionTagVerify(WasmExceptionTag::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
bool IsWasmTypeInfo_NonInline(HeapObject o) {
  return o.IsWasmTypeInfo();}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmTypeInfo<WasmTypeInfo, Foreign>::WasmTypeInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmTypeInfoVerify(WasmTypeInfo::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
bool IsWasmStruct_NonInline(HeapObject o) {
  return o.IsWasmStruct();}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmStruct<WasmStruct, WasmObject>::WasmStructVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmStructVerify(WasmStruct::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
bool IsWasmArray_NonInline(HeapObject o) {
  return o.IsWasmArray();}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmArray<WasmArray, WasmObject>::WasmArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmArrayVerify(WasmArray::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
} // namespace internal
} // namespace v8
