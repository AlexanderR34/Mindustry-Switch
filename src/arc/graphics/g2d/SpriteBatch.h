#ifndef HEADER_arc_graphics_g2d_SpriteBatch
#define HEADER_arc_graphics_g2d_SpriteBatch

#include "Clearwing.h"
#include "arc/graphics/g2d/Batch.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_SpriteBatch {
	arc_graphics_g2d_Batch parent;
	jbool F_multithreaded;
	jref F_mesh;
	jref F_buffer;
	jref F_tmpVertices;
	jref F_requestVerts;
	jint F_requestVertOffset;
	jbool F_sort;
	jbool F_flushing;
	jref F_requests;
	jref F_copy;
	jref F_requestZ;
	jint F_numRequests;
	jref F_contiguous;
	jref F_contiguousCopy;
	jint F_intZ;
} arc_graphics_g2d_SpriteBatch;

extern Class class_arc_graphics_g2d_SpriteBatch;

extern jint SF_arc_graphics_g2d_SpriteBatch_VERTEX_SIZE;
extern jint SF_arc_graphics_g2d_SpriteBatch_SPRITE_SIZE;
extern jint SF_arc_graphics_g2d_SpriteBatch_initialSize;
extern jobject SF_arc_graphics_g2d_SpriteBatch_emptyVertices;
extern jlong SF_arc_graphics_g2d_SpriteBatch_totalDrawCalls;
extern jobject SF_arc_graphics_g2d_SpriteBatch_commonPool;

