#ifndef HEADER_java_nio_IntBuffer
#define HEADER_java_nio_IntBuffer

#include "Clearwing.h"
#include "java/nio/Buffer.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_IntBuffer {
	java_nio_Buffer parent;
	jref F_hb;
	jint F_offset;
	jbool F_isReadOnly;
} java_nio_IntBuffer;

extern Class class_java_nio_IntBuffer;


#define VTABLE_java_nio_IntBuffer_hashCode_R_int 0
typedef jint (*func_java_nio_IntBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_IntBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_IntBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_IntBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_IntBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_IntBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_finalize 5
typedef void (*func_java_nio_IntBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_notify 6
typedef void (*func_java_nio_IntBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_notifyAll 7
typedef void (*func_java_nio_IntBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_wait 8
typedef void (*func_java_nio_IntBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_wait_long 9
typedef void (*func_java_nio_IntBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_IntBuffer_wait_long_int 10
typedef void (*func_java_nio_IntBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_IntBuffer_capacity_R_int 11
typedef jint (*func_java_nio_IntBuffer_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_position_R_int 12
typedef jint (*func_java_nio_IntBuffer_position_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_position_int_R_java_nio_Buffer 13
typedef jobject (*func_java_nio_IntBuffer_position_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_IntBuffer_limit_R_int 14
typedef jint (*func_java_nio_IntBuffer_limit_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_limit_int_R_java_nio_Buffer 15
typedef jobject (*func_java_nio_IntBuffer_limit_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_IntBuffer_mark_R_java_nio_Buffer 16
typedef jobject (*func_java_nio_IntBuffer_mark_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_reset_R_java_nio_Buffer 17
typedef jobject (*func_java_nio_IntBuffer_reset_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_clear_R_java_nio_Buffer 18
typedef jobject (*func_java_nio_IntBuffer_clear_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_flip_R_java_nio_Buffer 19
typedef jobject (*func_java_nio_IntBuffer_flip_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_rewind_R_java_nio_Buffer 20
typedef jobject (*func_java_nio_IntBuffer_rewind_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_remaining_R_int 21
typedef jint (*func_java_nio_IntBuffer_remaining_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_hasRemaining_R_boolean 22
typedef jbool (*func_java_nio_IntBuffer_hasRemaining_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_isReadOnly_R_boolean 23
typedef jbool (*func_java_nio_IntBuffer_isReadOnly_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_hasArray_R_boolean 24
typedef jbool (*func_java_nio_IntBuffer_hasArray_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_array_R_java_lang_Object 25
typedef jobject (*func_java_nio_IntBuffer_array_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_arrayOffset_R_int 26
typedef jint (*func_java_nio_IntBuffer_arrayOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_isDirect_R_boolean 27
typedef jbool (*func_java_nio_IntBuffer_isDirect_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_nextGetIndex_R_int 28
typedef jint (*func_java_nio_IntBuffer_nextGetIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_nextGetIndex_int_R_int 29
typedef jint (*func_java_nio_IntBuffer_nextGetIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_IntBuffer_nextPutIndex_R_int 30
typedef jint (*func_java_nio_IntBuffer_nextPutIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_nextPutIndex_int_R_int 31
typedef jint (*func_java_nio_IntBuffer_nextPutIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_IntBuffer_checkIndex_int_R_int 32
typedef jint (*func_java_nio_IntBuffer_checkIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_IntBuffer_checkIndex_int_int_R_int 33
typedef jint (*func_java_nio_IntBuffer_checkIndex_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_IntBuffer_markValue_R_int 34
typedef jint (*func_java_nio_IntBuffer_markValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_truncate 35
typedef void (*func_java_nio_IntBuffer_truncate)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_discardMark 36
typedef void (*func_java_nio_IntBuffer_discardMark)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_compareTo_java_lang_Object_R_int 37
typedef jint (*func_java_nio_IntBuffer_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_IntBuffer_slice_R_java_nio_IntBuffer 38
typedef jobject (*func_java_nio_IntBuffer_slice_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_duplicate_R_java_nio_IntBuffer 39
typedef jobject (*func_java_nio_IntBuffer_duplicate_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_asReadOnlyBuffer_R_java_nio_IntBuffer 40
typedef jobject (*func_java_nio_IntBuffer_asReadOnlyBuffer_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_get_R_int 41
typedef jint (*func_java_nio_IntBuffer_get_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_put_int_R_java_nio_IntBuffer 42
typedef jobject (*func_java_nio_IntBuffer_put_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_IntBuffer_get_int_R_int 43
typedef jint (*func_java_nio_IntBuffer_get_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_IntBuffer_put_int_int_R_java_nio_IntBuffer 44
typedef jobject (*func_java_nio_IntBuffer_put_int_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_IntBuffer_get_Array1_int_int_int_R_java_nio_IntBuffer 45
typedef jobject (*func_java_nio_IntBuffer_get_Array1_int_int_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_IntBuffer_get_Array1_int_R_java_nio_IntBuffer 46
typedef jobject (*func_java_nio_IntBuffer_get_Array1_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_IntBuffer_put_java_nio_IntBuffer_R_java_nio_IntBuffer 47
typedef jobject (*func_java_nio_IntBuffer_put_java_nio_IntBuffer_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_IntBuffer_put_Array1_int_int_int_R_java_nio_IntBuffer 48
typedef jobject (*func_java_nio_IntBuffer_put_Array1_int_int_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_IntBuffer_put_Array1_int_R_java_nio_IntBuffer 49
typedef jobject (*func_java_nio_IntBuffer_put_Array1_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_IntBuffer_array_R_Array1_int 50
typedef jobject (*func_java_nio_IntBuffer_array_R_Array1_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_position_int_R_java_nio_IntBuffer 51
typedef jobject (*func_java_nio_IntBuffer_position_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_IntBuffer_limit_int_R_java_nio_IntBuffer 52
typedef jobject (*func_java_nio_IntBuffer_limit_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_IntBuffer_mark_R_java_nio_IntBuffer 53
typedef jobject (*func_java_nio_IntBuffer_mark_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_reset_R_java_nio_IntBuffer 54
typedef jobject (*func_java_nio_IntBuffer_reset_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_clear_R_java_nio_IntBuffer 55
typedef jobject (*func_java_nio_IntBuffer_clear_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_flip_R_java_nio_IntBuffer 56
typedef jobject (*func_java_nio_IntBuffer_flip_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_rewind_R_java_nio_IntBuffer 57
typedef jobject (*func_java_nio_IntBuffer_rewind_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_compact_R_java_nio_IntBuffer 58
typedef jobject (*func_java_nio_IntBuffer_compact_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_IntBuffer_compareTo_java_nio_IntBuffer_R_int 59
typedef jint (*func_java_nio_IntBuffer_compareTo_java_nio_IntBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_IntBuffer_order_R_java_nio_ByteOrder 60
typedef jobject (*func_java_nio_IntBuffer_order_R_java_nio_ByteOrder)(jcontext ctx, jobject self);

void mark_java_nio_IntBuffer(jobject object, jint mark, jint depth);
void clinit_java_nio_IntBuffer(jcontext ctx);
void init_java_nio_IntBuffer_int_int_int_int_Array1_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4, jint param5);
void init_java_nio_IntBuffer_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject SM_java_nio_IntBuffer_allocate_int_R_java_nio_IntBuffer(jcontext ctx, jint param0);
jobject SM_java_nio_IntBuffer_wrap_Array1_int_int_int_R_java_nio_IntBuffer(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_nio_IntBuffer_wrap_Array1_int_R_java_nio_IntBuffer(jcontext ctx, jobject param0);
jobject M_java_nio_IntBuffer_get_Array1_int_int_int_R_java_nio_IntBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_nio_IntBuffer_get_Array1_int_R_java_nio_IntBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_IntBuffer_put_java_nio_IntBuffer_R_java_nio_IntBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_IntBuffer_put_Array1_int_int_int_R_java_nio_IntBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_nio_IntBuffer_put_Array1_int_R_java_nio_IntBuffer(jcontext ctx, jobject self, jobject param0);
jbool M_java_nio_IntBuffer_hasArray_R_boolean(jcontext ctx, jobject self);
jobject M_java_nio_IntBuffer_array_R_Array1_int(jcontext ctx, jobject self);
jint M_java_nio_IntBuffer_arrayOffset_R_int(jcontext ctx, jobject self);
jobject M_java_nio_IntBuffer_position_int_R_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_IntBuffer_limit_int_R_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_IntBuffer_mark_R_java_nio_IntBuffer(jcontext ctx, jobject self);
jobject M_java_nio_IntBuffer_reset_R_java_nio_IntBuffer(jcontext ctx, jobject self);
jobject M_java_nio_IntBuffer_clear_R_java_nio_IntBuffer(jcontext ctx, jobject self);
jobject M_java_nio_IntBuffer_flip_R_java_nio_IntBuffer(jcontext ctx, jobject self);
jobject M_java_nio_IntBuffer_rewind_R_java_nio_IntBuffer(jcontext ctx, jobject self);
jobject M_java_nio_IntBuffer_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_nio_IntBuffer_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_nio_IntBuffer_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool SM_java_nio_IntBuffer_equals_int_int_R_boolean(jcontext ctx, jint param0, jint param1);
jint M_java_nio_IntBuffer_compareTo_java_nio_IntBuffer_R_int(jcontext ctx, jobject self, jobject param0);
jint SM_java_nio_IntBuffer_compare_int_int_R_int(jcontext ctx, jint param0, jint param1);
jobject M_java_nio_IntBuffer_array_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_nio_IntBuffer_rewind_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_IntBuffer_flip_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_IntBuffer_clear_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_IntBuffer_reset_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_IntBuffer_mark_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_IntBuffer_limit_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_IntBuffer_position_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0);
jint M_java_nio_IntBuffer_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
