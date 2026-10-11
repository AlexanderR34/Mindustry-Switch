#ifndef HEADER_arc_util_noise_Noise
#define HEADER_arc_util_noise_Noise

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_noise_Noise {
	java_lang_Object parent;
} arc_util_noise_Noise;

extern Class class_arc_util_noise_Noise;

extern jint SF_arc_util_noise_Noise_seed;
extern jint SF_arc_util_noise_Noise_P;
extern jint SF_arc_util_noise_Noise_B;
extern jint SF_arc_util_noise_Noise_M;
extern jint SF_arc_util_noise_Noise_NP;
extern jint SF_arc_util_noise_Noise_N;
extern jobject SF_arc_util_noise_Noise_p;
extern jobject SF_arc_util_noise_Noise_g2;
extern jobject SF_arc_util_noise_Noise_g1;
extern jobject SF_arc_util_noise_Noise_points;

#define VTABLE_arc_util_noise_Noise_hashCode_R_int 0
typedef jint (*func_arc_util_noise_Noise_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Noise_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_noise_Noise_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_noise_Noise_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_noise_Noise_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Noise_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_noise_Noise_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Noise_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_noise_Noise_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Noise_finalize 5
typedef void (*func_arc_util_noise_Noise_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Noise_notify 6
typedef void (*func_arc_util_noise_Noise_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Noise_notifyAll 7
typedef void (*func_arc_util_noise_Noise_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Noise_wait 8
typedef void (*func_arc_util_noise_Noise_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Noise_wait_long 9
typedef void (*func_arc_util_noise_Noise_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_noise_Noise_wait_long_int 10
typedef void (*func_arc_util_noise_Noise_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_noise_Noise(jobject object, jint mark, jint depth);
void clinit_arc_util_noise_Noise(jcontext ctx);
void init_arc_util_noise_Noise(jcontext ctx, jobject self);
jdouble SM_arc_util_noise_Noise_lerp_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2);
jdouble SM_arc_util_noise_Noise_s_curve_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_arc_util_noise_Noise_rawNoise_double_R_double(jcontext ctx, jdouble param0);
jdouble SM_arc_util_noise_Noise_snoise_float_float_float_float_float_R_double(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jfloat SM_arc_util_noise_Noise_snoise_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jfloat SM_arc_util_noise_Noise_snoise3_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jfloat SM_arc_util_noise_Noise_nnoise_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jfloat SM_arc_util_noise_Noise_noise_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jfloat SM_arc_util_noise_Noise_noise_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jfloat SM_arc_util_noise_Noise_fnoise_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jdouble SM_arc_util_noise_Noise_rawNoise_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1);
jdouble SM_arc_util_noise_Noise_rawNoise_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2);
jobject SM_arc_util_noise_Noise_G_int_R_Array1_double(jcontext ctx, jint param0);
void SM_arc_util_noise_Noise_setSeed_int(jcontext ctx, jint param0);
void SM_arc_util_noise_Noise_init(jcontext ctx);
void SM_arc_util_noise_Noise_normalize2_Array1_double(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
