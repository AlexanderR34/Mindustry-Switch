#ifndef HEADER_mindustry_world_draw_DrawWeave
#define HEADER_mindustry_world_draw_DrawWeave

#include "Clearwing.h"
#include "mindustry/world/draw/DrawBlock.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_draw_DrawWeave {
	mindustry_world_draw_DrawBlock parent;
	jref F_weave;
	jfloat F_x;
	jfloat F_y;
} mindustry_world_draw_DrawWeave;

extern Class class_mindustry_world_draw_DrawWeave;


#define VTABLE_mindustry_world_draw_DrawWeave_hashCode_R_int 0
typedef jint (*func_mindustry_world_draw_DrawWeave_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawWeave_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_draw_DrawWeave_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawWeave_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_draw_DrawWeave_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawWeave_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_draw_DrawWeave_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawWeave_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_draw_DrawWeave_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawWeave_finalize 5
typedef void (*func_mindustry_world_draw_DrawWeave_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawWeave_notify 6
typedef void (*func_mindustry_world_draw_DrawWeave_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawWeave_notifyAll 7
typedef void (*func_mindustry_world_draw_DrawWeave_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawWeave_wait 8
typedef void (*func_mindustry_world_draw_DrawWeave_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawWeave_wait_long 9
typedef void (*func_mindustry_world_draw_DrawWeave_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_draw_DrawWeave_wait_long_int 10
typedef void (*func_mindustry_world_draw_DrawWeave_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_draw_DrawWeave_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq 11
typedef void (*func_mindustry_world_draw_DrawWeave_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_draw_DrawWeave_draw_mindustry_gen_Building 12
typedef void (*func_mindustry_world_draw_DrawWeave_draw_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawWeave_drawLight_mindustry_gen_Building 13
typedef void (*func_mindustry_world_draw_DrawWeave_drawLight_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawWeave_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable 14
typedef void (*func_mindustry_world_draw_DrawWeave_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_world_draw_DrawWeave_load_mindustry_world_Block 15
typedef void (*func_mindustry_world_draw_DrawWeave_load_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawWeave_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion 16
typedef jobject (*func_mindustry_world_draw_DrawWeave_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawWeave_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion 17
typedef jobject (*func_mindustry_world_draw_DrawWeave_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawWeave_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter 18
typedef jobject (*func_mindustry_world_draw_DrawWeave_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_world_draw_DrawWeave(jobject object, jint mark, jint depth);
void clinit_mindustry_world_draw_DrawWeave(jcontext ctx);
void init_mindustry_world_draw_DrawWeave(jcontext ctx, jobject self);
void M_mindustry_world_draw_DrawWeave_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_draw_DrawWeave_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_draw_DrawWeave_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
