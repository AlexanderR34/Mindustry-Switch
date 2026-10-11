#ifndef HEADER_java_lang_StringBuilder
#define HEADER_java_lang_StringBuilder

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Appendable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_StringBuilder {
	java_lang_Object parent;
	jref F_value;
	jint F_count;
} java_lang_StringBuilder;

extern Class class_java_lang_StringBuilder;

extern jint SF_java_lang_StringBuilder_INITIAL_CAPACITY;

#define VTABLE_java_lang_StringBuilder_hashCode_R_int 0
typedef jint (*func_java_lang_StringBuilder_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuilder_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_StringBuilder_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringBuilder_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_StringBuilder_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuilder_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_StringBuilder_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuilder_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_StringBuilder_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuilder_finalize 5
typedef void (*func_java_lang_StringBuilder_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuilder_notify 6
typedef void (*func_java_lang_StringBuilder_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuilder_notifyAll 7
typedef void (*func_java_lang_StringBuilder_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuilder_wait 8
typedef void (*func_java_lang_StringBuilder_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuilder_wait_long 9
typedef void (*func_java_lang_StringBuilder_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_StringBuilder_wait_long_int 10
typedef void (*func_java_lang_StringBuilder_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_StringBuilder_length_R_int 11
typedef jint (*func_java_lang_StringBuilder_length_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuilder_charAt_int_R_char 12
typedef jchar (*func_java_lang_StringBuilder_charAt_int_R_char)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_StringBuilder_subSequence_int_int_R_java_lang_CharSequence 13
typedef jobject (*func_java_lang_StringBuilder_subSequence_int_int_R_java_lang_CharSequence)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_lang_StringBuilder_append_char_R_java_lang_Appendable 14
typedef jobject (*func_java_lang_StringBuilder_append_char_R_java_lang_Appendable)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_Appendable 15
typedef jobject (*func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_Appendable 16
typedef jobject (*func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_lang_StringBuilder_enlargeBuffer_int 17
typedef void (*func_java_lang_StringBuilder_enlargeBuffer_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_StringBuilder_appendNull 18
typedef void (*func_java_lang_StringBuilder_appendNull)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuilder_indexOf_java_lang_String_R_int 19
typedef jint (*func_java_lang_StringBuilder_indexOf_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringBuilder_indexOf_java_lang_String_int_R_int 20
typedef jint (*func_java_lang_StringBuilder_indexOf_java_lang_String_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder 21
typedef jobject (*func_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder 22
typedef jobject (*func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder 23
typedef jobject (*func_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder 24
typedef jobject (*func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder 25
typedef jobject (*func_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_java_lang_StringBuilder_append_java_lang_StringBuffer_R_java_lang_StringBuilder 26
typedef jobject (*func_java_lang_StringBuilder_append_java_lang_StringBuffer_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder 27
typedef jobject (*func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder 28
typedef jobject (*func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder 29
typedef jobject (*func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder 30
typedef jobject (*func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder 31
typedef jobject (*func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringBuilder_capacity_R_int 32
typedef jint (*func_java_lang_StringBuilder_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuilder_delete_int_int_R_java_lang_StringBuilder 33
typedef jobject (*func_java_lang_StringBuilder_delete_int_int_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_lang_StringBuilder_deleteCharAt_int_R_java_lang_StringBuilder 34
typedef jobject (*func_java_lang_StringBuilder_deleteCharAt_int_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_StringBuilder_ensureCapacity_int 35
typedef void (*func_java_lang_StringBuilder_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_StringBuilder_getChars_int_int_Array1_char_int 36
typedef void (*func_java_lang_StringBuilder_getChars_int_int_Array1_char_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_java_lang_StringBuilder_replace_int_int_java_lang_String_R_java_lang_StringBuilder 37
typedef jobject (*func_java_lang_StringBuilder_replace_int_int_java_lang_String_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_java_lang_StringBuilder_insert_int_Array1_char_int_int_R_java_lang_StringBuilder 38
typedef jobject (*func_java_lang_StringBuilder_insert_int_Array1_char_int_int_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_java_lang_StringBuilder_insert_int_boolean_R_java_lang_StringBuilder 39
typedef jobject (*func_java_lang_StringBuilder_insert_int_boolean_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder 40
typedef jobject (*func_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jint param0, jchar param1);
#define VTABLE_java_lang_StringBuilder_move_int_int 41
typedef void (*func_java_lang_StringBuilder_move_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_lang_StringBuilder_insert_int_Array1_char_R_java_lang_StringBuilder 42
typedef jobject (*func_java_lang_StringBuilder_insert_int_Array1_char_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_lang_StringBuilder_insert_int_double_R_java_lang_StringBuilder 43
typedef jobject (*func_java_lang_StringBuilder_insert_int_double_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jint param0, jdouble param1);
#define VTABLE_java_lang_StringBuilder_insert_int_float_R_java_lang_StringBuilder 44
typedef jobject (*func_java_lang_StringBuilder_insert_int_float_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_java_lang_StringBuilder_insert_int_int_R_java_lang_StringBuilder 45
typedef jobject (*func_java_lang_StringBuilder_insert_int_int_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_lang_StringBuilder_insert_int_long_R_java_lang_StringBuilder 46
typedef jobject (*func_java_lang_StringBuilder_insert_int_long_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jint param0, jlong param1);
#define VTABLE_java_lang_StringBuilder_insert_int_java_lang_Object_R_java_lang_StringBuilder 47
typedef jobject (*func_java_lang_StringBuilder_insert_int_java_lang_Object_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder 48
typedef jobject (*func_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_lang_StringBuilder_reverse_R_java_lang_StringBuilder 49
typedef jobject (*func_java_lang_StringBuilder_reverse_R_java_lang_StringBuilder)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuilder_setCharAt_int_char 50
typedef void (*func_java_lang_StringBuilder_setCharAt_int_char)(jcontext ctx, jobject self, jint param0, jchar param1);
#define VTABLE_java_lang_StringBuilder_setLength_int 51
typedef void (*func_java_lang_StringBuilder_setLength_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_StringBuilder_trimToSize 52
typedef void (*func_java_lang_StringBuilder_trimToSize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder 53
typedef jobject (*func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder 54
typedef jobject (*func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_lang_StringBuilder_insert_int_java_lang_CharSequence_R_java_lang_StringBuilder 55
typedef jobject (*func_java_lang_StringBuilder_insert_int_java_lang_CharSequence_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_lang_StringBuilder_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuilder 56
typedef jobject (*func_java_lang_StringBuilder_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuilder)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_java_lang_StringBuilder_substring_int_int_R_java_lang_String 57
typedef jobject (*func_java_lang_StringBuilder_substring_int_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_java_lang_StringBuilder(jobject object, jint mark, jint depth);
void clinit_java_lang_StringBuilder(jcontext ctx);
void init_java_lang_StringBuilder(jcontext ctx, jobject self);
void init_java_lang_StringBuilder_int(jcontext ctx, jobject self, jint param0);
void init_java_lang_StringBuilder_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_lang_StringBuilder_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0);
void M_java_lang_StringBuilder_enlargeBuffer_int(jcontext ctx, jobject self, jint param0);
void M_java_lang_StringBuilder_appendNull(jcontext ctx, jobject self);
jint M_java_lang_StringBuilder_indexOf_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_StringBuilder_indexOf_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_lang_StringBuilder_append_boolean_R_java_lang_StringBuilder(jcontext ctx, jobject self, jbool param0);
jobject M_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder(jcontext ctx, jobject self, jchar param0);
jobject M_java_lang_StringBuilder_append_Array1_char_R_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_lang_StringBuilder_append_double_R_java_lang_StringBuilder(jcontext ctx, jobject self, jdouble param0);
jobject M_java_lang_StringBuilder_append_java_lang_StringBuffer_R_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder(jcontext ctx, jobject self, jfloat param0);
jobject M_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0);
jobject M_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder(jcontext ctx, jobject self, jlong param0);
jobject M_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_StringBuilder_capacity_R_int(jcontext ctx, jobject self);
jchar M_java_lang_StringBuilder_charAt_int_R_char(jcontext ctx, jobject self, jint param0);
jobject M_java_lang_StringBuilder_delete_int_int_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_java_lang_StringBuilder_deleteCharAt_int_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0);
void M_java_lang_StringBuilder_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_java_lang_StringBuilder_getChars_int_int_Array1_char_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
jobject M_java_lang_StringBuilder_replace_int_int_java_lang_String_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jobject M_java_lang_StringBuilder_insert_int_Array1_char_int_int_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
jobject M_java_lang_StringBuilder_insert_int_boolean_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jbool param1);
jobject M_java_lang_StringBuilder_insert_int_char_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jchar param1);
void M_java_lang_StringBuilder_move_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_java_lang_StringBuilder_insert_int_Array1_char_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_java_lang_StringBuilder_insert_int_double_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jdouble param1);
jobject M_java_lang_StringBuilder_insert_int_float_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jfloat param1);
jobject M_java_lang_StringBuilder_insert_int_int_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_java_lang_StringBuilder_insert_int_long_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jlong param1);
jobject M_java_lang_StringBuilder_insert_int_java_lang_Object_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_java_lang_StringBuilder_insert_int_java_lang_String_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jobject param1);
jint M_java_lang_StringBuilder_length_R_int(jcontext ctx, jobject self);
jobject M_java_lang_StringBuilder_reverse_R_java_lang_StringBuilder(jcontext ctx, jobject self);
void M_java_lang_StringBuilder_setCharAt_int_char(jcontext ctx, jobject self, jint param0, jchar param1);
void M_java_lang_StringBuilder_setLength_int(jcontext ctx, jobject self, jint param0);
jobject M_java_lang_StringBuilder_toString_R_java_lang_String(jcontext ctx, jobject self);
void M_java_lang_StringBuilder_trimToSize(jcontext ctx, jobject self);
jobject M_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_lang_StringBuilder_insert_int_java_lang_CharSequence_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_java_lang_StringBuilder_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuilder(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
jobject M_java_lang_StringBuilder_substring_int_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_java_lang_StringBuilder_subSequence_int_int_R_java_lang_CharSequence(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_StringBuilder_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0);

#ifdef __cplusplus
}
#endif

#endif
