#ifndef HEADER_mindustry_ui_dialogs_EffectsDialog$BoundsBatch
#define HEADER_mindustry_ui_dialogs_EffectsDialog$BoundsBatch

#include "Clearwing.h"
#include "arc/graphics/g2d/Batch.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_dialogs_EffectsDialog$BoundsBatch {
	arc_graphics_g2d_Batch parent;
	jfloat F_max;
} mindustry_ui_dialogs_EffectsDialog$BoundsBatch;

extern Class class_mindustry_ui_dialogs_EffectsDialog$BoundsBatch;


#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_hashCode_R_int 0
typedef jint (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_finalize 5
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_notify 6
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_notifyAll 7
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_wait 8
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_wait_long 9
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_wait_long_int 10
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_dispose 11
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_z_float 13
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_z_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setSort_boolean 14
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setSort_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setPackedColor_float 15
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setPackedColor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_getPackedColor_R_float 16
typedef jfloat (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_getPackedColor_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setPackedMixColor_float 17
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setPackedMixColor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_getPackedMixColor_R_float 18
typedef jfloat (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_getPackedMixColor_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_draw_arc_graphics_Texture_Array1_float_int_int 19
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_draw_arc_graphics_Texture_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float 20
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_draw_java_lang_Runnable 21
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_draw_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_flush 22
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_flush)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_discard 23
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_discard)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setBlending_arc_graphics_Blending 24
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setBlending_arc_graphics_Blending)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_getBlending_R_arc_graphics_Blending 25
typedef jobject (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_getBlending_R_arc_graphics_Blending)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_getProjection_R_arc_math_Mat 26
typedef jobject (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_getProjection_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_getTransform_R_arc_math_Mat 27
typedef jobject (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_getTransform_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setProjection_arc_math_Mat 28
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setProjection_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setTransform_arc_math_Mat 29
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setTransform_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setupMatrices 30
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setupMatrices)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_switchTexture_arc_graphics_Texture 31
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_switchTexture_arc_graphics_Texture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setShader_arc_graphics_gl_Shader 32
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setShader_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setShader_arc_graphics_gl_Shader_boolean 33
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_setShader_arc_graphics_gl_Shader_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_getShader_R_arc_graphics_gl_Shader 34
typedef jobject (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_getShader_R_arc_graphics_gl_Shader)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_reset 35
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_max_Array1_float 36
typedef void (*func_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_max_Array1_float)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ui_dialogs_EffectsDialog$BoundsBatch(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_dialogs_EffectsDialog$BoundsBatch(jcontext ctx);
void init_mindustry_ui_dialogs_EffectsDialog$BoundsBatch(jcontext ctx, jobject self);
void M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_reset(jcontext ctx, jobject self);
void M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_max_Array1_float(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_draw_arc_graphics_Texture_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
void M_mindustry_ui_dialogs_EffectsDialog$BoundsBatch_flush(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
