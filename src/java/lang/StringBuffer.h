#ifndef HEADER_java_lang_StringBuffer
#define HEADER_java_lang_StringBuffer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Appendable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_StringBuffer {
	java_lang_Object parent;
	jref F_internal;
} java_lang_StringBuffer;

extern Class class_java_lang_StringBuffer;


#define VTABLE_java_lang_StringBuffer_hashCode_R_int 0
typedef jint (*func_java_lang_StringBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_StringBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_StringBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_StringBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuffer_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_StringBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuffer_finalize 5
typedef void (*func_java_lang_StringBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuffer_notify 6
typedef void (*func_java_lang_StringBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuffer_notifyAll 7
typedef void (*func_java_lang_StringBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuffer_wait 8
typedef void (*func_java_lang_StringBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuffer_wait_long 9
typedef void (*func_java_lang_StringBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_StringBuffer_wait_long_int 10
typedef void (*func_java_lang_StringBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_StringBuffer_length_R_int 11
typedef jint (*func_java_lang_StringBuffer_length_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuffer_charAt_int_R_char 12
typedef jchar (*func_java_lang_StringBuffer_charAt_int_R_char)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_StringBuffer_subSequence_int_int_R_java_lang_CharSequence 13
typedef jobject (*func_java_lang_StringBuffer_subSequence_int_int_R_java_lang_CharSequence)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_lang_StringBuffer_append_char_R_java_lang_Appendable 14
typedef jobject (*func_java_lang_StringBuffer_append_char_R_java_lang_Appendable)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_Appendable 15
typedef jobject (*func_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable 16
typedef jobject (*func_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_lang_StringBuffer_append_boolean_R_java_lang_StringBuffer 17
typedef jobject (*func_java_lang_StringBuffer_append_boolean_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer 18
typedef jobject (*func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_lang_StringBuffer_append_Array1_char_R_java_lang_StringBuffer 19
typedef jobject (*func_java_lang_StringBuffer_append_Array1_char_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringBuffer_append_Array1_char_int_int_R_java_lang_StringBuffer 20
typedef jobject (*func_java_lang_StringBuffer_append_Array1_char_int_int_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_lang_StringBuffer_append_double_R_java_lang_StringBuffer 21
typedef jobject (*func_java_lang_StringBuffer_append_double_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_java_lang_StringBuffer_append_float_R_java_lang_StringBuffer 22
typedef jobject (*func_java_lang_StringBuffer_append_float_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer 23
typedef jobject (*func_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_StringBuffer_append_long_R_java_lang_StringBuffer 24
typedef jobject (*func_java_lang_StringBuffer_append_long_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer 25
typedef jobject (*func_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer 26
typedef jobject (*func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringBuffer_capacity_R_int 27
typedef jint (*func_java_lang_StringBuffer_capacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuffer_delete_int_int_R_java_lang_StringBuffer 28
typedef jobject (*func_java_lang_StringBuffer_delete_int_int_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_lang_StringBuffer_deleteCharAt_int_R_java_lang_StringBuffer 29
typedef jobject (*func_java_lang_StringBuffer_deleteCharAt_int_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_StringBuffer_ensureCapacity_int 30
typedef void (*func_java_lang_StringBuffer_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_StringBuffer_getChars_int_int_Array1_char_int 31
typedef void (*func_java_lang_StringBuffer_getChars_int_int_Array1_char_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_java_lang_StringBuffer_insert_int_boolean_R_java_lang_StringBuffer 32
typedef jobject (*func_java_lang_StringBuffer_insert_int_boolean_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_java_lang_StringBuffer_insert_int_char_R_java_lang_StringBuffer 33
typedef jobject (*func_java_lang_StringBuffer_insert_int_char_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jint param0, jchar param1);
#define VTABLE_java_lang_StringBuffer_insert_int_Array1_char_R_java_lang_StringBuffer 34
typedef jobject (*func_java_lang_StringBuffer_insert_int_Array1_char_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_lang_StringBuffer_insert_int_double_R_java_lang_StringBuffer 35
typedef jobject (*func_java_lang_StringBuffer_insert_int_double_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jint param0, jdouble param1);
#define VTABLE_java_lang_StringBuffer_insert_int_float_R_java_lang_StringBuffer 36
typedef jobject (*func_java_lang_StringBuffer_insert_int_float_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_java_lang_StringBuffer_insert_int_int_R_java_lang_StringBuffer 37
typedef jobject (*func_java_lang_StringBuffer_insert_int_int_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_lang_StringBuffer_insert_int_long_R_java_lang_StringBuffer 38
typedef jobject (*func_java_lang_StringBuffer_insert_int_long_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jint param0, jlong param1);
#define VTABLE_java_lang_StringBuffer_insert_int_java_lang_Object_R_java_lang_StringBuffer 39
typedef jobject (*func_java_lang_StringBuffer_insert_int_java_lang_Object_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_lang_StringBuffer_insert_int_java_lang_String_R_java_lang_StringBuffer 40
typedef jobject (*func_java_lang_StringBuffer_insert_int_java_lang_String_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_lang_StringBuffer_reverse_R_java_lang_StringBuffer 41
typedef jobject (*func_java_lang_StringBuffer_reverse_R_java_lang_StringBuffer)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuffer_setCharAt_int_char 42
typedef void (*func_java_lang_StringBuffer_setCharAt_int_char)(jcontext ctx, jobject self, jint param0, jchar param1);
#define VTABLE_java_lang_StringBuffer_setLength_int 43
typedef void (*func_java_lang_StringBuffer_setLength_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_StringBuffer_StringBuffer_java_lang_CharSequence_R_java_lang_StringBuffer 44
typedef jobject (*func_java_lang_StringBuffer_StringBuffer_java_lang_CharSequence_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringBuffer_trimToSize 45
typedef void (*func_java_lang_StringBuffer_trimToSize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_StringBuffer 46
typedef jobject (*func_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_StringBuffer 47
typedef jobject (*func_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_lang_StringBuffer_insert_int_java_lang_CharSequence_R_java_lang_StringBuffer 48
typedef jobject (*func_java_lang_StringBuffer_insert_int_java_lang_CharSequence_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_lang_StringBuffer_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuffer 49
typedef jobject (*func_java_lang_StringBuffer_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuffer)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);

void mark_java_lang_StringBuffer(jobject object, jint mark, jint depth);
void clinit_java_lang_StringBuffer(jcontext ctx);
void init_java_lang_StringBuffer(jcontext ctx, jobject self);
void init_java_lang_StringBuffer_int(jcontext ctx, jobject self, jint param0);
void init_java_lang_StringBuffer_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_StringBuffer_append_boolean_R_java_lang_StringBuffer(jcontext ctx, jobject self, jbool param0);
jobject M_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer(jcontext ctx, jobject self, jchar param0);
jobject M_java_lang_StringBuffer_append_Array1_char_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_StringBuffer_append_Array1_char_int_int_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_lang_StringBuffer_append_double_R_java_lang_StringBuffer(jcontext ctx, jobject self, jdouble param0);
jobject M_java_lang_StringBuffer_append_float_R_java_lang_StringBuffer(jcontext ctx, jobject self, jfloat param0);
jobject M_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0);
jobject M_java_lang_StringBuffer_append_long_R_java_lang_StringBuffer(jcontext ctx, jobject self, jlong param0);
jobject M_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_StringBuffer_capacity_R_int(jcontext ctx, jobject self);
jchar M_java_lang_StringBuffer_charAt_int_R_char(jcontext ctx, jobject self, jint param0);
jobject M_java_lang_StringBuffer_delete_int_int_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_java_lang_StringBuffer_deleteCharAt_int_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0);
void M_java_lang_StringBuffer_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_java_lang_StringBuffer_getChars_int_int_Array1_char_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
jobject M_java_lang_StringBuffer_insert_int_boolean_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jbool param1);
jobject M_java_lang_StringBuffer_insert_int_char_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jchar param1);
jobject M_java_lang_StringBuffer_insert_int_Array1_char_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_java_lang_StringBuffer_insert_int_double_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jdouble param1);
jobject M_java_lang_StringBuffer_insert_int_float_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jfloat param1);
jobject M_java_lang_StringBuffer_insert_int_int_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_java_lang_StringBuffer_insert_int_long_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jlong param1);
jobject M_java_lang_StringBuffer_insert_int_java_lang_Object_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_java_lang_StringBuffer_insert_int_java_lang_String_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
jint M_java_lang_StringBuffer_length_R_int(jcontext ctx, jobject self);
jobject M_java_lang_StringBuffer_reverse_R_java_lang_StringBuffer(jcontext ctx, jobject self);
void M_java_lang_StringBuffer_setCharAt_int_char(jcontext ctx, jobject self, jint param0, jchar param1);
void M_java_lang_StringBuffer_setLength_int(jcontext ctx, jobject self, jint param0);
jobject M_java_lang_StringBuffer_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_lang_StringBuffer_StringBuffer_java_lang_CharSequence_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0);
void M_java_lang_StringBuffer_trimToSize(jcontext ctx, jobject self);
jobject M_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_lang_StringBuffer_insert_int_java_lang_CharSequence_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_java_lang_StringBuffer_insert_int_java_lang_CharSequence_int_int_R_java_lang_StringBuffer(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
jobject M_java_lang_StringBuffer_subSequence_int_int_R_java_lang_CharSequence(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_java_lang_StringBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_lang_StringBuffer_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_StringBuffer_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0);

#ifdef __cplusplus
}
#endif

#endif
