#ifndef HEADER_mindustry_content_Blocks$321$2
#define HEADER_mindustry_content_Blocks$321$2

#include "Clearwing.h"
#include "mindustry/world/draw/DrawTurret.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Blocks$321$2 {
	mindustry_world_draw_DrawTurret parent;
	jref F_val$circleProgress;
	jref F_val$circleColor;
	jfloat F_val$circleStroke;
	jfloat F_val$circleRad;
	jfloat F_val$circleY;
	jfloat F_val$circleRotSpeed;
	jfloat F_val$haloRotSpeed;
	jref F_val$heatCol;
	jref F_val$haloProgress;
	jref F_val$haloColor;
	jfloat F_val$haloY;
	jref F_this$0;
} mindustry_content_Blocks$321$2;

extern Class class_mindustry_content_Blocks$321$2;


#define VTABLE_mindustry_content_Blocks$321$2_hashCode_R_int 0
typedef jint (*func_mindustry_content_Blocks$321$2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Blocks$321$2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$2_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Blocks$321$2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Blocks$321$2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Blocks$321$2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2_finalize 5
typedef void (*func_mindustry_content_Blocks$321$2_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2_notify 6
typedef void (*func_mindustry_content_Blocks$321$2_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2_notifyAll 7
typedef void (*func_mindustry_content_Blocks$321$2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2_wait 8
typedef void (*func_mindustry_content_Blocks$321$2_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$2_wait_long 9
typedef void (*func_mindustry_content_Blocks$321$2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Blocks$321$2_wait_long_int 10
typedef void (*func_mindustry_content_Blocks$321$2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_Blocks$321$2_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq 11
typedef void (*func_mindustry_content_Blocks$321$2_getRegionsToOutline_mindustry_world_Block_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$321$2_draw_mindustry_gen_Building 12
typedef void (*func_mindustry_content_Blocks$321$2_draw_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$2_drawLight_mindustry_gen_Building 13
typedef void (*func_mindustry_content_Blocks$321$2_drawLight_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$2_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable 14
typedef void (*func_mindustry_content_Blocks$321$2_drawPlan_mindustry_world_Block_mindustry_entities_units_BuildPlan_arc_util_Eachable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_content_Blocks$321$2_load_mindustry_world_Block 15
typedef void (*func_mindustry_content_Blocks$321$2_load_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$2_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion 16
typedef jobject (*func_mindustry_content_Blocks$321$2_icons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$2_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion 17
typedef jobject (*func_mindustry_content_Blocks$321$2_finalIcons_mindustry_world_Block_R_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$2_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter 18
typedef jobject (*func_mindustry_content_Blocks$321$2_expectCrafter_mindustry_world_Block_R_mindustry_world_blocks_production_GenericCrafter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$2_setAmmoParts_Array1_java_lang_Object 19
typedef void (*func_mindustry_content_Blocks$321$2_setAmmoParts_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$2_drawTurret_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild 20
typedef void (*func_mindustry_content_Blocks$321$2_drawTurret_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$321$2_drawHeat_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild 21
typedef void (*func_mindustry_content_Blocks$321$2_drawHeat_mindustry_world_blocks_defense_turrets_Turret_mindustry_world_blocks_defense_turrets_Turret$TurretBuild)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_content_Blocks$321$2(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Blocks$321$2(jcontext ctx);
void init_mindustry_content_Blocks$321$2_mindustry_content_Blocks$321_java_lang_String_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float_float_float_float_float_arc_graphics_Color_mindustry_entities_part_DrawPart$PartProgress_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9, jobject param10, jobject param11, jfloat param12);

#ifdef __cplusplus
}
#endif

#endif
