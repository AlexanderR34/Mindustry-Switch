#ifndef HEADER_arc_math_Mathf
#define HEADER_arc_math_Mathf

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_Mathf {
	java_lang_Object parent;
} arc_math_Mathf;

extern Class class_arc_math_Mathf;

extern jobject SF_arc_math_Mathf_signs;
extern jobject SF_arc_math_Mathf_zeroOne;
extern jobject SF_arc_math_Mathf_booleans;
extern jfloat SF_arc_math_Mathf_FLOAT_ROUNDING_ERROR;
extern jfloat SF_arc_math_Mathf_PI;
extern jfloat SF_arc_math_Mathf_pi;
extern jfloat SF_arc_math_Mathf_halfPi;
extern jfloat SF_arc_math_Mathf_PI2;
extern jfloat SF_arc_math_Mathf_E;
extern jfloat SF_arc_math_Mathf_sqrt2;
extern jfloat SF_arc_math_Mathf_sqrt3;
extern jfloat SF_arc_math_Mathf_radiansToDegrees;
extern jfloat SF_arc_math_Mathf_radDeg;
extern jfloat SF_arc_math_Mathf_degreesToRadians;
extern jfloat SF_arc_math_Mathf_degRad;
extern jdouble SF_arc_math_Mathf_doubleDegRad;
extern jdouble SF_arc_math_Mathf_doubleRadDeg;
extern jint SF_arc_math_Mathf_sinBits;
extern jint SF_arc_math_Mathf_sinMask;
extern jint SF_arc_math_Mathf_sinCount;
extern jobject SF_arc_math_Mathf_sinTable;
extern jfloat SF_arc_math_Mathf_radFull;
extern jfloat SF_arc_math_Mathf_degFull;
extern jfloat SF_arc_math_Mathf_radToIndex;
extern jfloat SF_arc_math_Mathf_degToIndex;
extern jint SF_arc_math_Mathf_BIG_ENOUGH_INT;
extern jdouble SF_arc_math_Mathf_BIG_ENOUGH_FLOOR;
extern jdouble SF_arc_math_Mathf_CEIL;
extern jdouble SF_arc_math_Mathf_BIG_ENOUGH_ROUND;
extern jobject SF_arc_math_Mathf_seedr;
extern jobject SF_arc_math_Mathf_v1;
extern jobject SF_arc_math_Mathf_v2;
extern jobject SF_arc_math_Mathf_v3;
extern jobject SF_arc_math_Mathf_rand;

