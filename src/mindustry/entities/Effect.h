#ifndef HEADER_mindustry_entities_Effect
#define HEADER_mindustry_entities_Effect

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_Effect {
	java_lang_Object parent;
	jbool F_initialized;
	jint F_id;
	jref F_renderer;
	jfloat F_lifetime;
	jfloat F_clip;
	jfloat F_startDelay;
	jfloat F_baseRotation;
	jbool F_followParent;
	jbool F_rotWithParent;
	jfloat F_layer;
	jfloat F_layerDuration;
} mindustry_entities_Effect;

extern Class class_mindustry_entities_Effect;

extern jfloat SF_mindustry_entities_Effect_shakeFalloff;
extern jobject SF_mindustry_entities_Effect_container;
extern jobject SF_mindustry_entities_Effect_all;

#define VTABLE_mindustry_entities_Effect_hashCode_R_int 0
typedef jint (*func_mindustry_entities_Effect_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_Effect_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_Effect_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_Effect_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_Effect_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_Effect_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect_finalize 5
typedef void (*func_mindustry_entities_Effect_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect_notify 6
typedef void (*func_mindustry_entities_Effect_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect_notifyAll 7
typedef void (*func_mindustry_entities_Effect_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect_wait 8
typedef void (*func_mindustry_entities_Effect_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect_wait_long 9
typedef void (*func_mindustry_entities_Effect_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_Effect_wait_long_int 10
typedef void (*func_mindustry_entities_Effect_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_Effect_startDelay_float_R_mindustry_entities_Effect 11
typedef jobject (*func_mindustry_entities_Effect_startDelay_float_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_Effect_init 12
typedef void (*func_mindustry_entities_Effect_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect_followParent_boolean_R_mindustry_entities_Effect 13
typedef jobject (*func_mindustry_entities_Effect_followParent_boolean_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_Effect_rotWithParent_boolean_R_mindustry_entities_Effect 14
typedef jobject (*func_mindustry_entities_Effect_rotWithParent_boolean_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_Effect_layer_float_R_mindustry_entities_Effect 15
typedef jobject (*func_mindustry_entities_Effect_layer_float_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_Effect_baseRotation_float_R_mindustry_entities_Effect 16
typedef jobject (*func_mindustry_entities_Effect_baseRotation_float_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_Effect_layer_float_float_R_mindustry_entities_Effect 17
typedef jobject (*func_mindustry_entities_Effect_layer_float_float_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_Effect_wrap_arc_graphics_Color_R_mindustry_entities_effect_WrapEffect 18
typedef jobject (*func_mindustry_entities_Effect_wrap_arc_graphics_Color_R_mindustry_entities_effect_WrapEffect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_Effect_wrap_arc_graphics_Color_float_R_mindustry_entities_effect_WrapEffect 19
typedef jobject (*func_mindustry_entities_Effect_wrap_arc_graphics_Color_float_R_mindustry_entities_effect_WrapEffect)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position 20
typedef void (*func_mindustry_entities_Effect_at_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position_boolean 21
typedef void (*func_mindustry_entities_Effect_at_arc_math_geom_Position_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position_float 22
typedef void (*func_mindustry_entities_Effect_at_arc_math_geom_Position_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_Effect_at_float_float 23
typedef void (*func_mindustry_entities_Effect_at_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_Effect_at_float_float_float 24
typedef void (*func_mindustry_entities_Effect_at_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color 25
typedef void (*func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_entities_Effect_at_float_float_arc_graphics_Color 26
typedef void (*func_mindustry_entities_Effect_at_float_float_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
#define VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object 27
typedef void (*func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
#define VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object 28
typedef void (*func_mindustry_entities_Effect_at_float_float_float_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_entities_Effect_shouldCreate_R_boolean 29
typedef jbool (*func_mindustry_entities_Effect_shouldCreate_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object 30
typedef void (*func_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
#define VTABLE_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object 31
typedef void (*func_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
#define VTABLE_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float 32
typedef jfloat (*func_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float)(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7);
#define VTABLE_mindustry_entities_Effect_render_mindustry_entities_Effect$EffectContainer 33
typedef void (*func_mindustry_entities_Effect_render_mindustry_entities_Effect$EffectContainer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_Effect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object 34
typedef void (*func_mindustry_entities_Effect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);

void mark_mindustry_entities_Effect(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_Effect(jcontext ctx);
void init_mindustry_entities_Effect_float_float_arc_func_Cons(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
void init_mindustry_entities_Effect_float_arc_func_Cons(jcontext ctx, jobject self, jfloat param0, jobject param1);
void init_mindustry_entities_Effect(jcontext ctx, jobject self);
jobject M_mindustry_entities_Effect_startDelay_float_R_mindustry_entities_Effect(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_entities_Effect_init(jcontext ctx, jobject self);
jobject M_mindustry_entities_Effect_followParent_boolean_R_mindustry_entities_Effect(jcontext ctx, jobject self, jbool param0);
jobject M_mindustry_entities_Effect_rotWithParent_boolean_R_mindustry_entities_Effect(jcontext ctx, jobject self, jbool param0);
jobject M_mindustry_entities_Effect_layer_float_R_mindustry_entities_Effect(jcontext ctx, jobject self, jfloat param0);
jobject M_mindustry_entities_Effect_baseRotation_float_R_mindustry_entities_Effect(jcontext ctx, jobject self, jfloat param0);
jobject M_mindustry_entities_Effect_layer_float_float_R_mindustry_entities_Effect(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_mindustry_entities_Effect_wrap_arc_graphics_Color_R_mindustry_entities_effect_WrapEffect(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_entities_Effect_wrap_arc_graphics_Color_float_R_mindustry_entities_effect_WrapEffect(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_entities_Effect_at_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_Effect_at_arc_math_geom_Position_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_entities_Effect_at_arc_math_geom_Position_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_entities_Effect_at_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_entities_Effect_at_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void M_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3);
void M_mindustry_entities_Effect_at_float_float_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
void M_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
void M_mindustry_entities_Effect_at_float_float_float_java_lang_Object(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3);
jbool M_mindustry_entities_Effect_shouldCreate_R_boolean(jcontext ctx, jobject self);
void M_mindustry_entities_Effect_create_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
void M_mindustry_entities_Effect_add_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
jfloat M_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7);
void M_mindustry_entities_Effect_render_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self, jobject param0);
jobject SM_mindustry_entities_Effect_get_int_R_mindustry_entities_Effect(jcontext ctx, jint param0);
void SM_mindustry_entities_Effect_shake_float_float(jcontext ctx, jfloat param0, jfloat param1);
void SM_mindustry_entities_Effect_shake_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_entities_Effect_shake_float_float_arc_math_geom_Position(jcontext ctx, jfloat param0, jfloat param1, jobject param2);
void SM_mindustry_entities_Effect_floorDust_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
void SM_mindustry_entities_Effect_floorDustAngle_mindustry_entities_Effect_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_entities_Effect_decal_arc_graphics_g2d_TextureRegion_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_entities_Effect_decal_arc_graphics_g2d_TextureRegion_float_float_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5);
void SM_mindustry_entities_Effect_scorch_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jint param2);
void SM_mindustry_entities_Effect_rubble_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jint param2);
void SM_mindustry_entities_Effect_shockwaveDust_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
void SM_mindustry_entities_Effect_shockwaveDust_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_entities_Effect_lambda$shockwaveDust$0_float_int_float_float_float(jcontext ctx, jfloat param0, jint param1, jfloat param2, jfloat param3, jfloat param4);
void M_mindustry_entities_Effect_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
void SM_mindustry_entities_Effect_lambda$new$0_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
