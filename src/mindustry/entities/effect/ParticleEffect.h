#ifndef HEADER_mindustry_entities_effect_ParticleEffect
#define HEADER_mindustry_entities_effect_ParticleEffect

#include "Clearwing.h"
#include "mindustry/entities/Effect.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_effect_ParticleEffect {
	mindustry_entities_Effect parent;
	jref F_colorFrom;
	jref F_colorTo;
	jint F_particles;
	jbool F_randLength;
	jbool F_casingFlip;
	jfloat F_cone;
	jfloat F_length;
	jfloat F_baseLength;
	jref F_interp;
	jref F_sizeInterp;
	jref F_colorInterp;
	jfloat F_offsetX;
	jfloat F_offsetY;
	jfloat F_lightScl;
	jfloat F_lightOpacity;
	jref F_lightColor;
	jfloat F_spin;
	jfloat F_sizeFrom;
	jfloat F_sizeTo;
	jfloat F_sizeChangeStart;
	jfloat F_widthChangeStart;
	jfloat F_heightChangeStart;
	jbool F_useRotation;
	jfloat F_offset;
	jref F_region;
	jfloat F_widthFrom;
	jfloat F_widthTo;
	jfloat F_heightFrom;
	jfloat F_heightTo;
	jref F_widthInterp;
	jref F_heightInterp;
	jbool F_line;
	jfloat F_strokeFrom;
	jfloat F_strokeTo;
	jfloat F_lenFrom;
	jfloat F_lenTo;
	jbool F_cap;
	jref F_tex;
} mindustry_entities_effect_ParticleEffect;

extern Class class_mindustry_entities_effect_ParticleEffect;

extern jobject SF_mindustry_entities_effect_ParticleEffect_rand;
extern jobject SF_mindustry_entities_effect_ParticleEffect_rv;

