#ifndef HEADER_java_nio_ByteBufferAsIntBufferL
#define HEADER_java_nio_ByteBufferAsIntBufferL

#include "Clearwing.h"
#include "java/nio/IntBuffer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_ByteBufferAsIntBufferL {
	java_nio_IntBuffer parent;
	jref F_bb;
	jint F_offset;
} java_nio_ByteBufferAsIntBufferL;

extern Class class_java_nio_ByteBufferAsIntBufferL;

extern jbool SF_java_nio_ByteBufferAsIntBufferL_$assertionsDisabled;

#define VTABLE_java_nio_ByteBufferAsIntBufferL_hashCode_R_int 0
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_ByteBufferAsIntBufferL_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_finalize 5
typedef void (*func_java_nio_ByteBufferAsIntBufferL_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_notify 6
typedef void (*func_java_nio_ByteBufferAsIntBufferL_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_notifyAll 7
typedef void (*func_java_nio_ByteBufferAsIntBufferL_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_wait 8
typedef void (*func_java_nio_ByteBufferAsIntBufferL_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_wait_long 9
typedef void (*func_java_nio_ByteBufferAsIntBufferL_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_wait_long_int 10
typedef void (*func_java_nio_ByteBufferAsIntBufferL_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_capacity_R_int 11
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_position_R_int 12
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_position_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_position_int_R_java_nio_Buffer 13
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_position_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_limit_R_int 14
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_limit_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_limit_int_R_java_nio_Buffer 15
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_limit_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_mark_R_java_nio_Buffer 16
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_mark_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_reset_R_java_nio_Buffer 17
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_reset_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_clear_R_java_nio_Buffer 18
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_clear_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_flip_R_java_nio_Buffer 19
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_flip_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_rewind_R_java_nio_Buffer 20
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_rewind_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_remaining_R_int 21
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_remaining_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_hasRemaining_R_boolean 22
typedef jbool (*func_java_nio_ByteBufferAsIntBufferL_hasRemaining_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_isReadOnly_R_boolean 23
typedef jbool (*func_java_nio_ByteBufferAsIntBufferL_isReadOnly_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_hasArray_R_boolean 24
typedef jbool (*func_java_nio_ByteBufferAsIntBufferL_hasArray_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_array_R_java_lang_Object 25
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_array_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_arrayOffset_R_int 26
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_arrayOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_isDirect_R_boolean 27
typedef jbool (*func_java_nio_ByteBufferAsIntBufferL_isDirect_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_nextGetIndex_R_int 28
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_nextGetIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_nextGetIndex_int_R_int 29
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_nextGetIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_nextPutIndex_R_int 30
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_nextPutIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_nextPutIndex_int_R_int 31
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_nextPutIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_checkIndex_int_R_int 32
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_checkIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_checkIndex_int_int_R_int 33
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_checkIndex_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_markValue_R_int 34
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_markValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_truncate 35
typedef void (*func_java_nio_ByteBufferAsIntBufferL_truncate)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_discardMark 36
typedef void (*func_java_nio_ByteBufferAsIntBufferL_discardMark)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_compareTo_java_lang_Object_R_int 37
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_slice_R_java_nio_IntBuffer 38
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_slice_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_duplicate_R_java_nio_IntBuffer 39
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_duplicate_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_asReadOnlyBuffer_R_java_nio_IntBuffer 40
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_asReadOnlyBuffer_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_get_R_int 41
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_get_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_put_int_R_java_nio_IntBuffer 42
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_put_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_get_int_R_int 43
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_get_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_put_int_int_R_java_nio_IntBuffer 44
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_put_int_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_get_Array1_int_int_int_R_java_nio_IntBuffer 45
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_get_Array1_int_int_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_get_Array1_int_R_java_nio_IntBuffer 46
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_get_Array1_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_put_java_nio_IntBuffer_R_java_nio_IntBuffer 47
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_put_java_nio_IntBuffer_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_put_Array1_int_int_int_R_java_nio_IntBuffer 48
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_put_Array1_int_int_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_put_Array1_int_R_java_nio_IntBuffer 49
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_put_Array1_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_array_R_Array1_int 50
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_array_R_Array1_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_position_int_R_java_nio_IntBuffer 51
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_position_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_limit_int_R_java_nio_IntBuffer 52
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_limit_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_mark_R_java_nio_IntBuffer 53
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_mark_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_reset_R_java_nio_IntBuffer 54
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_reset_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_clear_R_java_nio_IntBuffer 55
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_clear_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_flip_R_java_nio_IntBuffer 56
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_flip_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_rewind_R_java_nio_IntBuffer 57
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_rewind_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_compact_R_java_nio_IntBuffer 58
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_compact_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_compareTo_java_nio_IntBuffer_R_int 59
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_compareTo_java_nio_IntBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_order_R_java_nio_ByteOrder 60
typedef jobject (*func_java_nio_ByteBufferAsIntBufferL_order_R_java_nio_ByteOrder)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ByteBufferAsIntBufferL_ix_int_R_int 61
typedef jint (*func_java_nio_ByteBufferAsIntBufferL_ix_int_R_int)(jcontext ctx, jobject self, jint param0);

void mark_java_nio_ByteBufferAsIntBufferL(jobject object, jint mark, jint depth);
void clinit_java_nio_ByteBufferAsIntBufferL(jcontext ctx);
void init_java_nio_ByteBufferAsIntBufferL_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
void init_java_nio_ByteBufferAsIntBufferL_java_nio_ByteBuffer_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5);
jobject M_java_nio_ByteBufferAsIntBufferL_slice_R_java_nio_IntBuffer(jcontext ctx, jobject self);
jobject M_java_nio_ByteBufferAsIntBufferL_duplicate_R_java_nio_IntBuffer(jcontext ctx, jobject self);
jobject M_java_nio_ByteBufferAsIntBufferL_asReadOnlyBuffer_R_java_nio_IntBuffer(jcontext ctx, jobject self);
jint M_java_nio_ByteBufferAsIntBufferL_ix_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_nio_ByteBufferAsIntBufferL_get_R_int(jcontext ctx, jobject self);
jint M_java_nio_ByteBufferAsIntBufferL_get_int_R_int(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_ByteBufferAsIntBufferL_put_int_R_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_ByteBufferAsIntBufferL_put_int_int_R_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_java_nio_ByteBufferAsIntBufferL_compact_R_java_nio_IntBuffer(jcontext ctx, jobject self);
jbool M_java_nio_ByteBufferAsIntBufferL_isDirect_R_boolean(jcontext ctx, jobject self);
jbool M_java_nio_ByteBufferAsIntBufferL_isReadOnly_R_boolean(jcontext ctx, jobject self);
jobject M_java_nio_ByteBufferAsIntBufferL_order_R_java_nio_ByteOrder(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
