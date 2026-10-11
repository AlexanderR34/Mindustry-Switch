#ifndef HEADER_mindustry_input_Placement
#define HEADER_mindustry_input_Placement

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_input_Placement {
	java_lang_Object parent;
} mindustry_input_Placement;

extern Class class_mindustry_input_Placement;

extern jobject SF_mindustry_input_Placement_plans1;
extern jobject SF_mindustry_input_Placement_tmpPoints;
extern jobject SF_mindustry_input_Placement_tmpPoints2;
extern jobject SF_mindustry_input_Placement_result;
extern jobject SF_mindustry_input_Placement_drawResult;
extern jobject SF_mindustry_input_Placement_bres;
extern jobject SF_mindustry_input_Placement_points;
extern jobject SF_mindustry_input_Placement_tmpInts;
extern jobject SF_mindustry_input_Placement_tmpInts2;
extern jobject SF_mindustry_input_Placement_costs;
extern jobject SF_mindustry_input_Placement_parents;
extern jobject SF_mindustry_input_Placement_closed;

#define VTABLE_mindustry_input_Placement_hashCode_R_int 0
typedef jint (*func_mindustry_input_Placement_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_input_Placement_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_Placement_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_input_Placement_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_input_Placement_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_input_Placement_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement_finalize 5
typedef void (*func_mindustry_input_Placement_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement_notify 6
typedef void (*func_mindustry_input_Placement_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement_notifyAll 7
typedef void (*func_mindustry_input_Placement_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement_wait 8
typedef void (*func_mindustry_input_Placement_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_Placement_wait_long 9
typedef void (*func_mindustry_input_Placement_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_input_Placement_wait_long_int 10
typedef void (*func_mindustry_input_Placement_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_input_Placement(jobject object, jint mark, jint depth);
void clinit_mindustry_input_Placement(jcontext ctx);
void init_mindustry_input_Placement(jcontext ctx, jobject self);
jobject SM_mindustry_input_Placement_pathfindLine_boolean_int_int_int_int_R_arc_struct_Seq(jcontext ctx, jbool param0, jint param1, jint param2, jint param3, jint param4);
jobject SM_mindustry_input_Placement_normalizeLine_int_int_int_int_R_arc_struct_Seq(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jobject SM_mindustry_input_Placement_normalizeRectangle_int_int_int_int_int_R_arc_struct_Seq(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4);
jobject SM_mindustry_input_Placement_upgradeLine_int_int_int_int_R_arc_struct_Seq(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_mindustry_input_Placement_calculateNodes_arc_struct_Seq_mindustry_world_Block_int_arc_func_Boolf2(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3);
jbool SM_mindustry_input_Placement_isSidePlace_arc_struct_Seq_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_world_blocks_distribution_ItemBridge(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_input_BridgePlacer_boolean_arc_func_Boolf(jcontext ctx, jobject param0, jobject param1, jbool param2, jobject param3);
void SM_mindustry_input_Placement_smartCalculateBridges_arc_struct_Seq_mindustry_input_BridgePlacer_boolean_arc_func_Boolf(jcontext ctx, jobject param0, jobject param1, jbool param2, jobject param3);
void SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_world_blocks_distribution_ItemBridge_boolean_arc_func_Boolf(jcontext ctx, jobject param0, jobject param1, jbool param2, jobject param3);
void SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_world_blocks_distribution_DirectionBridge_boolean_arc_func_Boolf(jcontext ctx, jobject param0, jobject param1, jbool param2, jobject param3);
jfloat SM_mindustry_input_Placement_tileHeuristic_mindustry_world_Tile_mindustry_world_Tile_R_float(jcontext ctx, jobject param0, jobject param1);
jfloat SM_mindustry_input_Placement_distanceHeuristic_int_int_int_int_R_float(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jbool SM_mindustry_input_Placement_validNode_mindustry_world_Tile_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_input_Placement_astar_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jobject SM_mindustry_input_Placement_normalizeDrawArea_mindustry_world_Block_int_int_int_int_boolean_int_float_R_mindustry_input_Placement$NormalizeDrawResult(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jbool param5, jint param6, jfloat param7);
jobject SM_mindustry_input_Placement_normalizeArea_int_int_int_int_int_boolean_int_R_mindustry_input_Placement$NormalizeResult(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jbool param5, jint param6);
jint SM_mindustry_input_Placement_lambda$astar$0_mindustry_world_Tile_mindustry_world_Tile_mindustry_world_Tile_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_mindustry_input_Placement_lambda$smartCalculateBridges$0_arc_struct_Seq_arc_func_Boolf_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_mindustry_input_Placement_lambda$calculateBridges$0_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_input_Placement_lambda$calculateNodes$0_arc_struct_Seq_mindustry_world_Block_int_arc_math_geom_Point2_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3);

#ifdef __cplusplus
}
#endif

#endif
