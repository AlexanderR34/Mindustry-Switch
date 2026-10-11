#ifndef HEADER_arc_graphics_g2d_Draw
#define HEADER_arc_graphics_g2d_Draw

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_Draw {
	java_lang_Object parent;
} arc_graphics_g2d_Draw;

extern Class class_arc_graphics_g2d_Draw;

extern jobject SF_arc_graphics_g2d_Draw_squad;
extern jobject SF_arc_graphics_g2d_Draw_carr;
extern jobject SF_arc_graphics_g2d_Draw_vertices;
extern jobject SF_arc_graphics_g2d_Draw_zTransformer;
extern jfloat SF_arc_graphics_g2d_Draw_actualZ;
extern jobject SF_arc_graphics_g2d_Draw_retColor;
extern jobject SF_arc_graphics_g2d_Draw_retPackedColor;
extern jfloat SF_arc_graphics_g2d_Draw_scl;
extern jfloat SF_arc_graphics_g2d_Draw_xscl;
extern jfloat SF_arc_graphics_g2d_Draw_yscl;

#define VTABLE_arc_graphics_g2d_Draw_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_Draw_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Draw_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_Draw_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Draw_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_Draw_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Draw_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_Draw_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Draw_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_Draw_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Draw_finalize 5
typedef void (*func_arc_graphics_g2d_Draw_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Draw_notify 6
typedef void (*func_arc_graphics_g2d_Draw_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Draw_notifyAll 7
typedef void (*func_arc_graphics_g2d_Draw_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Draw_wait 8
typedef void (*func_arc_graphics_g2d_Draw_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Draw_wait_long 9
typedef void (*func_arc_graphics_g2d_Draw_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_Draw_wait_long_int 10
typedef void (*func_arc_graphics_g2d_Draw_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_graphics_g2d_Draw(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_Draw(jcontext ctx);
void init_arc_graphics_g2d_Draw(jcontext ctx, jobject self);
jobject SM_arc_graphics_g2d_Draw_getQuad_R_arc_graphics_g2d_ScreenQuad(jcontext ctx);
void SM_arc_graphics_g2d_Draw_blit_arc_graphics_gl_Shader(jcontext ctx, jobject param0);
void SM_arc_graphics_g2d_Draw_blit_arc_graphics_Texture_arc_graphics_gl_Shader(jcontext ctx, jobject param0, jobject param1);
void SM_arc_graphics_g2d_Draw_blit_arc_graphics_gl_FrameBuffer_arc_graphics_gl_Shader(jcontext ctx, jobject param0, jobject param1);
void SM_arc_graphics_g2d_Draw_batch_arc_graphics_g2d_Batch(jcontext ctx, jobject param0);
void SM_arc_graphics_g2d_Draw_batch_arc_graphics_g2d_Batch_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1);
void SM_arc_graphics_g2d_Draw_stencil_java_lang_Runnable_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1);
void SM_arc_graphics_g2d_Draw_beginStencil(jcontext ctx);
void SM_arc_graphics_g2d_Draw_beginStenciled(jcontext ctx);
void SM_arc_graphics_g2d_Draw_endStencil(jcontext ctx);
void SM_arc_graphics_g2d_Draw_scl_float(jcontext ctx, jfloat param0);
void SM_arc_graphics_g2d_Draw_scl_float_float(jcontext ctx, jfloat param0, jfloat param1);
void SM_arc_graphics_g2d_Draw_scl(jcontext ctx);
jobject SM_arc_graphics_g2d_Draw_getShader_R_arc_graphics_gl_Shader(jcontext ctx);
void SM_arc_graphics_g2d_Draw_shader_arc_graphics_gl_Shader(jcontext ctx, jobject param0);
void SM_arc_graphics_g2d_Draw_shader_arc_graphics_gl_Shader_boolean(jcontext ctx, jobject param0, jbool param1);
void SM_arc_graphics_g2d_Draw_shader(jcontext ctx);
void SM_arc_graphics_g2d_Draw_sort_boolean(jcontext ctx, jbool param0);
void SM_arc_graphics_g2d_Draw_zTransform_arc_func_FloatFloatf(jcontext ctx, jobject param0);
void SM_arc_graphics_g2d_Draw_zTransform(jcontext ctx);
jfloat SM_arc_graphics_g2d_Draw_z_R_float(jcontext ctx);
void SM_arc_graphics_g2d_Draw_z_float(jcontext ctx, jfloat param0);
jfloat SM_arc_graphics_g2d_Draw_getColorAlpha_R_float(jcontext ctx);
jfloat SM_arc_graphics_g2d_Draw_getColorPacked_R_float(jcontext ctx);
jfloat SM_arc_graphics_g2d_Draw_getMixColorPacked_R_float(jcontext ctx);
jobject SM_arc_graphics_g2d_Draw_getColor_R_arc_graphics_Color(jcontext ctx);
jobject SM_arc_graphics_g2d_Draw_getMixColor_R_arc_graphics_Color(jcontext ctx);
void SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(jcontext ctx, jobject param0, jfloat param1);
void SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_arc_graphics_Color_float(jcontext ctx, jobject param0, jobject param1, jfloat param2);
void SM_arc_graphics_g2d_Draw_mixcol(jcontext ctx);
void SM_arc_graphics_g2d_Draw_mixcol_float(jcontext ctx, jfloat param0);
void SM_arc_graphics_g2d_Draw_tint_arc_graphics_Color_arc_graphics_Color_float(jcontext ctx, jobject param0, jobject param1, jfloat param2);
void SM_arc_graphics_g2d_Draw_tint_arc_graphics_Color(jcontext ctx, jobject param0);
void SM_arc_graphics_g2d_Draw_colorMul_arc_graphics_Color_float(jcontext ctx, jobject param0, jfloat param1);
void SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(jcontext ctx, jobject param0);
void SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(jcontext ctx, jobject param0, jfloat param1);
void SM_arc_graphics_g2d_Draw_color_int(jcontext ctx, jint param0);
void SM_arc_graphics_g2d_Draw_color_float(jcontext ctx, jfloat param0);
void SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_arc_graphics_Color_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3);
void SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(jcontext ctx, jobject param0, jobject param1, jfloat param2);
void SM_arc_graphics_g2d_Draw_color(jcontext ctx);
void SM_arc_graphics_g2d_Draw_color_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
void SM_arc_graphics_g2d_Draw_color_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_graphics_g2d_Draw_colorl_float(jcontext ctx, jfloat param0);
void SM_arc_graphics_g2d_Draw_colorl_float_float(jcontext ctx, jfloat param0, jfloat param1);
void SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(jcontext ctx, jobject param0);
void SM_arc_graphics_g2d_Draw_blend(jcontext ctx);
jobject SM_arc_graphics_g2d_Draw_getBlend_R_arc_graphics_Blending(jcontext ctx);
void SM_arc_graphics_g2d_Draw_reset(jcontext ctx);
void SM_arc_graphics_g2d_Draw_alpha_float(jcontext ctx, jfloat param0);
void SM_arc_graphics_g2d_Draw_fbo_arc_graphics_gl_FrameBuffer_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
void SM_arc_graphics_g2d_Draw_fbo_arc_graphics_Texture_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
void SM_arc_graphics_g2d_Draw_fbo_arc_graphics_Texture_int_int_int_float(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jfloat param4);
void SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(jcontext ctx, jfloat param0, jobject param1);
void SM_arc_graphics_g2d_Draw_drawRange_float_java_lang_Runnable_java_lang_Runnable(jcontext ctx, jfloat param0, jobject param1, jobject param2);
void SM_arc_graphics_g2d_Draw_drawRange_float_float_java_lang_Runnable_java_lang_Runnable(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jobject param3);
void SM_arc_graphics_g2d_Draw_quad_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jfloat param11, jfloat param12);
void SM_arc_graphics_g2d_Draw_rect(jcontext ctx);
void SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
void SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
void SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
void SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
void SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_arc_math_geom_Position_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3);
void SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_arc_math_geom_Position_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
void SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_arc_math_geom_Position_float(jcontext ctx, jobject param0, jobject param1, jfloat param2);
void SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_graphics_g2d_Draw_vert_arc_graphics_Texture_Array1_float_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
void SM_arc_graphics_g2d_Draw_flush(jcontext ctx);
void SM_arc_graphics_g2d_Draw_discard(jcontext ctx);
void SM_arc_graphics_g2d_Draw_proj_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_graphics_g2d_Draw_proj_arc_graphics_Camera(jcontext ctx, jobject param0);
void SM_arc_graphics_g2d_Draw_proj_arc_math_Mat(jcontext ctx, jobject param0);
jobject SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(jcontext ctx);
void SM_arc_graphics_g2d_Draw_trans_arc_math_Mat(jcontext ctx, jobject param0);
jobject SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat(jcontext ctx);
jobject SM_arc_graphics_g2d_Draw_wrap_arc_graphics_Texture_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject param0);
void SM_arc_graphics_g2d_Draw_rectv_arc_graphics_g2d_TextureRegion_float_float_float_float_arc_func_Cons(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5);
void SM_arc_graphics_g2d_Draw_rectv_arc_graphics_g2d_TextureRegion_float_float_float_float_float_arc_func_Cons(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);
void SM_arc_graphics_g2d_Draw_rectv_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_arc_func_Cons(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8);

#ifdef __cplusplus
}
#endif

#endif
