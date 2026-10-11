#ifndef HEADER_mindustry_ai_types_CargoAI
#define HEADER_mindustry_ai_types_CargoAI

#include "Clearwing.h"
#include "mindustry/entities/units/AIController.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_types_CargoAI {
	mindustry_entities_units_AIController parent;
	jref F_unloadTarget;
	jref F_itemTarget;
	jfloat F_noDestTimer;
	jint F_targetIndex;
} mindustry_ai_types_CargoAI;

extern Class class_mindustry_ai_types_CargoAI;

extern jobject SF_mindustry_ai_types_CargoAI_orderedItems;
extern jobject SF_mindustry_ai_types_CargoAI_targets;
extern jfloat SF_mindustry_ai_types_CargoAI_emptyWaitTime;
extern jfloat SF_mindustry_ai_types_CargoAI_dropSpacing;
extern jfloat SF_mindustry_ai_types_CargoAI_transferRange;
extern jfloat SF_mindustry_ai_types_CargoAI_moveRange;
extern jfloat SF_mindustry_ai_types_CargoAI_moveSmoothing;

#define VTABLE_mindustry_ai_types_CargoAI_hashCode_R_int 0
typedef jint (*func_mindustry_ai_types_CargoAI_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_types_CargoAI_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CargoAI_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_types_CargoAI_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_types_CargoAI_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_types_CargoAI_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_finalize 5
typedef void (*func_mindustry_ai_types_CargoAI_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_notify 6
typedef void (*func_mindustry_ai_types_CargoAI_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_notifyAll 7
typedef void (*func_mindustry_ai_types_CargoAI_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_wait 8
typedef void (*func_mindustry_ai_types_CargoAI_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_wait_long 9
typedef void (*func_mindustry_ai_types_CargoAI_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_types_CargoAI_wait_long_int 10
typedef void (*func_mindustry_ai_types_CargoAI_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_types_CargoAI_unit_mindustry_gen_Unit 11
typedef void (*func_mindustry_ai_types_CargoAI_unit_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CargoAI_unit_R_mindustry_gen_Unit 12
typedef jobject (*func_mindustry_ai_types_CargoAI_unit_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_hit_mindustry_gen_Bullet 13
typedef void (*func_mindustry_ai_types_CargoAI_hit_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CargoAI_isValidController_R_boolean 14
typedef jbool (*func_mindustry_ai_types_CargoAI_isValidController_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_isLogicControllable_R_boolean 15
typedef jbool (*func_mindustry_ai_types_CargoAI_isLogicControllable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_updateUnit 16
typedef void (*func_mindustry_ai_types_CargoAI_updateUnit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_removed_mindustry_gen_Unit 17
typedef void (*func_mindustry_ai_types_CargoAI_removed_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CargoAI_afterRead_mindustry_gen_Unit 18
typedef void (*func_mindustry_ai_types_CargoAI_afterRead_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CargoAI_resetTimers 19
typedef void (*func_mindustry_ai_types_CargoAI_resetTimers)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_hasStance_mindustry_ai_UnitStance_R_boolean 20
typedef jbool (*func_mindustry_ai_types_CargoAI_hasStance_mindustry_ai_UnitStance_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CargoAI_stanceChanged 21
typedef void (*func_mindustry_ai_types_CargoAI_stanceChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_keepState_R_boolean 22
typedef jbool (*func_mindustry_ai_types_CargoAI_keepState_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_stopShooting 23
typedef void (*func_mindustry_ai_types_CargoAI_stopShooting)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_fallback_R_mindustry_entities_units_AIController 24
typedef jobject (*func_mindustry_ai_types_CargoAI_fallback_R_mindustry_entities_units_AIController)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_useFallback_R_boolean 25
typedef jbool (*func_mindustry_ai_types_CargoAI_useFallback_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_updateVisuals 26
typedef void (*func_mindustry_ai_types_CargoAI_updateVisuals)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_updateMovement 27
typedef void (*func_mindustry_ai_types_CargoAI_updateMovement)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_updateTargeting 28
typedef void (*func_mindustry_ai_types_CargoAI_updateTargeting)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_faceTarget 29
typedef void (*func_mindustry_ai_types_CargoAI_faceTarget)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_faceMovement 30
typedef void (*func_mindustry_ai_types_CargoAI_faceMovement)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_invalid_mindustry_gen_Teamc_R_boolean 31
typedef jbool (*func_mindustry_ai_types_CargoAI_invalid_mindustry_gen_Teamc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CargoAI_pathfind_int 32
typedef void (*func_mindustry_ai_types_CargoAI_pathfind_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ai_types_CargoAI_pathfind_int_boolean 33
typedef void (*func_mindustry_ai_types_CargoAI_pathfind_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_mindustry_ai_types_CargoAI_pathfind_int_boolean_boolean 34
typedef void (*func_mindustry_ai_types_CargoAI_pathfind_int_boolean_boolean)(jcontext ctx, jobject self, jint param0, jbool param1, jbool param2);
#define VTABLE_mindustry_ai_types_CargoAI_alterPathfind_arc_math_geom_Vec2_R_arc_math_geom_Vec2 35
typedef jobject (*func_mindustry_ai_types_CargoAI_alterPathfind_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CargoAI_targetInvalidated 36
typedef void (*func_mindustry_ai_types_CargoAI_targetInvalidated)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_updateWeapons 37
typedef void (*func_mindustry_ai_types_CargoAI_updateWeapons)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean 38
typedef jbool (*func_mindustry_ai_types_CargoAI_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ai_types_CargoAI_shouldFire_R_boolean 39
typedef jbool (*func_mindustry_ai_types_CargoAI_shouldFire_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_shouldShoot_R_boolean 40
typedef jbool (*func_mindustry_ai_types_CargoAI_shouldShoot_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc 41
typedef jobject (*func_mindustry_ai_types_CargoAI_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jbool param3);
#define VTABLE_mindustry_ai_types_CargoAI_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc 42
typedef jobject (*func_mindustry_ai_types_CargoAI_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jbool param3);
#define VTABLE_mindustry_ai_types_CargoAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc 43
typedef jobject (*func_mindustry_ai_types_CargoAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4);
#define VTABLE_mindustry_ai_types_CargoAI_retarget_R_boolean 44
typedef jbool (*func_mindustry_ai_types_CargoAI_retarget_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc 45
typedef jobject (*func_mindustry_ai_types_CargoAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4);
#define VTABLE_mindustry_ai_types_CargoAI_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc 46
typedef jobject (*func_mindustry_ai_types_CargoAI_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4);
#define VTABLE_mindustry_ai_types_CargoAI_commandTarget_mindustry_gen_Teamc 47
typedef void (*func_mindustry_ai_types_CargoAI_commandTarget_mindustry_gen_Teamc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CargoAI_commandPosition_arc_math_geom_Vec2 48
typedef void (*func_mindustry_ai_types_CargoAI_commandPosition_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CargoAI_init 49
typedef void (*func_mindustry_ai_types_CargoAI_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_getClosestSpawner_R_mindustry_world_Tile 50
typedef jobject (*func_mindustry_ai_types_CargoAI_getClosestSpawner_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_unloadPayloads 51
typedef void (*func_mindustry_ai_types_CargoAI_unloadPayloads)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_circleAttack_float 52
typedef void (*func_mindustry_ai_types_CargoAI_circleAttack_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ai_types_CargoAI_circle_arc_math_geom_Position_float 53
typedef void (*func_mindustry_ai_types_CargoAI_circle_arc_math_geom_Position_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_ai_types_CargoAI_circle_arc_math_geom_Position_float_float 54
typedef void (*func_mindustry_ai_types_CargoAI_circle_arc_math_geom_Position_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_ai_types_CargoAI_moveTo_arc_math_geom_Position_float 55
typedef void (*func_mindustry_ai_types_CargoAI_moveTo_arc_math_geom_Position_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_ai_types_CargoAI_moveTo_arc_math_geom_Position_float_float 56
typedef void (*func_mindustry_ai_types_CargoAI_moveTo_arc_math_geom_Position_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_ai_types_CargoAI_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2 57
typedef void (*func_mindustry_ai_types_CargoAI_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jbool param3, jobject param4);
#define VTABLE_mindustry_ai_types_CargoAI_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2_boolean 58
typedef void (*func_mindustry_ai_types_CargoAI_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jbool param3, jobject param4, jbool param5);
#define VTABLE_mindustry_ai_types_CargoAI_prefSpeed_R_float 59
typedef jfloat (*func_mindustry_ai_types_CargoAI_prefSpeed_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CargoAI_lambda$target$1_boolean_mindustry_gen_Building_R_boolean 60
typedef jbool (*func_mindustry_ai_types_CargoAI_lambda$target$1_boolean_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jbool param0, jobject param1);
#define VTABLE_mindustry_ai_types_CargoAI_findDropTarget_mindustry_type_Item_int_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_int 61
typedef jint (*func_mindustry_ai_types_CargoAI_findDropTarget_mindustry_type_Item_int_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_mindustry_ai_types_CargoAI_findAnyTarget_mindustry_gen_Building 62
typedef void (*func_mindustry_ai_types_CargoAI_findAnyTarget_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CargoAI_sortTargets_arc_struct_Seq 63
typedef void (*func_mindustry_ai_types_CargoAI_sortTargets_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CargoAI_lambda$sortTargets$1_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_float 64
typedef jfloat (*func_mindustry_ai_types_CargoAI_lambda$sortTargets$1_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_float)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ai_types_CargoAI(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_types_CargoAI(jcontext ctx);
void init_mindustry_ai_types_CargoAI(jcontext ctx, jobject self);
void M_mindustry_ai_types_CargoAI_updateMovement(jcontext ctx, jobject self);
jint M_mindustry_ai_types_CargoAI_findDropTarget_mindustry_type_Item_int_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
void M_mindustry_ai_types_CargoAI_findAnyTarget_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_types_CargoAI_sortTargets_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_ai_types_CargoAI_lambda$sortTargets$1_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_float(jcontext ctx, jobject self, jobject param0);
jint SM_mindustry_ai_types_CargoAI_lambda$sortTargets$0_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_int(jcontext ctx, jobject param0);
jbool SM_mindustry_ai_types_CargoAI_lambda$findAnyTarget$1_mindustry_type_Item_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_boolean(jcontext ctx, jobject param0, jobject param1);
jfloat SM_mindustry_ai_types_CargoAI_lambda$findAnyTarget$0_mindustry_gen_Building_mindustry_type_Item_R_float(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_ai_types_CargoAI_lambda$findDropTarget$0_mindustry_type_Item_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild_R_boolean(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
