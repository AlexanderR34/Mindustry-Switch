#ifndef HEADER_arc_util_noise_Ridged
#define HEADER_arc_util_noise_Ridged

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_noise_Ridged {
	java_lang_Object parent;
} arc_util_noise_Ridged;

extern Class class_arc_util_noise_Ridged;

extern jint SF_arc_util_noise_Ridged_X_NOISE_GEN;
extern jint SF_arc_util_noise_Ridged_Y_NOISE_GEN;
extern jint SF_arc_util_noise_Ridged_Z_NOISE_GEN;
extern jint SF_arc_util_noise_Ridged_SEED_NOISE_GEN;
extern jint SF_arc_util_noise_Ridged_SHIFT_NOISE_GEN;
extern jint SF_arc_util_noise_Ridged_quality;

#define VTABLE_arc_util_noise_Ridged_hashCode_R_int 0
typedef jint (*func_arc_util_noise_Ridged_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Ridged_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_noise_Ridged_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_noise_Ridged_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_noise_Ridged_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Ridged_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_noise_Ridged_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Ridged_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_noise_Ridged_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Ridged_finalize 5
typedef void (*func_arc_util_noise_Ridged_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Ridged_notify 6
typedef void (*func_arc_util_noise_Ridged_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Ridged_notifyAll 7
typedef void (*func_arc_util_noise_Ridged_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Ridged_wait 8
typedef void (*func_arc_util_noise_Ridged_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Ridged_wait_long 9
typedef void (*func_arc_util_noise_Ridged_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_noise_Ridged_wait_long_int 10
typedef void (*func_arc_util_noise_Ridged_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_noise_Ridged(jobject object, jint mark, jint depth);
void clinit_arc_util_noise_Ridged(jcontext ctx);
void init_arc_util_noise_Ridged(jcontext ctx, jobject self);
jfloat SM_arc_util_noise_Ridged_noise2d_int_double_double_double_R_float(jcontext ctx, jint param0, jdouble param1, jdouble param2, jdouble param3);
jfloat SM_arc_util_noise_Ridged_noise2d_int_double_double_int_double_R_float(jcontext ctx, jint param0, jdouble param1, jdouble param2, jint param3, jdouble param4);
jfloat SM_arc_util_noise_Ridged_noise2d_int_double_double_int_double_double_R_float(jcontext ctx, jint param0, jdouble param1, jdouble param2, jint param3, jdouble param4, jdouble param5);
jfloat SM_arc_util_noise_Ridged_noise3d_int_double_double_double_float_R_float(jcontext ctx, jint param0, jdouble param1, jdouble param2, jdouble param3, jfloat param4);
jfloat SM_arc_util_noise_Ridged_noise3d_int_double_double_double_int_float_R_float(jcontext ctx, jint param0, jdouble param1, jdouble param2, jdouble param3, jint param4, jfloat param5);
jdouble SM_arc_util_noise_Ridged_range_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_arc_util_noise_Ridged_gradientNoise3D_double_double_double_int_int_int_int_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2, jint param3, jint param4, jint param5, jint param6);
jdouble SM_arc_util_noise_Ridged_gradientNoise_double_double_int_int_int_R_double(jcontext ctx, jdouble param0, jdouble param1, jint param2, jint param3, jint param4);
jdouble SM_arc_util_noise_Ridged_lerp_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2);
jdouble SM_arc_util_noise_Ridged_scurve3_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_arc_util_noise_Ridged_scurve5_double_R_double(jcontext ctx, jdouble param0);

#ifdef __cplusplus
}
#endif

#endif
