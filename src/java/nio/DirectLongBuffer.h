#ifndef HEADER_java_nio_DirectLongBuffer
#define HEADER_java_nio_DirectLongBuffer

#include "Clearwing.h"
#include "java/nio/LongBuffer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_DirectLongBuffer {
	java_nio_LongBuffer parent;
	jref F_bb;
	jint F_offset;
} java_nio_DirectLongBuffer;

extern Class class_java_nio_DirectLongBuffer;

extern jbool SF_java_nio_DirectLongBuffer_$assertionsDisabled;

#define VTABLE_java_nio_DirectLongBuffer_hashCode_R_int 0
typedef jint (*func_java_nio_DirectLongBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_DirectLongBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectLongBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_DirectLongBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_DirectLongBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_DirectLongBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_finalize 5
typedef void (*func_java_nio_DirectLongBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_notify 6
typedef void (*func_java_nio_DirectLongBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_notifyAll 7
typedef void (*func_java_nio_DirectLongBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_wait 8
typedef void (*func_java_nio_DirectLongBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_wait_long 9
typedef void (*func_java_nio_DirectLongBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_DirectLongBuffer_wait_long_int 10
typedef void (*func_java_nio_DirectLongBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_DirectLongBuffer_capacity_R_int 11
typedef jint (*func_java_nio_DirectLongBuffer_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_position_R_int 12
typedef jint (*func_java_nio_DirectLongBuffer_position_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_position_int_R_java_nio_Buffer 13
typedef jobject (*func_java_nio_DirectLongBuffer_position_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectLongBuffer_limit_R_int 14
typedef jint (*func_java_nio_DirectLongBuffer_limit_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_limit_int_R_java_nio_Buffer 15
typedef jobject (*func_java_nio_DirectLongBuffer_limit_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectLongBuffer_mark_R_java_nio_Buffer 16
typedef jobject (*func_java_nio_DirectLongBuffer_mark_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_reset_R_java_nio_Buffer 17
typedef jobject (*func_java_nio_DirectLongBuffer_reset_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_clear_R_java_nio_Buffer 18
typedef jobject (*func_java_nio_DirectLongBuffer_clear_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_flip_R_java_nio_Buffer 19
typedef jobject (*func_java_nio_DirectLongBuffer_flip_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_rewind_R_java_nio_Buffer 20
typedef jobject (*func_java_nio_DirectLongBuffer_rewind_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_remaining_R_int 21
typedef jint (*func_java_nio_DirectLongBuffer_remaining_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_hasRemaining_R_boolean 22
typedef jbool (*func_java_nio_DirectLongBuffer_hasRemaining_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_isReadOnly_R_boolean 23
typedef jbool (*func_java_nio_DirectLongBuffer_isReadOnly_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_hasArray_R_boolean 24
typedef jbool (*func_java_nio_DirectLongBuffer_hasArray_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_array_R_java_lang_Object 25
typedef jobject (*func_java_nio_DirectLongBuffer_array_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_arrayOffset_R_int 26
typedef jint (*func_java_nio_DirectLongBuffer_arrayOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_isDirect_R_boolean 27
typedef jbool (*func_java_nio_DirectLongBuffer_isDirect_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_nextGetIndex_R_int 28
typedef jint (*func_java_nio_DirectLongBuffer_nextGetIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_nextGetIndex_int_R_int 29
typedef jint (*func_java_nio_DirectLongBuffer_nextGetIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectLongBuffer_nextPutIndex_R_int 30
typedef jint (*func_java_nio_DirectLongBuffer_nextPutIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_nextPutIndex_int_R_int 31
typedef jint (*func_java_nio_DirectLongBuffer_nextPutIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectLongBuffer_checkIndex_int_R_int 32
typedef jint (*func_java_nio_DirectLongBuffer_checkIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectLongBuffer_checkIndex_int_int_R_int 33
typedef jint (*func_java_nio_DirectLongBuffer_checkIndex_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_DirectLongBuffer_markValue_R_int 34
typedef jint (*func_java_nio_DirectLongBuffer_markValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_truncate 35
typedef void (*func_java_nio_DirectLongBuffer_truncate)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_discardMark 36
typedef void (*func_java_nio_DirectLongBuffer_discardMark)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_compareTo_java_lang_Object_R_int 37
typedef jint (*func_java_nio_DirectLongBuffer_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectLongBuffer_slice_R_java_nio_LongBuffer 38
typedef jobject (*func_java_nio_DirectLongBuffer_slice_R_java_nio_LongBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_duplicate_R_java_nio_LongBuffer 39
typedef jobject (*func_java_nio_DirectLongBuffer_duplicate_R_java_nio_LongBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_asReadOnlyBuffer_R_java_nio_LongBuffer 40
typedef jobject (*func_java_nio_DirectLongBuffer_asReadOnlyBuffer_R_java_nio_LongBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_get_R_long 41
typedef jlong (*func_java_nio_DirectLongBuffer_get_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_put_long_R_java_nio_LongBuffer 42
typedef jobject (*func_java_nio_DirectLongBuffer_put_long_R_java_nio_LongBuffer)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_DirectLongBuffer_get_int_R_long 43
typedef jlong (*func_java_nio_DirectLongBuffer_get_int_R_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectLongBuffer_put_int_long_R_java_nio_LongBuffer 44
typedef jobject (*func_java_nio_DirectLongBuffer_put_int_long_R_java_nio_LongBuffer)(jcontext ctx, jobject self, jint param0, jlong param1);
#define VTABLE_java_nio_DirectLongBuffer_get_Array1_long_int_int_R_java_nio_LongBuffer 45
typedef jobject (*func_java_nio_DirectLongBuffer_get_Array1_long_int_int_R_java_nio_LongBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_DirectLongBuffer_get_Array1_long_R_java_nio_LongBuffer 46
typedef jobject (*func_java_nio_DirectLongBuffer_get_Array1_long_R_java_nio_LongBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectLongBuffer_put_java_nio_LongBuffer_R_java_nio_LongBuffer 47
typedef jobject (*func_java_nio_DirectLongBuffer_put_java_nio_LongBuffer_R_java_nio_LongBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectLongBuffer_put_Array1_long_int_int_R_java_nio_LongBuffer 48
typedef jobject (*func_java_nio_DirectLongBuffer_put_Array1_long_int_int_R_java_nio_LongBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_DirectLongBuffer_put_Array1_long_R_java_nio_LongBuffer 49
typedef jobject (*func_java_nio_DirectLongBuffer_put_Array1_long_R_java_nio_LongBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectLongBuffer_array_R_Array1_long 50
typedef jobject (*func_java_nio_DirectLongBuffer_array_R_Array1_long)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_position_int_R_java_nio_LongBuffer 51
typedef jobject (*func_java_nio_DirectLongBuffer_position_int_R_java_nio_LongBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectLongBuffer_limit_int_R_java_nio_LongBuffer 52
typedef jobject (*func_java_nio_DirectLongBuffer_limit_int_R_java_nio_LongBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectLongBuffer_mark_R_java_nio_LongBuffer 53
typedef jobject (*func_java_nio_DirectLongBuffer_mark_R_java_nio_LongBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_reset_R_java_nio_LongBuffer 54
typedef jobject (*func_java_nio_DirectLongBuffer_reset_R_java_nio_LongBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_clear_R_java_nio_LongBuffer 55
typedef jobject (*func_java_nio_DirectLongBuffer_clear_R_java_nio_LongBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_flip_R_java_nio_LongBuffer 56
typedef jobject (*func_java_nio_DirectLongBuffer_flip_R_java_nio_LongBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_rewind_R_java_nio_LongBuffer 57
typedef jobject (*func_java_nio_DirectLongBuffer_rewind_R_java_nio_LongBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_compact_R_java_nio_LongBuffer 58
typedef jobject (*func_java_nio_DirectLongBuffer_compact_R_java_nio_LongBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_compareTo_java_nio_LongBuffer_R_int 59
typedef jint (*func_java_nio_DirectLongBuffer_compareTo_java_nio_LongBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectLongBuffer_order_R_java_nio_ByteOrder 60
typedef jobject (*func_java_nio_DirectLongBuffer_order_R_java_nio_ByteOrder)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectLongBuffer_ix_int_R_int 61
typedef jint (*func_java_nio_DirectLongBuffer_ix_int_R_int)(jcontext ctx, jobject self, jint param0);

void mark_java_nio_DirectLongBuffer(jobject object, jint mark, jint depth);
void clinit_java_nio_DirectLongBuffer(jcontext ctx);
void init_java_nio_DirectLongBuffer_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
void init_java_nio_DirectLongBuffer_java_nio_ByteBuffer_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5);
jobject M_java_nio_DirectLongBuffer_slice_R_java_nio_LongBuffer(jcontext ctx, jobject self);
jobject M_java_nio_DirectLongBuffer_duplicate_R_java_nio_LongBuffer(jcontext ctx, jobject self);
jobject M_java_nio_DirectLongBuffer_asReadOnlyBuffer_R_java_nio_LongBuffer(jcontext ctx, jobject self);
jint M_java_nio_DirectLongBuffer_ix_int_R_int(jcontext ctx, jobject self, jint param0);
jlong M_java_nio_DirectLongBuffer_get_R_long(jcontext ctx, jobject self);
jlong M_java_nio_DirectLongBuffer_get_int_R_long(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_DirectLongBuffer_put_long_R_java_nio_LongBuffer(jcontext ctx, jobject self, jlong param0);
jobject M_java_nio_DirectLongBuffer_put_int_long_R_java_nio_LongBuffer(jcontext ctx, jobject self, jint param0, jlong param1);
jobject M_java_nio_DirectLongBuffer_compact_R_java_nio_LongBuffer(jcontext ctx, jobject self);
jbool M_java_nio_DirectLongBuffer_isDirect_R_boolean(jcontext ctx, jobject self);
jbool M_java_nio_DirectLongBuffer_isReadOnly_R_boolean(jcontext ctx, jobject self);
jobject M_java_nio_DirectLongBuffer_order_R_java_nio_ByteOrder(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
