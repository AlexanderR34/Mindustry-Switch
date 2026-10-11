#ifndef HEADER_mindustry_entities_Effect$EffectContainer
#define HEADER_mindustry_entities_Effect$EffectContainer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/Scaled.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_Effect$EffectContainer {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jfloat F_time;
	jfloat F_lifetime;
	jfloat F_rotation;
	jref F_color;
	jint F_id;
	jref F_data;
	jref F_innerContainer;
} mindustry_entities_Effect$EffectContainer;

extern Class class_mindustry_entities_Effect$EffectContainer;


#define VTABLE_mindustry_entities_Effect$EffectContainer_hashCode_R_int 0
typedef jint (*func_mindustry_entities_Effect$EffectContainer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_Effect$EffectContainer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_Effect$EffectContainer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_Effect$EffectContainer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_Effect$EffectContainer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_Effect$EffectContainer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_finalize 5
typedef void (*func_mindustry_entities_Effect$EffectContainer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_notify 6
typedef void (*func_mindustry_entities_Effect$EffectContainer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_notifyAll 7
typedef void (*func_mindustry_entities_Effect$EffectContainer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_wait 8
typedef void (*func_mindustry_entities_Effect$EffectContainer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_wait_long 9
typedef void (*func_mindustry_entities_Effect$EffectContainer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_Effect$EffectContainer_wait_long_int 10
typedef void (*func_mindustry_entities_Effect$EffectContainer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_Effect$EffectContainer_fin_R_float 11
typedef jfloat (*func_mindustry_entities_Effect$EffectContainer_fin_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float 12
typedef jfloat (*func_mindustry_entities_Effect$EffectContainer_fout_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_fout_arc_math_Interp_R_float 13
typedef jfloat (*func_mindustry_entities_Effect$EffectContainer_fout_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_Effect$EffectContainer_fout_float_R_float 14
typedef jfloat (*func_mindustry_entities_Effect$EffectContainer_fout_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_Effect$EffectContainer_fin_arc_math_Interp_R_float 15
typedef jfloat (*func_mindustry_entities_Effect$EffectContainer_fin_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_Effect$EffectContainer_finpow_R_float 16
typedef jfloat (*func_mindustry_entities_Effect$EffectContainer_finpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_foutpow_R_float 17
typedef jfloat (*func_mindustry_entities_Effect$EffectContainer_foutpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_finpowdown_R_float 18
typedef jfloat (*func_mindustry_entities_Effect$EffectContainer_finpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_foutpowdown_R_float 19
typedef jfloat (*func_mindustry_entities_Effect$EffectContainer_foutpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_fslope_R_float 20
typedef jfloat (*func_mindustry_entities_Effect$EffectContainer_fslope_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_set_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object 21
typedef void (*func_mindustry_entities_Effect$EffectContainer_set_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7);
#define VTABLE_mindustry_entities_Effect$EffectContainer_data_R_java_lang_Object 22
typedef jobject (*func_mindustry_entities_Effect$EffectContainer_data_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_inner_R_mindustry_entities_Effect$EffectContainer 23
typedef jobject (*func_mindustry_entities_Effect$EffectContainer_inner_R_mindustry_entities_Effect$EffectContainer)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect$EffectContainer_scaled_float_arc_func_Cons 24
typedef void (*func_mindustry_entities_Effect$EffectContainer_scaled_float_arc_func_Cons)(jcontext ctx, jobject self, jfloat param0, jobject param1);

void mark_mindustry_entities_Effect$EffectContainer(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_Effect$EffectContainer(jcontext ctx);
void init_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self);
void M_mindustry_entities_Effect$EffectContainer_set_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7);
jobject M_mindustry_entities_Effect$EffectContainer_data_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_mindustry_entities_Effect$EffectContainer_inner_R_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self);
void M_mindustry_entities_Effect$EffectContainer_scaled_float_arc_func_Cons(jcontext ctx, jobject self, jfloat param0, jobject param1);
jfloat M_mindustry_entities_Effect$EffectContainer_fin_R_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
