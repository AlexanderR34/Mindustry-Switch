#ifndef HEADER_mindustry_ai_types_CommandAI
#define HEADER_mindustry_ai_types_CommandAI

#include "Clearwing.h"
#include "mindustry/entities/units/AIController.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_types_CommandAI {
	mindustry_entities_units_AIController parent;
	jref F_commandQueue;
	jref F_targetPos;
	jref F_targetBuild;
	jref F_attackTarget;
	jref F_group;
	jint F_groupIndex;
	jref F_unreachableBuildings;
	jint F_readAttackTarget;
	jbool F_stopAtTarget;
	jbool F_stopWhenInRange;
	jref F_lastTargetPos;
	jbool F_blockingUnit;
	jfloat F_timeSpentBlocked;
	jfloat F_payloadPickupCooldown;
	jint F_transferState;
	jref F_command;
	jref F_stances;
	jref F_commandController;
	jref F_lastCommand;
} mindustry_ai_types_CommandAI;

extern Class class_mindustry_ai_types_CommandAI;

extern jint SF_mindustry_ai_types_CommandAI_maxCommandQueueSize;
extern jint SF_mindustry_ai_types_CommandAI_avoidInterval;
extern jobject SF_mindustry_ai_types_CommandAI_moveTarget;
extern jobject SF_mindustry_ai_types_CommandAI_offsetedDestination;
extern jobject SF_mindustry_ai_types_CommandAI_currentDestination;
extern jobject SF_mindustry_ai_types_CommandAI_tmpPayload;
extern jint SF_mindustry_ai_types_CommandAI_transferStateNone;
extern jint SF_mindustry_ai_types_CommandAI_transferStateLoad;
extern jint SF_mindustry_ai_types_CommandAI_transferStateUnload;

