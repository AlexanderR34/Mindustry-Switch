#ifndef HEADER_java_lang_String
#define HEADER_java_lang_String

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_String {
	java_lang_Object parent;
	jref F_value;
	jint F_count;
	jint F_hashCode;
	jlong F_nativeString;
} java_lang_String;

extern Class class_java_lang_String;

extern jobject SF_java_lang_String_CASE_INSENSITIVE_ORDER;
extern jobject SF_java_lang_String_str;
extern jobject SF_java_lang_String_ZERO_CHAR;

#define VTABLE_java_lang_String_hashCode_R_int 0
typedef jint (*func_java_lang_String_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_String_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_String_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_String_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_String_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_String_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_String_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_String_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_String_finalize 5
typedef void (*func_java_lang_String_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_String_notify 6
typedef void (*func_java_lang_String_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_String_notifyAll 7
typedef void (*func_java_lang_String_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_String_wait 8
typedef void (*func_java_lang_String_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_String_wait_long 9
typedef void (*func_java_lang_String_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_String_wait_long_int 10
typedef void (*func_java_lang_String_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_String_length_R_int 11
typedef jint (*func_java_lang_String_length_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_String_charAt_int_R_char 12
typedef jchar (*func_java_lang_String_charAt_int_R_char)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_String_subSequence_int_int_R_java_lang_CharSequence 13
typedef jobject (*func_java_lang_String_subSequence_int_int_R_java_lang_CharSequence)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_lang_String_compareTo_java_lang_Object_R_int 14
typedef jint (*func_java_lang_String_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_failedBoundsCheck_int_int_int_R_java_lang_StringIndexOutOfBoundsException 15
typedef jobject (*func_java_lang_String_failedBoundsCheck_int_int_int_R_java_lang_StringIndexOutOfBoundsException)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_java_lang_String_codePointAt_int_R_int 16
typedef jint (*func_java_lang_String_codePointAt_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_String_codePointBefore_int_R_int 17
typedef jint (*func_java_lang_String_codePointBefore_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_String_codePointCount_int_int_R_int 18
typedef jint (*func_java_lang_String_codePointCount_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_lang_String_offsetByCodePoints_int_int_R_int 19
typedef jint (*func_java_lang_String_offsetByCodePoints_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_lang_String_compareTo_java_lang_String_R_int 20
typedef jint (*func_java_lang_String_compareTo_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_compareToIgnoreCase_java_lang_String_R_int 21
typedef jint (*func_java_lang_String_compareToIgnoreCase_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_contentEquals_java_lang_CharSequence_R_boolean 22
typedef jbool (*func_java_lang_String_contentEquals_java_lang_CharSequence_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_contentEquals_java_lang_StringBuffer_R_boolean 23
typedef jbool (*func_java_lang_String_contentEquals_java_lang_StringBuffer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_concat_java_lang_String_R_java_lang_String 24
typedef jobject (*func_java_lang_String_concat_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean 25
typedef jbool (*func_java_lang_String_endsWith_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean 26
typedef jbool (*func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_getBytes_R_Array1_byte 27
typedef jobject (*func_java_lang_String_getBytes_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_java_lang_String_getBytes_java_lang_String_R_Array1_byte 28
typedef jobject (*func_java_lang_String_getBytes_java_lang_String_R_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte 29
typedef jobject (*func_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_getChars_int_int_Array1_char_int 30
typedef void (*func_java_lang_String_getChars_int_int_Array1_char_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_java_lang_String_getChars_Array1_char_int 31
typedef void (*func_java_lang_String_getChars_Array1_char_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String 32
typedef jobject (*func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String 33
typedef jobject (*func_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String 34
typedef jobject (*func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_lang_String_replaceFirst_java_lang_String_java_lang_String_R_java_lang_String 35
typedef jobject (*func_java_lang_String_replaceFirst_java_lang_String_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String 36
typedef jobject (*func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_lang_String_matches_java_lang_String_R_boolean 37
typedef jbool (*func_java_lang_String_matches_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_indexOf_int_R_int 38
typedef jint (*func_java_lang_String_indexOf_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_String_indexOf_int_int_R_int 39
typedef jint (*func_java_lang_String_indexOf_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_lang_String_indexOf_java_lang_String_R_int 40
typedef jint (*func_java_lang_String_indexOf_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_indexOf_java_lang_String_int_R_int 41
typedef jint (*func_java_lang_String_indexOf_java_lang_String_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_lang_String_intern_R_java_lang_String 42
typedef jobject (*func_java_lang_String_intern_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_String_lastIndexOf_int_R_int 43
typedef jint (*func_java_lang_String_lastIndexOf_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_String_lastIndexOf_int_int_R_int 44
typedef jint (*func_java_lang_String_lastIndexOf_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_lang_String_lastIndexOf_java_lang_String_R_int 45
typedef jint (*func_java_lang_String_lastIndexOf_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_lastIndexOf_java_lang_String_int_R_int 46
typedef jint (*func_java_lang_String_lastIndexOf_java_lang_String_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean 47
typedef jbool (*func_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_java_lang_String_regionMatches_boolean_int_java_lang_String_int_int_R_boolean 48
typedef jbool (*func_java_lang_String_regionMatches_boolean_int_java_lang_String_int_int_R_boolean)(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2, jint param3, jint param4);
#define VTABLE_java_lang_String_foldCase_char_R_char 49
typedef jchar (*func_java_lang_String_foldCase_char_R_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_java_lang_String_replace_char_char_R_java_lang_String 50
typedef jobject (*func_java_lang_String_replace_char_char_R_java_lang_String)(jcontext ctx, jobject self, jchar param0, jchar param1);
#define VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean 51
typedef jbool (*func_java_lang_String_startsWith_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_startsWith_java_lang_String_int_R_boolean 52
typedef jbool (*func_java_lang_String_startsWith_java_lang_String_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_lang_String_substring_int_R_java_lang_String 53
typedef jobject (*func_java_lang_String_substring_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_String_substring_int_int_R_java_lang_String 54
typedef jobject (*func_java_lang_String_substring_int_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_lang_String_toCharArray_R_Array1_char 55
typedef jobject (*func_java_lang_String_toCharArray_R_Array1_char)(jcontext ctx, jobject self);
#define VTABLE_java_lang_String_toLowerCase_R_java_lang_String 56
typedef jobject (*func_java_lang_String_toLowerCase_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String 57
typedef jobject (*func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_toUpperCase_R_java_lang_String 58
typedef jobject (*func_java_lang_String_toUpperCase_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_String_toUpperCase_java_util_Locale_R_java_lang_String 59
typedef jobject (*func_java_lang_String_toUpperCase_java_util_Locale_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_trim_R_java_lang_String 60
typedef jobject (*func_java_lang_String_trim_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean 61
typedef jbool (*func_java_lang_String_contains_java_lang_CharSequence_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_String_isEmpty_R_boolean 62
typedef jbool (*func_java_lang_String_isEmpty_R_boolean)(jcontext ctx, jobject self);

void mark_java_lang_String(jobject object, jint mark, jint depth);
void clinit_java_lang_String(jcontext ctx);
void init_java_lang_String(jcontext ctx, jobject self);
void init_java_lang_String_Array1_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void init_java_lang_String_Array1_byte(jcontext ctx, jobject self, jobject param0);
void init_java_lang_String_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void init_java_lang_String_Array1_byte_int_int_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
void init_java_lang_String_Array1_byte_java_nio_charset_Charset(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_lang_String_Array1_byte_int_int_java_nio_charset_Charset(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
void init_java_lang_String_Array1_byte_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_java_lang_String_bytesToChars_Array1_byte_int_int_java_lang_String_R_Array1_char(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
void init_java_lang_String_Array1_char(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_String_failedBoundsCheck_int_int_int_R_java_lang_StringIndexOutOfBoundsException(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void init_java_lang_String_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void init_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_lang_String_java_lang_StringBuffer(jcontext ctx, jobject self, jobject param0);
void init_java_lang_String_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_String_codePointAt_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_lang_String_codePointBefore_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_lang_String_codePointCount_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_java_lang_String_offsetByCodePoints_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jchar M_java_lang_String_charAt_int_R_char(jcontext ctx, jobject self, jint param0);
jint M_java_lang_String_compareTo_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_String_compareToIgnoreCase_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_java_lang_String_contentEquals_java_lang_CharSequence_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_lang_String_contentEquals_java_lang_StringBuffer_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject SM_java_lang_String_copyValueOf_Array1_char_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_lang_String_copyValueOf_Array1_char_int_int_R_java_lang_String(jcontext ctx, jobject param0, jint param1, jint param2);
jobject M_java_lang_String_concat_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_java_lang_String_endsWith_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_lang_String_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_String_getBytes_R_Array1_byte(jcontext ctx, jobject self);
jobject M_java_lang_String_getBytes_java_lang_String_R_Array1_byte(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_String_getBytes_java_nio_charset_Charset_R_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_java_lang_String_getChars_int_int_Array1_char_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
void M_java_lang_String_getChars_Array1_char_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_java_lang_String_hashCode_R_int(jcontext ctx, jobject self);
jobject M_java_lang_String_split_java_lang_String_R_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_lang_String_replaceFirst_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_lang_String_matches_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_String_indexOf_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_lang_String_indexOf_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_java_lang_String_indexOf_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_String_indexOf_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_lang_String_intern_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_lang_String_lastIndexOf_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_lang_String_lastIndexOf_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_java_lang_String_lastIndexOf_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_String_lastIndexOf_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_java_lang_String_length_R_int(jcontext ctx, jobject self);
jbool M_java_lang_String_regionMatches_int_java_lang_String_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
jbool M_java_lang_String_regionMatches_boolean_int_java_lang_String_int_int_R_boolean(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2, jint param3, jint param4);
jchar M_java_lang_String_foldCase_char_R_char(jcontext ctx, jobject self, jchar param0);
jobject M_java_lang_String_replace_char_char_R_java_lang_String(jcontext ctx, jobject self, jchar param0, jchar param1);
jbool M_java_lang_String_startsWith_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_lang_String_startsWith_java_lang_String_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_lang_String_substring_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jobject M_java_lang_String_substring_int_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_java_lang_String_toCharArray_R_Array1_char(jcontext ctx, jobject self);
jobject M_java_lang_String_toLowerCase_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_String_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_lang_String_toUpperCase_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_lang_String_toUpperCase_java_util_Locale_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_String_trim_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_lang_String_valueOf_boolean_R_java_lang_String(jcontext ctx, jbool param0);
jobject SM_java_lang_String_valueOf_char_R_java_lang_String(jcontext ctx, jchar param0);
jobject SM_java_lang_String_valueOf_Array1_char_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_lang_String_valueOf_Array1_char_int_int_R_java_lang_String(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_lang_String_valueOf_double_R_java_lang_String(jcontext ctx, jdouble param0);
jobject SM_java_lang_String_valueOf_float_R_java_lang_String(jcontext ctx, jfloat param0);
jobject SM_java_lang_String_valueOf_int_R_java_lang_String(jcontext ctx, jint param0);
jobject SM_java_lang_String_valueOf_long_R_java_lang_String(jcontext ctx, jlong param0);
jobject SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0);
jobject M_java_lang_String_subSequence_int_int_R_java_lang_CharSequence(jcontext ctx, jobject self, jint param0, jint param1);
void M_java_lang_String_finalize(jcontext ctx, jobject self);
jobject SM_java_lang_String_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_lang_String_format_java_util_Locale_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool M_java_lang_String_contains_java_lang_CharSequence_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_lang_String_isEmpty_R_boolean(jcontext ctx, jobject self);
jint M_java_lang_String_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
