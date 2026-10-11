#ifndef HEADER_arc_math_LinearRegression
#define HEADER_arc_math_LinearRegression

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_LinearRegression {
	java_lang_Object parent;
	jfloat F_intercept;
	jfloat F_slope;
} arc_math_LinearRegression;

extern Class class_arc_math_LinearRegression;


#define VTABLE_arc_math_LinearRegression_hashCode_R_int 0
typedef jint (*func_arc_math_LinearRegression_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_LinearRegression_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_LinearRegression_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_LinearRegression_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_LinearRegression_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_LinearRegression_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_LinearRegression_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_LinearRegression_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_LinearRegression_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_LinearRegression_finalize 5
typedef void (*func_arc_math_LinearRegression_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_LinearRegression_notify 6
typedef void (*func_arc_math_LinearRegression_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_LinearRegression_notifyAll 7
typedef void (*func_arc_math_LinearRegression_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_LinearRegression_wait 8
typedef void (*func_arc_math_LinearRegression_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_LinearRegression_wait_long 9
typedef void (*func_arc_math_LinearRegression_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_LinearRegression_wait_long_int 10
typedef void (*func_arc_math_LinearRegression_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_LinearRegression_calculate_arc_struct_Seq 11
typedef void (*func_arc_math_LinearRegression_calculate_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_LinearRegression_predict_float_R_float 12
typedef jfloat (*func_arc_math_LinearRegression_predict_float_R_float)(jcontext ctx, jobject self, jfloat param0);

void mark_arc_math_LinearRegression(jobject object, jint mark, jint depth);
void clinit_arc_math_LinearRegression(jcontext ctx);
void init_arc_math_LinearRegression(jcontext ctx, jobject self);
void M_arc_math_LinearRegression_calculate_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_LinearRegression_predict_float_R_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
