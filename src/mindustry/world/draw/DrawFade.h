#ifndef HEADER_mindustry_world_draw_DrawFade
#define HEADER_mindustry_world_draw_DrawFade

#include "Clearwing.h"
#include "mindustry/world/draw/DrawBlock.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_draw_DrawFade {
	mindustry_world_draw_DrawBlock parent;
	jref F_suffix;
	jfloat F_alpha;
	jfloat F_scale;
	jfloat F_x;
	jfloat F_y;
	jref F_region;
} mindustry_world_draw_DrawFade;

extern Class class_mindustry_world_draw_DrawFade;


#define VTABLE_mindustry_world_draw_DrawFade_hashCode_R_int 0
typedef jint (*func_mindustry_world_draw_DrawFade_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawFade_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_draw_DrawFade_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawFade_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_draw_DrawFade_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawFade_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_draw_DrawFade_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawFade_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_draw_DrawFade_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawFade_finalize 5
typedef void (*func_mindustry_world_draw_DrawFade_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawFade_notify 6
typedef void (*func_mindustry_world_draw_DrawFade_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawFade_notifyAll 7
typedef void (*func_mindustry_world_draw_DrawFade_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawFade_wait 8
typedef void (*func_mindustry_world_draw_DrawFade_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_draw_DrawFade_wait_long 9
typedef void (*func_mindustry_world_draw_DrawFade_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_draw_DrawFade_wait_long_int 10
typedef void (*func_mindustry_world_draw_DrawFade_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_draw_DrawFade_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq 11
typedef void (*func_mindustry_world_draw_DrawFade_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_draw_DrawFade_draw_mindustry_gen_Building 12
typedef void (*func_mindustry_world_draw_DrawFade_draw_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawFade_drawLight_mindustry_gen_Building 13
typedef void (*func_mindustry_world_draw_DrawFade_drawLight_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawFade_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable 14
typedef void (*func_mindustry_world_draw_DrawFade_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_world_draw_DrawFade_load_mindustry_world_Block 15
typedef void (*func_mindustry_world_draw_DrawFade_load_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawFade_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion 16
typedef jobject (*func_mindustry_world_draw_DrawFade_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawFade_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion 17
typedef jobject (*func_mindustry_world_draw_DrawFade_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_draw_DrawFade_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter 18
typedef jobject (*func_mindustry_world_draw_DrawFade_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_world_draw_DrawFade(jobject object, jint mark, jint depth);
void clinit_mindustry_world_draw_DrawFade(jcontext ctx);
void init_mindustry_world_draw_DrawFade(jcontext ctx, jobject self);
void M_mindustry_world_draw_DrawFade_draw_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_draw_DrawFade_load_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
