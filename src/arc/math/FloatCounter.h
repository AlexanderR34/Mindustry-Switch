#ifndef HEADER_arc_math_FloatCounter
#define HEADER_arc_math_FloatCounter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_FloatCounter {
	java_lang_Object parent;
	jref F_mean;
	jint F_count;
	jfloat F_total;
	jfloat F_min;
	jfloat F_max;
	jfloat F_average;
	jfloat F_latest;
	jfloat F_value;
} arc_math_FloatCounter;

extern Class class_arc_math_FloatCounter;


#define VTABLE_arc_math_FloatCounter_hashCode_R_int 0
typedef jint (*func_arc_math_FloatCounter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_FloatCounter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_FloatCounter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_FloatCounter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_FloatCounter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_FloatCounter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_FloatCounter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_FloatCounter_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_FloatCounter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_FloatCounter_finalize 5
typedef void (*func_arc_math_FloatCounter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_FloatCounter_notify 6
typedef void (*func_arc_math_FloatCounter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_FloatCounter_notifyAll 7
typedef void (*func_arc_math_FloatCounter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_FloatCounter_wait 8
typedef void (*func_arc_math_FloatCounter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_FloatCounter_wait_long 9
typedef void (*func_arc_math_FloatCounter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_FloatCounter_wait_long_int 10
typedef void (*func_arc_math_FloatCounter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_FloatCounter_put_float 11
typedef void (*func_arc_math_FloatCounter_put_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_FloatCounter_reset 12
typedef void (*func_arc_math_FloatCounter_reset)(jcontext ctx, jobject self);

void mark_arc_math_FloatCounter(jobject object, jint mark, jint depth);
void clinit_arc_math_FloatCounter(jcontext ctx);
void init_arc_math_FloatCounter_int(jcontext ctx, jobject self, jint param0);
void M_arc_math_FloatCounter_put_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_math_FloatCounter_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
