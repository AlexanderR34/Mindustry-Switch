#ifndef HEADER_java_nio_DirectIntBuffer
#define HEADER_java_nio_DirectIntBuffer

#include "Clearwing.h"
#include "java/nio/IntBuffer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_DirectIntBuffer {
	java_nio_IntBuffer parent;
	jref F_bb;
	jint F_offset;
} java_nio_DirectIntBuffer;

extern Class class_java_nio_DirectIntBuffer;

extern jbool SF_java_nio_DirectIntBuffer_$assertionsDisabled;

#define VTABLE_java_nio_DirectIntBuffer_hashCode_R_int 0
typedef jint (*func_java_nio_DirectIntBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_DirectIntBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectIntBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_DirectIntBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_DirectIntBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_DirectIntBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_finalize 5
typedef void (*func_java_nio_DirectIntBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_notify 6
typedef void (*func_java_nio_DirectIntBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_notifyAll 7
typedef void (*func_java_nio_DirectIntBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_wait 8
typedef void (*func_java_nio_DirectIntBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_wait_long 9
typedef void (*func_java_nio_DirectIntBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_DirectIntBuffer_wait_long_int 10
typedef void (*func_java_nio_DirectIntBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_DirectIntBuffer_capacity_R_int 11
typedef jint (*func_java_nio_DirectIntBuffer_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_position_R_int 12
typedef jint (*func_java_nio_DirectIntBuffer_position_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_position_int_R_java_nio_Buffer 13
typedef jobject (*func_java_nio_DirectIntBuffer_position_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectIntBuffer_limit_R_int 14
typedef jint (*func_java_nio_DirectIntBuffer_limit_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_limit_int_R_java_nio_Buffer 15
typedef jobject (*func_java_nio_DirectIntBuffer_limit_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectIntBuffer_mark_R_java_nio_Buffer 16
typedef jobject (*func_java_nio_DirectIntBuffer_mark_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_reset_R_java_nio_Buffer 17
typedef jobject (*func_java_nio_DirectIntBuffer_reset_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_clear_R_java_nio_Buffer 18
typedef jobject (*func_java_nio_DirectIntBuffer_clear_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_flip_R_java_nio_Buffer 19
typedef jobject (*func_java_nio_DirectIntBuffer_flip_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_rewind_R_java_nio_Buffer 20
typedef jobject (*func_java_nio_DirectIntBuffer_rewind_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_remaining_R_int 21
typedef jint (*func_java_nio_DirectIntBuffer_remaining_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_hasRemaining_R_boolean 22
typedef jbool (*func_java_nio_DirectIntBuffer_hasRemaining_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_isReadOnly_R_boolean 23
typedef jbool (*func_java_nio_DirectIntBuffer_isReadOnly_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_hasArray_R_boolean 24
typedef jbool (*func_java_nio_DirectIntBuffer_hasArray_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_array_R_java_lang_Object 25
typedef jobject (*func_java_nio_DirectIntBuffer_array_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_arrayOffset_R_int 26
typedef jint (*func_java_nio_DirectIntBuffer_arrayOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_isDirect_R_boolean 27
typedef jbool (*func_java_nio_DirectIntBuffer_isDirect_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_nextGetIndex_R_int 28
typedef jint (*func_java_nio_DirectIntBuffer_nextGetIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_nextGetIndex_int_R_int 29
typedef jint (*func_java_nio_DirectIntBuffer_nextGetIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectIntBuffer_nextPutIndex_R_int 30
typedef jint (*func_java_nio_DirectIntBuffer_nextPutIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_nextPutIndex_int_R_int 31
typedef jint (*func_java_nio_DirectIntBuffer_nextPutIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectIntBuffer_checkIndex_int_R_int 32
typedef jint (*func_java_nio_DirectIntBuffer_checkIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectIntBuffer_checkIndex_int_int_R_int 33
typedef jint (*func_java_nio_DirectIntBuffer_checkIndex_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_DirectIntBuffer_markValue_R_int 34
typedef jint (*func_java_nio_DirectIntBuffer_markValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_truncate 35
typedef void (*func_java_nio_DirectIntBuffer_truncate)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_discardMark 36
typedef void (*func_java_nio_DirectIntBuffer_discardMark)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_compareTo_java_lang_Object_R_int 37
typedef jint (*func_java_nio_DirectIntBuffer_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectIntBuffer_slice_R_java_nio_IntBuffer 38
typedef jobject (*func_java_nio_DirectIntBuffer_slice_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_duplicate_R_java_nio_IntBuffer 39
typedef jobject (*func_java_nio_DirectIntBuffer_duplicate_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_asReadOnlyBuffer_R_java_nio_IntBuffer 40
typedef jobject (*func_java_nio_DirectIntBuffer_asReadOnlyBuffer_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_get_R_int 41
typedef jint (*func_java_nio_DirectIntBuffer_get_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_put_int_R_java_nio_IntBuffer 42
typedef jobject (*func_java_nio_DirectIntBuffer_put_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectIntBuffer_get_int_R_int 43
typedef jint (*func_java_nio_DirectIntBuffer_get_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectIntBuffer_put_int_int_R_java_nio_IntBuffer 44
typedef jobject (*func_java_nio_DirectIntBuffer_put_int_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_DirectIntBuffer_get_Array1_int_int_int_R_java_nio_IntBuffer 45
typedef jobject (*func_java_nio_DirectIntBuffer_get_Array1_int_int_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_DirectIntBuffer_get_Array1_int_R_java_nio_IntBuffer 46
typedef jobject (*func_java_nio_DirectIntBuffer_get_Array1_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectIntBuffer_put_java_nio_IntBuffer_R_java_nio_IntBuffer 47
typedef jobject (*func_java_nio_DirectIntBuffer_put_java_nio_IntBuffer_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectIntBuffer_put_Array1_int_int_int_R_java_nio_IntBuffer 48
typedef jobject (*func_java_nio_DirectIntBuffer_put_Array1_int_int_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_DirectIntBuffer_put_Array1_int_R_java_nio_IntBuffer 49
typedef jobject (*func_java_nio_DirectIntBuffer_put_Array1_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectIntBuffer_array_R_Array1_int 50
typedef jobject (*func_java_nio_DirectIntBuffer_array_R_Array1_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_position_int_R_java_nio_IntBuffer 51
typedef jobject (*func_java_nio_DirectIntBuffer_position_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectIntBuffer_limit_int_R_java_nio_IntBuffer 52
typedef jobject (*func_java_nio_DirectIntBuffer_limit_int_R_java_nio_IntBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_DirectIntBuffer_mark_R_java_nio_IntBuffer 53
typedef jobject (*func_java_nio_DirectIntBuffer_mark_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_reset_R_java_nio_IntBuffer 54
typedef jobject (*func_java_nio_DirectIntBuffer_reset_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_clear_R_java_nio_IntBuffer 55
typedef jobject (*func_java_nio_DirectIntBuffer_clear_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_flip_R_java_nio_IntBuffer 56
typedef jobject (*func_java_nio_DirectIntBuffer_flip_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_rewind_R_java_nio_IntBuffer 57
typedef jobject (*func_java_nio_DirectIntBuffer_rewind_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_compact_R_java_nio_IntBuffer 58
typedef jobject (*func_java_nio_DirectIntBuffer_compact_R_java_nio_IntBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_compareTo_java_nio_IntBuffer_R_int 59
typedef jint (*func_java_nio_DirectIntBuffer_compareTo_java_nio_IntBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_DirectIntBuffer_order_R_java_nio_ByteOrder 60
typedef jobject (*func_java_nio_DirectIntBuffer_order_R_java_nio_ByteOrder)(jcontext ctx, jobject self);
#define VTABLE_java_nio_DirectIntBuffer_ix_int_R_int 61
typedef jint (*func_java_nio_DirectIntBuffer_ix_int_R_int)(jcontext ctx, jobject self, jint param0);

void mark_java_nio_DirectIntBuffer(jobject object, jint mark, jint depth);
void clinit_java_nio_DirectIntBuffer(jcontext ctx);
void init_java_nio_DirectIntBuffer_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
void init_java_nio_DirectIntBuffer_java_nio_ByteBuffer_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5);
jobject M_java_nio_DirectIntBuffer_slice_R_java_nio_IntBuffer(jcontext ctx, jobject self);
jobject M_java_nio_DirectIntBuffer_duplicate_R_java_nio_IntBuffer(jcontext ctx, jobject self);
jobject M_java_nio_DirectIntBuffer_asReadOnlyBuffer_R_java_nio_IntBuffer(jcontext ctx, jobject self);
jint M_java_nio_DirectIntBuffer_ix_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_nio_DirectIntBuffer_get_R_int(jcontext ctx, jobject self);
jint M_java_nio_DirectIntBuffer_get_int_R_int(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_DirectIntBuffer_put_int_R_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_DirectIntBuffer_put_int_int_R_java_nio_IntBuffer(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_java_nio_DirectIntBuffer_compact_R_java_nio_IntBuffer(jcontext ctx, jobject self);
jbool M_java_nio_DirectIntBuffer_isDirect_R_boolean(jcontext ctx, jobject self);
jbool M_java_nio_DirectIntBuffer_isReadOnly_R_boolean(jcontext ctx, jobject self);
jobject M_java_nio_DirectIntBuffer_order_R_java_nio_ByteOrder(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
