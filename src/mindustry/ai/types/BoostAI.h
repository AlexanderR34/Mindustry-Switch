#ifndef HEADER_mindustry_ai_types_BoostAI
#define HEADER_mindustry_ai_types_BoostAI

#include "Clearwing.h"
#include "mindustry/entities/units/AIController.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_types_BoostAI {
	mindustry_entities_units_AIController parent;
} mindustry_ai_types_BoostAI;

extern Class class_mindustry_ai_types_BoostAI;


#define VTABLE_mindustry_ai_types_BoostAI_hashCode_R_int 0
typedef jint (*func_mindustry_ai_types_BoostAI_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_types_BoostAI_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_BoostAI_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_types_BoostAI_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_types_BoostAI_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_types_BoostAI_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_finalize 5
typedef void (*func_mindustry_ai_types_BoostAI_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_notify 6
typedef void (*func_mindustry_ai_types_BoostAI_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_notifyAll 7
typedef void (*func_mindustry_ai_types_BoostAI_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_wait 8
typedef void (*func_mindustry_ai_types_BoostAI_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_wait_long 9
typedef void (*func_mindustry_ai_types_BoostAI_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_types_BoostAI_wait_long_int 10
typedef void (*func_mindustry_ai_types_BoostAI_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_types_BoostAI_unit_mindustry_gen_Unit 11
typedef void (*func_mindustry_ai_types_BoostAI_unit_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_BoostAI_unit_R_mindustry_gen_Unit 12
typedef jobject (*func_mindustry_ai_types_BoostAI_unit_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_hit_mindustry_gen_Bullet 13
typedef void (*func_mindustry_ai_types_BoostAI_hit_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_BoostAI_isValidController_R_boolean 14
typedef jbool (*func_mindustry_ai_types_BoostAI_isValidController_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_isLogicControllable_R_boolean 15
typedef jbool (*func_mindustry_ai_types_BoostAI_isLogicControllable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_updateUnit 16
typedef void (*func_mindustry_ai_types_BoostAI_updateUnit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_removed_mindustry_gen_Unit 17
typedef void (*func_mindustry_ai_types_BoostAI_removed_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_BoostAI_afterRead_mindustry_gen_Unit 18
typedef void (*func_mindustry_ai_types_BoostAI_afterRead_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_BoostAI_resetTimers 19
typedef void (*func_mindustry_ai_types_BoostAI_resetTimers)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_hasStance_mindustry_ai_UnitStance_R_boolean 20
typedef jbool (*func_mindustry_ai_types_BoostAI_hasStance_mindustry_ai_UnitStance_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_BoostAI_stanceChanged 21
typedef void (*func_mindustry_ai_types_BoostAI_stanceChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_keepState_R_boolean 22
typedef jbool (*func_mindustry_ai_types_BoostAI_keepState_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_stopShooting 23
typedef void (*func_mindustry_ai_types_BoostAI_stopShooting)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_fallback_R_mindustry_entities_units_AIController 24
typedef jobject (*func_mindustry_ai_types_BoostAI_fallback_R_mindustry_entities_units_AIController)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_useFallback_R_boolean 25
typedef jbool (*func_mindustry_ai_types_BoostAI_useFallback_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_updateVisuals 26
typedef void (*func_mindustry_ai_types_BoostAI_updateVisuals)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_updateMovement 27
typedef void (*func_mindustry_ai_types_BoostAI_updateMovement)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_updateTargeting 28
typedef void (*func_mindustry_ai_types_BoostAI_updateTargeting)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_faceTarget 29
typedef void (*func_mindustry_ai_types_BoostAI_faceTarget)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_faceMovement 30
typedef void (*func_mindustry_ai_types_BoostAI_faceMovement)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_invalid_mindustry_gen_Teamc_R_boolean 31
typedef jbool (*func_mindustry_ai_types_BoostAI_invalid_mindustry_gen_Teamc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_BoostAI_pathfind_int 32
typedef void (*func_mindustry_ai_types_BoostAI_pathfind_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ai_types_BoostAI_pathfind_int_boolean 33
typedef void (*func_mindustry_ai_types_BoostAI_pathfind_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_mindustry_ai_types_BoostAI_pathfind_int_boolean_boolean 34
typedef void (*func_mindustry_ai_types_BoostAI_pathfind_int_boolean_boolean)(jcontext ctx, jobject self, jint param0, jbool param1, jbool param2);
#define VTABLE_mindustry_ai_types_BoostAI_alterPathfind_arc_math_geom_Vec2_R_arc_math_geom_Vec2 35
typedef jobject (*func_mindustry_ai_types_BoostAI_alterPathfind_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_BoostAI_targetInvalidated 36
typedef void (*func_mindustry_ai_types_BoostAI_targetInvalidated)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_updateWeapons 37
typedef void (*func_mindustry_ai_types_BoostAI_updateWeapons)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean 38
typedef jbool (*func_mindustry_ai_types_BoostAI_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ai_types_BoostAI_shouldFire_R_boolean 39
typedef jbool (*func_mindustry_ai_types_BoostAI_shouldFire_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_shouldShoot_R_boolean 40
typedef jbool (*func_mindustry_ai_types_BoostAI_shouldShoot_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc 41
typedef jobject (*func_mindustry_ai_types_BoostAI_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jbool param3);
#define VTABLE_mindustry_ai_types_BoostAI_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc 42
typedef jobject (*func_mindustry_ai_types_BoostAI_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jbool param3);
#define VTABLE_mindustry_ai_types_BoostAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc 43
typedef jobject (*func_mindustry_ai_types_BoostAI_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4);
#define VTABLE_mindustry_ai_types_BoostAI_retarget_R_boolean 44
typedef jbool (*func_mindustry_ai_types_BoostAI_retarget_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc 45
typedef jobject (*func_mindustry_ai_types_BoostAI_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4);
#define VTABLE_mindustry_ai_types_BoostAI_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc 46
typedef jobject (*func_mindustry_ai_types_BoostAI_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4);
#define VTABLE_mindustry_ai_types_BoostAI_commandTarget_mindustry_gen_Teamc 47
typedef void (*func_mindustry_ai_types_BoostAI_commandTarget_mindustry_gen_Teamc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_BoostAI_commandPosition_arc_math_geom_Vec2 48
typedef void (*func_mindustry_ai_types_BoostAI_commandPosition_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_BoostAI_init 49
typedef void (*func_mindustry_ai_types_BoostAI_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_getClosestSpawner_R_mindustry_world_Tile 50
typedef jobject (*func_mindustry_ai_types_BoostAI_getClosestSpawner_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_unloadPayloads 51
typedef void (*func_mindustry_ai_types_BoostAI_unloadPayloads)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_circleAttack_float 52
typedef void (*func_mindustry_ai_types_BoostAI_circleAttack_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ai_types_BoostAI_circle_arc_math_geom_Position_float 53
typedef void (*func_mindustry_ai_types_BoostAI_circle_arc_math_geom_Position_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_ai_types_BoostAI_circle_arc_math_geom_Position_float_float 54
typedef void (*func_mindustry_ai_types_BoostAI_circle_arc_math_geom_Position_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_ai_types_BoostAI_moveTo_arc_math_geom_Position_float 55
typedef void (*func_mindustry_ai_types_BoostAI_moveTo_arc_math_geom_Position_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_ai_types_BoostAI_moveTo_arc_math_geom_Position_float_float 56
typedef void (*func_mindustry_ai_types_BoostAI_moveTo_arc_math_geom_Position_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_ai_types_BoostAI_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2 57
typedef void (*func_mindustry_ai_types_BoostAI_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jbool param3, jobject param4);
#define VTABLE_mindustry_ai_types_BoostAI_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2_boolean 58
typedef void (*func_mindustry_ai_types_BoostAI_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jbool param3, jobject param4, jbool param5);
#define VTABLE_mindustry_ai_types_BoostAI_prefSpeed_R_float 59
typedef jfloat (*func_mindustry_ai_types_BoostAI_prefSpeed_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_BoostAI_lambda$target$1_boolean_mindustry_gen_Building_R_boolean 60
typedef jbool (*func_mindustry_ai_types_BoostAI_lambda$target$1_boolean_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jbool param0, jobject param1);

void mark_mindustry_ai_types_BoostAI(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_types_BoostAI(jcontext ctx);
void init_mindustry_ai_types_BoostAI(jcontext ctx, jobject self);
void M_mindustry_ai_types_BoostAI_updateUnit(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
