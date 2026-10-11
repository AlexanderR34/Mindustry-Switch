#ifndef HEADER_java_nio_DoubleBuffer
#define HEADER_java_nio_DoubleBuffer

#include "Clearwing.h"
#include "java/nio/Buffer.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_DoubleBuffer {
	java_nio_Buffer parent;
	jref F_hb;
	jint F_offset;
	jbool F_isReadOnly;
} java_nio_DoubleBuffer;

extern Class class_java_nio_DoubleBuffer;


#define VTABLE_java_nio_DoubleBuffer_hashCode_R_int 0
typedef jint (*func_java_nio_DoubleBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_DoubleBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DoubleBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_DoubleBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_DoubleBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_DoubleBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_finalize 5
typedef void (*func_java_nio_DoubleBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_notify 6
typedef void (*func_java_nio_DoubleBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_notifyAll 7
typedef void (*func_java_nio_DoubleBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_wait 8
typedef void (*func_java_nio_DoubleBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_wait_long 9
typedef void (*func_java_nio_DoubleBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_DoubleBuffer_wait_long_int 10
typedef void (*func_java_nio_DoubleBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_DoubleBuffer_capacity_R_int 11
typedef jint (*func_java_nio_DoubleBuffer_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_position_R_int 12
typedef jint (*func_java_nio_DoubleBuffer_position_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_position_int_R_java_nio_Buffer 13
typedef jobject (*func_java_nio_DoubleBuffer_position_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DoubleBuffer_limit_R_int 14
typedef jint (*func_java_nio_DoubleBuffer_limit_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_limit_int_R_java_nio_Buffer 15
typedef jobject (*func_java_nio_DoubleBuffer_limit_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DoubleBuffer_mark_R_java_nio_Buffer 16
typedef jobject (*func_java_nio_DoubleBuffer_mark_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_reset_R_java_nio_Buffer 17
typedef jobject (*func_java_nio_DoubleBuffer_reset_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_clear_R_java_nio_Buffer 18
typedef jobject (*func_java_nio_DoubleBuffer_clear_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_flip_R_java_nio_Buffer 19
typedef jobject (*func_java_nio_DoubleBuffer_flip_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_rewind_R_java_nio_Buffer 20
typedef jobject (*func_java_nio_DoubleBuffer_rewind_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_remaining_R_int 21
typedef jint (*func_java_nio_DoubleBuffer_remaining_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_hasRemaining_R_boolean 22
typedef jbool (*func_java_nio_DoubleBuffer_hasRemaining_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_isReadOnly_R_boolean 23
typedef jbool (*func_java_nio_DoubleBuffer_isReadOnly_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_hasArray_R_boolean 24
typedef jbool (*func_java_nio_DoubleBuffer_hasArray_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_array_R_java_lang_Object 25
typedef jobject (*func_java_nio_DoubleBuffer_array_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_arrayOffset_R_int 26
typedef jint (*func_java_nio_DoubleBuffer_arrayOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_isDirect_R_boolean 27
typedef jbool (*func_java_nio_DoubleBuffer_isDirect_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_nextGetIndex_R_int 28
typedef jint (*func_java_nio_DoubleBuffer_nextGetIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_nextGetIndex_int_R_int 29
typedef jint (*func_java_nio_DoubleBuffer_nextGetIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DoubleBuffer_nextPutIndex_R_int 30
typedef jint (*func_java_nio_DoubleBuffer_nextPutIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_nextPutIndex_int_R_int 31
typedef jint (*func_java_nio_DoubleBuffer_nextPutIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DoubleBuffer_checkIndex_int_R_int 32
typedef jint (*func_java_nio_DoubleBuffer_checkIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DoubleBuffer_checkIndex_int_int_R_int 33
typedef jint (*func_java_nio_DoubleBuffer_checkIndex_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_DoubleBuffer_markValue_R_int 34
typedef jint (*func_java_nio_DoubleBuffer_markValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_truncate 35
typedef void (*func_java_nio_DoubleBuffer_truncate)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_discardMark 36
typedef void (*func_java_nio_DoubleBuffer_discardMark)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_compareTo_java_lang_Object_R_int 37
typedef jint (*func_java_nio_DoubleBuffer_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DoubleBuffer_slice_R_java_nio_DoubleBuffer 38
typedef jobject (*func_java_nio_DoubleBuffer_slice_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_duplicate_R_java_nio_DoubleBuffer 39
typedef jobject (*func_java_nio_DoubleBuffer_duplicate_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_asReadOnlyBuffer_R_java_nio_DoubleBuffer 40
typedef jobject (*func_java_nio_DoubleBuffer_asReadOnlyBuffer_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_get_R_double 41
typedef jdouble (*func_java_nio_DoubleBuffer_get_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_put_double_R_java_nio_DoubleBuffer 42
typedef jobject (*func_java_nio_DoubleBuffer_put_double_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_java_nio_DoubleBuffer_get_int_R_double 43
typedef jdouble (*func_java_nio_DoubleBuffer_get_int_R_double)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DoubleBuffer_put_int_double_R_java_nio_DoubleBuffer 44
typedef jobject (*func_java_nio_DoubleBuffer_put_int_double_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jint param0, jdouble param1);
#define VTABLE_java_nio_DoubleBuffer_get_Array1_double_int_int_R_java_nio_DoubleBuffer 45
typedef jobject (*func_java_nio_DoubleBuffer_get_Array1_double_int_int_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_DoubleBuffer_get_Array1_double_R_java_nio_DoubleBuffer 46
typedef jobject (*func_java_nio_DoubleBuffer_get_Array1_double_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DoubleBuffer_put_java_nio_DoubleBuffer_R_java_nio_DoubleBuffer 47
typedef jobject (*func_java_nio_DoubleBuffer_put_java_nio_DoubleBuffer_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DoubleBuffer_put_Array1_double_int_int_R_java_nio_DoubleBuffer 48
typedef jobject (*func_java_nio_DoubleBuffer_put_Array1_double_int_int_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_DoubleBuffer_put_Array1_double_R_java_nio_DoubleBuffer 49
typedef jobject (*func_java_nio_DoubleBuffer_put_Array1_double_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DoubleBuffer_array_R_Array1_double 50
typedef jobject (*func_java_nio_DoubleBuffer_array_R_Array1_double)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_position_int_R_java_nio_DoubleBuffer 51
typedef jobject (*func_java_nio_DoubleBuffer_position_int_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DoubleBuffer_limit_int_R_java_nio_DoubleBuffer 52
typedef jobject (*func_java_nio_DoubleBuffer_limit_int_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DoubleBuffer_mark_R_java_nio_DoubleBuffer 53
typedef jobject (*func_java_nio_DoubleBuffer_mark_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_reset_R_java_nio_DoubleBuffer 54
typedef jobject (*func_java_nio_DoubleBuffer_reset_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_clear_R_java_nio_DoubleBuffer 55
typedef jobject (*func_java_nio_DoubleBuffer_clear_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_flip_R_java_nio_DoubleBuffer 56
typedef jobject (*func_java_nio_DoubleBuffer_flip_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_rewind_R_java_nio_DoubleBuffer 57
typedef jobject (*func_java_nio_DoubleBuffer_rewind_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_compact_R_java_nio_DoubleBuffer 58
typedef jobject (*func_java_nio_DoubleBuffer_compact_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DoubleBuffer_compareTo_java_nio_DoubleBuffer_R_int 59
typedef jint (*func_java_nio_DoubleBuffer_compareTo_java_nio_DoubleBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DoubleBuffer_order_R_java_nio_ByteOrder 60
typedef jobject (*func_java_nio_DoubleBuffer_order_R_java_nio_ByteOrder)(jcontext ctx, jobject self);

void mark_java_nio_DoubleBuffer(jobject object, jint mark, jint depth);
void clinit_java_nio_DoubleBuffer(jcontext ctx);
void init_java_nio_DoubleBuffer_int_int_int_int_Array1_double_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4, jint param5);
void init_java_nio_DoubleBuffer_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject SM_java_nio_DoubleBuffer_allocate_int_R_java_nio_DoubleBuffer(jcontext ctx, jint param0);
jobject SM_java_nio_DoubleBuffer_wrap_Array1_double_int_int_R_java_nio_DoubleBuffer(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_nio_DoubleBuffer_wrap_Array1_double_R_java_nio_DoubleBuffer(jcontext ctx, jobject param0);
jobject M_java_nio_DoubleBuffer_get_Array1_double_int_int_R_java_nio_DoubleBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_nio_DoubleBuffer_get_Array1_double_R_java_nio_DoubleBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_DoubleBuffer_put_java_nio_DoubleBuffer_R_java_nio_DoubleBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_DoubleBuffer_put_Array1_double_int_int_R_java_nio_DoubleBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_nio_DoubleBuffer_put_Array1_double_R_java_nio_DoubleBuffer(jcontext ctx, jobject self, jobject param0);
jbool M_java_nio_DoubleBuffer_hasArray_R_boolean(jcontext ctx, jobject self);
jobject M_java_nio_DoubleBuffer_array_R_Array1_double(jcontext ctx, jobject self);
jint M_java_nio_DoubleBuffer_arrayOffset_R_int(jcontext ctx, jobject self);
jobject M_java_nio_DoubleBuffer_position_int_R_java_nio_DoubleBuffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_DoubleBuffer_limit_int_R_java_nio_DoubleBuffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_DoubleBuffer_mark_R_java_nio_DoubleBuffer(jcontext ctx, jobject self);
jobject M_java_nio_DoubleBuffer_reset_R_java_nio_DoubleBuffer(jcontext ctx, jobject self);
jobject M_java_nio_DoubleBuffer_clear_R_java_nio_DoubleBuffer(jcontext ctx, jobject self);
jobject M_java_nio_DoubleBuffer_flip_R_java_nio_DoubleBuffer(jcontext ctx, jobject self);
jobject M_java_nio_DoubleBuffer_rewind_R_java_nio_DoubleBuffer(jcontext ctx, jobject self);
jobject M_java_nio_DoubleBuffer_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_nio_DoubleBuffer_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_nio_DoubleBuffer_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool SM_java_nio_DoubleBuffer_equals_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1);
jint M_java_nio_DoubleBuffer_compareTo_java_nio_DoubleBuffer_R_int(jcontext ctx, jobject self, jobject param0);
jint SM_java_nio_DoubleBuffer_compare_double_double_R_int(jcontext ctx, jdouble param0, jdouble param1);
jobject M_java_nio_DoubleBuffer_array_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_nio_DoubleBuffer_rewind_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_DoubleBuffer_flip_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_DoubleBuffer_clear_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_DoubleBuffer_reset_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_DoubleBuffer_mark_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_DoubleBuffer_limit_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_DoubleBuffer_position_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0);
jint M_java_nio_DoubleBuffer_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
