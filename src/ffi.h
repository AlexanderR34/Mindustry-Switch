#pragma once
#include <stdint.h>
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif
typedef enum ffi_status { FFI_OK = 0, FFI_BAD_TYPEDEF, FFI_BAD_ABI } ffi_status;
typedef enum ffi_abi { FFI_DEFAULT_ABI = 0 } ffi_abi;
typedef struct _ffi_type { size_t size; unsigned short alignment; unsigned short type; struct _ffi_type **elements; } ffi_type;
extern ffi_type ffi_type_void, ffi_type_uint8, ffi_type_sint8, ffi_type_uint16, ffi_type_sint16, ffi_type_uint32, ffi_type_sint32, ffi_type_uint64, ffi_type_sint64, ffi_type_float, ffi_type_double, ffi_type_pointer;
typedef struct { ffi_abi abi; unsigned nargs; ffi_type **arg_types; ffi_type *rtype; unsigned bytes; unsigned flags; } ffi_cif;
inline ffi_status ffi_prep_cif(ffi_cif *cif, ffi_abi abi, unsigned int nargs, ffi_type *rtype, ffi_type **atypes) { return FFI_OK; }
inline void ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue) {}
#ifdef __cplusplus
}
#endif
