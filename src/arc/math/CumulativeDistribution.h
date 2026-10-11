#ifndef HEADER_arc_math_CumulativeDistribution
#define HEADER_arc_math_CumulativeDistribution

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_CumulativeDistribution {
	java_lang_Object parent;
	jref F_values;
} arc_math_CumulativeDistribution;

extern Class class_arc_math_CumulativeDistribution;


#define VTABLE_arc_math_CumulativeDistribution_hashCode_R_int 0
typedef jint (*func_arc_math_CumulativeDistribution_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_CumulativeDistribution_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_CumulativeDistribution_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_CumulativeDistribution_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_CumulativeDistribution_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_CumulativeDistribution_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution_finalize 5
typedef void (*func_arc_math_CumulativeDistribution_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution_notify 6
typedef void (*func_arc_math_CumulativeDistribution_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution_notifyAll 7
typedef void (*func_arc_math_CumulativeDistribution_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution_wait 8
typedef void (*func_arc_math_CumulativeDistribution_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution_wait_long 9
typedef void (*func_arc_math_CumulativeDistribution_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_CumulativeDistribution_wait_long_int 10
typedef void (*func_arc_math_CumulativeDistribution_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_CumulativeDistribution_add_java_lang_Object_float 11
typedef void (*func_arc_math_CumulativeDistribution_add_java_lang_Object_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_CumulativeDistribution_add_java_lang_Object 12
typedef void (*func_arc_math_CumulativeDistribution_add_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_CumulativeDistribution_generate 13
typedef void (*func_arc_math_CumulativeDistribution_generate)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution_generateNormalized 14
typedef void (*func_arc_math_CumulativeDistribution_generateNormalized)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution_generateUniform 15
typedef void (*func_arc_math_CumulativeDistribution_generateUniform)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution_value_float_R_java_lang_Object 16
typedef jobject (*func_arc_math_CumulativeDistribution_value_float_R_java_lang_Object)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_CumulativeDistribution_value_R_java_lang_Object 17
typedef jobject (*func_arc_math_CumulativeDistribution_value_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution_size_R_int 18
typedef jint (*func_arc_math_CumulativeDistribution_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution_getInterval_int_R_float 19
typedef jfloat (*func_arc_math_CumulativeDistribution_getInterval_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_math_CumulativeDistribution_getValue_int_R_java_lang_Object 20
typedef jobject (*func_arc_math_CumulativeDistribution_getValue_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_math_CumulativeDistribution_setInterval_java_lang_Object_float 21
typedef void (*func_arc_math_CumulativeDistribution_setInterval_java_lang_Object_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_CumulativeDistribution_setInterval_int_float 22
typedef void (*func_arc_math_CumulativeDistribution_setInterval_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_math_CumulativeDistribution_clear 23
typedef void (*func_arc_math_CumulativeDistribution_clear)(jcontext ctx, jobject self);

void mark_arc_math_CumulativeDistribution(jobject object, jint mark, jint depth);
void clinit_arc_math_CumulativeDistribution(jcontext ctx);
void init_arc_math_CumulativeDistribution(jcontext ctx, jobject self);
void M_arc_math_CumulativeDistribution_add_java_lang_Object_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_arc_math_CumulativeDistribution_add_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_arc_math_CumulativeDistribution_generate(jcontext ctx, jobject self);
void M_arc_math_CumulativeDistribution_generateNormalized(jcontext ctx, jobject self);
void M_arc_math_CumulativeDistribution_generateUniform(jcontext ctx, jobject self);
jobject M_arc_math_CumulativeDistribution_value_float_R_java_lang_Object(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_CumulativeDistribution_value_R_java_lang_Object(jcontext ctx, jobject self);
jint M_arc_math_CumulativeDistribution_size_R_int(jcontext ctx, jobject self);
jfloat M_arc_math_CumulativeDistribution_getInterval_int_R_float(jcontext ctx, jobject self, jint param0);
jobject M_arc_math_CumulativeDistribution_getValue_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_arc_math_CumulativeDistribution_setInterval_java_lang_Object_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_arc_math_CumulativeDistribution_setInterval_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_arc_math_CumulativeDistribution_clear(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
