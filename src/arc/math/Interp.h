#ifndef HEADER_arc_math_Interp
#define HEADER_arc_math_Interp

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_Interp {
	java_lang_Object parent;
} arc_math_Interp;

extern Class class_arc_math_Interp;

extern jobject SF_arc_math_Interp_linear;
extern jobject SF_arc_math_Interp_reverse;
extern jobject SF_arc_math_Interp_smooth;
extern jobject SF_arc_math_Interp_smooth2;
extern jobject SF_arc_math_Interp_one;
extern jobject SF_arc_math_Interp_zero;
extern jobject SF_arc_math_Interp_slope;
extern jobject SF_arc_math_Interp_smoother;
extern jobject SF_arc_math_Interp_fade;
extern jobject SF_arc_math_Interp_pow2;
extern jobject SF_arc_math_Interp_pow2In;
extern jobject SF_arc_math_Interp_slowFast;
extern jobject SF_arc_math_Interp_pow2Out;
extern jobject SF_arc_math_Interp_fastSlow;
extern jobject SF_arc_math_Interp_pow2InInverse;
extern jobject SF_arc_math_Interp_pow2OutInverse;
extern jobject SF_arc_math_Interp_pow3;
extern jobject SF_arc_math_Interp_pow3In;
extern jobject SF_arc_math_Interp_pow3Out;
extern jobject SF_arc_math_Interp_pow3InInverse;
extern jobject SF_arc_math_Interp_pow3OutInverse;
extern jobject SF_arc_math_Interp_pow4;
extern jobject SF_arc_math_Interp_pow4In;
extern jobject SF_arc_math_Interp_pow4Out;
extern jobject SF_arc_math_Interp_pow5;
extern jobject SF_arc_math_Interp_pow5In;
extern jobject SF_arc_math_Interp_pow10In;
extern jobject SF_arc_math_Interp_pow10Out;
extern jobject SF_arc_math_Interp_pow5Out;
extern jobject SF_arc_math_Interp_sine;
extern jobject SF_arc_math_Interp_sineIn;
extern jobject SF_arc_math_Interp_sineOut;
extern jobject SF_arc_math_Interp_exp10;
extern jobject SF_arc_math_Interp_exp10In;
extern jobject SF_arc_math_Interp_exp10Out;
extern jobject SF_arc_math_Interp_exp5;
extern jobject SF_arc_math_Interp_exp5In;
extern jobject SF_arc_math_Interp_exp5Out;
extern jobject SF_arc_math_Interp_circle;
extern jobject SF_arc_math_Interp_circleIn;
extern jobject SF_arc_math_Interp_circleOut;
extern jobject SF_arc_math_Interp_elastic;
extern jobject SF_arc_math_Interp_elasticIn;
extern jobject SF_arc_math_Interp_elasticOut;
extern jobject SF_arc_math_Interp_swing;
extern jobject SF_arc_math_Interp_swingIn;
extern jobject SF_arc_math_Interp_swingOut;
extern jobject SF_arc_math_Interp_bounce;
extern jobject SF_arc_math_Interp_bounceIn;
extern jobject SF_arc_math_Interp_bounceOut;

#define INDEX_arc_math_Interp_apply_float_R_float 0
typedef jfloat (*func_arc_math_Interp_apply_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_arc_math_Interp_apply_float_float_float_R_float 1
typedef jfloat (*func_arc_math_Interp_apply_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);

void mark_arc_math_Interp(jobject object, jint mark, jint depth);
void clinit_arc_math_Interp(jcontext ctx);
jfloat M_arc_math_Interp_apply_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Interp_lambda$static$16_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Interp_lambda$static$15_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Interp_lambda$static$14_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Interp_lambda$static$13_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Interp_lambda$static$12_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Interp_lambda$static$11_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Interp_lambda$static$10_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Interp_lambda$static$9_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Interp_lambda$static$8_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Interp_lambda$static$7_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Interp_lambda$static$6_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Interp_lambda$static$5_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Interp_lambda$static$4_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Interp_lambda$static$3_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Interp_lambda$static$2_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Interp_lambda$static$1_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_arc_math_Interp_lambda$static$0_float_R_float(jcontext ctx, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
