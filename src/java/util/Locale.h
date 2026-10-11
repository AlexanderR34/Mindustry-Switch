#ifndef HEADER_java_util_Locale
#define HEADER_java_util_Locale

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Locale {
	java_lang_Object parent;
	jref F_language;
	jref F_country;
	jref F_variant;
} java_util_Locale;

extern Class class_java_util_Locale;

extern jobject SF_java_util_Locale_defaultLocale;
extern jobject SF_java_util_Locale_ENGLISH;
extern jobject SF_java_util_Locale_FRENCH;
extern jobject SF_java_util_Locale_GERMAN;
extern jobject SF_java_util_Locale_ITALIAN;
extern jobject SF_java_util_Locale_JAPANESE;
extern jobject SF_java_util_Locale_KOREAN;
extern jobject SF_java_util_Locale_CHINESE;
extern jobject SF_java_util_Locale_SIMPLIFIED_CHINESE;
extern jobject SF_java_util_Locale_TRADITIONAL_CHINESE;
extern jobject SF_java_util_Locale_FRANCE;
extern jobject SF_java_util_Locale_GERMANY;
extern jobject SF_java_util_Locale_ITALY;
extern jobject SF_java_util_Locale_JAPAN;
extern jobject SF_java_util_Locale_KOREA;
extern jobject SF_java_util_Locale_CHINA;
extern jobject SF_java_util_Locale_PRC;
extern jobject SF_java_util_Locale_TAIWAN;
extern jobject SF_java_util_Locale_UK;
extern jobject SF_java_util_Locale_US;
extern jobject SF_java_util_Locale_CANADA;
extern jobject SF_java_util_Locale_CANADA_FRENCH;
extern jobject SF_java_util_Locale_ROOT;

#define VTABLE_java_util_Locale_hashCode_R_int 0
typedef jint (*func_java_util_Locale_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Locale_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Locale_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Locale_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Locale_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Locale_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale_finalize 5
typedef void (*func_java_util_Locale_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale_notify 6
typedef void (*func_java_util_Locale_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale_notifyAll 7
typedef void (*func_java_util_Locale_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale_wait 8
typedef void (*func_java_util_Locale_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale_wait_long 9
typedef void (*func_java_util_Locale_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Locale_wait_long_int 10
typedef void (*func_java_util_Locale_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Locale_getLanguage_R_java_lang_String 11
typedef jobject (*func_java_util_Locale_getLanguage_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale_getCountry_R_java_lang_String 12
typedef jobject (*func_java_util_Locale_getCountry_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale_getVariant_R_java_lang_String 13
typedef jobject (*func_java_util_Locale_getVariant_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale_getDisplayName_R_java_lang_String 14
typedef jobject (*func_java_util_Locale_getDisplayName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale_getDisplayName_java_util_Locale_R_java_lang_String 15
typedef jobject (*func_java_util_Locale_getDisplayName_java_util_Locale_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Locale(jobject object, jint mark, jint depth);
void clinit_java_util_Locale(jcontext ctx);
void init_java_util_Locale_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_util_Locale_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_util_Locale_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_java_util_Locale(jcontext ctx, jobject self);
jobject SM_java_util_Locale_getDefault_R_java_util_Locale(jcontext ctx);
jobject SM_java_util_Locale_getDefault_java_util_Locale$Category_R_java_util_Locale(jcontext ctx, jobject param0);
void SM_java_util_Locale_setDefault_java_util_Locale(jcontext ctx, jobject param0);
jobject M_java_util_Locale_getLanguage_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_util_Locale_getCountry_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_util_Locale_getVariant_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_util_Locale_getOSLanguage_R_java_lang_String(jcontext ctx);
jobject M_java_util_Locale_getDisplayName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_util_Locale_getDisplayName_java_util_Locale_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Locale_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
