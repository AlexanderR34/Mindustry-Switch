#ifndef HEADER_java_util_Locale$Category
#define HEADER_java_util_Locale$Category

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Locale$Category {
	java_lang_Enum parent;
	jref F_languageKey;
	jref F_scriptKey;
	jref F_countryKey;
	jref F_variantKey;
} java_util_Locale$Category;

extern Class class_java_util_Locale$Category;

extern jobject SF_java_util_Locale$Category_DISPLAY;
extern jobject SF_java_util_Locale$Category_FORMAT;
extern jobject SF_java_util_Locale$Category_$VALUES;

#define VTABLE_java_util_Locale$Category_hashCode_R_int 0
typedef jint (*func_java_util_Locale$Category_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale$Category_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Locale$Category_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Locale$Category_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Locale$Category_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale$Category_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Locale$Category_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale$Category_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Locale$Category_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale$Category_finalize 5
typedef void (*func_java_util_Locale$Category_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale$Category_notify 6
typedef void (*func_java_util_Locale$Category_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale$Category_notifyAll 7
typedef void (*func_java_util_Locale$Category_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale$Category_wait 8
typedef void (*func_java_util_Locale$Category_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale$Category_wait_long 9
typedef void (*func_java_util_Locale$Category_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Locale$Category_wait_long_int 10
typedef void (*func_java_util_Locale$Category_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Locale$Category_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_util_Locale$Category_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Locale$Category_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_java_util_Locale$Category_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Locale$Category_name_R_java_lang_String 13
typedef jobject (*func_java_util_Locale$Category_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale$Category_ordinal_R_int 14
typedef jint (*func_java_util_Locale$Category_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Locale$Category_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_java_util_Locale$Category_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_java_util_Locale$Category(jobject object, jint mark, jint depth);
void clinit_java_util_Locale$Category(jcontext ctx);
jobject SM_java_util_Locale$Category_values_R_Array1_java_util_Locale$Category(jcontext ctx);
jobject SM_java_util_Locale$Category_valueOf_java_lang_String_R_java_util_Locale$Category(jcontext ctx, jobject param0);
void init_java_util_Locale$Category_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4, jobject param5);
jobject SM_java_util_Locale$Category_$values_R_Array1_java_util_Locale$Category(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
