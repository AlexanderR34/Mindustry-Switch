#ifndef HEADER_arc_graphics_g3d_PlaneBatch3D
#define HEADER_arc_graphics_g3d_PlaneBatch3D

#include "Clearwing.h"
#include "arc/graphics/g2d/Batch.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g3d_PlaneBatch3D {
	arc_graphics_g2d_Batch parent;
	jref F_up;
	jref F_right;
	jref F_origin;
	jref F_vec;
	jref F_batch;
	jref F_vertex;
	jfloat F_scaling;
} arc_graphics_g3d_PlaneBatch3D;

extern Class class_arc_graphics_g3d_PlaneBatch3D;


#define VTABLE_arc_graphics_g3d_PlaneBatch3D_hashCode_R_int 0
typedef jint (*func_arc_graphics_g3d_PlaneBatch3D_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g3d_PlaneBatch3D_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g3d_PlaneBatch3D_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g3d_PlaneBatch3D_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g3d_PlaneBatch3D_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_finalize 5
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_notify 6
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_notifyAll 7
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_wait 8
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_wait_long 9
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_wait_long_int 10
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_dispose 11
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_g3d_PlaneBatch3D_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_z_float 13
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_z_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_setSort_boolean 14
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_setSort_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_setPackedColor_float 15
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_setPackedColor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_getPackedColor_R_float 16
typedef jfloat (*func_arc_graphics_g3d_PlaneBatch3D_getPackedColor_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_setPackedMixColor_float 17
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_setPackedMixColor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_getPackedMixColor_R_float 18
typedef jfloat (*func_arc_graphics_g3d_PlaneBatch3D_getPackedMixColor_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_draw_arc_graphics_Texture_Array1_float_int_int 19
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_draw_arc_graphics_Texture_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float 20
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_draw_java_lang_Runnable 21
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_draw_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_flush 22
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_flush)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_discard 23
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_discard)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_setBlending_arc_graphics_Blending 24
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_setBlending_arc_graphics_Blending)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_getBlending_R_arc_graphics_Blending 25
typedef jobject (*func_arc_graphics_g3d_PlaneBatch3D_getBlending_R_arc_graphics_Blending)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_getProjection_R_arc_math_Mat 26
typedef jobject (*func_arc_graphics_g3d_PlaneBatch3D_getProjection_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_getTransform_R_arc_math_Mat 27
typedef jobject (*func_arc_graphics_g3d_PlaneBatch3D_getTransform_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_setProjection_arc_math_Mat 28
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_setProjection_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_setTransform_arc_math_Mat 29
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_setTransform_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_setupMatrices 30
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_setupMatrices)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_switchTexture_arc_graphics_Texture 31
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_switchTexture_arc_graphics_Texture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_setShader_arc_graphics_gl_Shader 32
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_setShader_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_setShader_arc_graphics_gl_Shader_boolean 33
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_setShader_arc_graphics_gl_Shader_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_getShader_R_arc_graphics_gl_Shader 34
typedef jobject (*func_arc_graphics_g3d_PlaneBatch3D_getShader_R_arc_graphics_gl_Shader)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_setScaling_float 35
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_setScaling_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_setPlane_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3 36
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_setPlane_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_proj_arc_math_geom_Mat3D 37
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_proj_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_checkFlush 38
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_checkFlush)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float 39
typedef void (*func_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);

void mark_arc_graphics_g3d_PlaneBatch3D(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g3d_PlaneBatch3D(jcontext ctx);
void init_arc_graphics_g3d_PlaneBatch3D(jcontext ctx, jobject self);
void init_arc_graphics_g3d_PlaneBatch3D_int(jcontext ctx, jobject self, jint param0);
void M_arc_graphics_g3d_PlaneBatch3D_setScaling_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_graphics_g3d_PlaneBatch3D_setPlane_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_arc_graphics_g3d_PlaneBatch3D_proj_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g3d_PlaneBatch3D_flush(jcontext ctx, jobject self);
void M_arc_graphics_g3d_PlaneBatch3D_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
void M_arc_graphics_g3d_PlaneBatch3D_draw_arc_graphics_Texture_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_g3d_PlaneBatch3D_checkFlush(jcontext ctx, jobject self);
void M_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);

#ifdef __cplusplus
}
#endif

#endif
