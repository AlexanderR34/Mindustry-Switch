#ifndef HEADER_arc_math_CumulativeDistribution$CumulativeValue
#define HEADER_arc_math_CumulativeDistribution$CumulativeValue

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_CumulativeDistribution$CumulativeValue {
	java_lang_Object parent;
	jref F_value;
	jfloat F_frequency;
	jfloat F_interval;
	jref F_this$0;
} arc_math_CumulativeDistribution$CumulativeValue;

extern Class class_arc_math_CumulativeDistribution$CumulativeValue;


#define VTABLE_arc_math_CumulativeDistribution$CumulativeValue_hashCode_R_int 0
typedef jint (*func_arc_math_CumulativeDistribution$CumulativeValue_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution$CumulativeValue_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_CumulativeDistribution$CumulativeValue_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_CumulativeDistribution$CumulativeValue_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_CumulativeDistribution$CumulativeValue_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution$CumulativeValue_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_CumulativeDistribution$CumulativeValue_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution$CumulativeValue_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_CumulativeDistribution$CumulativeValue_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution$CumulativeValue_finalize 5
typedef void (*func_arc_math_CumulativeDistribution$CumulativeValue_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution$CumulativeValue_notify 6
typedef void (*func_arc_math_CumulativeDistribution$CumulativeValue_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution$CumulativeValue_notifyAll 7
typedef void (*func_arc_math_CumulativeDistribution$CumulativeValue_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution$CumulativeValue_wait 8
typedef void (*func_arc_math_CumulativeDistribution$CumulativeValue_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_CumulativeDistribution$CumulativeValue_wait_long 9
typedef void (*func_arc_math_CumulativeDistribution$CumulativeValue_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_CumulativeDistribution$CumulativeValue_wait_long_int 10
typedef void (*func_arc_math_CumulativeDistribution$CumulativeValue_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_math_CumulativeDistribution$CumulativeValue(jobject object, jint mark, jint depth);
void clinit_arc_math_CumulativeDistribution$CumulativeValue(jcontext ctx);
void init_arc_math_CumulativeDistribution$CumulativeValue_arc_math_CumulativeDistribution_java_lang_Object_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);

#ifdef __cplusplus
}
#endif

#endif
