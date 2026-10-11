#ifndef HEADER_arc_graphics_g2d_Lines
#define HEADER_arc_graphics_g2d_Lines

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_Lines {
	java_lang_Object parent;
} arc_graphics_g2d_Lines;

extern Class class_arc_graphics_g2d_Lines;

extern jbool SF_arc_graphics_g2d_Lines_useLegacyLine;
extern jfloat SF_arc_graphics_g2d_Lines_stroke;
extern jobject SF_arc_graphics_g2d_Lines_vector;
extern jobject SF_arc_graphics_g2d_Lines_u;
extern jobject SF_arc_graphics_g2d_Lines_v;
extern jobject SF_arc_graphics_g2d_Lines_floats;
extern jobject SF_arc_graphics_g2d_Lines_floatBuilder;
extern jbool SF_arc_graphics_g2d_Lines_building;
extern jfloat SF_arc_graphics_g2d_Lines_circlePrecision;
extern jobject SF_arc_graphics_g2d_Lines_AB;
extern jobject SF_arc_graphics_g2d_Lines_BC;
extern jobject SF_arc_graphics_g2d_Lines_A;
extern jobject SF_arc_graphics_g2d_Lines_B;
extern jobject SF_arc_graphics_g2d_Lines_C;
extern jobject SF_arc_graphics_g2d_Lines_E;
extern jobject SF_arc_graphics_g2d_Lines_D;
extern jobject SF_arc_graphics_g2d_Lines_vec1;
extern jobject SF_arc_graphics_g2d_Lines_D0;
extern jobject SF_arc_graphics_g2d_Lines_E0;
extern jobject SF_arc_graphics_g2d_Lines_q1;
extern jobject SF_arc_graphics_g2d_Lines_q2;
extern jobject SF_arc_graphics_g2d_Lines_q3;
extern jobject SF_arc_graphics_g2d_Lines_q4;
extern jobject SF_arc_graphics_g2d_Lines_D2;
extern jobject SF_arc_graphics_g2d_Lines_E2;
extern jobject SF_arc_graphics_g2d_Lines_D02;
extern jobject SF_arc_graphics_g2d_Lines_E02;
extern jfloat SF_arc_graphics_g2d_Lines_miterLimit;

#define VTABLE_arc_graphics_g2d_Lines_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_Lines_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Lines_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_Lines_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Lines_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_Lines_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Lines_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_Lines_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Lines_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_Lines_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Lines_finalize 5
typedef void (*func_arc_graphics_g2d_Lines_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Lines_notify 6
typedef void (*func_arc_graphics_g2d_Lines_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Lines_notifyAll 7
typedef void (*func_arc_graphics_g2d_Lines_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Lines_wait 8
typedef void (*func_arc_graphics_g2d_Lines_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Lines_wait_long 9
typedef void (*func_arc_graphics_g2d_Lines_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_Lines_wait_long_int 10
typedef void (*func_arc_graphics_g2d_Lines_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_graphics_g2d_Lines(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_Lines(jcontext ctx);
void init_arc_graphics_g2d_Lines(jcontext ctx, jobject self);
void SM_arc_graphics_g2d_Lines_setCirclePrecision_float(jcontext ctx, jfloat param0);
jint SM_arc_graphics_g2d_Lines_circleVertices_float_R_int(jcontext ctx, jfloat param0);
void SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4);
void SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_arc_graphics_g2d_Lines_lineAngleCenter_float_float_float_float_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4);
void SM_arc_graphics_g2d_Lines_lineAngleCenter_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_graphics_g2d_Lines_line_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_graphics_g2d_Lines_line_float_float_arc_graphics_Color_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jfloat param3, jfloat param4, jobject param5);
void SM_arc_graphics_g2d_Lines_line_float_float_float_float_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4);
void SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_float_float_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jbool param5);
void SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_arc_graphics_Color_float_float_arc_graphics_Color_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3, jfloat param4, jfloat param5, jobject param6, jbool param7);
void SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jbool param7);
void SM_arc_graphics_g2d_Lines_linePoint_arc_math_geom_Position(jcontext ctx, jobject param0);
void SM_arc_graphics_g2d_Lines_linePoint_float_float(jcontext ctx, jfloat param0, jfloat param1);
void SM_arc_graphics_g2d_Lines_beginLine(jcontext ctx);
void SM_arc_graphics_g2d_Lines_endLine(jcontext ctx);
void SM_arc_graphics_g2d_Lines_endLine_boolean(jcontext ctx, jbool param0);
void SM_arc_graphics_g2d_Lines_endLine_boolean_boolean(jcontext ctx, jbool param0, jbool param1);
void SM_arc_graphics_g2d_Lines_polyline_arc_struct_FloatSeq_boolean(jcontext ctx, jobject param0, jbool param1);
void SM_arc_graphics_g2d_Lines_polyline_Array1_float_int_boolean(jcontext ctx, jobject param0, jint param1, jbool param2);
void SM_arc_graphics_g2d_Lines_polyline_Array1_float_int_boolean_boolean(jcontext ctx, jobject param0, jint param1, jbool param2, jbool param3);
void SM_arc_graphics_g2d_Lines_pushQuad(jcontext ctx);
void SM_arc_graphics_g2d_Lines_pushBevelFill_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_arc_graphics_g2d_Lines_prepareFlatEndpoint_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jfloat param4);
void SM_arc_graphics_g2d_Lines_prepareFlatEndpoint_float_float_float_float_arc_math_geom_Vec2_arc_math_geom_Vec2_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jfloat param6);
void SM_arc_graphics_g2d_Lines_preparePointyJoin_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jfloat param7, jbool param8);
jfloat SM_arc_graphics_g2d_Lines_angleRad_arc_math_geom_Vec2_arc_math_geom_Vec2_R_float(jcontext ctx, jobject param0, jobject param1);
void SM_arc_graphics_g2d_Lines_prepareStraightJoin_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3);
void SM_arc_graphics_g2d_Lines_dashLine_float_float_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jint param4);
void SM_arc_graphics_g2d_Lines_circle_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
void SM_arc_graphics_g2d_Lines_ellipse_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void SM_arc_graphics_g2d_Lines_ellipse_int_float_float_float_float_float(jcontext ctx, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void SM_arc_graphics_g2d_Lines_dashCircle_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
void SM_arc_graphics_g2d_Lines_spikes_float_float_float_float_int_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jfloat param5);
void SM_arc_graphics_g2d_Lines_spikes_float_float_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jint param4);
void SM_arc_graphics_g2d_Lines_quad_float_float_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
void SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jfloat param5);
void SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4);
void SM_arc_graphics_g2d_Lines_poly_float_float_int_float(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3);
void SM_arc_graphics_g2d_Lines_poly_Array1_arc_math_geom_Vec2_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_graphics_g2d_Lines_curve_float_float_float_float_float_float_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jint param8);
void SM_arc_graphics_g2d_Lines_arc_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_graphics_g2d_Lines_arc_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_arc_graphics_g2d_Lines_arc_float_float_float_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jint param5);
void SM_arc_graphics_g2d_Lines_square_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
void SM_arc_graphics_g2d_Lines_square_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_graphics_g2d_Lines_rect_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void SM_arc_graphics_g2d_Lines_rect_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_graphics_g2d_Lines_rect_arc_math_geom_Rect(jcontext ctx, jobject param0);
void SM_arc_graphics_g2d_Lines_rect_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_arc_graphics_g2d_Lines_stroke_float(jcontext ctx, jfloat param0);
void SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(jcontext ctx, jfloat param0, jobject param1);
jfloat SM_arc_graphics_g2d_Lines_getStroke_R_float(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
