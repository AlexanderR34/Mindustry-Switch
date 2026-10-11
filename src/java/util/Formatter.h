#ifndef HEADER_java_util_Formatter
#define HEADER_java_util_Formatter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Formatter {
	java_lang_Object parent;
	jref F_pattern;
	jref F_formatted;
} java_util_Formatter;

extern Class class_java_util_Formatter;

extern jobject SF_java_util_Formatter_DIGITS_LOWER;
extern jobject SF_java_util_Formatter_DIGITS_UPPER;

#define VTABLE_java_util_Formatter_hashCode_R_int 0
typedef jint (*func_java_util_Formatter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Formatter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Formatter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Formatter_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Formatter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Formatter_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Formatter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Formatter_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Formatter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Formatter_finalize 5
typedef void (*func_java_util_Formatter_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Formatter_notify 6
typedef void (*func_java_util_Formatter_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Formatter_notifyAll 7
typedef void (*func_java_util_Formatter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Formatter_wait 8
typedef void (*func_java_util_Formatter_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Formatter_wait_long 9
typedef void (*func_java_util_Formatter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Formatter_wait_long_int 10
typedef void (*func_java_util_Formatter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Formatter_format_java_lang_String_Array1_java_lang_Object_R_java_util_Formatter 11
typedef jobject (*func_java_util_Formatter_format_java_lang_String_Array1_java_lang_Object_R_java_util_Formatter)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_java_util_Formatter(jobject object, jint mark, jint depth);
void clinit_java_util_Formatter(jcontext ctx);
void init_java_util_Formatter(jcontext ctx, jobject self);
jobject M_java_util_Formatter_format_java_lang_String_Array1_java_lang_Object_R_java_util_Formatter(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_Formatter_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_util_Formatter_access$100_R_Array1_char(jcontext ctx);
jobject SM_java_util_Formatter_access$200_R_Array1_char(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