#define VTABLE_arc_math_Mathf_hashCode_R_int 0
typedef jint (*func_arc_math_Mathf_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mathf_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_Mathf_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mathf_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_Mathf_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mathf_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_Mathf_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mathf_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_Mathf_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mathf_finalize 5
typedef void (*func_arc_math_Mathf_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mathf_notify 6
typedef void (*func_arc_math_Mathf_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mathf_notifyAll 7
typedef void (*func_arc_math_Mathf_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mathf_wait 8
typedef void (*func_arc_math_Mathf_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mathf_wait_long 9
typedef void (*func_arc_math_Mathf_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_Mathf_wait_long_int 10
typedef void (*func_arc_math_Mathf_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_math_Mathf(jobject object, jint mark, jint depth);
void clinit_arc_math_Mathf(jcontext ctx);
void init_arc_math_Mathf(jcontext ctx, jobject self);
jfloat SM_arc_math_Mathf_sin_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Mathf_cos_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Mathf_sinDeg_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Mathf_cosDeg_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Mathf_absin_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_arc_math_Mathf_absin_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Mathf_tan_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Mathf_sin_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_arc_math_Mathf_sin_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Mathf_cos_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Mathf_angle_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_arc_math_Mathf_angleExact_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_arc_math_Mathf_wrapAngleAroundZero_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Mathf_atn_double_R_float(jcontext ctx, jdouble param0);
jfloat SM_arc_math_Mathf_atan2_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jint SM_arc_math_Mathf_digits_int_R_int(jcontext ctx, jint param0);
jint SM_arc_math_Mathf_digits_long_R_int(jcontext ctx, jlong param0);
jfloat SM_arc_math_Mathf_sqrt_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Mathf_sqr_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Mathf_map_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jfloat SM_arc_math_Mathf_map_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jint SM_arc_math_Mathf_sign_float_R_int(jcontext ctx, jfloat param0);
jint SM_arc_math_Mathf_sign_boolean_R_int(jcontext ctx, jbool param0);
jint SM_arc_math_Mathf_num_boolean_R_int(jcontext ctx, jbool param0);
jfloat SM_arc_math_Mathf_pow_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jint SM_arc_math_Mathf_pow_int_int_R_int(jcontext ctx, jint param0, jint param1);
jfloat SM_arc_math_Mathf_range_float_R_float(jcontext ctx, jfloat param0);
jint SM_arc_math_Mathf_range_int_R_int(jcontext ctx, jint param0);
jfloat SM_arc_math_Mathf_range_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jbool SM_arc_math_Mathf_chanceDelta_double_R_boolean(jcontext ctx, jdouble param0);
jbool SM_arc_math_Mathf_chance_double_R_boolean(jcontext ctx, jdouble param0);
jint SM_arc_math_Mathf_random_int_R_int(jcontext ctx, jint param0);
jint SM_arc_math_Mathf_random_int_int_R_int(jcontext ctx, jint param0, jint param1);
jlong SM_arc_math_Mathf_random_long_R_long(jcontext ctx, jlong param0);
jlong SM_arc_math_Mathf_random_long_long_R_long(jcontext ctx, jlong param0, jlong param1);
jbool SM_arc_math_Mathf_randomBoolean_R_boolean(jcontext ctx);
jbool SM_arc_math_Mathf_randomBoolean_float_R_boolean(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Mathf_random_R_float(jcontext ctx);
jfloat SM_arc_math_Mathf_random_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Mathf_random_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jint SM_arc_math_Mathf_randomSign_R_int(jcontext ctx);
jint SM_arc_math_Mathf_randomSeed_long_int_int_R_int(jcontext ctx, jlong param0, jint param1, jint param2);
jfloat SM_arc_math_Mathf_randomSeed_long_float_float_R_float(jcontext ctx, jlong param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Mathf_randomSeed_long_R_float(jcontext ctx, jlong param0);
jfloat SM_arc_math_Mathf_randomSeed_long_float_R_float(jcontext ctx, jlong param0, jfloat param1);
jfloat SM_arc_math_Mathf_randomSeedRange_long_float_R_float(jcontext ctx, jlong param0, jfloat param1);
jfloat SM_arc_math_Mathf_randomTriangular_R_float(jcontext ctx);
jfloat SM_arc_math_Mathf_randomTriangular_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Mathf_randomTriangular_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_arc_math_Mathf_randomTriangular_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jint SM_arc_math_Mathf_nextPowerOfTwo_int_R_int(jcontext ctx, jint param0);
jbool SM_arc_math_Mathf_isPowerOfTwo_int_R_boolean(jcontext ctx, jint param0);
jint SM_arc_math_Mathf_clamp_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2);
jlong SM_arc_math_Mathf_clamp_long_long_long_R_long(jcontext ctx, jlong param0, jlong param1, jlong param2);
jfloat SM_arc_math_Mathf_clamp_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Mathf_clamp_float_R_float(jcontext ctx, jfloat param0);
jdouble SM_arc_math_Mathf_clamp_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2);
jfloat SM_arc_math_Mathf_maxZero_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Mathf_approach_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Mathf_approachDelta_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Mathf_lerp_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Mathf_slerpRad_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Mathf_slerp_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Mathf_slerpDelta_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jint SM_arc_math_Mathf_floor_float_R_int(jcontext ctx, jfloat param0);
jint SM_arc_math_Mathf_floorPositive_float_R_int(jcontext ctx, jfloat param0);
jint SM_arc_math_Mathf_ceil_float_R_int(jcontext ctx, jfloat param0);
jint SM_arc_math_Mathf_ceilPositive_float_R_int(jcontext ctx, jfloat param0);
jint SM_arc_math_Mathf_round_float_R_int(jcontext ctx, jfloat param0);
jint SM_arc_math_Mathf_round_int_int_R_int(jcontext ctx, jint param0, jint param1);
jfloat SM_arc_math_Mathf_round_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jint SM_arc_math_Mathf_round_float_int_R_int(jcontext ctx, jfloat param0, jint param1);
jint SM_arc_math_Mathf_roundPositive_float_R_int(jcontext ctx, jfloat param0);
jbool SM_arc_math_Mathf_zero_float_R_boolean(jcontext ctx, jfloat param0);
jbool SM_arc_math_Mathf_zero_double_R_boolean(jcontext ctx, jdouble param0);
jbool SM_arc_math_Mathf_zero_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1);
jbool SM_arc_math_Mathf_equal_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1);
jbool SM_arc_math_Mathf_equal_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Mathf_log_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_arc_math_Mathf_log2_float_R_float(jcontext ctx, jfloat param0);
jint SM_arc_math_Mathf_log2_int_R_int(jcontext ctx, jint param0);
jfloat SM_arc_math_Mathf_mod_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jint SM_arc_math_Mathf_mod_int_int_R_int(jcontext ctx, jint param0, jint param1);
jfloat SM_arc_math_Mathf_sample_Array1_float_float_R_float(jcontext ctx, jobject param0, jfloat param1);
jfloat SM_arc_math_Mathf_slope_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Mathf_curve_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_arc_math_Mathf_curve_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Mathf_curveMargin_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_arc_math_Mathf_curveMargin_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Mathf_len_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_arc_math_Mathf_len2_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_arc_math_Mathf_dot_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jfloat SM_arc_math_Mathf_dst_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_arc_math_Mathf_dst2_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_arc_math_Mathf_dst_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jfloat SM_arc_math_Mathf_dst2_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jfloat SM_arc_math_Mathf_dstm_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject SM_arc_math_Mathf_arrive_arc_math_geom_Position_arc_math_geom_Position_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
jobject SM_arc_math_Mathf_arrive_float_float_float_float_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);
jbool SM_arc_math_Mathf_within_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jbool SM_arc_math_Mathf_within_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);

#ifdef __cplusplus
}
#endif

#endif
