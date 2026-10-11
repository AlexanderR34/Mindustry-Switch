#ifndef HEADER_arc_flabel_effects_EaseEffect
#define HEADER_arc_flabel_effects_EaseEffect

#include "Clearwing.h"
#include "arc/flabel/FEffect.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_flabel_effects_EaseEffect {
	arc_flabel_FEffect parent;
	jfloat F_distance;
	jfloat F_intensity;
	jbool F_elastic;
	jref F_timePassedByGlyphIndex;
} arc_flabel_effects_EaseEffect;

extern Class class_arc_flabel_effects_EaseEffect;

extern jfloat SF_arc_flabel_effects_EaseEffect_defaultDistance;
extern jfloat SF_arc_flabel_effects_EaseEffect_defaultIntensity;

#define VTABLE_arc_flabel_effects_EaseEffect_hashCode_R_int 0
typedef jint (*func_arc_flabel_effects_EaseEffect_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_EaseEffect_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_flabel_effects_EaseEffect_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_effects_EaseEffect_clone_R_java_lang_Object 2
typedef jobject (*func_arc_flabel_effects_EaseEffect_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_EaseEffect_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_flabel_effects_EaseEffect_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_EaseEffect_toString_R_java_lang_String 4
typedef jobject (*func_arc_flabel_effects_EaseEffect_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_EaseEffect_finalize 5
typedef void (*func_arc_flabel_effects_EaseEffect_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_EaseEffect_notify 6
typedef void (*func_arc_flabel_effects_EaseEffect_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_EaseEffect_notifyAll 7
typedef void (*func_arc_flabel_effects_EaseEffect_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_EaseEffect_wait 8
typedef void (*func_arc_flabel_effects_EaseEffect_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_EaseEffect_wait_long 9
typedef void (*func_arc_flabel_effects_EaseEffect_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_flabel_effects_EaseEffect_wait_long_int 10
typedef void (*func_arc_flabel_effects_EaseEffect_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_flabel_effects_EaseEffect_applyParams_Array1_java_lang_String 11
typedef void (*func_arc_flabel_effects_EaseEffect_applyParams_Array1_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_effects_EaseEffect_update_float 12
typedef void (*func_arc_flabel_effects_EaseEffect_update_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_flabel_effects_EaseEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float 13
typedef void (*func_arc_flabel_effects_EaseEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3);
#define VTABLE_arc_flabel_effects_EaseEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float 14
typedef void (*func_arc_flabel_effects_EaseEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3);
#define VTABLE_arc_flabel_effects_EaseEffect_isFinished_R_boolean 15
typedef jbool (*func_arc_flabel_effects_EaseEffect_isFinished_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_EaseEffect_calculateFadeout_R_float 16
typedef jfloat (*func_arc_flabel_effects_EaseEffect_calculateFadeout_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_EaseEffect_calculateProgress_float_R_float 17
typedef jfloat (*func_arc_flabel_effects_EaseEffect_calculateProgress_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_flabel_effects_EaseEffect_calculateProgress_float_float_R_float 18
typedef jfloat (*func_arc_flabel_effects_EaseEffect_calculateProgress_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_flabel_effects_EaseEffect_calculateProgress_float_float_boolean_R_float 19
typedef jfloat (*func_arc_flabel_effects_EaseEffect_calculateProgress_float_float_boolean_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_arc_flabel_effects_EaseEffect_getLineHeight_arc_flabel_FLabel_R_float 20
typedef jfloat (*func_arc_flabel_effects_EaseEffect_getLineHeight_arc_flabel_FLabel_R_float)(jcontext ctx, jobject self, jobject param0);

void mark_arc_flabel_effects_EaseEffect(jobject object, jint mark, jint depth);
void clinit_arc_flabel_effects_EaseEffect(jcontext ctx);
void init_arc_flabel_effects_EaseEffect(jcontext ctx, jobject self);
void M_arc_flabel_effects_EaseEffect_applyParams_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_flabel_effects_EaseEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3);

#ifdef __cplusplus
}
#endif

#endif