#define VTABLE_arc_graphics_g2d_SpriteBatch_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_SpriteBatch_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_SpriteBatch_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_SpriteBatch_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_SpriteBatch_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_SpriteBatch_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_finalize 5
typedef void (*func_arc_graphics_g2d_SpriteBatch_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_notify 6
typedef void (*func_arc_graphics_g2d_SpriteBatch_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_notifyAll 7
typedef void (*func_arc_graphics_g2d_SpriteBatch_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_wait 8
typedef void (*func_arc_graphics_g2d_SpriteBatch_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_wait_long 9
typedef void (*func_arc_graphics_g2d_SpriteBatch_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch_wait_long_int 10
typedef void (*func_arc_graphics_g2d_SpriteBatch_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_SpriteBatch_dispose 11
typedef void (*func_arc_graphics_g2d_SpriteBatch_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_g2d_SpriteBatch_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_z_float 13
typedef void (*func_arc_graphics_g2d_SpriteBatch_z_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch_setSort_boolean 14
typedef void (*func_arc_graphics_g2d_SpriteBatch_setSort_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch_setPackedColor_float 15
typedef void (*func_arc_graphics_g2d_SpriteBatch_setPackedColor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch_getPackedColor_R_float 16
typedef jfloat (*func_arc_graphics_g2d_SpriteBatch_getPackedColor_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_setPackedMixColor_float 17
typedef void (*func_arc_graphics_g2d_SpriteBatch_setPackedMixColor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch_getPackedMixColor_R_float 18
typedef jfloat (*func_arc_graphics_g2d_SpriteBatch_getPackedMixColor_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_draw_arc_graphics_Texture_Array1_float_int_int 19
typedef void (*func_arc_graphics_g2d_SpriteBatch_draw_arc_graphics_Texture_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_g2d_SpriteBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float 20
typedef void (*func_arc_graphics_g2d_SpriteBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
#define VTABLE_arc_graphics_g2d_SpriteBatch_draw_java_lang_Runnable 21
typedef void (*func_arc_graphics_g2d_SpriteBatch_draw_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch_flush 22
typedef void (*func_arc_graphics_g2d_SpriteBatch_flush)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_discard 23
typedef void (*func_arc_graphics_g2d_SpriteBatch_discard)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_setBlending_arc_graphics_Blending 24
typedef void (*func_arc_graphics_g2d_SpriteBatch_setBlending_arc_graphics_Blending)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch_getBlending_R_arc_graphics_Blending 25
typedef jobject (*func_arc_graphics_g2d_SpriteBatch_getBlending_R_arc_graphics_Blending)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_getProjection_R_arc_math_Mat 26
typedef jobject (*func_arc_graphics_g2d_SpriteBatch_getProjection_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_getTransform_R_arc_math_Mat 27
typedef jobject (*func_arc_graphics_g2d_SpriteBatch_getTransform_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_setProjection_arc_math_Mat 28
typedef void (*func_arc_graphics_g2d_SpriteBatch_setProjection_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch_setTransform_arc_math_Mat 29
typedef void (*func_arc_graphics_g2d_SpriteBatch_setTransform_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch_setupMatrices 30
typedef void (*func_arc_graphics_g2d_SpriteBatch_setupMatrices)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_switchTexture_arc_graphics_Texture 31
typedef void (*func_arc_graphics_g2d_SpriteBatch_switchTexture_arc_graphics_Texture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch_setShader_arc_graphics_gl_Shader 32
typedef void (*func_arc_graphics_g2d_SpriteBatch_setShader_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch_setShader_arc_graphics_gl_Shader_boolean 33
typedef void (*func_arc_graphics_g2d_SpriteBatch_setShader_arc_graphics_gl_Shader_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_graphics_g2d_SpriteBatch_getShader_R_arc_graphics_gl_Shader 34
typedef jobject (*func_arc_graphics_g2d_SpriteBatch_getShader_R_arc_graphics_gl_Shader)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_prepare_int 35
typedef void (*func_arc_graphics_g2d_SpriteBatch_prepare_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_g2d_SpriteBatch_expandRequests 36
typedef void (*func_arc_graphics_g2d_SpriteBatch_expandRequests)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_flushRequests 37
typedef void (*func_arc_graphics_g2d_SpriteBatch_flushRequests)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_Texture_Array1_float_int_int 38
typedef void (*func_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_Texture_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float 39
typedef void (*func_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
#define VTABLE_arc_graphics_g2d_SpriteBatch_constructVertices_Array1_float_int_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float 40
typedef void (*func_arc_graphics_g2d_SpriteBatch_constructVertices_Array1_float_int_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9);
#define VTABLE_arc_graphics_g2d_SpriteBatch_sortRequests 41
typedef void (*func_arc_graphics_g2d_SpriteBatch_sortRequests)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_sortRequestsThreaded 42
typedef void (*func_arc_graphics_g2d_SpriteBatch_sortRequestsThreaded)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteBatch_sortRequestsStandard 43
typedef void (*func_arc_graphics_g2d_SpriteBatch_sortRequestsStandard)(jcontext ctx, jobject self);

void mark_arc_graphics_g2d_SpriteBatch(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_SpriteBatch(jcontext ctx);
void init_arc_graphics_g2d_SpriteBatch(jcontext ctx, jobject self);
void init_arc_graphics_g2d_SpriteBatch_int(jcontext ctx, jobject self, jint param0);
void init_arc_graphics_g2d_SpriteBatch_int_arc_graphics_gl_Shader(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_graphics_g2d_SpriteBatch_dispose(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteBatch_setSort_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_graphics_g2d_SpriteBatch_setShader_arc_graphics_gl_Shader_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_graphics_g2d_SpriteBatch_setBlending_arc_graphics_Blending(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_SpriteBatch_z_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_graphics_g2d_SpriteBatch_discard(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteBatch_draw_arc_graphics_Texture_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_g2d_SpriteBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
void M_arc_graphics_g2d_SpriteBatch_draw_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_SpriteBatch_prepare_int(jcontext ctx, jobject self, jint param0);
void M_arc_graphics_g2d_SpriteBatch_expandRequests(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteBatch_flush(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteBatch_flushRequests(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_Texture_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_g2d_SpriteBatch_drawSuper_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
void M_arc_graphics_g2d_SpriteBatch_constructVertices_Array1_float_int_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9);
jobject SM_arc_graphics_g2d_SpriteBatch_createShader_R_arc_graphics_gl_Shader(jcontext ctx);
void M_arc_graphics_g2d_SpriteBatch_sortRequests(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteBatch_sortRequestsThreaded(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteBatch_sortRequestsStandard(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
