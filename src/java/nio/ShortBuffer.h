#ifndef HEADER_java_nio_ShortBuffer
#define HEADER_java_nio_ShortBuffer

#include "Clearwing.h"
#include "java/nio/Buffer.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_ShortBuffer {
	java_nio_Buffer parent;
	jref F_hb;
	jint F_offset;
	jbool F_isReadOnly;
} java_nio_ShortBuffer;

extern Class class_java_nio_ShortBuffer;


#define VTABLE_java_nio_ShortBuffer_hashCode_R_int 0
typedef jint (*func_java_nio_ShortBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_ShortBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_ShortBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_ShortBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_ShortBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_ShortBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_finalize 5
typedef void (*func_java_nio_ShortBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_notify 6
typedef void (*func_java_nio_ShortBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_notifyAll 7
typedef void (*func_java_nio_ShortBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_wait 8
typedef void (*func_java_nio_ShortBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_wait_long 9
typedef void (*func_java_nio_ShortBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_ShortBuffer_wait_long_int 10
typedef void (*func_java_nio_ShortBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_ShortBuffer_capacity_R_int 11
typedef jint (*func_java_nio_ShortBuffer_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_position_R_int 12
typedef jint (*func_java_nio_ShortBuffer_position_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_position_int_R_java_nio_Buffer 13
typedef jobject (*func_java_nio_ShortBuffer_position_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ShortBuffer_limit_R_int 14
typedef jint (*func_java_nio_ShortBuffer_limit_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_limit_int_R_java_nio_Buffer 15
typedef jobject (*func_java_nio_ShortBuffer_limit_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ShortBuffer_mark_R_java_nio_Buffer 16
typedef jobject (*func_java_nio_ShortBuffer_mark_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_reset_R_java_nio_Buffer 17
typedef jobject (*func_java_nio_ShortBuffer_reset_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_clear_R_java_nio_Buffer 18
typedef jobject (*func_java_nio_ShortBuffer_clear_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_flip_R_java_nio_Buffer 19
typedef jobject (*func_java_nio_ShortBuffer_flip_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_rewind_R_java_nio_Buffer 20
typedef jobject (*func_java_nio_ShortBuffer_rewind_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_remaining_R_int 21
typedef jint (*func_java_nio_ShortBuffer_remaining_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_hasRemaining_R_boolean 22
typedef jbool (*func_java_nio_ShortBuffer_hasRemaining_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_isReadOnly_R_boolean 23
typedef jbool (*func_java_nio_ShortBuffer_isReadOnly_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_hasArray_R_boolean 24
typedef jbool (*func_java_nio_ShortBuffer_hasArray_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_array_R_java_lang_Object 25
typedef jobject (*func_java_nio_ShortBuffer_array_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_arrayOffset_R_int 26
typedef jint (*func_java_nio_ShortBuffer_arrayOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_isDirect_R_boolean 27
typedef jbool (*func_java_nio_ShortBuffer_isDirect_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_nextGetIndex_R_int 28
typedef jint (*func_java_nio_ShortBuffer_nextGetIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_nextGetIndex_int_R_int 29
typedef jint (*func_java_nio_ShortBuffer_nextGetIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ShortBuffer_nextPutIndex_R_int 30
typedef jint (*func_java_nio_ShortBuffer_nextPutIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_nextPutIndex_int_R_int 31
typedef jint (*func_java_nio_ShortBuffer_nextPutIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ShortBuffer_checkIndex_int_R_int 32
typedef jint (*func_java_nio_ShortBuffer_checkIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ShortBuffer_checkIndex_int_int_R_int 33
typedef jint (*func_java_nio_ShortBuffer_checkIndex_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_ShortBuffer_markValue_R_int 34
typedef jint (*func_java_nio_ShortBuffer_markValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_truncate 35
typedef void (*func_java_nio_ShortBuffer_truncate)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_discardMark 36
typedef void (*func_java_nio_ShortBuffer_discardMark)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_compareTo_java_lang_Object_R_int 37
typedef jint (*func_java_nio_ShortBuffer_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_ShortBuffer_slice_R_java_nio_ShortBuffer 38
typedef jobject (*func_java_nio_ShortBuffer_slice_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_duplicate_R_java_nio_ShortBuffer 39
typedef jobject (*func_java_nio_ShortBuffer_duplicate_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_asReadOnlyBuffer_R_java_nio_ShortBuffer 40
typedef jobject (*func_java_nio_ShortBuffer_asReadOnlyBuffer_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_get_R_short 41
typedef jshort (*func_java_nio_ShortBuffer_get_R_short)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_put_short_R_java_nio_ShortBuffer 42
typedef jobject (*func_java_nio_ShortBuffer_put_short_R_java_nio_ShortBuffer)(jcontext ctx, jobject self, jshort param0);
#define VTABLE_java_nio_ShortBuffer_get_int_R_short 43
typedef jshort (*func_java_nio_ShortBuffer_get_int_R_short)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ShortBuffer_put_int_short_R_java_nio_ShortBuffer 44
typedef jobject (*func_java_nio_ShortBuffer_put_int_short_R_java_nio_ShortBuffer)(jcontext ctx, jobject self, jint param0, jshort param1);
#define VTABLE_java_nio_ShortBuffer_get_Array1_short_int_int_R_java_nio_ShortBuffer 45
typedef jobject (*func_java_nio_ShortBuffer_get_Array1_short_int_int_R_java_nio_ShortBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_ShortBuffer_get_Array1_short_R_java_nio_ShortBuffer 46
typedef jobject (*func_java_nio_ShortBuffer_get_Array1_short_R_java_nio_ShortBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_ShortBuffer_put_java_nio_ShortBuffer_R_java_nio_ShortBuffer 47
typedef jobject (*func_java_nio_ShortBuffer_put_java_nio_ShortBuffer_R_java_nio_ShortBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_ShortBuffer_put_Array1_short_int_int_R_java_nio_ShortBuffer 48
typedef jobject (*func_java_nio_ShortBuffer_put_Array1_short_int_int_R_java_nio_ShortBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_ShortBuffer_put_Array1_short_R_java_nio_ShortBuffer 49
typedef jobject (*func_java_nio_ShortBuffer_put_Array1_short_R_java_nio_ShortBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_ShortBuffer_array_R_Array1_short 50
typedef jobject (*func_java_nio_ShortBuffer_array_R_Array1_short)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_position_int_R_java_nio_ShortBuffer 51
typedef jobject (*func_java_nio_ShortBuffer_position_int_R_java_nio_ShortBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ShortBuffer_limit_int_R_java_nio_ShortBuffer 52
typedef jobject (*func_java_nio_ShortBuffer_limit_int_R_java_nio_ShortBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_ShortBuffer_mark_R_java_nio_ShortBuffer 53
typedef jobject (*func_java_nio_ShortBuffer_mark_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_reset_R_java_nio_ShortBuffer 54
typedef jobject (*func_java_nio_ShortBuffer_reset_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_clear_R_java_nio_ShortBuffer 55
typedef jobject (*func_java_nio_ShortBuffer_clear_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_flip_R_java_nio_ShortBuffer 56
typedef jobject (*func_java_nio_ShortBuffer_flip_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_rewind_R_java_nio_ShortBuffer 57
typedef jobject (*func_java_nio_ShortBuffer_rewind_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_compact_R_java_nio_ShortBuffer 58
typedef jobject (*func_java_nio_ShortBuffer_compact_R_java_nio_ShortBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_ShortBuffer_compareTo_java_nio_ShortBuffer_R_int 59
typedef jint (*func_java_nio_ShortBuffer_compareTo_java_nio_ShortBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_ShortBuffer_order_R_java_nio_ByteOrder 60
typedef jobject (*func_java_nio_ShortBuffer_order_R_java_nio_ByteOrder)(jcontext ctx, jobject self);

void mark_java_nio_ShortBuffer(jobject object, jint mark, jint depth);
void clinit_java_nio_ShortBuffer(jcontext ctx);
void init_java_nio_ShortBuffer_int_int_int_int_Array1_short_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4, jint param5);
void init_java_nio_ShortBuffer_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject SM_java_nio_ShortBuffer_allocate_int_R_java_nio_ShortBuffer(jcontext ctx, jint param0);
jobject SM_java_nio_ShortBuffer_wrap_Array1_short_int_int_R_java_nio_ShortBuffer(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_nio_ShortBuffer_wrap_Array1_short_R_java_nio_ShortBuffer(jcontext ctx, jobject param0);
jobject M_java_nio_ShortBuffer_get_Array1_short_int_int_R_java_nio_ShortBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_nio_ShortBuffer_get_Array1_short_R_java_nio_ShortBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_ShortBuffer_put_java_nio_ShortBuffer_R_java_nio_ShortBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_ShortBuffer_put_Array1_short_int_int_R_java_nio_ShortBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_nio_ShortBuffer_put_Array1_short_R_java_nio_ShortBuffer(jcontext ctx, jobject self, jobject param0);
jbool M_java_nio_ShortBuffer_hasArray_R_boolean(jcontext ctx, jobject self);
jobject M_java_nio_ShortBuffer_array_R_Array1_short(jcontext ctx, jobject self);
jint M_java_nio_ShortBuffer_arrayOffset_R_int(jcontext ctx, jobject self);
jobject M_java_nio_ShortBuffer_position_int_R_java_nio_ShortBuffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_ShortBuffer_limit_int_R_java_nio_ShortBuffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_ShortBuffer_mark_R_java_nio_ShortBuffer(jcontext ctx, jobject self);
jobject M_java_nio_ShortBuffer_reset_R_java_nio_ShortBuffer(jcontext ctx, jobject self);
jobject M_java_nio_ShortBuffer_clear_R_java_nio_ShortBuffer(jcontext ctx, jobject self);
jobject M_java_nio_ShortBuffer_flip_R_java_nio_ShortBuffer(jcontext ctx, jobject self);
jobject M_java_nio_ShortBuffer_rewind_R_java_nio_ShortBuffer(jcontext ctx, jobject self);
jobject M_java_nio_ShortBuffer_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_nio_ShortBuffer_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_nio_ShortBuffer_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool SM_java_nio_ShortBuffer_equals_short_short_R_boolean(jcontext ctx, jshort param0, jshort param1);
jint M_java_nio_ShortBuffer_compareTo_java_nio_ShortBuffer_R_int(jcontext ctx, jobject self, jobject param0);
jint SM_java_nio_ShortBuffer_compare_short_short_R_int(jcontext ctx, jshort param0, jshort param1);
jobject M_java_nio_ShortBuffer_array_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_nio_ShortBuffer_rewind_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_ShortBuffer_flip_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_ShortBuffer_clear_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_ShortBuffer_reset_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_ShortBuffer_mark_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_ShortBuffer_limit_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_ShortBuffer_position_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0);
jint M_java_nio_ShortBuffer_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