#define VTABLE_mindustry_ai_types_CommandAI_hashCode_R_int 0
typedef jint (*func_mindustry_ai_types_CommandAI_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_types_CommandAI_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CommandAI_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_types_CommandAI_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_types_CommandAI_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_types_CommandAI_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_finalize 5
typedef void (*func_mindustry_ai_types_CommandAI_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_notify 6
typedef void (*func_mindustry_ai_types_CommandAI_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_notifyAll 7
typedef void (*func_mindustry_ai_types_CommandAI_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_wait 8
typedef void (*func_mindustry_ai_types_CommandAI_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_wait_long 9
typedef void (*func_mindustry_ai_types_CommandAI_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_types_CommandAI_wait_long_int 10
typedef void (*func_mindustry_ai_types_CommandAI_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_types_CommandAI_unit_mindustry_gen_Unit 11
typedef void (*func_mindustry_ai_types_CommandAI_unit_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CommandAI_unit_R_mindustry_gen_Unit 12
typedef jobject (*func_mindustry_ai_types_CommandAI_unit_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_hit_mindustry_gen_Bullet 13
typedef void (*func_mindustry_ai_types_CommandAI_hit_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CommandAI_isValidController_R_boolean 14
typedef jbool (*func_mindustry_ai_types_CommandAI_isValidController_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_isLogicControllable_R_boolean 15
typedef jbool (*func_mindustry_ai_types_CommandAI_isLogicControllable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_updateUnit 16
typedef void (*func_mindustry_ai_types_CommandAI_updateUnit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_removed_mindustry_gen_Unit 17
typedef void (*func_mindustry_ai_types_CommandAI_removed_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CommandAI_afterRead_mindustry_gen_Unit 18
typedef void (*func_mindustry_ai_types_CommandAI_afterRead_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CommandAI_resetTimers 19
typedef void (*func_mindustry_ai_types_CommandAI_resetTimers)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean 20
typedef jbool (*func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CommandAI_stanceChanged 21
typedef void (*func_mindustry_ai_types_CommandAI_stanceChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_keepState_R_boolean 22
typedef jbool (*func_mindustry_ai_types_CommandAI_keepState_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_stopShooting 23
typedef void (*func_mindustry_ai_types_CommandAI_stopShooting)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_fallback_R_mindustry_entities_units_AIController 24
typedef jobject (*func_mindustry_ai_types_CommandAI_fallback_R_mindustry_entities_units_AIController)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_useFallback_R_boolean 25
typedef jbool (*func_mindustry_ai_types_CommandAI_useFallback_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_updateVisuals 26
typedef void (*func_mindustry_ai_types_CommandAI_updateVisuals)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_updateMovement 27
typedef void (*func_mindustry_ai_types_CommandAI_updateMovement)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_updateTargeting 28
typedef void (*func_mindustry_ai_types_CommandAI_updateTargeting)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_faceTarget 29
typedef void (*func_mindustry_ai_types_CommandAI_faceTarget)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_faceMovement 30
typedef void (*func_mindustry_ai_types_CommandAI_faceMovement)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_invalid_mindustry_gen_Teamc_R_boolean 31
typedef jbool (*func_mindustry_ai_types_CommandAI_invalid_mindustry_gen_Teamc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CommandAI_pathfind_int 32
typedef void (*func_mindustry_ai_types_CommandAI_pathfind_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ai_types_CommandAI_pathfind_int_boolean 33
typedef void (*func_mindustry_ai_types_CommandAI_pathfind_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_mindustry_ai_types_CommandAI_pathfind_int_boolean_boolean 34
typedef void (*func_mindustry_ai_types_CommandAI_pathfind_int_boolean_boolean)(jcontext ctx, jobject self, jint param0, jbool param1, jbool param2);
#define VTABLE_mindustry_ai_types_CommandAI_alterPathfind_arc_math_geom_Vec2_R_arc_math_geom_Vec2 35
typedef jobject (*func_mindustry_ai_types_CommandAI_alterPathfind_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CommandAI_targetInvalidated 36
typedef void (*func_mindustry_ai_types_CommandAI_targetInvalidated)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_updateWeapons 37
typedef void (*func_mindustry_ai_types_CommandAI_updateWeapons)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean 38
typedef jbool (*func_mindustry_ai_types_CommandAI_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ai_types_CommandAI_shouldFire_R_boolean 39
typedef jbool (*func_mindustry_ai_types_CommandAI_shouldFire_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_shouldShoot_R_boolean 40
typedef jbool (*func_mindustry_ai_types_CommandAI_shouldShoot_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc 41
typedef jobject (*func_mindustry_ai_types_CommandAI_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jbool param3);
#define VTABLE_mindustry_ai_types_CommandAI_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc 42
typedef jobject (*func_mindustry_ai_types_CommandAI_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jbool param3);
#define VTABLE_mindustry_ai_types_CommandAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc 43
typedef jobject (*func_mindustry_ai_types_CommandAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4);
#define VTABLE_mindustry_ai_types_CommandAI_retarget_R_boolean 44
typedef jbool (*func_mindustry_ai_types_CommandAI_retarget_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc 45
typedef jobject (*func_mindustry_ai_types_CommandAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4);
#define VTABLE_mindustry_ai_types_CommandAI_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc 46
typedef jobject (*func_mindustry_ai_types_CommandAI_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4);
#define VTABLE_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc 47
typedef void (*func_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2 48
typedef void (*func_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CommandAI_init 49
typedef void (*func_mindustry_ai_types_CommandAI_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_getClosestSpawner_R_mindustry_world_Tile 50
typedef jobject (*func_mindustry_ai_types_CommandAI_getClosestSpawner_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_unloadPayloads 51
typedef void (*func_mindustry_ai_types_CommandAI_unloadPayloads)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_circleAttack_float 52
typedef void (*func_mindustry_ai_types_CommandAI_circleAttack_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ai_types_CommandAI_circle_arc_math_geom_Position_float 53
typedef void (*func_mindustry_ai_types_CommandAI_circle_arc_math_geom_Position_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_ai_types_CommandAI_circle_arc_math_geom_Position_float_float 54
typedef void (*func_mindustry_ai_types_CommandAI_circle_arc_math_geom_Position_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_ai_types_CommandAI_moveTo_arc_math_geom_Position_float 55
typedef void (*func_mindustry_ai_types_CommandAI_moveTo_arc_math_geom_Position_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_ai_types_CommandAI_moveTo_arc_math_geom_Position_float_float 56
typedef void (*func_mindustry_ai_types_CommandAI_moveTo_arc_math_geom_Position_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_ai_types_CommandAI_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2 57
typedef void (*func_mindustry_ai_types_CommandAI_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jbool param3, jobject param4);
#define VTABLE_mindustry_ai_types_CommandAI_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2_boolean 58
typedef void (*func_mindustry_ai_types_CommandAI_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jbool param3, jobject param4, jbool param5);
#define VTABLE_mindustry_ai_types_CommandAI_prefSpeed_R_float 59
typedef jfloat (*func_mindustry_ai_types_CommandAI_prefSpeed_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_lambda$target$1_boolean_mindustry_gen_Building_R_boolean 60
typedef jbool (*func_mindustry_ai_types_CommandAI_lambda$target$1_boolean_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jbool param0, jobject param1);
#define VTABLE_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand 61
typedef jobject (*func_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand 62
typedef void (*func_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance_boolean 63
typedef void (*func_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance 64
typedef void (*func_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CommandAI_disableStance_mindustry_ai_UnitStance 65
typedef void (*func_mindustry_ai_types_CommandAI_disableStance_mindustry_ai_UnitStance)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CommandAI_isAttacking_R_boolean 66
typedef jbool (*func_mindustry_ai_types_CommandAI_isAttacking_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_shouldBoost_R_boolean 67
typedef jbool (*func_mindustry_ai_types_CommandAI_shouldBoost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_clearCommands 68
typedef void (*func_mindustry_ai_types_CommandAI_clearCommands)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_tryPickupUnit_mindustry_gen_Payloadc 69
typedef void (*func_mindustry_ai_types_CommandAI_tryPickupUnit_mindustry_gen_Payloadc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CommandAI_defaultBehavior 70
typedef void (*func_mindustry_ai_types_CommandAI_defaultBehavior)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_finishPath 71
typedef void (*func_mindustry_ai_types_CommandAI_finishPath)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_commandQueue_arc_math_geom_Position 72
typedef void (*func_mindustry_ai_types_CommandAI_commandQueue_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_CommandAI_nearAttackTarget_float_float_float_R_boolean 73
typedef jbool (*func_mindustry_ai_types_CommandAI_nearAttackTarget_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_ai_types_CommandAI_hasCommand_R_boolean 74
typedef jbool (*func_mindustry_ai_types_CommandAI_hasCommand_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_setupLastPos 75
typedef void (*func_mindustry_ai_types_CommandAI_setupLastPos)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2_boolean 76
typedef void (*func_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean 77
typedef void (*func_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_ai_types_CommandAI_lambda$defaultBehavior$0_float_mindustry_gen_Unit_R_boolean 78
typedef jbool (*func_mindustry_ai_types_CommandAI_lambda$defaultBehavior$0_float_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jfloat param0, jobject param1);
#define VTABLE_mindustry_ai_types_CommandAI_lambda$tryPickupUnit$0_mindustry_gen_Payloadc_mindustry_gen_Unit_R_boolean 79
typedef jbool (*func_mindustry_ai_types_CommandAI_lambda$tryPickupUnit$0_mindustry_gen_Payloadc_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_ai_types_CommandAI(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_types_CommandAI(jcontext ctx);
void init_mindustry_ai_types_CommandAI(jcontext ctx, jobject self);
jobject M_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand(jcontext ctx, jobject self);
void M_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_types_CommandAI_disableStance_mindustry_ai_UnitStance(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_types_CommandAI_stanceChanged(jcontext ctx, jobject self);
void M_mindustry_ai_types_CommandAI_init(jcontext ctx, jobject self);
jbool M_mindustry_ai_types_CommandAI_isLogicControllable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_ai_types_CommandAI_isAttacking_R_boolean(jcontext ctx, jobject self);
void M_mindustry_ai_types_CommandAI_updateUnit(jcontext ctx, jobject self);
jbool M_mindustry_ai_types_CommandAI_shouldBoost_R_boolean(jcontext ctx, jobject self);
void M_mindustry_ai_types_CommandAI_clearCommands(jcontext ctx, jobject self);
void M_mindustry_ai_types_CommandAI_tryPickupUnit_mindustry_gen_Payloadc(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_ai_types_CommandAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4);
void M_mindustry_ai_types_CommandAI_defaultBehavior(jcontext ctx, jobject self);
void M_mindustry_ai_types_CommandAI_finishPath(jcontext ctx, jobject self);
void M_mindustry_ai_types_CommandAI_removed_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_types_CommandAI_commandQueue_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_types_CommandAI_afterRead_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_ai_types_CommandAI_shouldFire_R_boolean(jcontext ctx, jobject self);
void M_mindustry_ai_types_CommandAI_hit_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_ai_types_CommandAI_keepState_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_ai_types_CommandAI_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4);
jbool M_mindustry_ai_types_CommandAI_nearAttackTarget_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jbool M_mindustry_ai_types_CommandAI_retarget_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_ai_types_CommandAI_hasCommand_R_boolean(jcontext ctx, jobject self);
void M_mindustry_ai_types_CommandAI_setupLastPos(jcontext ctx, jobject self);
void M_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_mindustry_ai_types_CommandAI_lambda$defaultBehavior$0_float_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jfloat param0, jobject param1);
jbool M_mindustry_ai_types_CommandAI_lambda$tryPickupUnit$0_mindustry_gen_Payloadc_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool SM_mindustry_ai_types_CommandAI_lambda$updateUnit$0_arc_math_geom_Position_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
