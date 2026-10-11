#ifndef HEADER_mindustry_content_UnitTypes$33$2$1$1
#define HEADER_mindustry_content_UnitTypes$33$2$1$1

#include "Clearwing.h"
#include "mindustry/entities/effect/ExplosionEffect.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_UnitTypes$33$2$1$1 {
	mindustry_entities_effect_ExplosionEffect parent;
	jref F_this$2;
} mindustry_content_UnitTypes$33$2$1$1;

extern Class class_mindustry_content_UnitTypes$33$2$1$1;


#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_hashCode_R_int 0
typedef jint (*func_mindustry_content_UnitTypes$33$2$1$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_UnitTypes$33$2$1$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_UnitTypes$33$2$1$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_UnitTypes$33$2$1$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_UnitTypes$33$2$1$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_finalize 5
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_notify 6
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_notifyAll 7
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_wait 8
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_wait_long 9
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_wait_long_int 10
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_startDelay_float_R_mindustry_entities_Effect 11
typedef jobject (*func_mindustry_content_UnitTypes$33$2$1$1_startDelay_float_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_init 12
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_followParent_boolean_R_mindustry_entities_Effect 13
typedef jobject (*func_mindustry_content_UnitTypes$33$2$1$1_followParent_boolean_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_rotWithParent_boolean_R_mindustry_entities_Effect 14
typedef jobject (*func_mindustry_content_UnitTypes$33$2$1$1_rotWithParent_boolean_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_layer_float_R_mindustry_entities_Effect 15
typedef jobject (*func_mindustry_content_UnitTypes$33$2$1$1_layer_float_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_baseRotation_float_R_mindustry_entities_Effect 16
typedef jobject (*func_mindustry_content_UnitTypes$33$2$1$1_baseRotation_float_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_layer_float_float_R_mindustry_entities_Effect 17
typedef jobject (*func_mindustry_content_UnitTypes$33$2$1$1_layer_float_float_R_mindustry_entities_Effect)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_wrap_arc_graphics_Color_R_mindustry_entities_effect_WrapEffect 18
typedef jobject (*func_mindustry_content_UnitTypes$33$2$1$1_wrap_arc_graphics_Color_R_mindustry_entities_effect_WrapEffect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_wrap_arc_graphics_Color_float_R_mindustry_entities_effect_WrapEffect 19
typedef jobject (*func_mindustry_content_UnitTypes$33$2$1$1_wrap_arc_graphics_Color_float_R_mindustry_entities_effect_WrapEffect)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_at_arc_math_geom_Position 20
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_at_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_at_arc_math_geom_Position_boolean 21
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_at_arc_math_geom_Position_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_at_arc_math_geom_Position_float 22
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_at_arc_math_geom_Position_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_at_float_float 23
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_at_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_at_float_float_float 24
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_at_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_at_float_float_float_arc_graphics_Color 25
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_at_float_float_float_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_at_float_float_arc_graphics_Color 26
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_at_float_float_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_at_float_float_float_arc_graphics_Color_java_lang_Object 27
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_at_float_float_float_arc_graphics_Color_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_at_float_float_float_java_lang_Object 28
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_at_float_float_float_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_shouldCreate_R_boolean 29
typedef jbool (*func_mindustry_content_UnitTypes$33$2$1$1_shouldCreate_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_create_float_float_float_arc_graphics_Color_java_lang_Object 30
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_create_float_float_float_arc_graphics_Color_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_add_float_float_float_arc_graphics_Color_java_lang_Object 31
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_add_float_float_float_arc_graphics_Color_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float 32
typedef jfloat (*func_mindustry_content_UnitTypes$33$2$1$1_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float)(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_render_mindustry_entities_Effect$EffectContainer 33
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_render_mindustry_entities_Effect$EffectContainer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object 34
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_lambda$create$0_float_float_float_arc_graphics_Color_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_lambda$new$0_mindustry_entities_Effect$EffectContainer 35
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_lambda$new$0_mindustry_entities_Effect$EffectContainer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_lambda$new$3_mindustry_entities_Effect$EffectContainer_float_float 36
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_lambda$new$3_mindustry_entities_Effect$EffectContainer_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_lambda$new$2_mindustry_entities_Effect$EffectContainer_float_float 37
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_lambda$new$2_mindustry_entities_Effect$EffectContainer_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_UnitTypes$33$2$1$1_lambda$new$1_mindustry_entities_Effect$EffectContainer_mindustry_entities_Effect$EffectContainer 38
typedef void (*func_mindustry_content_UnitTypes$33$2$1$1_lambda$new$1_mindustry_entities_Effect$EffectContainer_mindustry_entities_Effect$EffectContainer)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_content_UnitTypes$33$2$1$1(jobject object, jint mark, jint depth);
void clinit_mindustry_content_UnitTypes$33$2$1$1(jcontext ctx);
void init_mindustry_content_UnitTypes$33$2$1$1_mindustry_content_UnitTypes$33$2$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
