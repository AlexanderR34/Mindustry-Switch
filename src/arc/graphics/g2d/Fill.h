#ifndef HEADER_arc_graphics_g2d_Fill
#define HEADER_arc_graphics_g2d_Fill

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_Fill {
	java_lang_Object parent;
} arc_graphics_g2d_Fill;

extern Class class_arc_graphics_g2d_Fill;

extern jobject SF_arc_graphics_g2d_Fill_vertices;
extern jobject SF_arc_graphics_g2d_Fill_circleRegion;
extern jobject SF_arc_graphics_g2d_Fill_polyFloats;

#define VTABLE_arc_graphics_g2d_Fill_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_Fill_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Fill_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_Fill_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Fill_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_Fill_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Fill_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_Fill_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Fill_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_Fill_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Fill_finalize 5
typedef void (*func_arc_graphics_g2d_Fill_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Fill_notify 6
typedef void (*func_arc_graphics_g2d_Fill_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Fill_notifyAll 7
typedef void (*func_arc_graphics_g2d_Fill_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Fill_wait 8
typedef void (*func_arc_graphics_g2d_Fill_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Fill_wait_long 9
typedef void (*func_arc_graphics_g2d_Fill_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_Fill_wait_long_int 10
typedef void (*func_arc_graphics_g2d_Fill_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_graphics_g2d_Fill(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_Fill(jcontext ctx);
void init_arc_graphics_g2d_Fill(jcontext ctx, jobject self);
void SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
void SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jfloat param11);
void SM_arc_graphics_g2d_Fill_quad_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);
void SM_arc_graphics_g2d_Fill_quad_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jfloat param11, jfloat param12);
void SM_arc_graphics_g2d_Fill_quad_arc_graphics_Texture_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jfloat param11, jfloat param12, jfloat param13, jfloat param14, jfloat param15, jfloat param16, jfloat param17, jfloat param18, jfloat param19, jfloat param20);
void SM_arc_graphics_g2d_Fill_tri_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void SM_arc_graphics_g2d_Fill_dropShadowRect_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void SM_arc_graphics_g2d_Fill_dropShadow_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void SM_arc_graphics_g2d_Fill_light_float_float_int_float_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jobject param4, jobject param5);
void SM_arc_graphics_g2d_Fill_light_float_float_int_float_float_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jobject param5, jobject param6);
void SM_arc_graphics_g2d_Fill_lightInner_float_float_int_float_float_float_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jobject param6, jobject param7);
void SM_arc_graphics_g2d_Fill_polyBegin(jcontext ctx);
void SM_arc_graphics_g2d_Fill_polyPoint_float_float(jcontext ctx, jfloat param0, jfloat param1);
void SM_arc_graphics_g2d_Fill_polyEnd(jcontext ctx);
void SM_arc_graphics_g2d_Fill_poly_arc_math_geom_Polygon(jcontext ctx, jobject param0);
void SM_arc_graphics_g2d_Fill_poly_arc_struct_FloatSeq(jcontext ctx, jobject param0);
void SM_arc_graphics_g2d_Fill_poly_Array1_float_int(jcontext ctx, jobject param0, jint param1);
void SM_arc_graphics_g2d_Fill_poly_float_float_int_float(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3);
void SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4);
void SM_arc_graphics_g2d_Fill_arc_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_graphics_g2d_Fill_arc_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_arc_graphics_g2d_Fill_arc_float_float_float_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jint param5);
void SM_arc_graphics_g2d_Fill_circle_arc_math_geom_Circle(jcontext ctx, jobject param0);
void SM_arc_graphics_g2d_Fill_circle_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
void SM_arc_graphics_g2d_Fill_rect_arc_math_geom_Rect(jcontext ctx, jobject param0);
void SM_arc_graphics_g2d_Fill_rect_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_graphics_g2d_Fill_rect_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_arc_graphics_g2d_Fill_crect_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_graphics_g2d_Fill_rects_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_arc_graphics_g2d_Fill_square_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
void SM_arc_graphics_g2d_Fill_square_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);

#ifdef __cplusplus
}
#endif

#endif
