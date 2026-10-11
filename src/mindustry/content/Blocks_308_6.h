#ifndef HEADER_mindustry_content_Blocks$308$6
#define HEADER_mindustry_content_Blocks$308$6

#include "Clearwing.h"
#include "mindustry/world/draw/DrawTurret.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Blocks$308$6 {
	mindustry_world_draw_DrawTurret parent;
	jref F_this$0;
} mindustry_content_Blocks$308$6;

extern Class class_mindustry_content_Blocks$308$6;


#define VTABLE_mindustry_content_Blocks$308$6_hashCode_R_int 0
typedef jint (*func_mindustry_content_Blocks$308$6_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$6_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Blocks$308$6_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$308$6_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Blocks$308$6_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$6_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Blocks$308$6_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$6_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Blocks$308$6_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$6_finalize 5
typedef void (*func_mindustry_content_Blocks$308$6_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$6_notify 6
typedef void (*func_mindustry_content_Blocks$308$6_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$6_notifyAll 7
typedef void (*func_mindustry_content_Blocks$308$6_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$6_wait 8
typedef void (*func_mindustry_content_Blocks$308$6_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$308$6_wait_long 9
typedef void (*func_mindustry_content_Blocks$308$6_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Blocks$308$6_wait_long_int 10
typedef void (*func_mindustry_content_Blocks$308$6_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_Blocks$308$6_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq 11
typedef void (*func_mindustry_content_Blocks$308$6_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$308$6_draw_mindustry_gen_Building 12
typedef void (*func_mindustry_content_Blocks$308$6_draw_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$308$6_drawLight_mindustry_gen_Building 13
typedef void (*func_mindustry_content_Blocks$308$6_drawLight_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$308$6_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable 14
typedef void (*func_mindustry_content_Blocks$308$6_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_content_Blocks$308$6_load_mindustry_world_Block 15
typedef void (*func_mindustry_content_Blocks$308$6_load_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$308$6_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion 16
typedef jobject (*func_mindustry_content_Blocks$308$6_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$308$6_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion 17
typedef jobject (*func_mindustry_content_Blocks$308$6_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$308$6_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter 18
typedef jobject (*func_mindustry_content_Blocks$308$6_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$308$6_setAmmoParts_Array1_java_lang_Object 19
typedef void (*func_mindustry_content_Blocks$308$6_setAmmoParts_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$308$6_drawTurret_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild 20
typedef void (*func_mindustry_content_Blocks$308$6_drawTurret_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$308$6_drawHeat_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild 21
typedef void (*func_mindustry_content_Blocks$308$6_drawHeat_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_content_Blocks$308$6(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Blocks$308$6(jcontext ctx);
void init_mindustry_content_Blocks$308$6_mindustry_content_Blocks$308(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
