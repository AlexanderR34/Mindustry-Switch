#ifndef HEADER_mindustry_graphics_Drawf
#define HEADER_mindustry_graphics_Drawf

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_Drawf {
	java_lang_Object parent;
} mindustry_graphics_Drawf;

extern Class class_mindustry_graphics_Drawf;

extern jobject SF_mindustry_graphics_Drawf_vecs;
extern jobject SF_mindustry_graphics_Drawf_points;

#define VTABLE_mindustry_graphics_Drawf_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_Drawf_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Drawf_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_Drawf_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Drawf_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_Drawf_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Drawf_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_Drawf_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Drawf_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_Drawf_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Drawf_finalize 5
typedef void (*func_mindustry_graphics_Drawf_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Drawf_notify 6
typedef void (*func_mindustry_graphics_Drawf_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Drawf_notifyAll 7
typedef void (*func_mindustry_graphics_Drawf_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Drawf_wait 8
typedef void (*func_mindustry_graphics_Drawf_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Drawf_wait_long 9
typedef void (*func_mindustry_graphics_Drawf_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_Drawf_wait_long_int 10
typedef void (*func_mindustry_graphics_Drawf_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_Drawf(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_Drawf(jcontext ctx);
void init_mindustry_graphics_Drawf(jcontext ctx, jobject self);
void SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_arc_graphics_Color_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3, jfloat param4);
void SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_arc_graphics_Color_float_int(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3, jfloat param4, jint param5);
void SM_mindustry_graphics_Drawf_text_java_lang_String_float_float_float_arc_graphics_Color_float_int(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jfloat param5, jint param6);
void SM_mindustry_graphics_Drawf_checkBleed_arc_graphics_Pixmap(jcontext ctx, jobject param0);
void SM_mindustry_graphics_Drawf_underwater_java_lang_Runnable(jcontext ctx, jobject param0);
void SM_mindustry_graphics_Drawf_flame_float_float_int_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
void SM_mindustry_graphics_Drawf_flameFront_float_float_int_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jfloat param5);
void SM_mindustry_graphics_Drawf_point_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_graphics_Drawf_buildBeam_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3);
void SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
void SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
void SM_mindustry_graphics_Drawf_additive_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);
void SM_mindustry_graphics_Drawf_limitLine_arc_math_geom_Position_arc_math_geom_Position_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_graphics_Drawf_limitLine_arc_math_geom_Position_arc_math_geom_Position_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3);
void SM_mindustry_graphics_Drawf_dashLineDst_arc_graphics_Color_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_graphics_Drawf_dashLine_arc_graphics_Color_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_graphics_Drawf_dashLine_arc_graphics_Color_float_float_float_float_int(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jint param5);
void SM_mindustry_graphics_Drawf_line_arc_graphics_Color_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_graphics_Drawf_dashLineBasic_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_graphics_Drawf_dashSquare_arc_graphics_Color_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_graphics_Drawf_dashRect_arc_graphics_Color_arc_math_geom_Rect(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_graphics_Drawf_dashRect_arc_graphics_Color_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_graphics_Drawf_dashSquareBasic_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
void SM_mindustry_graphics_Drawf_dashRectBasic_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_graphics_Drawf_target_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_graphics_Drawf_target_float_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jfloat SM_mindustry_graphics_Drawf_text_R_float(jcontext ctx);
void SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3, jfloat param4);
void SM_mindustry_graphics_Drawf_light_arc_math_geom_Position_float_arc_graphics_Color_float(jcontext ctx, jobject param0, jfloat param1, jobject param2, jfloat param3);
void SM_mindustry_graphics_Drawf_light_float_float_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jobject param3, jfloat param4);
void SM_mindustry_graphics_Drawf_light_float_float_arc_graphics_g2d_TextureRegion_float_arc_graphics_Color_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jfloat param3, jobject param4, jfloat param5);
void SM_mindustry_graphics_Drawf_light_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_graphics_Drawf_light_float_float_float_float_float_arc_graphics_Color_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jfloat param6);
void SM_mindustry_graphics_Drawf_selected_mindustry_gen_Building_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_graphics_Drawf_selected_mindustry_world_Tile_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_graphics_Drawf_selected_int_int_mindustry_world_Block_arc_graphics_Color(jcontext ctx, jint param0, jint param1, jobject param2, jobject param3);
void SM_mindustry_graphics_Drawf_shadow_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
void SM_mindustry_graphics_Drawf_squareShadow_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_graphics_Drawf_shadow_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_graphics_Drawf_shadow_arc_graphics_g2d_TextureRegion_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_graphics_Drawf_shadow_arc_graphics_g2d_TextureRegion_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
void SM_mindustry_graphics_Drawf_shadow_arc_graphics_g2d_TextureRegion_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void SM_mindustry_graphics_Drawf_liquid_arc_graphics_g2d_TextureRegion_float_float_float_arc_graphics_Color_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jfloat param5);
void SM_mindustry_graphics_Drawf_liquid_arc_graphics_g2d_TextureRegion_float_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_graphics_Drawf_dashCircle_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_graphics_Drawf_circles_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
void SM_mindustry_graphics_Drawf_circles_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_graphics_Drawf_select_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5);
void SM_mindustry_graphics_Drawf_square_float_float_float_float_arc_graphics_Color_arc_graphics_Color_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jfloat param6);
void SM_mindustry_graphics_Drawf_cross_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_graphics_Drawf_poly_float_float_int_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jobject param5);
void SM_mindustry_graphics_Drawf_fillPoly_float_float_int_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jobject param5);
void SM_mindustry_graphics_Drawf_fillPoly_float_float_int_float_float_arc_graphics_Color_arc_graphics_Color_float(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jobject param5, jobject param6, jfloat param7);
void SM_mindustry_graphics_Drawf_square_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_graphics_Drawf_square_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_graphics_Drawf_square_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
void SM_mindustry_graphics_Drawf_arrow_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void SM_mindustry_graphics_Drawf_arrow_float_float_float_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);
void SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
void SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
void SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
void SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jbool param8);
void SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jbool param8, jbool param9);
void SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_mindustry_ctype_UnlockableContent_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void SM_mindustry_graphics_Drawf_construct_float_float_arc_graphics_g2d_TextureRegion_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
void SM_mindustry_graphics_Drawf_construct_float_float_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jobject param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
void SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_arc_graphics_g2d_TextureRegion_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
void SM_mindustry_graphics_Drawf_construct_mindustry_gen_Building_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
void SM_mindustry_graphics_Drawf_spinSprite_arc_graphics_g2d_TextureRegion_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
jfloat SM_mindustry_graphics_Drawf_lambda$buildBeam$0_float_float_float_arc_math_geom_Vec2_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3);

#ifdef __cplusplus
}
#endif

#endif
