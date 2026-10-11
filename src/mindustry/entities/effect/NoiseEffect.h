#ifndef HEADER_mindustry_entities_effect_NoiseEffect
#define HEADER_mindustry_entities_effect_NoiseEffect

#include "Clearwing.h"
#include "mindustry/entities/Effect.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_effect_NoiseEffect {
	mindustry_entities_Effect parent;
	jref F_noisePath;
	jref F_color;
	jfloat F_noiseScl;
	jfloat F_opacity;
	jfloat F_baseSpeed;
	jfloat F_intensity;
	jfloat F_windX;
	jfloat F_windY;
	jint F_layers;
	jfloat F_layerSpeedMul;
	jfloat F_layerAlphaMul;
	jfloat F_layerSclMul;
	jfloat F_layerColorMul;
	jref F_tex;
} mindustry_entities_effect_NoiseEffect;

extern Class class_mindustry_entities_effect_NoiseEffect;


#define VTABLE_mindustry_entities_effect_NoiseEffect_hashCode_R_int 0
typedef jint (*func_mindustry_entities_effect_NoiseEffect_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_NoiseEffect_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_effect_NoiseEffect_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_effect_NoiseEffect_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_effect_NoiseEffect_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_NoiseEffect_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_effect_NoiseEffect_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_NoiseEffect_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_effect_NoiseEffect_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_NoiseEffect_finalize 5
typedef void (*func_mindustry_entities_effect_NoiseEffect_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_NoiseEffect_notify 6
typedef void (*func_mindustry_entities_effect_NoiseEffect_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_NoiseEffect_notifyAll 7
typedef void (*func_mindustry_entities_effect_NoiseEffect_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_NoiseEffect_wait 8
typedef void (*func_mindustry_entities_effect_NoiseEffect_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_NoiseEffect_wait_long 9
typedef void (*func_mindustry_entities_effect_NoiseEffect_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_effect_NoiseEffect_wait_long_int 10
typedef void (*func_mindustry_entities_effect_NoiseEffect_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_effect_NoiseEffect_startDelay_float_R_mindustry_entities_Effect 11
typedef jobject (*func_mindustry_entities_effect_NoiseEffect_startDelay_float_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_effect_NoiseEffect_init 12
typedef void (*func_mindustry_entities_effect_NoiseEffect_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_NoiseEffect_followParent_boolean_R_mindustry_entities_Effect 13
typedef jobject (*func_mindustry_entities_effect_NoiseEffect_followParent_boolean_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_effect_NoiseEffect_rotWithParent_boolean_R_mindustry_entities_Effect 14
typedef jobject (*func_mindustry_entities_effect_NoiseEffect_rotWithParent_boolean_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_effect_NoiseEffect_layer_float_R_mindustry_entities_Effect 15
typedef jobject (*func_mindustry_entities_effect_NoiseEffect_layer_float_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_effect_NoiseEffect_baseRotation_float_R_mindustry_entities_Effect 16
typedef jobject (*func_mindustry_entities_effect_NoiseEffect_baseRotation_float_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_effect_NoiseEffect_layer_float_float_R_mindustry_entities_Effect 17
typedef jobject (*func_mindustry_entities_effect_NoiseEffect_layer_float_float_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_effect_NoiseEffect_wrap_arc_graphics_Color_R_mindustry_entities_effect_WrapEffect 18
typedef jobject (*func_mindustry_entities_effect_NoiseEffect_wrap_arc_graphics_Color_R_mindustry_entities_effect_WrapEffect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_effect_NoiseEffect_wrap_arc_graphics_Color_float_R_mindustry_entities_effect_WrapEffect 19
typedef jobject (*func_mindustry_entities_effect_NoiseEffect_wrap_arc_graphics_Color_float_R_mindustry_entities_effect_WrapEffect)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_effect_NoiseEffect_at_arc_math_geom_Position 20
typedef void (*func_mindustry_entities_effect_NoiseEffect_at_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_effect_NoiseEffect_at_arc_math_geom_Position_boolean 21
typedef void (*func_mindustry_entities_effect_NoiseEffect_at_arc_math_geom_Position_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_entities_effect_NoiseEffect_at_arc_math_geom_Position_float 22
typedef void (*func_mindustry_entities_effect_NoiseEffect_at_arc_math_geom_Position_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_effect_NoiseEffect_at_float_float 23
typedef void (*func_mindustry_entities_effect_NoiseEffect_at_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_effect_NoiseEffect_at_float_float_float 24
typedef void (*func_mindustry_entities_effect_NoiseEffect_at_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_effect_NoiseEffect_at_float_float_float_arc_graphics_Color 25
typedef void (*func_mindustry_entities_effect_NoiseEffect_at_float_float_float_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_entities_effect_NoiseEffect_at_float_float_arc_graphics_Color 26
typedef void (*func_mindustry_entities_effect_NoiseEffect_at_float_float_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
#define VTABLE_mindustry_entities_effect_NoiseEffect_at_float_float_float_arc_graphics_Color_java_lang_Object 27
typedef void (*func_mindustry_entities_effect_NoiseEffect_at_float_float_float_arc_graphics_Color_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
#define VTABLE_mindustry_entities_effect_NoiseEffect_at_float_float_float_java_lang_Object 28
typedef void (*func_mindustry_entities_effect_NoiseEffect_at_float_float_float_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_entities_effect_NoiseEffect_shouldCreate_R_boolean 29
typedef jbool (*func_mindustry_entities_effect_NoiseEffect_shouldCreate_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_NoiseEffect_create_float_float_float_arc_graphics_Color_java_lang_Object 30
typedef void (*func_mindustry_entities_effect_NoiseEffect_create_float_float_float_arc_graphics_Color_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
#define VTABLE_mindustry_entities_effect_NoiseEffect_add_float_float_float_arc_graphics_Color_java_lang_Object 31
typedef void (*func_mindustry_entities_effect_NoiseEffect_add_float_float_float_arc_graphics_Color_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
#define VTABLE_mindustry_entities_effect_NoiseEffect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float 32
typedef jfloat (*func_mindustry_entities_effect_NoiseEffect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float)(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7);
#define VTABLE_mindustry_entities_effect_NoiseEffect_render_mindustry_entities_Effect$EffectContainer 33
typedef void (*func_mindustry_entities_effect_NoiseEffect_render_mindustry_entities_Effect$EffectContainer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_effect_NoiseEffect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object 34
typedef void (*func_mindustry_entities_effect_NoiseEffect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);

void mark_mindustry_entities_effect_NoiseEffect(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_effect_NoiseEffect(jcontext ctx);
void init_mindustry_entities_effect_NoiseEffect(jcontext ctx, jobject self);
void M_mindustry_entities_effect_NoiseEffect_render_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_entities_effect_NoiseEffect_drawNoiseLayers_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_int_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jint param8, jfloat param9, jfloat param10, jfloat param11, jfloat param12);
void SM_mindustry_entities_effect_NoiseEffect_drawNoise_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);

#ifdef __cplusplus
}
#endif

#endif