#define VTABLE_mindustry_entities_effect_ParticleEffect_hashCode_R_int 0
typedef jint (*func_mindustry_entities_effect_ParticleEffect_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_ParticleEffect_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_effect_ParticleEffect_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_effect_ParticleEffect_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_effect_ParticleEffect_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_ParticleEffect_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_effect_ParticleEffect_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_ParticleEffect_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_effect_ParticleEffect_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_ParticleEffect_finalize 5
typedef void (*func_mindustry_entities_effect_ParticleEffect_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_ParticleEffect_notify 6
typedef void (*func_mindustry_entities_effect_ParticleEffect_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_ParticleEffect_notifyAll 7
typedef void (*func_mindustry_entities_effect_ParticleEffect_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_ParticleEffect_wait 8
typedef void (*func_mindustry_entities_effect_ParticleEffect_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_ParticleEffect_wait_long 9
typedef void (*func_mindustry_entities_effect_ParticleEffect_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_effect_ParticleEffect_wait_long_int 10
typedef void (*func_mindustry_entities_effect_ParticleEffect_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_effect_ParticleEffect_startDelay_float_R_mindustry_entities_Effect 11
typedef jobject (*func_mindustry_entities_effect_ParticleEffect_startDelay_float_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_effect_ParticleEffect_init 12
typedef void (*func_mindustry_entities_effect_ParticleEffect_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_ParticleEffect_followParent_boolean_R_mindustry_entities_Effect 13
typedef jobject (*func_mindustry_entities_effect_ParticleEffect_followParent_boolean_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_effect_ParticleEffect_rotWithParent_boolean_R_mindustry_entities_Effect 14
typedef jobject (*func_mindustry_entities_effect_ParticleEffect_rotWithParent_boolean_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_effect_ParticleEffect_layer_float_R_mindustry_entities_Effect 15
typedef jobject (*func_mindustry_entities_effect_ParticleEffect_layer_float_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_effect_ParticleEffect_baseRotation_float_R_mindustry_entities_Effect 16
typedef jobject (*func_mindustry_entities_effect_ParticleEffect_baseRotation_float_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_effect_ParticleEffect_layer_float_float_R_mindustry_entities_Effect 17
typedef jobject (*func_mindustry_entities_effect_ParticleEffect_layer_float_float_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_effect_ParticleEffect_wrap_arc_graphics_Color_R_mindustry_entities_effect_WrapEffect 18
typedef jobject (*func_mindustry_entities_effect_ParticleEffect_wrap_arc_graphics_Color_R_mindustry_entities_effect_WrapEffect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_effect_ParticleEffect_wrap_arc_graphics_Color_float_R_mindustry_entities_effect_WrapEffect 19
typedef jobject (*func_mindustry_entities_effect_ParticleEffect_wrap_arc_graphics_Color_float_R_mindustry_entities_effect_WrapEffect)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_effect_ParticleEffect_at_arc_math_geom_Position 20
typedef void (*func_mindustry_entities_effect_ParticleEffect_at_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_effect_ParticleEffect_at_arc_math_geom_Position_boolean 21
typedef void (*func_mindustry_entities_effect_ParticleEffect_at_arc_math_geom_Position_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_entities_effect_ParticleEffect_at_arc_math_geom_Position_float 22
typedef void (*func_mindustry_entities_effect_ParticleEffect_at_arc_math_geom_Position_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_effect_ParticleEffect_at_float_float 23
typedef void (*func_mindustry_entities_effect_ParticleEffect_at_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_effect_ParticleEffect_at_float_float_float 24
typedef void (*func_mindustry_entities_effect_ParticleEffect_at_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_effect_ParticleEffect_at_float_float_float_arc_graphics_Color 25
typedef void (*func_mindustry_entities_effect_ParticleEffect_at_float_float_float_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_entities_effect_ParticleEffect_at_float_float_arc_graphics_Color 26
typedef void (*func_mindustry_entities_effect_ParticleEffect_at_float_float_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
#define VTABLE_mindustry_entities_effect_ParticleEffect_at_float_float_float_arc_graphics_Color_java_lang_Object 27
typedef void (*func_mindustry_entities_effect_ParticleEffect_at_float_float_float_arc_graphics_Color_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
#define VTABLE_mindustry_entities_effect_ParticleEffect_at_float_float_float_java_lang_Object 28
typedef void (*func_mindustry_entities_effect_ParticleEffect_at_float_float_float_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_entities_effect_ParticleEffect_shouldCreate_R_boolean 29
typedef jbool (*func_mindustry_entities_effect_ParticleEffect_shouldCreate_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_effect_ParticleEffect_create_float_float_float_arc_graphics_Color_java_lang_Object 30
typedef void (*func_mindustry_entities_effect_ParticleEffect_create_float_float_float_arc_graphics_Color_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
#define VTABLE_mindustry_entities_effect_ParticleEffect_add_float_float_float_arc_graphics_Color_java_lang_Object 31
typedef void (*func_mindustry_entities_effect_ParticleEffect_add_float_float_float_arc_graphics_Color_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
#define VTABLE_mindustry_entities_effect_ParticleEffect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float 32
typedef jfloat (*func_mindustry_entities_effect_ParticleEffect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float)(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7);
#define VTABLE_mindustry_entities_effect_ParticleEffect_render_mindustry_entities_Effect$EffectContainer 33
typedef void (*func_mindustry_entities_effect_ParticleEffect_render_mindustry_entities_Effect$EffectContainer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_effect_ParticleEffect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object 34
typedef void (*func_mindustry_entities_effect_ParticleEffect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);

void mark_mindustry_entities_effect_ParticleEffect(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_effect_ParticleEffect(jcontext ctx);
void init_mindustry_entities_effect_ParticleEffect(jcontext ctx, jobject self);
void M_mindustry_entities_effect_ParticleEffect_init(jcontext ctx, jobject self);
void M_mindustry_entities_effect_ParticleEffect_render_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
