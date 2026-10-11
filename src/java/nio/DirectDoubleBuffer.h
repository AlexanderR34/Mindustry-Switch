#ifndef HEADER_java_nio_DirectDoubleBuffer
#define HEADER_java_nio_DirectDoubleBuffer

#include "Clearwing.h"
#include "java/nio/DoubleBuffer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_DirectDoubleBuffer {
	java_nio_DoubleBuffer parent;
	jref F_bb;
	jint F_offset;
} java_nio_DirectDoubleBuffer;

extern Class class_java_nio_DirectDoubleBuffer;

extern jbool SF_java_nio_DirectDoubleBuffer_$assertionsDisabled;

#define VTABLE_java_nio_DirectDoubleBuffer_hashCode_R_int 0
typedef jint (*func_java_nio_DirectDoubleBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_DirectDoubleBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectDoubleBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_DirectDoubleBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_DirectDoubleBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_DirectDoubleBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_finalize 5
typedef void (*func_java_nio_DirectDoubleBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_notify 6
typedef void (*func_java_nio_DirectDoubleBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_notifyAll 7
typedef void (*func_java_nio_DirectDoubleBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_wait 8
typedef void (*func_java_nio_DirectDoubleBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_wait_long 9
typedef void (*func_java_nio_DirectDoubleBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_DirectDoubleBuffer_wait_long_int 10
typedef void (*func_java_nio_DirectDoubleBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_DirectDoubleBuffer_capacity_R_int 11
typedef jint (*func_java_nio_DirectDoubleBuffer_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_position_R_int 12
typedef jint (*func_java_nio_DirectDoubleBuffer_position_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_position_int_R_java_nio_Buffer 13
typedef jobject (*func_java_nio_DirectDoubleBuffer_position_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectDoubleBuffer_limit_R_int 14
typedef jint (*func_java_nio_DirectDoubleBuffer_limit_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_limit_int_R_java_nio_Buffer 15
typedef jobject (*func_java_nio_DirectDoubleBuffer_limit_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectDoubleBuffer_mark_R_java_nio_Buffer 16
typedef jobject (*func_java_nio_DirectDoubleBuffer_mark_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_reset_R_java_nio_Buffer 17
typedef jobject (*func_java_nio_DirectDoubleBuffer_reset_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_clear_R_java_nio_Buffer 18
typedef jobject (*func_java_nio_DirectDoubleBuffer_clear_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_flip_R_java_nio_Buffer 19
typedef jobject (*func_java_nio_DirectDoubleBuffer_flip_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_rewind_R_java_nio_Buffer 20
typedef jobject (*func_java_nio_DirectDoubleBuffer_rewind_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_remaining_R_int 21
typedef jint (*func_java_nio_DirectDoubleBuffer_remaining_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_hasRemaining_R_boolean 22
typedef jbool (*func_java_nio_DirectDoubleBuffer_hasRemaining_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_isReadOnly_R_boolean 23
typedef jbool (*func_java_nio_DirectDoubleBuffer_isReadOnly_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_hasArray_R_boolean 24
typedef jbool (*func_java_nio_DirectDoubleBuffer_hasArray_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_array_R_java_lang_Object 25
typedef jobject (*func_java_nio_DirectDoubleBuffer_array_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_arrayOffset_R_int 26
typedef jint (*func_java_nio_DirectDoubleBuffer_arrayOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_isDirect_R_boolean 27
typedef jbool (*func_java_nio_DirectDoubleBuffer_isDirect_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_nextGetIndex_R_int 28
typedef jint (*func_java_nio_DirectDoubleBuffer_nextGetIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_nextGetIndex_int_R_int 29
typedef jint (*func_java_nio_DirectDoubleBuffer_nextGetIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectDoubleBuffer_nextPutIndex_R_int 30
typedef jint (*func_java_nio_DirectDoubleBuffer_nextPutIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_nextPutIndex_int_R_int 31
typedef jint (*func_java_nio_DirectDoubleBuffer_nextPutIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectDoubleBuffer_checkIndex_int_R_int 32
typedef jint (*func_java_nio_DirectDoubleBuffer_checkIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectDoubleBuffer_checkIndex_int_int_R_int 33
typedef jint (*func_java_nio_DirectDoubleBuffer_checkIndex_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_DirectDoubleBuffer_markValue_R_int 34
typedef jint (*func_java_nio_DirectDoubleBuffer_markValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_truncate 35
typedef void (*func_java_nio_DirectDoubleBuffer_truncate)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_discardMark 36
typedef void (*func_java_nio_DirectDoubleBuffer_discardMark)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_compareTo_java_lang_Object_R_int 37
typedef jint (*func_java_nio_DirectDoubleBuffer_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectDoubleBuffer_slice_R_java_nio_DoubleBuffer 38
typedef jobject (*func_java_nio_DirectDoubleBuffer_slice_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_duplicate_R_java_nio_DoubleBuffer 39
typedef jobject (*func_java_nio_DirectDoubleBuffer_duplicate_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_asReadOnlyBuffer_R_java_nio_DoubleBuffer 40
typedef jobject (*func_java_nio_DirectDoubleBuffer_asReadOnlyBuffer_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_get_R_double 41
typedef jdouble (*func_java_nio_DirectDoubleBuffer_get_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_put_double_R_java_nio_DoubleBuffer 42
typedef jobject (*func_java_nio_DirectDoubleBuffer_put_double_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_java_nio_DirectDoubleBuffer_get_int_R_double 43
typedef jdouble (*func_java_nio_DirectDoubleBuffer_get_int_R_double)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectDoubleBuffer_put_int_double_R_java_nio_DoubleBuffer 44
typedef jobject (*func_java_nio_DirectDoubleBuffer_put_int_double_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jint param0, jdouble param1);
#define VTABLE_java_nio_DirectDoubleBuffer_get_Array1_double_int_int_R_java_nio_DoubleBuffer 45
typedef jobject (*func_java_nio_DirectDoubleBuffer_get_Array1_double_int_int_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_DirectDoubleBuffer_get_Array1_double_R_java_nio_DoubleBuffer 46
typedef jobject (*func_java_nio_DirectDoubleBuffer_get_Array1_double_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectDoubleBuffer_put_java_nio_DoubleBuffer_R_java_nio_DoubleBuffer 47
typedef jobject (*func_java_nio_DirectDoubleBuffer_put_java_nio_DoubleBuffer_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectDoubleBuffer_put_Array1_double_int_int_R_java_nio_DoubleBuffer 48
typedef jobject (*func_java_nio_DirectDoubleBuffer_put_Array1_double_int_int_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_DirectDoubleBuffer_put_Array1_double_R_java_nio_DoubleBuffer 49
typedef jobject (*func_java_nio_DirectDoubleBuffer_put_Array1_double_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectDoubleBuffer_array_R_Array1_double 50
typedef jobject (*func_java_nio_DirectDoubleBuffer_array_R_Array1_double)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_position_int_R_java_nio_DoubleBuffer 51
typedef jobject (*func_java_nio_DirectDoubleBuffer_position_int_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectDoubleBuffer_limit_int_R_java_nio_DoubleBuffer 52
typedef jobject (*func_java_nio_DirectDoubleBuffer_limit_int_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectDoubleBuffer_mark_R_java_nio_DoubleBuffer 53
typedef jobject (*func_java_nio_DirectDoubleBuffer_mark_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_reset_R_java_nio_DoubleBuffer 54
typedef jobject (*func_java_nio_DirectDoubleBuffer_reset_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_clear_R_java_nio_DoubleBuffer 55
typedef jobject (*func_java_nio_DirectDoubleBuffer_clear_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_flip_R_java_nio_DoubleBuffer 56
typedef jobject (*func_java_nio_DirectDoubleBuffer_flip_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_rewind_R_java_nio_DoubleBuffer 57
typedef jobject (*func_java_nio_DirectDoubleBuffer_rewind_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_compact_R_java_nio_DoubleBuffer 58
typedef jobject (*func_java_nio_DirectDoubleBuffer_compact_R_java_nio_DoubleBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_compareTo_java_nio_DoubleBuffer_R_int 59
typedef jint (*func_java_nio_DirectDoubleBuffer_compareTo_java_nio_DoubleBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectDoubleBuffer_order_R_java_nio_ByteOrder 60
typedef jobject (*func_java_nio_DirectDoubleBuffer_order_R_java_nio_ByteOrder)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectDoubleBuffer_ix_int_R_int 61
typedef jint (*func_java_nio_DirectDoubleBuffer_ix_int_R_int)(jcontext ctx, jobject self, jint param0);

void mark_java_nio_DirectDoubleBuffer(jobject object, jint mark, jint depth);
void clinit_java_nio_DirectDoubleBuffer(jcontext ctx);
void init_java_nio_DirectDoubleBuffer_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
void init_java_nio_DirectDoubleBuffer_java_nio_ByteBuffer_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5);
jobject M_java_nio_DirectDoubleBuffer_slice_R_java_nio_DoubleBuffer(jcontext ctx, jobject self);
jobject M_java_nio_DirectDoubleBuffer_duplicate_R_java_nio_DoubleBuffer(jcontext ctx, jobject self);
jobject M_java_nio_DirectDoubleBuffer_asReadOnlyBuffer_R_java_nio_DoubleBuffer(jcontext ctx, jobject self);
jint M_java_nio_DirectDoubleBuffer_ix_int_R_int(jcontext ctx, jobject self, jint param0);
jdouble M_java_nio_DirectDoubleBuffer_get_R_double(jcontext ctx, jobject self);
jdouble M_java_nio_DirectDoubleBuffer_get_int_R_double(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_DirectDoubleBuffer_put_double_R_java_nio_DoubleBuffer(jcontext ctx, jobject self, jdouble param0);
jobject M_java_nio_DirectDoubleBuffer_put_int_double_R_java_nio_DoubleBuffer(jcontext ctx, jobject self, jint param0, jdouble param1);
jobject M_java_nio_DirectDoubleBuffer_compact_R_java_nio_DoubleBuffer(jcontext ctx, jobject self);
jbool M_java_nio_DirectDoubleBuffer_isDirect_R_boolean(jcontext ctx, jobject self);
jbool M_java_nio_DirectDoubleBuffer_isReadOnly_R_boolean(jcontext ctx, jobject self);
jobject M_java_nio_DirectDoubleBuffer_order_R_java_nio_ByteOrder(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
