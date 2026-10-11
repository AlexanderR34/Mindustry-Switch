#ifndef HEADER_arc_util_Strings
#define HEADER_arc_util_Strings

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Strings {
	java_lang_Object parent;
} arc_util_Strings;

extern Class class_arc_util_Strings;

extern jobject SF_arc_util_Strings_utf8;
extern jobject SF_arc_util_Strings_ascii;
extern jobject SF_arc_util_Strings_hexArray;
extern jobject SF_arc_util_Strings_tmp1;
extern jobject SF_arc_util_Strings_tmp2;
extern jobject SF_arc_util_Strings_filenamePattern;
extern jobject SF_arc_util_Strings_unsafeFilenamePattern;
extern jobject SF_arc_util_Strings_reservedFilenamePattern;

#define VTABLE_arc_util_Strings_hashCode_R_int 0
typedef jint (*func_arc_util_Strings_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Strings_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Strings_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Strings_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Strings_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Strings_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Strings_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Strings_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Strings_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Strings_finalize 5
typedef void (*func_arc_util_Strings_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Strings_notify 6
typedef void (*func_arc_util_Strings_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Strings_notifyAll 7
typedef void (*func_arc_util_Strings_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Strings_wait 8
typedef void (*func_arc_util_Strings_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Strings_wait_long 9
typedef void (*func_arc_util_Strings_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Strings_wait_long_int 10
typedef void (*func_arc_util_Strings_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_Strings(jobject object, jint mark, jint depth);
void clinit_arc_util_Strings(jcontext ctx);
void init_arc_util_Strings(jcontext ctx, jobject self);
jobject SM_arc_util_Strings_sha256_java_lang_String_R_Array1_byte(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_formatByteCount_long_R_java_lang_String(jcontext ctx, jlong param0);
jobject SM_arc_util_Strings_bytesToHex_Array1_byte_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_getFileExtension_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_getFileName_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_getFileNameWithoutExtension_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jbool SM_arc_util_Strings_matches_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject param0, jobject param1);
jint SM_arc_util_Strings_count_java_lang_CharSequence_char_R_int(jcontext ctx, jobject param0, jchar param1);
jobject SM_arc_util_Strings_truncate_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject param0, jint param1);
jobject SM_arc_util_Strings_truncate_java_lang_String_int_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2);
jobject SM_arc_util_Strings_getCauses_java_lang_Throwable_R_arc_struct_Seq(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_getSimpleMessage_java_lang_Throwable_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_getSimpleMessages_java_lang_Throwable_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_getFinalMessage_java_lang_Throwable_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_getFinalCause_java_lang_Throwable_R_java_lang_Throwable(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_getStackTrace_java_lang_Throwable_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_neatError_java_lang_Throwable_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_neatError_java_lang_Throwable_boolean_R_java_lang_String(jcontext ctx, jobject param0, jbool param1);
jobject SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_stripGlyphs_java_lang_CharSequence_R_java_lang_String(jcontext ctx, jobject param0);
jint SM_arc_util_Strings_parseColorMarkup_java_lang_CharSequence_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_arc_util_Strings_count_java_lang_String_java_lang_String_R_int(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Strings_sanitizeFilename_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jbool SM_arc_util_Strings_isSafeFilename_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_encode_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Strings_stringify_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_join_java_lang_String_Array1_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Strings_join_java_lang_String_java_lang_Iterable_R_java_lang_String(jcontext ctx, jobject param0, jobject param1);
jint SM_arc_util_Strings_levenshtein_java_lang_String_java_lang_String_R_int(jcontext ctx, jobject param0, jobject param1);
jfloat SM_arc_util_Strings_biasedLevenshtein_java_lang_String_java_lang_String_R_float(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Strings_animated_float_int_float_java_lang_String_R_java_lang_String(jcontext ctx, jfloat param0, jint param1, jfloat param2, jobject param3);
jobject SM_arc_util_Strings_kebabToCamel_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_camelToKebab_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_insertSpaces_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_camelize_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jbool SM_arc_util_Strings_canParseInt_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jbool SM_arc_util_Strings_canParsePositiveInt_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jint SM_arc_util_Strings_parseInt_java_lang_String_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_arc_util_Strings_parseInt_java_lang_String_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_arc_util_Strings_parseInt_java_lang_String_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
jlong SM_arc_util_Strings_parseLong_java_lang_String_long_R_long(jcontext ctx, jobject param0, jlong param1);
jlong SM_arc_util_Strings_parseLong_java_lang_String_int_long_R_long(jcontext ctx, jobject param0, jint param1, jlong param2);
jlong SM_arc_util_Strings_parseLong_java_lang_String_int_int_int_long_R_long(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jlong param4);
jdouble SM_arc_util_Strings_parseDouble_java_lang_String_double_R_double(jcontext ctx, jobject param0, jdouble param1);
jint SM_arc_util_Strings_parseInt_java_lang_String_R_int(jcontext ctx, jobject param0);
jbool SM_arc_util_Strings_canParseFloat_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jbool SM_arc_util_Strings_canParsePositiveFloat_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jfloat SM_arc_util_Strings_parseFloat_java_lang_String_R_float(jcontext ctx, jobject param0);
jfloat SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(jcontext ctx, jobject param0, jfloat param1);
jobject SM_arc_util_Strings_parseColor_java_lang_String_R_arc_graphics_Color(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_parseColor_java_lang_String_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Strings_parseColorOrNull_arc_graphics_Color_java_lang_String_R_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1);
jint SM_arc_util_Strings_parseHex_java_lang_String_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(jcontext ctx, jfloat param0, jint param1);
jobject SM_arc_util_Strings_fixed_float_int_R_java_lang_String(jcontext ctx, jfloat param0, jint param1);
jobject SM_arc_util_Strings_fixedBuilder_float_int_R_java_lang_StringBuilder(jcontext ctx, jfloat param0, jint param1);
jobject SM_arc_util_Strings_formatMillis_long_R_java_lang_String(jcontext ctx, jlong param0);
void SM_arc_util_Strings_append_java_lang_StringBuilder_java_lang_String_int_long(jcontext ctx, jobject param0, jobject param1, jint param2, jlong param3);
jobject SM_arc_util_Strings_replace_java_lang_StringBuilder_java_lang_String_java_lang_String_R_java_lang_StringBuilder(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_arc_util_Strings_replace_java_lang_StringBuilder_char_java_lang_String_R_java_lang_StringBuilder(jcontext ctx, jobject param0, jchar param1, jobject param2);
jbool SM_arc_util_Strings_isDigitsOnly_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_sanitizeVersion_java_lang_String_R_Array1_int(jcontext ctx, jobject param0);
jbool SM_arc_util_Strings_checkNewerSemver_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Strings_deflate_java_lang_String_R_Array1_byte(jcontext ctx, jobject param0);
jobject SM_arc_util_Strings_undeflate_Array1_byte_R_java_lang_String(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
