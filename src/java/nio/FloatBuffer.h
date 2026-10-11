#ifndef HEADER_java_nio_FloatBuffer
#define HEADER_java_nio_FloatBuffer

#include "Clearwing.h"
#include "java/nio/Buffer.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_FloatBuffer {
	java_nio_Buffer parent;
	jref F_hb;
	jint F_offset;
	jbool F_isReadOnly;
} java_nio_FloatBuffer;

extern Class class_java_nio_FloatBuffer;


#define VTABLE_java_nio_FloatBuffer_hashCode_R_int 0
typedef jint (*func_java_nio_FloatBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_FloatBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_FloatBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_FloatBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_FloatBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_FloatBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_finalize 5
typedef void (*func_java_nio_FloatBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_notify 6
typedef void (*func_java_nio_FloatBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_notifyAll 7
typedef void (*func_java_nio_FloatBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_wait 8
typedef void (*func_java_nio_FloatBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_wait_long 9
typedef void (*func_java_nio_FloatBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_FloatBuffer_wait_long_int 10
typedef void (*func_java_nio_FloatBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_FloatBuffer_capacity_R_int 11
typedef jint (*func_java_nio_FloatBuffer_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_position_R_int 12
typedef jint (*func_java_nio_FloatBuffer_position_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_Buffer 13
typedef jobject (*func_java_nio_FloatBuffer_position_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_FloatBuffer_limit_R_int 14
typedef jint (*func_java_nio_FloatBuffer_limit_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer 15
typedef jobject (*func_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_FloatBuffer_mark_R_java_nio_Buffer 16
typedef jobject (*func_java_nio_FloatBuffer_mark_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_reset_R_java_nio_Buffer 17
typedef jobject (*func_java_nio_FloatBuffer_reset_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_clear_R_java_nio_Buffer 18
typedef jobject (*func_java_nio_FloatBuffer_clear_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_flip_R_java_nio_Buffer 19
typedef jobject (*func_java_nio_FloatBuffer_flip_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_rewind_R_java_nio_Buffer 20
typedef jobject (*func_java_nio_FloatBuffer_rewind_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_remaining_R_int 21
typedef jint (*func_java_nio_FloatBuffer_remaining_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_hasRemaining_R_boolean 22
typedef jbool (*func_java_nio_FloatBuffer_hasRemaining_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_isReadOnly_R_boolean 23
typedef jbool (*func_java_nio_FloatBuffer_isReadOnly_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_hasArray_R_boolean 24
typedef jbool (*func_java_nio_FloatBuffer_hasArray_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_array_R_java_lang_Object 25
typedef jobject (*func_java_nio_FloatBuffer_array_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_arrayOffset_R_int 26
typedef jint (*func_java_nio_FloatBuffer_arrayOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_isDirect_R_boolean 27
typedef jbool (*func_java_nio_FloatBuffer_isDirect_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_nextGetIndex_R_int 28
typedef jint (*func_java_nio_FloatBuffer_nextGetIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_nextGetIndex_int_R_int 29
typedef jint (*func_java_nio_FloatBuffer_nextGetIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_FloatBuffer_nextPutIndex_R_int 30
typedef jint (*func_java_nio_FloatBuffer_nextPutIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_nextPutIndex_int_R_int 31
typedef jint (*func_java_nio_FloatBuffer_nextPutIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_FloatBuffer_checkIndex_int_R_int 32
typedef jint (*func_java_nio_FloatBuffer_checkIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_FloatBuffer_checkIndex_int_int_R_int 33
typedef jint (*func_java_nio_FloatBuffer_checkIndex_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_FloatBuffer_markValue_R_int 34
typedef jint (*func_java_nio_FloatBuffer_markValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_truncate 35
typedef void (*func_java_nio_FloatBuffer_truncate)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_discardMark 36
typedef void (*func_java_nio_FloatBuffer_discardMark)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_compareTo_java_lang_Object_R_int 37
typedef jint (*func_java_nio_FloatBuffer_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_FloatBuffer_slice_R_java_nio_FloatBuffer 38
typedef jobject (*func_java_nio_FloatBuffer_slice_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_duplicate_R_java_nio_FloatBuffer 39
typedef jobject (*func_java_nio_FloatBuffer_duplicate_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_asReadOnlyBuffer_R_java_nio_FloatBuffer 40
typedef jobject (*func_java_nio_FloatBuffer_asReadOnlyBuffer_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_get_R_float 41
typedef jfloat (*func_java_nio_FloatBuffer_get_R_float)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer 42
typedef jobject (*func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_java_nio_FloatBuffer_get_int_R_float 43
typedef jfloat (*func_java_nio_FloatBuffer_get_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_FloatBuffer_put_int_float_R_java_nio_FloatBuffer 44
typedef jobject (*func_java_nio_FloatBuffer_put_int_float_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_java_nio_FloatBuffer_get_Array1_float_int_int_R_java_nio_FloatBuffer 45
typedef jobject (*func_java_nio_FloatBuffer_get_Array1_float_int_int_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_FloatBuffer_get_Array1_float_R_java_nio_FloatBuffer 46
typedef jobject (*func_java_nio_FloatBuffer_get_Array1_float_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_FloatBuffer_put_java_nio_FloatBuffer_R_java_nio_FloatBuffer 47
typedef jobject (*func_java_nio_FloatBuffer_put_java_nio_FloatBuffer_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer 48
typedef jobject (*func_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_FloatBuffer_put_Array1_float_R_java_nio_FloatBuffer 49
typedef jobject (*func_java_nio_FloatBuffer_put_Array1_float_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_FloatBuffer_array_R_Array1_float 50
typedef jobject (*func_java_nio_FloatBuffer_array_R_Array1_float)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_FloatBuffer 51
typedef jobject (*func_java_nio_FloatBuffer_position_int_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_FloatBuffer_limit_int_R_java_nio_FloatBuffer 52
typedef jobject (*func_java_nio_FloatBuffer_limit_int_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_FloatBuffer_mark_R_java_nio_FloatBuffer 53
typedef jobject (*func_java_nio_FloatBuffer_mark_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_reset_R_java_nio_FloatBuffer 54
typedef jobject (*func_java_nio_FloatBuffer_reset_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_clear_R_java_nio_FloatBuffer 55
typedef jobject (*func_java_nio_FloatBuffer_clear_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_flip_R_java_nio_FloatBuffer 56
typedef jobject (*func_java_nio_FloatBuffer_flip_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_rewind_R_java_nio_FloatBuffer 57
typedef jobject (*func_java_nio_FloatBuffer_rewind_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_compact_R_java_nio_FloatBuffer 58
typedef jobject (*func_java_nio_FloatBuffer_compact_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_FloatBuffer_compareTo_java_nio_FloatBuffer_R_int 59
typedef jint (*func_java_nio_FloatBuffer_compareTo_java_nio_FloatBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_FloatBuffer_order_R_java_nio_ByteOrder 60
typedef jobject (*func_java_nio_FloatBuffer_order_R_java_nio_ByteOrder)(jcontext ctx, jobject self);

void mark_java_nio_FloatBuffer(jobject object, jint mark, jint depth);
void clinit_java_nio_FloatBuffer(jcontext ctx);
void init_java_nio_FloatBuffer_int_int_int_int_Array1_float_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4, jint param5);
void init_java_nio_FloatBuffer_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject SM_java_nio_FloatBuffer_allocate_int_R_java_nio_FloatBuffer(jcontext ctx, jint param0);
jobject SM_java_nio_FloatBuffer_wrap_Array1_float_int_int_R_java_nio_FloatBuffer(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_nio_FloatBuffer_wrap_Array1_float_R_java_nio_FloatBuffer(jcontext ctx, jobject param0);
jobject M_java_nio_FloatBuffer_get_Array1_float_int_int_R_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_nio_FloatBuffer_get_Array1_float_R_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_FloatBuffer_put_java_nio_FloatBuffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_nio_FloatBuffer_put_Array1_float_R_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);
jbool M_java_nio_FloatBuffer_hasArray_R_boolean(jcontext ctx, jobject self);
jobject M_java_nio_FloatBuffer_array_R_Array1_float(jcontext ctx, jobject self);
jint M_java_nio_FloatBuffer_arrayOffset_R_int(jcontext ctx, jobject self);
jobject M_java_nio_FloatBuffer_position_int_R_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_FloatBuffer_limit_int_R_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_FloatBuffer_mark_R_java_nio_FloatBuffer(jcontext ctx, jobject self);
jobject M_java_nio_FloatBuffer_reset_R_java_nio_FloatBuffer(jcontext ctx, jobject self);
jobject M_java_nio_FloatBuffer_clear_R_java_nio_FloatBuffer(jcontext ctx, jobject self);
jobject M_java_nio_FloatBuffer_flip_R_java_nio_FloatBuffer(jcontext ctx, jobject self);
jobject M_java_nio_FloatBuffer_rewind_R_java_nio_FloatBuffer(jcontext ctx, jobject self);
jobject M_java_nio_FloatBuffer_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_nio_FloatBuffer_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_nio_FloatBuffer_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool SM_java_nio_FloatBuffer_equals_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1);
jint M_java_nio_FloatBuffer_compareTo_java_nio_FloatBuffer_R_int(jcontext ctx, jobject self, jobject param0);
jint SM_java_nio_FloatBuffer_compare_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1);
jobject M_java_nio_FloatBuffer_array_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_nio_FloatBuffer_rewind_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_FloatBuffer_flip_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_FloatBuffer_clear_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_FloatBuffer_reset_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_FloatBuffer_mark_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_FloatBuffer_limit_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_FloatBuffer_position_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0);
jint M_java_nio_FloatBuffer_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
