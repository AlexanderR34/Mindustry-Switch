#ifndef HEADER_java_lang_Math
#define HEADER_java_lang_Math

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Math {
	java_lang_Object parent;
} java_lang_Math;

extern Class class_java_lang_Math;

extern jdouble SF_java_lang_Math_E;
extern jdouble SF_java_lang_Math_PI;
extern jobject SF_java_lang_Math_randomInst;
extern jbool SF_java_lang_Math_$assertionsDisabled;

#define VTABLE_java_lang_Math_hashCode_R_int 0
typedef jint (*func_java_lang_Math_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Math_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Math_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Math_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Math_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Math_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Math_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Math_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Math_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Math_finalize 5
typedef void (*func_java_lang_Math_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Math_notify 6
typedef void (*func_java_lang_Math_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Math_notifyAll 7
typedef void (*func_java_lang_Math_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Math_wait 8
typedef void (*func_java_lang_Math_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Math_wait_long 9
typedef void (*func_java_lang_Math_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Math_wait_long_int 10
typedef void (*func_java_lang_Math_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_lang_Math(jobject object, jint mark, jint depth);
void clinit_java_lang_Math(jcontext ctx);
void init_java_lang_Math(jcontext ctx, jobject self);
jdouble SM_java_lang_Math_abs_double_R_double(jcontext ctx, jdouble param0);
jfloat SM_java_lang_Math_abs_float_R_float(jcontext ctx, jfloat param0);
jint SM_java_lang_Math_abs_int_R_int(jcontext ctx, jint param0);
jlong SM_java_lang_Math_abs_long_R_long(jcontext ctx, jlong param0);
jdouble SM_java_lang_Math_ceil_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_floor_double_R_double(jcontext ctx, jdouble param0);
jint SM_java_lang_Math_floorDiv_int_int_R_int(jcontext ctx, jint param0, jint param1);
jlong SM_java_lang_Math_floorDiv_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jlong SM_java_lang_Math_floorDiv_long_long_R_long(jcontext ctx, jlong param0, jlong param1);
jint SM_java_lang_Math_floorMod_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_java_lang_Math_floorMod_long_int_R_int(jcontext ctx, jlong param0, jint param1);
jlong SM_java_lang_Math_floorMod_long_long_R_long(jcontext ctx, jlong param0, jlong param1);
jdouble SM_java_lang_Math_max_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_java_lang_Math_pow_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jfloat SM_java_lang_Math_max_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jint SM_java_lang_Math_max_int_int_R_int(jcontext ctx, jint param0, jint param1);
jlong SM_java_lang_Math_max_long_long_R_long(jcontext ctx, jlong param0, jlong param1);
jdouble SM_java_lang_Math_min_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jfloat SM_java_lang_Math_min_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jint SM_java_lang_Math_min_int_int_R_int(jcontext ctx, jint param0, jint param1);
jlong SM_java_lang_Math_min_long_long_R_long(jcontext ctx, jlong param0, jlong param1);
jdouble SM_java_lang_Math_cos_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_sin_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_sqrt_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_cbrt_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_tan_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_atan_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_asin_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_acos_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_atan2_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_java_lang_Math_sinh_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_cosh_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_tanh_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_exp_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_expm1_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_log10_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_log1p_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_rint_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_IEEEremainder_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_java_lang_Math_log_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_hypot_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_java_lang_Math_random_R_double(jcontext ctx);
jdouble SM_java_lang_Math_nextUp_double_R_double(jcontext ctx, jdouble param0);
jfloat SM_java_lang_Math_nextUp_float_R_float(jcontext ctx, jfloat param0);
jdouble SM_java_lang_Math_ulp_double_R_double(jcontext ctx, jdouble param0);
jfloat SM_java_lang_Math_ulp_float_R_float(jcontext ctx, jfloat param0);
jdouble SM_java_lang_Math_powerOfTwoD_int_R_double(jcontext ctx, jint param0);
jfloat SM_java_lang_Math_powerOfTwoF_int_R_float(jcontext ctx, jint param0);
jint SM_java_lang_Math_getExponent_float_R_int(jcontext ctx, jfloat param0);
jint SM_java_lang_Math_getExponent_double_R_int(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_toDegrees_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_toRadians_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_copySign_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jfloat SM_java_lang_Math_copySign_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jdouble SM_java_lang_Math_signum_double_R_double(jcontext ctx, jdouble param0);
jfloat SM_java_lang_Math_signum_float_R_float(jcontext ctx, jfloat param0);
jlong SM_java_lang_Math_round_double_R_long(jcontext ctx, jdouble param0);
jint SM_java_lang_Math_round_float_R_int(jcontext ctx, jfloat param0);
jdouble SM_java_lang_Math_nextDown_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Math_nextAfter_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jfloat SM_java_lang_Math_nextAfter_float_double_R_float(jcontext ctx, jfloat param0, jdouble param1);

#ifdef __cplusplus
}
#endif

#endif
