#ifndef HEADER_mindustry_world_draw_DrawCells
#define HEADER_mindustry_world_draw_DrawCells

#include "Clearwing.h"
#include "mindustry/world/draw/DrawBlock.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_draw_DrawCells {
	mindustry_world_draw_DrawBlock parent;
	jref F_middle;
	jref F_color;
	jref F_particleColorFrom;
	jref F_particleColorTo;
	jint F_particles;
	jfloat F_range;
	jfloat F_recurrence;
	jfloat F_radius;
	jfloat F_lifetime;
} mindustry_world_draw_DrawCells;

extern Class class_mindustry_world_draw_DrawCells;


#define VTABLE_mindustry_world_draw_DrawCells_hashCode_R_int 0
typedef jint (*func_mindustry_world_draw_DrawCells_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawCells_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_draw_DrawCells_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawCells_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_draw_DrawCells_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawCells_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_draw_DrawCells_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawCells_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_draw_DrawCells_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawCells_finalize 5
typedef void (*func_mindustry_world_draw_DrawCells_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawCells_notify 6
typedef void (*func_mindustry_world_draw_DrawCells_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawCells_notifyAll 7
typedef void (*func_mindustry_world_draw_DrawCells_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawCells_wait 8
typedef void (*func_mindustry_world_draw_DrawCells_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawCells_wait_long 9
typedef void (*func_mindustry_world_draw_DrawCells_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_draw_DrawCells_wait_long_int 10
typedef void (*func_mindustry_world_draw_DrawCells_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_draw_DrawCells_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq 11
typedef void (*func_mindustry_world_draw_DrawCells_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_draw_DrawCells_draw_mindustry_gen_Building 12
typedef void (*func_mindustry_world_draw_DrawCells_draw_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawCells_drawLight_mindustry_gen_Building 13
typedef void (*func_mindustry_world_draw_DrawCells_drawLight_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawCells_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable 14
typedef void (*func_mindustry_world_draw_DrawCells_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_world_draw_DrawCells_load_mindustry_world_Block 15
typedef void (*func_mindustry_world_draw_DrawCells_load_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawCells_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion 16
typedef jobject (*func_mindustry_world_draw_DrawCells_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawCells_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion 17
typedef jobject (*func_mindustry_world_draw_DrawCells_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawCells_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter 18
typedef jobject (*func_mindustry_world_draw_DrawCells_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_world_draw_DrawCells(jobject object, jint mark, jint depth);
void clinit_mindustry_world_draw_DrawCells(jcontext ctx);
void init_mindustry_world_draw_DrawCells(jcontext ctx, jobject self);
void M_mindustry_world_draw_DrawCells_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_draw_DrawCells_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
