#ifndef HEADER_arc_math_Scaled
#define HEADER_arc_math_Scaled

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_Scaled {
	java_lang_Object parent;
} arc_math_Scaled;

extern Class class_arc_math_Scaled;


#define INDEX_arc_math_Scaled_fin_R_float 0
typedef jfloat (*func_arc_math_Scaled_fin_R_float)(jcontext ctx, jobject self);
#define INDEX_arc_math_Scaled_fout_R_float 1
typedef jfloat (*func_arc_math_Scaled_fout_R_float)(jcontext ctx, jobject self);
#define INDEX_arc_math_Scaled_fout_arc_math_Interp_R_float 2
typedef jfloat (*func_arc_math_Scaled_fout_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_math_Scaled_fout_float_R_float 3
typedef jfloat (*func_arc_math_Scaled_fout_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_arc_math_Scaled_fin_arc_math_Interp_R_float 4
typedef jfloat (*func_arc_math_Scaled_fin_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_math_Scaled_finpow_R_float 5
typedef jfloat (*func_arc_math_Scaled_finpow_R_float)(jcontext ctx, jobject self);
#define INDEX_arc_math_Scaled_foutpow_R_float 6
typedef jfloat (*func_arc_math_Scaled_foutpow_R_float)(jcontext ctx, jobject self);
#define INDEX_arc_math_Scaled_finpowdown_R_float 7
typedef jfloat (*func_arc_math_Scaled_finpowdown_R_float)(jcontext ctx, jobject self);
#define INDEX_arc_math_Scaled_foutpowdown_R_float 8
typedef jfloat (*func_arc_math_Scaled_foutpowdown_R_float)(jcontext ctx, jobject self);
#define INDEX_arc_math_Scaled_fslope_R_float 9
typedef jfloat (*func_arc_math_Scaled_fslope_R_float)(jcontext ctx, jobject self);

void mark_arc_math_Scaled(jobject object, jint mark, jint depth);
void clinit_arc_math_Scaled(jcontext ctx);
jfloat M_arc_math_Scaled_fout_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_Scaled_fout_arc_math_Interp_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_Scaled_fout_float_R_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_math_Scaled_fin_arc_math_Interp_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_Scaled_finpow_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_Scaled_foutpow_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_Scaled_finpowdown_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_Scaled_foutpowdown_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_Scaled_fslope_R_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
