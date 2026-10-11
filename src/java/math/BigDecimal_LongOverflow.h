#ifndef HEADER_java_math_BigDecimal$LongOverflow
#define HEADER_java_math_BigDecimal$LongOverflow

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_math_BigDecimal$LongOverflow {
	java_lang_Object parent;
} java_math_BigDecimal$LongOverflow;

extern Class class_java_math_BigDecimal$LongOverflow;

extern jobject SF_java_math_BigDecimal$LongOverflow_LONGMIN;
extern jobject SF_java_math_BigDecimal$LongOverflow_LONGMAX;

#define VTABLE_java_math_BigDecimal$LongOverflow_hashCode_R_int 0
typedef jint (*func_java_math_BigDecimal$LongOverflow_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$LongOverflow_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_math_BigDecimal$LongOverflow_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal$LongOverflow_clone_R_java_lang_Object 2
typedef jobject (*func_java_math_BigDecimal$LongOverflow_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$LongOverflow_getClass_R_java_lang_Class 3
typedef jobject (*func_java_math_BigDecimal$LongOverflow_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$LongOverflow_toString_R_java_lang_String 4
typedef jobject (*func_java_math_BigDecimal$LongOverflow_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$LongOverflow_finalize 5
typedef void (*func_java_math_BigDecimal$LongOverflow_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$LongOverflow_notify 6
typedef void (*func_java_math_BigDecimal$LongOverflow_notify)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$LongOverflow_notifyAll 7
typedef void (*func_java_math_BigDecimal$LongOverflow_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$LongOverflow_wait 8
typedef void (*func_java_math_BigDecimal$LongOverflow_wait)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal$LongOverflow_wait_long 9
typedef void (*func_java_math_BigDecimal$LongOverflow_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_math_BigDecimal$LongOverflow_wait_long_int 10
typedef void (*func_java_math_BigDecimal$LongOverflow_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_math_BigDecimal$LongOverflow(jobject object, jint mark, jint depth);
void clinit_java_math_BigDecimal$LongOverflow(jcontext ctx);
void init_java_math_BigDecimal$LongOverflow(jcontext ctx, jobject self);
void SM_java_math_BigDecimal$LongOverflow_check_java_math_BigDecimal(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
