#ifndef HEADER_java_math_BigDecimal$StringBuilderHelper
#define HEADER_java_math_BigDecimal$StringBuilderHelper

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_math_BigDecimal$StringBuilderHelper {
	java_lang_Object parent;
	jref F_sb;
	jref F_cmpCharArray;
} java_math_BigDecimal$StringBuilderHelper;

extern Class class_java_math_BigDecimal$StringBuilderHelper;

extern jobject SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_TENS;
extern jobject SF_java_math_BigDecimal$StringBuilderHelper_DIGIT_ONES;
extern jbool SF_java_math_BigDecimal$StringBuilderHelper_$assertionsDisabled;

#define VTABLE_java_math_BigDecimal$StringBuilderHelper_hashCode_R_int 0
typedef jint (*func_java_math_BigDecimal$StringBuilderHelper_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$StringBuilderHelper_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_math_BigDecimal$StringBuilderHelper_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal$StringBuilderHelper_clone_R_java_lang_Object 2
typedef jobject (*func_java_math_BigDecimal$StringBuilderHelper_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$StringBuilderHelper_getClass_R_java_lang_Class 3
typedef jobject (*func_java_math_BigDecimal$StringBuilderHelper_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$StringBuilderHelper_toString_R_java_lang_String 4
typedef jobject (*func_java_math_BigDecimal$StringBuilderHelper_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$StringBuilderHelper_finalize 5
typedef void (*func_java_math_BigDecimal$StringBuilderHelper_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$StringBuilderHelper_notify 6
typedef void (*func_java_math_BigDecimal$StringBuilderHelper_notify)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$StringBuilderHelper_notifyAll 7
typedef void (*func_java_math_BigDecimal$StringBuilderHelper_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$StringBuilderHelper_wait 8
typedef void (*func_java_math_BigDecimal$StringBuilderHelper_wait)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$StringBuilderHelper_wait_long 9
typedef void (*func_java_math_BigDecimal$StringBuilderHelper_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_math_BigDecimal$StringBuilderHelper_wait_long_int 10
typedef void (*func_java_math_BigDecimal$StringBuilderHelper_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_math_BigDecimal$StringBuilderHelper_getStringBuilder_R_java_lang_StringBuilder 11
typedef jobject (*func_java_math_BigDecimal$StringBuilderHelper_getStringBuilder_R_java_lang_StringBuilder)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$StringBuilderHelper_getCompactCharArray_R_Array1_char 12
typedef jobject (*func_java_math_BigDecimal$StringBuilderHelper_getCompactCharArray_R_Array1_char)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$StringBuilderHelper_putIntCompact_long_R_int 13
typedef jint (*func_java_math_BigDecimal$StringBuilderHelper_putIntCompact_long_R_int)(jcontext ctx, jobject self, jlong param0);

void mark_java_math_BigDecimal$StringBuilderHelper(jobject object, jint mark, jint depth);
void clinit_java_math_BigDecimal$StringBuilderHelper(jcontext ctx);
void init_java_math_BigDecimal$StringBuilderHelper(jcontext ctx, jobject self);
jobject M_java_math_BigDecimal$StringBuilderHelper_getStringBuilder_R_java_lang_StringBuilder(jcontext ctx, jobject self);
jobject M_java_math_BigDecimal$StringBuilderHelper_getCompactCharArray_R_Array1_char(jcontext ctx, jobject self);
jint M_java_math_BigDecimal$StringBuilderHelper_putIntCompact_long_R_int(jcontext ctx, jobject self, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
