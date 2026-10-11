#ifndef HEADER_arc_graphics_g2d_SpriteCache
#define HEADER_arc_graphics_g2d_SpriteCache

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_SpriteCache {
	java_lang_Object parent;
	jref F_mesh;
	jref F_transformMatrix;
	jref F_projectionMatrix;
	jref F_combinedMatrix;
	jref F_shader;
	jref F_textures;
	jref F_counts;
	jint F_renderCalls;
	jint F_totalRenderCalls;
	jbool F_drawing;
	jref F_caches;
	jref F_currentCache;
	jfloat F_colorPacked;
	jref F_customShader;
} arc_graphics_g2d_SpriteCache;

extern Class class_arc_graphics_g2d_SpriteCache;

extern jint SF_arc_graphics_g2d_SpriteCache_vertexSize;
extern jobject SF_arc_graphics_g2d_SpriteCache_tempVertices;
extern jobject SF_arc_graphics_g2d_SpriteCache_defaultShader;

#define VTABLE_arc_graphics_g2d_SpriteCache_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_SpriteCache_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_SpriteCache_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_SpriteCache_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_SpriteCache_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_SpriteCache_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_SpriteCache_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_finalize 5
typedef void (*func_arc_graphics_g2d_SpriteCache_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_notify 6
typedef void (*func_arc_graphics_g2d_SpriteCache_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_notifyAll 7
typedef void (*func_arc_graphics_g2d_SpriteCache_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_wait 8
typedef void (*func_arc_graphics_g2d_SpriteCache_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_wait_long 9
typedef void (*func_arc_graphics_g2d_SpriteCache_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_SpriteCache_wait_long_int 10
typedef void (*func_arc_graphics_g2d_SpriteCache_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_SpriteCache_dispose 11
typedef void (*func_arc_graphics_g2d_SpriteCache_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_g2d_SpriteCache_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_getCaches_R_arc_struct_Seq 13
typedef jobject (*func_arc_graphics_g2d_SpriteCache_getCaches_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_setColor_float_float_float_float 14
typedef void (*func_arc_graphics_g2d_SpriteCache_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_g2d_SpriteCache_setColor_arc_graphics_Color 15
typedef void (*func_arc_graphics_g2d_SpriteCache_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_SpriteCache_getPackedColor_R_float 16
typedef jfloat (*func_arc_graphics_g2d_SpriteCache_getPackedColor_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_setPackedColor_float 17
typedef void (*func_arc_graphics_g2d_SpriteCache_setPackedColor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_SpriteCache_beginCache 18
typedef void (*func_arc_graphics_g2d_SpriteCache_beginCache)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_beginCache_int 19
typedef void (*func_arc_graphics_g2d_SpriteCache_beginCache_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_g2d_SpriteCache_endCache_R_int 20
typedef jint (*func_arc_graphics_g2d_SpriteCache_endCache_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_clear 21
typedef void (*func_arc_graphics_g2d_SpriteCache_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_reserve_int_R_int 22
typedef jint (*func_arc_graphics_g2d_SpriteCache_reserve_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_g2d_SpriteCache_getSpritesUsed_R_int 23
typedef jint (*func_arc_graphics_g2d_SpriteCache_getSpritesUsed_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_getSpriteCapacity_R_int 24
typedef jint (*func_arc_graphics_g2d_SpriteCache_getSpriteCapacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int 25
typedef void (*func_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float 26
typedef void (*func_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float 27
typedef void (*func_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float 28
typedef void (*func_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9);
#define VTABLE_arc_graphics_g2d_SpriteCache_begin 29
typedef void (*func_arc_graphics_g2d_SpriteCache_begin)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_begin_boolean 30
typedef void (*func_arc_graphics_g2d_SpriteCache_begin_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_graphics_g2d_SpriteCache_end 31
typedef void (*func_arc_graphics_g2d_SpriteCache_end)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_draw_int 32
typedef void (*func_arc_graphics_g2d_SpriteCache_draw_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_g2d_SpriteCache_draw_int_int_int 33
typedef void (*func_arc_graphics_g2d_SpriteCache_draw_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_graphics_g2d_SpriteCache_getProjectionMatrix_R_arc_math_Mat 34
typedef jobject (*func_arc_graphics_g2d_SpriteCache_getProjectionMatrix_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_setProjectionMatrix_arc_math_Mat 35
typedef void (*func_arc_graphics_g2d_SpriteCache_setProjectionMatrix_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_SpriteCache_getTransformMatrix_R_arc_math_Mat 36
typedef jobject (*func_arc_graphics_g2d_SpriteCache_getTransformMatrix_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_SpriteCache_setTransformMatrix_arc_math_Mat 37
typedef void (*func_arc_graphics_g2d_SpriteCache_setTransformMatrix_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_SpriteCache_setShader_arc_graphics_gl_Shader 38
typedef void (*func_arc_graphics_g2d_SpriteCache_setShader_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_SpriteCache_isDrawing_R_boolean 39
typedef jbool (*func_arc_graphics_g2d_SpriteCache_isDrawing_R_boolean)(jcontext ctx, jobject self);

void mark_arc_graphics_g2d_SpriteCache(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_SpriteCache(jcontext ctx);
void init_arc_graphics_g2d_SpriteCache(jcontext ctx, jobject self);
void init_arc_graphics_g2d_SpriteCache_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
void init_arc_graphics_g2d_SpriteCache_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
void init_arc_graphics_g2d_SpriteCache_int_int_arc_graphics_gl_Shader_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jbool param3);
jobject SM_arc_graphics_g2d_SpriteCache_getDefaultShader_R_arc_graphics_gl_Shader(jcontext ctx);
jobject M_arc_graphics_g2d_SpriteCache_getCaches_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteCache_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_graphics_g2d_SpriteCache_setColor_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_graphics_g2d_SpriteCache_getPackedColor_R_float(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteCache_setPackedColor_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_graphics_g2d_SpriteCache_beginCache(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteCache_beginCache_int(jcontext ctx, jobject self, jint param0);
jint M_arc_graphics_g2d_SpriteCache_endCache_R_int(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteCache_clear(jcontext ctx, jobject self);
jint M_arc_graphics_g2d_SpriteCache_reserve_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_arc_graphics_g2d_SpriteCache_getSpritesUsed_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_g2d_SpriteCache_getSpriteCapacity_R_int(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteCache_add_arc_graphics_Texture_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void M_arc_graphics_g2d_SpriteCache_add_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9);
void M_arc_graphics_g2d_SpriteCache_begin(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteCache_begin_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_graphics_g2d_SpriteCache_end(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteCache_draw_int(jcontext ctx, jobject self, jint param0);
void M_arc_graphics_g2d_SpriteCache_draw_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_graphics_g2d_SpriteCache_dispose(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_SpriteCache_getProjectionMatrix_R_arc_math_Mat(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteCache_setProjectionMatrix_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_g2d_SpriteCache_getTransformMatrix_R_arc_math_Mat(jcontext ctx, jobject self);
void M_arc_graphics_g2d_SpriteCache_setTransformMatrix_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_SpriteCache_setShader_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0);
jbool M_arc_graphics_g2d_SpriteCache_isDrawing_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
