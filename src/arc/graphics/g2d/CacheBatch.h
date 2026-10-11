#ifndef HEADER_arc_graphics_g2d_CacheBatch
#define HEADER_arc_graphics_g2d_CacheBatch

#include "Clearwing.h"
#include "arc/graphics/g2d/Batch.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_CacheBatch {
	arc_graphics_g2d_Batch parent;
	jref F_cache;
	jref F_tmpVertices;
} arc_graphics_g2d_CacheBatch;

extern Class class_arc_graphics_g2d_CacheBatch;


#define VTABLE_arc_graphics_g2d_CacheBatch_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_CacheBatch_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_CacheBatch_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_CacheBatch_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_CacheBatch_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_CacheBatch_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_CacheBatch_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_finalize 5
typedef void (*func_arc_graphics_g2d_CacheBatch_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_notify 6
typedef void (*func_arc_graphics_g2d_CacheBatch_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_notifyAll 7
typedef void (*func_arc_graphics_g2d_CacheBatch_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_wait 8
typedef void (*func_arc_graphics_g2d_CacheBatch_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_wait_long 9
typedef void (*func_arc_graphics_g2d_CacheBatch_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_CacheBatch_wait_long_int 10
typedef void (*func_arc_graphics_g2d_CacheBatch_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_CacheBatch_dispose 11
typedef void (*func_arc_graphics_g2d_CacheBatch_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_g2d_CacheBatch_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_z_float 13
typedef void (*func_arc_graphics_g2d_CacheBatch_z_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_CacheBatch_setSort_boolean 14
typedef void (*func_arc_graphics_g2d_CacheBatch_setSort_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_graphics_g2d_CacheBatch_setPackedColor_float 15
typedef void (*func_arc_graphics_g2d_CacheBatch_setPackedColor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_CacheBatch_getPackedColor_R_float 16
typedef jfloat (*func_arc_graphics_g2d_CacheBatch_getPackedColor_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_setPackedMixColor_float 17
typedef void (*func_arc_graphics_g2d_CacheBatch_setPackedMixColor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_CacheBatch_getPackedMixColor_R_float 18
typedef jfloat (*func_arc_graphics_g2d_CacheBatch_getPackedMixColor_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_draw_arc_graphics_Texture_Array1_float_int_int 19
typedef void (*func_arc_graphics_g2d_CacheBatch_draw_arc_graphics_Texture_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_g2d_CacheBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float 20
typedef void (*func_arc_graphics_g2d_CacheBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
#define VTABLE_arc_graphics_g2d_CacheBatch_draw_java_lang_Runnable 21
typedef void (*func_arc_graphics_g2d_CacheBatch_draw_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_CacheBatch_flush 22
typedef void (*func_arc_graphics_g2d_CacheBatch_flush)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_discard 23
typedef void (*func_arc_graphics_g2d_CacheBatch_discard)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_setBlending_arc_graphics_Blending 24
typedef void (*func_arc_graphics_g2d_CacheBatch_setBlending_arc_graphics_Blending)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_CacheBatch_getBlending_R_arc_graphics_Blending 25
typedef jobject (*func_arc_graphics_g2d_CacheBatch_getBlending_R_arc_graphics_Blending)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_getProjection_R_arc_math_Mat 26
typedef jobject (*func_arc_graphics_g2d_CacheBatch_getProjection_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_getTransform_R_arc_math_Mat 27
typedef jobject (*func_arc_graphics_g2d_CacheBatch_getTransform_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_setProjection_arc_math_Mat 28
typedef void (*func_arc_graphics_g2d_CacheBatch_setProjection_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_CacheBatch_setTransform_arc_math_Mat 29
typedef void (*func_arc_graphics_g2d_CacheBatch_setTransform_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_CacheBatch_setupMatrices 30
typedef void (*func_arc_graphics_g2d_CacheBatch_setupMatrices)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_switchTexture_arc_graphics_Texture 31
typedef void (*func_arc_graphics_g2d_CacheBatch_switchTexture_arc_graphics_Texture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_CacheBatch_setShader_arc_graphics_gl_Shader 32
typedef void (*func_arc_graphics_g2d_CacheBatch_setShader_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_CacheBatch_setShader_arc_graphics_gl_Shader_boolean 33
typedef void (*func_arc_graphics_g2d_CacheBatch_setShader_arc_graphics_gl_Shader_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_graphics_g2d_CacheBatch_getShader_R_arc_graphics_gl_Shader 34
typedef jobject (*func_arc_graphics_g2d_CacheBatch_getShader_R_arc_graphics_gl_Shader)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_beginCache 35
typedef void (*func_arc_graphics_g2d_CacheBatch_beginCache)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_endCache_R_int 36
typedef jint (*func_arc_graphics_g2d_CacheBatch_endCache_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_beginDraw 37
typedef void (*func_arc_graphics_g2d_CacheBatch_beginDraw)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_endDraw 38
typedef void (*func_arc_graphics_g2d_CacheBatch_endDraw)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_CacheBatch_drawCache_int 39
typedef void (*func_arc_graphics_g2d_CacheBatch_drawCache_int)(jcontext ctx, jobject self, jint param0);

void mark_arc_graphics_g2d_CacheBatch(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_CacheBatch(jcontext ctx);
void init_arc_graphics_g2d_CacheBatch_int(jcontext ctx, jobject self, jint param0);
void init_arc_graphics_g2d_CacheBatch_arc_graphics_g2d_SpriteCache(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_CacheBatch_flush(jcontext ctx, jobject self);
void M_arc_graphics_g2d_CacheBatch_setPackedColor_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_graphics_g2d_CacheBatch_getPackedColor_R_float(jcontext ctx, jobject self);
void M_arc_graphics_g2d_CacheBatch_setProjection_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_CacheBatch_beginCache(jcontext ctx, jobject self);
jint M_arc_graphics_g2d_CacheBatch_endCache_R_int(jcontext ctx, jobject self);
void M_arc_graphics_g2d_CacheBatch_draw_arc_graphics_Texture_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_g2d_CacheBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
void M_arc_graphics_g2d_CacheBatch_setShader_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_CacheBatch_setShader_arc_graphics_gl_Shader_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_graphics_g2d_CacheBatch_dispose(jcontext ctx, jobject self);
void M_arc_graphics_g2d_CacheBatch_beginDraw(jcontext ctx, jobject self);
void M_arc_graphics_g2d_CacheBatch_endDraw(jcontext ctx, jobject self);
void M_arc_graphics_g2d_CacheBatch_drawCache_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
