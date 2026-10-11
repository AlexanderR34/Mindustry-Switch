#ifndef HEADER_mindustry_world_draw_DrawPistons
#define HEADER_mindustry_world_draw_DrawPistons

#include "Clearwing.h"
#include "mindustry/world/draw/DrawBlock.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_draw_DrawPistons {
	mindustry_world_draw_DrawBlock parent;
	jfloat F_sinMag;
	jfloat F_sinScl;
	jfloat F_sinOffset;
	jfloat F_sideOffset;
	jfloat F_lenOffset;
	jfloat F_horiOffset;
	jfloat F_angleOffset;
	jfloat F_x;
	jfloat F_y;
	jint F_sides;
	jref F_suffix;
	jref F_region1;
	jref F_region2;
	jref F_regiont;
	jref F_iconRegion;
} mindustry_world_draw_DrawPistons;

extern Class class_mindustry_world_draw_DrawPistons;


#define VTABLE_mindustry_world_draw_DrawPistons_hashCode_R_int 0
typedef jint (*func_mindustry_world_draw_DrawPistons_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawPistons_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_draw_DrawPistons_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawPistons_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_draw_DrawPistons_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawPistons_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_draw_DrawPistons_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawPistons_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_draw_DrawPistons_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawPistons_finalize 5
typedef void (*func_mindustry_world_draw_DrawPistons_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawPistons_notify 6
typedef void (*func_mindustry_world_draw_DrawPistons_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawPistons_notifyAll 7
typedef void (*func_mindustry_world_draw_DrawPistons_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawPistons_wait 8
typedef void (*func_mindustry_world_draw_DrawPistons_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawPistons_wait_long 9
typedef void (*func_mindustry_world_draw_DrawPistons_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_draw_DrawPistons_wait_long_int 10
typedef void (*func_mindustry_world_draw_DrawPistons_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_draw_DrawPistons_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq 11
typedef void (*func_mindustry_world_draw_DrawPistons_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_draw_DrawPistons_draw_mindustry_gen_Building 12
typedef void (*func_mindustry_world_draw_DrawPistons_draw_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawPistons_drawLight_mindustry_gen_Building 13
typedef void (*func_mindustry_world_draw_DrawPistons_drawLight_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawPistons_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable 14
typedef void (*func_mindustry_world_draw_DrawPistons_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_world_draw_DrawPistons_load_mindustry_world_Block 15
typedef void (*func_mindustry_world_draw_DrawPistons_load_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawPistons_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion 16
typedef jobject (*func_mindustry_world_draw_DrawPistons_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawPistons_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion 17
typedef jobject (*func_mindustry_world_draw_DrawPistons_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawPistons_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter 18
typedef jobject (*func_mindustry_world_draw_DrawPistons_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_world_draw_DrawPistons(jobject object, jint mark, jint depth);
void clinit_mindustry_world_draw_DrawPistons(jcontext ctx);
void init_mindustry_world_draw_DrawPistons(jcontext ctx, jobject self);
void M_mindustry_world_draw_DrawPistons_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_world_draw_DrawPistons_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_draw_DrawPistons_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_draw_DrawPistons_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
