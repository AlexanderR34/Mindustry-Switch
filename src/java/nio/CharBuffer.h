#ifndef HEADER_java_nio_CharBuffer
#define HEADER_java_nio_CharBuffer

#include "Clearwing.h"
#include "java/nio/Buffer.h"
#include "java/lang/Comparable.h"
#include "java/lang/Appendable.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Readable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_CharBuffer {
	java_nio_Buffer parent;
	jref F_hb;
	jint F_offset;
	jbool F_isReadOnly;
} java_nio_CharBuffer;

extern Class class_java_nio_CharBuffer;

extern jbool SF_java_nio_CharBuffer_$assertionsDisabled;

#define VTABLE_java_nio_CharBuffer_hashCode_R_int 0
typedef jint (*func_java_nio_CharBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_CharBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_CharBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_CharBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_CharBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_CharBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_finalize 5
typedef void (*func_java_nio_CharBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_notify 6
typedef void (*func_java_nio_CharBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_notifyAll 7
typedef void (*func_java_nio_CharBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_wait 8
typedef void (*func_java_nio_CharBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_wait_long 9
typedef void (*func_java_nio_CharBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_CharBuffer_wait_long_int 10
typedef void (*func_java_nio_CharBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_CharBuffer_capacity_R_int 11
typedef jint (*func_java_nio_CharBuffer_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_position_R_int 12
typedef jint (*func_java_nio_CharBuffer_position_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_position_int_R_java_nio_Buffer 13
typedef jobject (*func_java_nio_CharBuffer_position_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_CharBuffer_limit_R_int 14
typedef jint (*func_java_nio_CharBuffer_limit_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_limit_int_R_java_nio_Buffer 15
typedef jobject (*func_java_nio_CharBuffer_limit_int_R_java_nio_Buffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_CharBuffer_mark_R_java_nio_Buffer 16
typedef jobject (*func_java_nio_CharBuffer_mark_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_reset_R_java_nio_Buffer 17
typedef jobject (*func_java_nio_CharBuffer_reset_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_clear_R_java_nio_Buffer 18
typedef jobject (*func_java_nio_CharBuffer_clear_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_flip_R_java_nio_Buffer 19
typedef jobject (*func_java_nio_CharBuffer_flip_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_rewind_R_java_nio_Buffer 20
typedef jobject (*func_java_nio_CharBuffer_rewind_R_java_nio_Buffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_remaining_R_int 21
typedef jint (*func_java_nio_CharBuffer_remaining_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_hasRemaining_R_boolean 22
typedef jbool (*func_java_nio_CharBuffer_hasRemaining_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_isReadOnly_R_boolean 23
typedef jbool (*func_java_nio_CharBuffer_isReadOnly_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_hasArray_R_boolean 24
typedef jbool (*func_java_nio_CharBuffer_hasArray_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_array_R_java_lang_Object 25
typedef jobject (*func_java_nio_CharBuffer_array_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_arrayOffset_R_int 26
typedef jint (*func_java_nio_CharBuffer_arrayOffset_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_isDirect_R_boolean 27
typedef jbool (*func_java_nio_CharBuffer_isDirect_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_nextGetIndex_R_int 28
typedef jint (*func_java_nio_CharBuffer_nextGetIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_nextGetIndex_int_R_int 29
typedef jint (*func_java_nio_CharBuffer_nextGetIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_CharBuffer_nextPutIndex_R_int 30
typedef jint (*func_java_nio_CharBuffer_nextPutIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_nextPutIndex_int_R_int 31
typedef jint (*func_java_nio_CharBuffer_nextPutIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_CharBuffer_checkIndex_int_R_int 32
typedef jint (*func_java_nio_CharBuffer_checkIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_CharBuffer_checkIndex_int_int_R_int 33
typedef jint (*func_java_nio_CharBuffer_checkIndex_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_CharBuffer_markValue_R_int 34
typedef jint (*func_java_nio_CharBuffer_markValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_truncate 35
typedef void (*func_java_nio_CharBuffer_truncate)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_discardMark 36
typedef void (*func_java_nio_CharBuffer_discardMark)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_compareTo_java_lang_Object_R_int 37
typedef jint (*func_java_nio_CharBuffer_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_CharBuffer_append_char_R_java_lang_Appendable 38
typedef jobject (*func_java_nio_CharBuffer_append_char_R_java_lang_Appendable)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_lang_Appendable 39
typedef jobject (*func_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable 40
typedef jobject (*func_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_CharBuffer_length_R_int 41
typedef jint (*func_java_nio_CharBuffer_length_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_charAt_int_R_char 42
typedef jchar (*func_java_nio_CharBuffer_charAt_int_R_char)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_CharBuffer_subSequence_int_int_R_java_lang_CharSequence 43
typedef jobject (*func_java_nio_CharBuffer_subSequence_int_int_R_java_lang_CharSequence)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_CharBuffer_read_java_nio_CharBuffer_R_int 44
typedef jint (*func_java_nio_CharBuffer_read_java_nio_CharBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_CharBuffer_slice_R_java_nio_CharBuffer 45
typedef jobject (*func_java_nio_CharBuffer_slice_R_java_nio_CharBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_duplicate_R_java_nio_CharBuffer 46
typedef jobject (*func_java_nio_CharBuffer_duplicate_R_java_nio_CharBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_asReadOnlyBuffer_R_java_nio_CharBuffer 47
typedef jobject (*func_java_nio_CharBuffer_asReadOnlyBuffer_R_java_nio_CharBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_get_R_char 48
typedef jchar (*func_java_nio_CharBuffer_get_R_char)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_put_char_R_java_nio_CharBuffer 49
typedef jobject (*func_java_nio_CharBuffer_put_char_R_java_nio_CharBuffer)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_nio_CharBuffer_get_int_R_char 50
typedef jchar (*func_java_nio_CharBuffer_get_int_R_char)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_CharBuffer_getUnchecked_int_R_char 51
typedef jchar (*func_java_nio_CharBuffer_getUnchecked_int_R_char)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_CharBuffer_put_int_char_R_java_nio_CharBuffer 52
typedef jobject (*func_java_nio_CharBuffer_put_int_char_R_java_nio_CharBuffer)(jcontext ctx, jobject self, jint param0, jchar param1);
#define VTABLE_java_nio_CharBuffer_get_Array1_char_int_int_R_java_nio_CharBuffer 53
typedef jobject (*func_java_nio_CharBuffer_get_Array1_char_int_int_R_java_nio_CharBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_CharBuffer_get_Array1_char_R_java_nio_CharBuffer 54
typedef jobject (*func_java_nio_CharBuffer_get_Array1_char_R_java_nio_CharBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_CharBuffer_put_java_nio_CharBuffer_R_java_nio_CharBuffer 55
typedef jobject (*func_java_nio_CharBuffer_put_java_nio_CharBuffer_R_java_nio_CharBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_CharBuffer_put_Array1_char_int_int_R_java_nio_CharBuffer 56
typedef jobject (*func_java_nio_CharBuffer_put_Array1_char_int_int_R_java_nio_CharBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_CharBuffer_put_Array1_char_R_java_nio_CharBuffer 57
typedef jobject (*func_java_nio_CharBuffer_put_Array1_char_R_java_nio_CharBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_CharBuffer_put_java_lang_String_int_int_R_java_nio_CharBuffer 58
typedef jobject (*func_java_nio_CharBuffer_put_java_lang_String_int_int_R_java_nio_CharBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_CharBuffer_put_java_lang_String_R_java_nio_CharBuffer 59
typedef jobject (*func_java_nio_CharBuffer_put_java_lang_String_R_java_nio_CharBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_CharBuffer_array_R_Array1_char 60
typedef jobject (*func_java_nio_CharBuffer_array_R_Array1_char)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer 61
typedef jobject (*func_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer 62
typedef jobject (*func_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_CharBuffer_mark_R_java_nio_CharBuffer 63
typedef jobject (*func_java_nio_CharBuffer_mark_R_java_nio_CharBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_reset_R_java_nio_CharBuffer 64
typedef jobject (*func_java_nio_CharBuffer_reset_R_java_nio_CharBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_clear_R_java_nio_CharBuffer 65
typedef jobject (*func_java_nio_CharBuffer_clear_R_java_nio_CharBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_flip_R_java_nio_CharBuffer 66
typedef jobject (*func_java_nio_CharBuffer_flip_R_java_nio_CharBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_rewind_R_java_nio_CharBuffer 67
typedef jobject (*func_java_nio_CharBuffer_rewind_R_java_nio_CharBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_compact_R_java_nio_CharBuffer 68
typedef jobject (*func_java_nio_CharBuffer_compact_R_java_nio_CharBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_nio_CharBuffer_compareTo_java_nio_CharBuffer_R_int 69
typedef jint (*func_java_nio_CharBuffer_compareTo_java_nio_CharBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_CharBuffer_toString_int_int_R_java_lang_String 70
typedef jobject (*func_java_nio_CharBuffer_toString_int_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_CharBuffer_subSequence_int_int_R_java_nio_CharBuffer 71
typedef jobject (*func_java_nio_CharBuffer_subSequence_int_int_R_java_nio_CharBuffer)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_nio_CharBuffer 72
typedef jobject (*func_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_nio_CharBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_nio_CharBuffer 73
typedef jobject (*func_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_nio_CharBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_CharBuffer_append_char_R_java_nio_CharBuffer 74
typedef jobject (*func_java_nio_CharBuffer_append_char_R_java_nio_CharBuffer)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_nio_CharBuffer_order_R_java_nio_ByteOrder 75
typedef jobject (*func_java_nio_CharBuffer_order_R_java_nio_ByteOrder)(jcontext ctx, jobject self);

void mark_java_nio_CharBuffer(jobject object, jint mark, jint depth);
void clinit_java_nio_CharBuffer(jcontext ctx);
void init_java_nio_CharBuffer_int_int_int_int_Array1_char_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4, jint param5);
void init_java_nio_CharBuffer_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject SM_java_nio_CharBuffer_allocate_int_R_java_nio_CharBuffer(jcontext ctx, jint param0);
jobject SM_java_nio_CharBuffer_wrap_Array1_char_int_int_R_java_nio_CharBuffer(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_nio_CharBuffer_wrap_Array1_char_R_java_nio_CharBuffer(jcontext ctx, jobject param0);
jint M_java_nio_CharBuffer_read_java_nio_CharBuffer_R_int(jcontext ctx, jobject self, jobject param0);
jobject SM_java_nio_CharBuffer_wrap_java_lang_CharSequence_int_int_R_java_nio_CharBuffer(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_nio_CharBuffer_wrap_java_lang_CharSequence_R_java_nio_CharBuffer(jcontext ctx, jobject param0);
jobject M_java_nio_CharBuffer_get_Array1_char_int_int_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_nio_CharBuffer_get_Array1_char_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_CharBuffer_put_java_nio_CharBuffer_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_CharBuffer_put_Array1_char_int_int_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_nio_CharBuffer_put_Array1_char_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_CharBuffer_put_java_lang_String_int_int_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_nio_CharBuffer_put_java_lang_String_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0);
jbool M_java_nio_CharBuffer_hasArray_R_boolean(jcontext ctx, jobject self);
jobject M_java_nio_CharBuffer_array_R_Array1_char(jcontext ctx, jobject self);
jint M_java_nio_CharBuffer_arrayOffset_R_int(jcontext ctx, jobject self);
jobject M_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_CharBuffer_mark_R_java_nio_CharBuffer(jcontext ctx, jobject self);
jobject M_java_nio_CharBuffer_reset_R_java_nio_CharBuffer(jcontext ctx, jobject self);
jobject M_java_nio_CharBuffer_clear_R_java_nio_CharBuffer(jcontext ctx, jobject self);
jobject M_java_nio_CharBuffer_flip_R_java_nio_CharBuffer(jcontext ctx, jobject self);
jobject M_java_nio_CharBuffer_rewind_R_java_nio_CharBuffer(jcontext ctx, jobject self);
jint M_java_nio_CharBuffer_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_nio_CharBuffer_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool SM_java_nio_CharBuffer_equals_char_char_R_boolean(jcontext ctx, jchar param0, jchar param1);
jint M_java_nio_CharBuffer_compareTo_java_nio_CharBuffer_R_int(jcontext ctx, jobject self, jobject param0);
jint SM_java_nio_CharBuffer_compare_char_char_R_int(jcontext ctx, jchar param0, jchar param1);
jobject M_java_nio_CharBuffer_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_nio_CharBuffer_length_R_int(jcontext ctx, jobject self);
jchar M_java_nio_CharBuffer_charAt_int_R_char(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_nio_CharBuffer_append_char_R_java_nio_CharBuffer(jcontext ctx, jobject self, jchar param0);
jobject M_java_nio_CharBuffer_array_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_nio_CharBuffer_rewind_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_CharBuffer_flip_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_CharBuffer_clear_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_CharBuffer_reset_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_CharBuffer_mark_R_java_nio_Buffer(jcontext ctx, jobject self);
jobject M_java_nio_CharBuffer_limit_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0);
jobject M_java_nio_CharBuffer_position_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0);
jint M_java_nio_CharBuffer_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_CharBuffer_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0);
jobject M_java_nio_CharBuffer_subSequence_int_int_R_java_lang_CharSequence(jcontext ctx, jobject self, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
