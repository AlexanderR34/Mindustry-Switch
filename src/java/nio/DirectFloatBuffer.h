#ifndef HEADER_java_nio_DirectFloatBuffer
#define HEADER_java_nio_DirectFloatBuffer

#include "Clearwing.h"
#include "java/nio/FloatBuffer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_DirectFloatBuffer {
	java_nio_FloatBuffer parent;
	jref F_bb;
	jint F_offset;
} java_nio_DirectFloatBuffer;

extern Class class_java_nio_DirectFloatBuffer;

extern jbool SF_java_nio_DirectFloatBuffer_$assertionsDisabled;

#define VTABLE_java_nio_DirectFloatBuffer_hashCode_R_int 0
typedef jint (*func_java_nio_DirectFloatBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_DirectFloatBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectFloatBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_DirectFloatBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_DirectFloatBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_DirectFloatBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_finalize 5
typedef void (*func_java_nio_DirectFloatBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_notify 6
typedef void (*func_java_nio_DirectFloatBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_notifyAll 7
typedef void (*func_java_nio_DirectFloatBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_wait 8
typedef void (*func_java_nio_DirectFloatBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_wait_long 9
typedef void (*func_java_nio_DirectFloatBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_DirectFloatBuffer_wait_long_int 10
typedef void (*func_java_nio_DirectFloatBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_DirectFloatBuffer_capacity_R_int 11
typedef jint (*func_java_nio_DirectFloatBuffer_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_position_R_int 12
typedef jint (*func_java_nio_DirectFloatBuffer_position_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_position_int_R_java_nio_Buffer 13
typedef jobject (*func_java_nio_DirectFloatBuffer_position_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectFloatBuffer_limit_R_int 14
typedef jint (*func_java_nio_DirectFloatBuffer_limit_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_limit_int_R_java_nio_Buffer 15
typedef jobject (*func_java_nio_DirectFloatBuffer_limit_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectFloatBuffer_mark_R_java_nio_Buffer 16
typedef jobject (*func_java_nio_DirectFloatBuffer_mark_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_reset_R_java_nio_Buffer 17
typedef jobject (*func_java_nio_DirectFloatBuffer_reset_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_clear_R_java_nio_Buffer 18
typedef jobject (*func_java_nio_DirectFloatBuffer_clear_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_flip_R_java_nio_Buffer 19
typedef jobject (*func_java_nio_DirectFloatBuffer_flip_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_rewind_R_java_nio_Buffer 20
typedef jobject (*func_java_nio_DirectFloatBuffer_rewind_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_remaining_R_int 21
typedef jint (*func_java_nio_DirectFloatBuffer_remaining_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_hasRemaining_R_boolean 22
typedef jbool (*func_java_nio_DirectFloatBuffer_hasRemaining_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_isReadOnly_R_boolean 23
typedef jbool (*func_java_nio_DirectFloatBuffer_isReadOnly_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_hasArray_R_boolean 24
typedef jbool (*func_java_nio_DirectFloatBuffer_hasArray_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_array_R_java_lang_Object 25
typedef jobject (*func_java_nio_DirectFloatBuffer_array_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_arrayOffset_R_int 26
typedef jint (*func_java_nio_DirectFloatBuffer_arrayOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_isDirect_R_boolean 27
typedef jbool (*func_java_nio_DirectFloatBuffer_isDirect_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_nextGetIndex_R_int 28
typedef jint (*func_java_nio_DirectFloatBuffer_nextGetIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_nextGetIndex_int_R_int 29
typedef jint (*func_java_nio_DirectFloatBuffer_nextGetIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectFloatBuffer_nextPutIndex_R_int 30
typedef jint (*func_java_nio_DirectFloatBuffer_nextPutIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_nextPutIndex_int_R_int 31
typedef jint (*func_java_nio_DirectFloatBuffer_nextPutIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectFloatBuffer_checkIndex_int_R_int 32
typedef jint (*func_java_nio_DirectFloatBuffer_checkIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectFloatBuffer_checkIndex_int_int_R_int 33
typedef jint (*func_java_nio_DirectFloatBuffer_checkIndex_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_DirectFloatBuffer_markValue_R_int 34
typedef jint (*func_java_nio_DirectFloatBuffer_markValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_truncate 35
typedef void (*func_java_nio_DirectFloatBuffer_truncate)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_discardMark 36
typedef void (*func_java_nio_DirectFloatBuffer_discardMark)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_compareTo_java_lang_Object_R_int 37
typedef jint (*func_java_nio_DirectFloatBuffer_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectFloatBuffer_slice_R_java_nio_FloatBuffer 38
typedef jobject (*func_java_nio_DirectFloatBuffer_slice_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_duplicate_R_java_nio_FloatBuffer 39
typedef jobject (*func_java_nio_DirectFloatBuffer_duplicate_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_asReadOnlyBuffer_R_java_nio_FloatBuffer 40
typedef jobject (*func_java_nio_DirectFloatBuffer_asReadOnlyBuffer_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_get_R_float 41
typedef jfloat (*func_java_nio_DirectFloatBuffer_get_R_float)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_put_float_R_java_nio_FloatBuffer 42
typedef jobject (*func_java_nio_DirectFloatBuffer_put_float_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_java_nio_DirectFloatBuffer_get_int_R_float 43
typedef jfloat (*func_java_nio_DirectFloatBuffer_get_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectFloatBuffer_put_int_float_R_java_nio_FloatBuffer 44
typedef jobject (*func_java_nio_DirectFloatBuffer_put_int_float_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_java_nio_DirectFloatBuffer_get_Array1_float_int_int_R_java_nio_FloatBuffer 45
typedef jobject (*func_java_nio_DirectFloatBuffer_get_Array1_float_int_int_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_DirectFloatBuffer_get_Array1_float_R_java_nio_FloatBuffer 46
typedef jobject (*func_java_nio_DirectFloatBuffer_get_Array1_float_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectFloatBuffer_put_java_nio_FloatBuffer_R_java_nio_FloatBuffer 47
typedef jobject (*func_java_nio_DirectFloatBuffer_put_java_nio_FloatBuffer_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectFloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer 48
typedef jobject (*func_java_nio_DirectFloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_DirectFloatBuffer_put_Array1_float_R_java_nio_FloatBuffer 49
typedef jobject (*func_java_nio_DirectFloatBuffer_put_Array1_float_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectFloatBuffer_array_R_Array1_float 50
typedef jobject (*func_java_nio_DirectFloatBuffer_array_R_Array1_float)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_position_int_R_java_nio_FloatBuffer 51
typedef jobject (*func_java_nio_DirectFloatBuffer_position_int_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectFloatBuffer_limit_int_R_java_nio_FloatBuffer 52
typedef jobject (*func_java_nio_DirectFloatBuffer_limit_int_R_java_nio_FloatBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectFloatBuffer_mark_R_java_nio_FloatBuffer 53
typedef jobject (*func_java_nio_DirectFloatBuffer_mark_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_reset_R_java_nio_FloatBuffer 54
typedef jobject (*func_java_nio_DirectFloatBuffer_reset_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_clear_R_java_nio_FloatBuffer 55
typedef jobject (*func_java_nio_DirectFloatBuffer_clear_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_flip_R_java_nio_FloatBuffer 56
typedef jobject (*func_java_nio_DirectFloatBuffer_flip_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_rewind_R_java_nio_FloatBuffer 57
typedef jobject (*func_java_nio_DirectFloatBuffer_rewind_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_compact_R_java_nio_FloatBuffer 58
typedef jobject (*func_java_nio_DirectFloatBuffer_compact_R_java_nio_FloatBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_compareTo_java_nio_FloatBuffer_R_int 59
typedef jint (*func_java_nio_DirectFloatBuffer_compareTo_java_nio_FloatBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectFloatBuffer_order_R_java_nio_ByteOrder 60
typedef jobject (*func_java_nio_DirectFloatBuffer_order_R_java_nio_ByteOrder)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectFloatBuffer_ix_int_R_int 61
typedef jint (*func_java_nio_DirectFloatBuffer_ix_int_R_int)(jcontext ctx, jobject self, jint param0);

void mark_java_nio_DirectFloatBuffer(jobject object, jint mark, jint depth);
void clinit_java_nio_DirectFloatBuffer(jcontext ctx);
void init_java_nio_DirectFloatBuffer_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
void init_java_nio_DirectFloatBuffer_java_nio_ByteBuffer_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5);
jobject M_java_nio_DirectFloatBuffer_slice_R_java_nio_FloatBuffer(jcontext ctx, jobject self);
jobject M_java_nio_DirectFloatBuffer_duplicate_R_java_nio_FloatBuffer(jcontext ctx, jobject self);
jobject M_java_nio_DirectFloatBuffer_asReadOnlyBuffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self);
jint M_java_nio_DirectFloatBuffer_ix_int_R_int(jcontext ctx, jobject self, jint param0);
jfloat M_java_nio_DirectFloatBuffer_get_R_float(jcontext ctx, jobject self);
jfloat M_java_nio_DirectFloatBuffer_get_int_R_float(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_DirectFloatBuffer_put_float_R_java_nio_FloatBuffer(jcontext ctx, jobject self, jfloat param0);
jobject M_java_nio_DirectFloatBuffer_put_int_float_R_java_nio_FloatBuffer(jcontext ctx, jobject self, jint param0, jfloat param1);
jobject M_java_nio_DirectFloatBuffer_compact_R_java_nio_FloatBuffer(jcontext ctx, jobject self);
jbool M_java_nio_DirectFloatBuffer_isDirect_R_boolean(jcontext ctx, jobject self);
jbool M_java_nio_DirectFloatBuffer_isReadOnly_R_boolean(jcontext ctx, jobject self);
jobject M_java_nio_DirectFloatBuffer_order_R_java_nio_ByteOrder(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
