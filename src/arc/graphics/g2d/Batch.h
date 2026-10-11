#ifndef HEADER_arc_graphics_g2d_Batch
#define HEADER_arc_graphics_g2d_Batch

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_Batch {
	java_lang_Object parent;
	jfloat F_z;
	jint F_idx;
	jref F_lastTexture;
	jbool F_apply;
	jref F_transformMatrix;
	jref F_projectionMatrix;
	jref F_combinedMatrix;
	jref F_blending;
	jref F_shader;
	jref F_customShader;
	jbool F_ownsShader;
	jfloat F_colorPacked;
	jfloat F_mixColorPacked;
} arc_graphics_g2d_Batch;

extern Class class_arc_graphics_g2d_Batch;


#define VTABLE_arc_graphics_g2d_Batch_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_Batch_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_Batch_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Batch_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_Batch_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_Batch_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_Batch_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_finalize 5
typedef void (*func_arc_graphics_g2d_Batch_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_notify 6
typedef void (*func_arc_graphics_g2d_Batch_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_notifyAll 7
typedef void (*func_arc_graphics_g2d_Batch_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_wait 8
typedef void (*func_arc_graphics_g2d_Batch_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_wait_long 9
typedef void (*func_arc_graphics_g2d_Batch_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_Batch_wait_long_int 10
typedef void (*func_arc_graphics_g2d_Batch_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_Batch_dispose 11
typedef void (*func_arc_graphics_g2d_Batch_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_g2d_Batch_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_z_float 13
typedef void (*func_arc_graphics_g2d_Batch_z_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_Batch_setSort_boolean 14
typedef void (*func_arc_graphics_g2d_Batch_setSort_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_graphics_g2d_Batch_setPackedColor_float 15
typedef void (*func_arc_graphics_g2d_Batch_setPackedColor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_Batch_getPackedColor_R_float 16
typedef jfloat (*func_arc_graphics_g2d_Batch_getPackedColor_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_setPackedMixColor_float 17
typedef void (*func_arc_graphics_g2d_Batch_setPackedMixColor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_Batch_getPackedMixColor_R_float 18
typedef jfloat (*func_arc_graphics_g2d_Batch_getPackedMixColor_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_draw_arc_graphics_Texture_Array1_float_int_int 19
typedef void (*func_arc_graphics_g2d_Batch_draw_arc_graphics_Texture_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_g2d_Batch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float 20
typedef void (*func_arc_graphics_g2d_Batch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
#define VTABLE_arc_graphics_g2d_Batch_draw_java_lang_Runnable 21
typedef void (*func_arc_graphics_g2d_Batch_draw_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Batch_flush 22
typedef void (*func_arc_graphics_g2d_Batch_flush)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_discard 23
typedef void (*func_arc_graphics_g2d_Batch_discard)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_setBlending_arc_graphics_Blending 24
typedef void (*func_arc_graphics_g2d_Batch_setBlending_arc_graphics_Blending)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Batch_getBlending_R_arc_graphics_Blending 25
typedef jobject (*func_arc_graphics_g2d_Batch_getBlending_R_arc_graphics_Blending)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_getProjection_R_arc_math_Mat 26
typedef jobject (*func_arc_graphics_g2d_Batch_getProjection_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_getTransform_R_arc_math_Mat 27
typedef jobject (*func_arc_graphics_g2d_Batch_getTransform_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_setProjection_arc_math_Mat 28
typedef void (*func_arc_graphics_g2d_Batch_setProjection_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Batch_setTransform_arc_math_Mat 29
typedef void (*func_arc_graphics_g2d_Batch_setTransform_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Batch_setupMatrices 30
typedef void (*func_arc_graphics_g2d_Batch_setupMatrices)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Batch_switchTexture_arc_graphics_Texture 31
typedef void (*func_arc_graphics_g2d_Batch_switchTexture_arc_graphics_Texture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader 32
typedef void (*func_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader_boolean 33
typedef void (*func_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_graphics_g2d_Batch_getShader_R_arc_graphics_gl_Shader 34
typedef jobject (*func_arc_graphics_g2d_Batch_getShader_R_arc_graphics_gl_Shader)(jcontext ctx, jobject self);

void mark_arc_graphics_g2d_Batch(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_Batch(jcontext ctx);
void init_arc_graphics_g2d_Batch(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Batch_z_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_graphics_g2d_Batch_setSort_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_graphics_g2d_Batch_setPackedColor_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_graphics_g2d_Batch_getPackedColor_R_float(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Batch_setPackedMixColor_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_graphics_g2d_Batch_getPackedMixColor_R_float(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Batch_draw_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_Batch_discard(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Batch_setBlending_arc_graphics_Blending(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_g2d_Batch_getBlending_R_arc_graphics_Blending(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Batch_dispose(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_Batch_getProjection_R_arc_math_Mat(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_Batch_getTransform_R_arc_math_Mat(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Batch_setProjection_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_Batch_setTransform_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_Batch_setupMatrices(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Batch_switchTexture_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_graphics_g2d_Batch_getShader_R_arc_graphics_gl_Shader(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
