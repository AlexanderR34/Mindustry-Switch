#ifndef HEADER_arc_util_I18NBundle
#define HEADER_arc_util_I18NBundle

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_I18NBundle {
	java_lang_Object parent;
	jref F_parent;
	jref F_locale;
	jref F_properties;
	jref F_formatter;
} arc_util_I18NBundle;

extern Class class_arc_util_I18NBundle;

extern jobject SF_arc_util_I18NBundle_DEFAULT_ENCODING;
extern jobject SF_arc_util_I18NBundle_ROOT_LOCALE;
extern jbool SF_arc_util_I18NBundle_simpleFormatter;

#define VTABLE_arc_util_I18NBundle_hashCode_R_int 0
typedef jint (*func_arc_util_I18NBundle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_I18NBundle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_I18NBundle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_I18NBundle_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_I18NBundle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_I18NBundle_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_I18NBundle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_I18NBundle_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_I18NBundle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_I18NBundle_finalize 5
typedef void (*func_arc_util_I18NBundle_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_I18NBundle_notify 6
typedef void (*func_arc_util_I18NBundle_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_I18NBundle_notifyAll 7
typedef void (*func_arc_util_I18NBundle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_I18NBundle_wait 8
typedef void (*func_arc_util_I18NBundle_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_I18NBundle_wait_long 9
typedef void (*func_arc_util_I18NBundle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_I18NBundle_wait_long_int 10
typedef void (*func_arc_util_I18NBundle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_I18NBundle_load_java_io_Reader 11
typedef void (*func_arc_util_I18NBundle_load_java_io_Reader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_I18NBundle_getLocale_R_java_util_Locale 12
typedef jobject (*func_arc_util_I18NBundle_getLocale_R_java_util_Locale)(jcontext ctx, jobject self);
#define VTABLE_arc_util_I18NBundle_setLocale_java_util_Locale 13
typedef void (*func_arc_util_I18NBundle_setLocale_java_util_Locale)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String 14
typedef jobject (*func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String 15
typedef jobject (*func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String 16
typedef jobject (*func_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_I18NBundle_getNotNull_java_lang_String_R_java_lang_String 17
typedef jobject (*func_arc_util_I18NBundle_getNotNull_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_I18NBundle_getKeys_R_java_lang_Iterable 18
typedef jobject (*func_arc_util_I18NBundle_getKeys_R_java_lang_Iterable)(jcontext ctx, jobject self);
#define VTABLE_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap 19
typedef jobject (*func_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap)(jcontext ctx, jobject self);
#define VTABLE_arc_util_I18NBundle_setProperties_arc_struct_ObjectMap 20
typedef void (*func_arc_util_I18NBundle_setProperties_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean 21
typedef jbool (*func_arc_util_I18NBundle_has_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String 22
typedef jobject (*func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_util_I18NBundle_formatString_java_lang_String_Array1_java_lang_Object_R_java_lang_String 23
typedef jobject (*func_arc_util_I18NBundle_formatString_java_lang_String_Array1_java_lang_Object_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_util_I18NBundle_formatFloat_java_lang_String_float_int_R_java_lang_String 24
typedef jobject (*func_arc_util_I18NBundle_formatFloat_java_lang_String_float_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jfloat param1, jint param2);
#define VTABLE_arc_util_I18NBundle_debug_java_lang_String 25
typedef void (*func_arc_util_I18NBundle_debug_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_I18NBundle_getParent_R_arc_util_I18NBundle 26
typedef jobject (*func_arc_util_I18NBundle_getParent_R_arc_util_I18NBundle)(jcontext ctx, jobject self);

void mark_arc_util_I18NBundle(jobject object, jint mark, jint depth);
void clinit_arc_util_I18NBundle(jcontext ctx);
void init_arc_util_I18NBundle(jcontext ctx, jobject self);
jbool SM_arc_util_I18NBundle_getSimpleFormatter_R_boolean(jcontext ctx);
void SM_arc_util_I18NBundle_setSimpleFormatter_boolean(jcontext ctx, jbool param0);
jobject SM_arc_util_I18NBundle_createEmptyBundle_R_arc_util_I18NBundle(jcontext ctx);
jobject SM_arc_util_I18NBundle_createBundle_arc_files_Fi_R_arc_util_I18NBundle(jcontext ctx, jobject param0);
jobject SM_arc_util_I18NBundle_createBundle_arc_files_Fi_java_util_Locale_R_arc_util_I18NBundle(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_I18NBundle_createBundle_arc_files_Fi_java_lang_String_R_arc_util_I18NBundle(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_I18NBundle_createBundle_arc_files_Fi_java_util_Locale_java_lang_String_R_arc_util_I18NBundle(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_arc_util_I18NBundle_createBundleImpl_arc_files_Fi_java_util_Locale_java_lang_String_R_arc_util_I18NBundle(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_arc_util_I18NBundle_getCandidateLocales_java_util_Locale_R_arc_struct_Seq(jcontext ctx, jobject param0);
jobject SM_arc_util_I18NBundle_getFallbackLocale_java_util_Locale_R_java_util_Locale(jcontext ctx, jobject param0);
jobject SM_arc_util_I18NBundle_loadBundleChain_arc_files_Fi_java_lang_String_arc_struct_Seq_int_arc_util_I18NBundle_R_arc_util_I18NBundle(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4);
jobject SM_arc_util_I18NBundle_loadBundle_arc_files_Fi_java_lang_String_java_util_Locale_R_arc_util_I18NBundle(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_arc_util_I18NBundle_checkFileExistence_arc_files_Fi_R_boolean(jcontext ctx, jobject param0);
jobject SM_arc_util_I18NBundle_toFileHandle_arc_files_Fi_java_util_Locale_R_arc_files_Fi(jcontext ctx, jobject param0, jobject param1);
void M_arc_util_I18NBundle_load_java_io_Reader(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_I18NBundle_getLocale_R_java_util_Locale(jcontext ctx, jobject self);
void M_arc_util_I18NBundle_setLocale_java_util_Locale(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_I18NBundle_getNotNull_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_I18NBundle_getKeys_R_java_lang_Iterable(jcontext ctx, jobject self);
jobject M_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap(jcontext ctx, jobject self);
void M_arc_util_I18NBundle_setProperties_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0);
jbool M_arc_util_I18NBundle_has_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_util_I18NBundle_formatString_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_util_I18NBundle_formatFloat_java_lang_String_float_int_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jfloat param1, jint param2);
void M_arc_util_I18NBundle_debug_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_I18NBundle_getParent_R_arc_util_I18NBundle(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
