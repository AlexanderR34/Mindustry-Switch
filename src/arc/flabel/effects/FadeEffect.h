#ifndef HEADER_arc_flabel_effects_FadeEffect
#define HEADER_arc_flabel_effects_FadeEffect

#include "Clearwing.h"
#include "arc/flabel/FEffect.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_flabel_effects_FadeEffect {
	arc_flabel_FEffect parent;
	jref F_color1;
	jref F_color2;
	jfloat F_alpha1;
	jfloat F_alpha2;
	jfloat F_fadeDuration;
	jref F_timePassedByGlyphIndex;
} arc_flabel_effects_FadeEffect;

extern Class class_arc_flabel_effects_FadeEffect;


#define VTABLE_arc_flabel_effects_FadeEffect_hashCode_R_int 0
typedef jint (*func_arc_flabel_effects_FadeEffect_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_FadeEffect_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_flabel_effects_FadeEffect_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_effects_FadeEffect_clone_R_java_lang_Object 2
typedef jobject (*func_arc_flabel_effects_FadeEffect_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_FadeEffect_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_flabel_effects_FadeEffect_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_FadeEffect_toString_R_java_lang_String 4
typedef jobject (*func_arc_flabel_effects_FadeEffect_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_FadeEffect_finalize 5
typedef void (*func_arc_flabel_effects_FadeEffect_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_FadeEffect_notify 6
typedef void (*func_arc_flabel_effects_FadeEffect_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_FadeEffect_notifyAll 7
typedef void (*func_arc_flabel_effects_FadeEffect_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_FadeEffect_wait 8
typedef void (*func_arc_flabel_effects_FadeEffect_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_FadeEffect_wait_long 9
typedef void (*func_arc_flabel_effects_FadeEffect_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_flabel_effects_FadeEffect_wait_long_int 10
typedef void (*func_arc_flabel_effects_FadeEffect_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_flabel_effects_FadeEffect_applyParams_Array1_java_lang_String 11
typedef void (*func_arc_flabel_effects_FadeEffect_applyParams_Array1_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_effects_FadeEffect_update_float 12
typedef void (*func_arc_flabel_effects_FadeEffect_update_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_flabel_effects_FadeEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float 13
typedef void (*func_arc_flabel_effects_FadeEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3);
#define VTABLE_arc_flabel_effects_FadeEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float 14
typedef void (*func_arc_flabel_effects_FadeEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3);
#define VTABLE_arc_flabel_effects_FadeEffect_isFinished_R_boolean 15
typedef jbool (*func_arc_flabel_effects_FadeEffect_isFinished_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_FadeEffect_calculateFadeout_R_float 16
typedef jfloat (*func_arc_flabel_effects_FadeEffect_calculateFadeout_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_effects_FadeEffect_calculateProgress_float_R_float 17
typedef jfloat (*func_arc_flabel_effects_FadeEffect_calculateProgress_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_flabel_effects_FadeEffect_calculateProgress_float_float_R_float 18
typedef jfloat (*func_arc_flabel_effects_FadeEffect_calculateProgress_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_flabel_effects_FadeEffect_calculateProgress_float_float_boolean_R_float 19
typedef jfloat (*func_arc_flabel_effects_FadeEffect_calculateProgress_float_float_boolean_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_arc_flabel_effects_FadeEffect_getLineHeight_arc_flabel_FLabel_R_float 20
typedef jfloat (*func_arc_flabel_effects_FadeEffect_getLineHeight_arc_flabel_FLabel_R_float)(jcontext ctx, jobject self, jobject param0);

void mark_arc_flabel_effects_FadeEffect(jobject object, jint mark, jint depth);
void clinit_arc_flabel_effects_FadeEffect(jcontext ctx);
void init_arc_flabel_effects_FadeEffect(jcontext ctx, jobject self);
void M_arc_flabel_effects_FadeEffect_applyParams_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_flabel_effects_FadeEffect_onApply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3);

#ifdef __cplusplus
}
#endif

#endif
