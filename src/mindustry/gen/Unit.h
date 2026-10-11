#ifndef HEADER_mindustry_gen_Unit
#define HEADER_mindustry_gen_Unit

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/IndexableEntity__sync.h"
#include "mindustry/gen/IndexableEntity__unit.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Shieldc.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/gen/Weaponsc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Unit {
	java_lang_Object parent;
	jref F_abilities;
	jfloat F_aimX;
	jfloat F_aimY;
	jfloat F_armor;
	jfloat F_armorOverride;
	jfloat F_buildAlpha;
	jfloat F_buildSpeedMultiplier;
	jfloat F_damageMultiplier;
	jbool F_dead;
	jfloat F_deltaX;
	jfloat F_deltaY;
	jbool F_disarmed;
	jref F_dockedType;
	jfloat F_drag;
	jfloat F_dragMultiplier;
	jfloat F_drownTime;
	jfloat F_elevation;
	jdouble F_flag;
	jbool F_hasPhysicsRef;
	jbool F_hasTarget;
	jfloat F_healTime;
	jfloat F_health;
	jfloat F_healthMultiplier;
	jfloat F_hitSize;
	jfloat F_hitTime;
	jint F_id;
	jint F_index__draw;
	jint F_index__sync;
	jint F_index__unit;
	jbool F_isShooting;
	jfloat F_itemTime;
	jref F_lastCommanded;
	jref F_lastDrownFloor;
	jint F_lastFogPos;
	jlong F_lastUpdated;
	jfloat F_lastX;
	jfloat F_lastY;
	jfloat F_maxHealth;
	jref F_mineTile;
	jfloat F_mineTimer;
	jref F_mounts;
	jref F_plans;
	jfloat F_reloadMultiplier;
	jfloat F_rotation;
	jfloat F_shadowAlpha;
	jfloat F_shield;
	jfloat F_shieldAlpha;
	jbool F_spawnedByCore;
	jfloat F_speedMultiplier;
	jfloat F_splashTimer;
	jref F_stack;
	jref F_team;
	jref F_trail;
	jref F_type;
	jbool F_updateBuilding;
	jlong F_updateSpacing;
	jref F_vel;
	jfloat F_x;
	jfloat F_y;
} mindustry_gen_Unit;

extern Class class_mindustry_gen_Unit;


#define VTABLE_mindustry_gen_Unit_hashCode_R_int 0
typedef jint (*func_mindustry_gen_Unit_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_Unit_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_Unit_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_Unit_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_Unit_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_finalize 5
typedef void (*func_mindustry_gen_Unit_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_notify 6
typedef void (*func_mindustry_gen_Unit_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_notifyAll 7
typedef void (*func_mindustry_gen_Unit_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_wait 8
typedef void (*func_mindustry_gen_Unit_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_wait_long 9
typedef void (*func_mindustry_gen_Unit_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Unit_wait_long_int 10
typedef void (*func_mindustry_gen_Unit_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_Unit_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_gen_Unit_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_gen_Unit_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_isAdded_R_boolean 13
typedef jbool (*func_mindustry_gen_Unit_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_isLocal_R_boolean 14
typedef jbool (*func_mindustry_gen_Unit_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_isRemote_R_boolean 15
typedef jbool (*func_mindustry_gen_Unit_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_serialize_R_boolean 16
typedef jbool (*func_mindustry_gen_Unit_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_classId_R_int 17
typedef jint (*func_mindustry_gen_Unit_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_id_R_int 18
typedef jint (*func_mindustry_gen_Unit_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_add 19
typedef void (*func_mindustry_gen_Unit_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_afterRead 20
typedef void (*func_mindustry_gen_Unit_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_afterReadAll 21
typedef void (*func_mindustry_gen_Unit_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_beforeWrite 22
typedef void (*func_mindustry_gen_Unit_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_id_int 23
typedef void (*func_mindustry_gen_Unit_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Unit_read_arc_util_io_Reads 24
typedef void (*func_mindustry_gen_Unit_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_remove 25
typedef void (*func_mindustry_gen_Unit_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_update 26
typedef void (*func_mindustry_gen_Unit_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_write_arc_util_io_Writes 27
typedef void (*func_mindustry_gen_Unit_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_getX_R_float 28
typedef jfloat (*func_mindustry_gen_Unit_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_getY_R_float 29
typedef jfloat (*func_mindustry_gen_Unit_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_angleTo_arc_math_geom_Position_R_float 30
typedef jfloat (*func_mindustry_gen_Unit_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_angleTo_float_float_R_float 31
typedef jfloat (*func_mindustry_gen_Unit_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_dst2_arc_math_geom_Position_R_float 32
typedef jfloat (*func_mindustry_gen_Unit_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_dst_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_gen_Unit_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_dst_float_float_R_float 34
typedef jfloat (*func_mindustry_gen_Unit_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_dst2_float_float_R_float 35
typedef jfloat (*func_mindustry_gen_Unit_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean 36
typedef jbool (*func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_within_float_float_float_R_boolean 37
typedef jbool (*func_mindustry_gen_Unit_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_gen_Unit_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_onSolid_R_boolean 40
typedef jbool (*func_mindustry_gen_Unit_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_x_R_float 41
typedef jfloat (*func_mindustry_gen_Unit_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_y_R_float 42
typedef jfloat (*func_mindustry_gen_Unit_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_tileX_R_int 43
typedef jint (*func_mindustry_gen_Unit_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_tileY_R_int 44
typedef jint (*func_mindustry_gen_Unit_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_gen_Unit_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_set_arc_math_geom_Position 47
typedef void (*func_mindustry_gen_Unit_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_set_float_float 48
typedef void (*func_mindustry_gen_Unit_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_gen_Unit_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_trns_float_float 50
typedef void (*func_mindustry_gen_Unit_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_x_float 51
typedef void (*func_mindustry_gen_Unit_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_y_float 52
typedef void (*func_mindustry_gen_Unit_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_rotation_R_float 53
typedef jfloat (*func_mindustry_gen_Unit_rotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_rotation_float 54
typedef void (*func_mindustry_gen_Unit_rotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry 55
typedef jobject (*func_mindustry_gen_Unit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float 56
typedef void (*func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect 57
typedef void (*func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_unapply_mindustry_type_StatusEffect 58
typedef void (*func_mindustry_gen_Unit_unapply_mindustry_type_StatusEffect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_statusDamageMultiplier_float 59
typedef void (*func_mindustry_gen_Unit_statusDamageMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_statusReloadMultiplier_float 60
typedef void (*func_mindustry_gen_Unit_statusReloadMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_statusArmor_float 61
typedef void (*func_mindustry_gen_Unit_statusArmor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_statusBuildSpeed_float 62
typedef void (*func_mindustry_gen_Unit_statusBuildSpeed_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_statusDrag_float 63
typedef void (*func_mindustry_gen_Unit_statusDrag_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_statusMaxHealth_float 64
typedef void (*func_mindustry_gen_Unit_statusMaxHealth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_statusSpeed_float 65
typedef void (*func_mindustry_gen_Unit_statusSpeed_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_statusColor_R_arc_graphics_Color 66
typedef jobject (*func_mindustry_gen_Unit_statusColor_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_statusBits_R_arc_struct_Bits 67
typedef jobject (*func_mindustry_gen_Unit_statusBits_R_arc_struct_Bits)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_disarmed_R_boolean 68
typedef jbool (*func_mindustry_gen_Unit_disarmed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_hasEffect_mindustry_type_StatusEffect_R_boolean 69
typedef jbool (*func_mindustry_gen_Unit_hasEffect_mindustry_type_StatusEffect_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_isBoss_R_boolean 70
typedef jbool (*func_mindustry_gen_Unit_isBoss_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_isGrounded_R_boolean 71
typedef jbool (*func_mindustry_gen_Unit_isGrounded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_isImmune_mindustry_type_StatusEffect_R_boolean 72
typedef jbool (*func_mindustry_gen_Unit_isImmune_mindustry_type_StatusEffect_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_armorOverride_R_float 73
typedef jfloat (*func_mindustry_gen_Unit_armorOverride_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_buildSpeedMultiplier_R_float 74
typedef jfloat (*func_mindustry_gen_Unit_buildSpeedMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_damageMultiplier_R_float 75
typedef jfloat (*func_mindustry_gen_Unit_damageMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_dragMultiplier_R_float 76
typedef jfloat (*func_mindustry_gen_Unit_dragMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_getDuration_mindustry_type_StatusEffect_R_float 77
typedef jfloat (*func_mindustry_gen_Unit_getDuration_mindustry_type_StatusEffect_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_healthMultiplier_R_float 78
typedef jfloat (*func_mindustry_gen_Unit_healthMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_reloadMultiplier_R_float 79
typedef jfloat (*func_mindustry_gen_Unit_reloadMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_speedMultiplier_R_float 80
typedef jfloat (*func_mindustry_gen_Unit_speedMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_armorOverride_float 81
typedef void (*func_mindustry_gen_Unit_armorOverride_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_buildSpeedMultiplier_float 82
typedef void (*func_mindustry_gen_Unit_buildSpeedMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_clearStatuses 83
typedef void (*func_mindustry_gen_Unit_clearStatuses)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_damageMultiplier_float 84
typedef void (*func_mindustry_gen_Unit_damageMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_disarmed_boolean 85
typedef void (*func_mindustry_gen_Unit_disarmed_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Unit_dragMultiplier_float 86
typedef void (*func_mindustry_gen_Unit_dragMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_draw 87
typedef void (*func_mindustry_gen_Unit_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_healthMultiplier_float 88
typedef void (*func_mindustry_gen_Unit_healthMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_reloadMultiplier_float 89
typedef void (*func_mindustry_gen_Unit_reloadMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_setDuration_mindustry_type_StatusEffect_float 90
typedef void (*func_mindustry_gen_Unit_setDuration_mindustry_type_StatusEffect_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_speedMultiplier_float 91
typedef void (*func_mindustry_gen_Unit_speedMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean 92
typedef jbool (*func_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_cheating_R_boolean 93
typedef jbool (*func_mindustry_gen_Unit_cheating_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team 94
typedef jobject (*func_mindustry_gen_Unit_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 95
typedef jobject (*func_mindustry_gen_Unit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 96
typedef jobject (*func_mindustry_gen_Unit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 97
typedef jobject (*func_mindustry_gen_Unit_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_team_mindustry_game_Team 98
typedef void (*func_mindustry_gen_Unit_team_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan 99
typedef jobject (*func_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean 100
typedef jbool (*func_mindustry_gen_Unit_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan_boolean 101
typedef void (*func_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan 102
typedef void (*func_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_clearBuilding 103
typedef void (*func_mindustry_gen_Unit_clearBuilding)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_isBuilding_R_boolean 104
typedef jbool (*func_mindustry_gen_Unit_isBuilding_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_plans_R_arc_struct_Queue 105
typedef jobject (*func_mindustry_gen_Unit_plans_R_arc_struct_Queue)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_activelyBuilding_R_boolean 106
typedef jbool (*func_mindustry_gen_Unit_activelyBuilding_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_canBuild_R_boolean 107
typedef jbool (*func_mindustry_gen_Unit_canBuild_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_updateBuilding_R_boolean 108
typedef jbool (*func_mindustry_gen_Unit_updateBuilding_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_buildAlpha_R_float 109
typedef jfloat (*func_mindustry_gen_Unit_buildAlpha_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_buildAlpha_float 110
typedef void (*func_mindustry_gen_Unit_buildAlpha_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_drawBuilding 111
typedef void (*func_mindustry_gen_Unit_drawBuilding)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_drawBuildingBeam_float_float 112
typedef void (*func_mindustry_gen_Unit_drawBuildingBeam_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_drawPlan_mindustry_entities_units_BuildPlan_float 113
typedef void (*func_mindustry_gen_Unit_drawPlan_mindustry_entities_units_BuildPlan_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_drawPlanTop_mindustry_entities_units_BuildPlan_float 114
typedef void (*func_mindustry_gen_Unit_drawPlanTop_mindustry_entities_units_BuildPlan_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_plans_arc_struct_Queue 115
typedef void (*func_mindustry_gen_Unit_plans_arc_struct_Queue)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_removeBuild_int_int_boolean 116
typedef void (*func_mindustry_gen_Unit_removeBuild_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
#define VTABLE_mindustry_gen_Unit_updateBuildLogic 117
typedef void (*func_mindustry_gen_Unit_updateBuildLogic)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_updateBuilding_boolean 118
typedef void (*func_mindustry_gen_Unit_updateBuilding_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Unit_validatePlans 119
typedef void (*func_mindustry_gen_Unit_validatePlans)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_clipSize_R_float 120
typedef jfloat (*func_mindustry_gen_Unit_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_damageArmorMult_float_float 121
typedef void (*func_mindustry_gen_Unit_damageArmorMult_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_damageArmorMult_float_float_boolean 122
typedef void (*func_mindustry_gen_Unit_damageArmorMult_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_gen_Unit_damagePierce_float 123
typedef void (*func_mindustry_gen_Unit_damagePierce_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_damagePierce_float_boolean 124
typedef void (*func_mindustry_gen_Unit_damagePierce_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define VTABLE_mindustry_gen_Unit_healFract_float 125
typedef void (*func_mindustry_gen_Unit_healFract_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_heal_float 126
typedef void (*func_mindustry_gen_Unit_heal_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_damaged_R_boolean 127
typedef jbool (*func_mindustry_gen_Unit_damaged_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_dead_R_boolean 128
typedef jbool (*func_mindustry_gen_Unit_dead_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_isValid_R_boolean 129
typedef jbool (*func_mindustry_gen_Unit_isValid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_health_R_float 130
typedef jfloat (*func_mindustry_gen_Unit_health_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_healthf_R_float 131
typedef jfloat (*func_mindustry_gen_Unit_healthf_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_hitTime_R_float 132
typedef jfloat (*func_mindustry_gen_Unit_hitTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_maxHealth_R_float 133
typedef jfloat (*func_mindustry_gen_Unit_maxHealth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_clampHealth 134
typedef void (*func_mindustry_gen_Unit_clampHealth)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_damage_float 135
typedef void (*func_mindustry_gen_Unit_damage_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_damage_float_boolean 136
typedef void (*func_mindustry_gen_Unit_damage_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define VTABLE_mindustry_gen_Unit_damageContinuous_float 137
typedef void (*func_mindustry_gen_Unit_damageContinuous_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_damageContinuousArmorMult_float_float 138
typedef void (*func_mindustry_gen_Unit_damageContinuousArmorMult_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_damageContinuousPierce_float 139
typedef void (*func_mindustry_gen_Unit_damageContinuousPierce_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_dead_boolean 140
typedef void (*func_mindustry_gen_Unit_dead_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Unit_heal 141
typedef void (*func_mindustry_gen_Unit_heal)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_health_float 142
typedef void (*func_mindustry_gen_Unit_health_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_hitTime_float 143
typedef void (*func_mindustry_gen_Unit_hitTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_kill 144
typedef void (*func_mindustry_gen_Unit_kill)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_killed 145
typedef void (*func_mindustry_gen_Unit_killed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_maxHealth_float 146
typedef void (*func_mindustry_gen_Unit_maxHealth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_hitbox_arc_math_geom_Rect 147
typedef void (*func_mindustry_gen_Unit_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_hitSize_R_float 148
typedef jfloat (*func_mindustry_gen_Unit_hitSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_collides_mindustry_gen_Hitboxc_R_boolean 149
typedef jbool (*func_mindustry_gen_Unit_collides_mindustry_gen_Hitboxc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_deltaAngle_R_float 150
typedef jfloat (*func_mindustry_gen_Unit_deltaAngle_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_deltaLen_R_float 151
typedef jfloat (*func_mindustry_gen_Unit_deltaLen_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_deltaX_R_float 152
typedef jfloat (*func_mindustry_gen_Unit_deltaX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_deltaY_R_float 153
typedef jfloat (*func_mindustry_gen_Unit_deltaY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_lastX_R_float 154
typedef jfloat (*func_mindustry_gen_Unit_lastX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_lastY_R_float 155
typedef jfloat (*func_mindustry_gen_Unit_lastY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_collision_mindustry_gen_Hitboxc_float_float 156
typedef void (*func_mindustry_gen_Unit_collision_mindustry_gen_Hitboxc_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_Unit_deltaX_float 157
typedef void (*func_mindustry_gen_Unit_deltaX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_deltaY_float 158
typedef void (*func_mindustry_gen_Unit_deltaY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_getCollisions_arc_func_Cons 159
typedef void (*func_mindustry_gen_Unit_getCollisions_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_hitSize_float 160
typedef void (*func_mindustry_gen_Unit_hitSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_hitboxTile_arc_math_geom_Rect 161
typedef void (*func_mindustry_gen_Unit_hitboxTile_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_lastX_float 162
typedef void (*func_mindustry_gen_Unit_lastX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_lastY_float 163
typedef void (*func_mindustry_gen_Unit_lastY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_updateLastPosition 164
typedef void (*func_mindustry_gen_Unit_updateLastPosition)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_setIndex__draw_int 165
typedef void (*func_mindustry_gen_Unit_setIndex__draw_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Unit_setIndex__sync_int 166
typedef void (*func_mindustry_gen_Unit_setIndex__sync_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Unit_setIndex__unit_int 167
typedef void (*func_mindustry_gen_Unit_setIndex__unit_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Unit_acceptsItem_mindustry_type_Item_R_boolean 168
typedef jbool (*func_mindustry_gen_Unit_acceptsItem_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_hasItem_R_boolean 169
typedef jbool (*func_mindustry_gen_Unit_hasItem_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_itemTime_R_float 170
typedef jfloat (*func_mindustry_gen_Unit_itemTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_itemCapacity_R_int 171
typedef jint (*func_mindustry_gen_Unit_itemCapacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_maxAccepted_mindustry_type_Item_R_int 172
typedef jint (*func_mindustry_gen_Unit_maxAccepted_mindustry_type_Item_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_item_R_mindustry_type_Item 173
typedef jobject (*func_mindustry_gen_Unit_item_R_mindustry_type_Item)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_stack_R_mindustry_type_ItemStack 174
typedef jobject (*func_mindustry_gen_Unit_stack_R_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_addItem_mindustry_type_Item 175
typedef void (*func_mindustry_gen_Unit_addItem_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_addItem_mindustry_type_Item_int 176
typedef void (*func_mindustry_gen_Unit_addItem_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_gen_Unit_clearItem 177
typedef void (*func_mindustry_gen_Unit_clearItem)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_itemTime_float 178
typedef void (*func_mindustry_gen_Unit_itemTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_stack_mindustry_type_ItemStack 179
typedef void (*func_mindustry_gen_Unit_stack_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_mineTile_R_mindustry_world_Tile 180
typedef jobject (*func_mindustry_gen_Unit_mineTile_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_canMine_R_boolean 181
typedef jbool (*func_mindustry_gen_Unit_canMine_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_canMine_mindustry_type_Item_R_boolean 182
typedef jbool (*func_mindustry_gen_Unit_canMine_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_mining_R_boolean 183
typedef jbool (*func_mindustry_gen_Unit_mining_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_offloadImmediately_R_boolean 184
typedef jbool (*func_mindustry_gen_Unit_offloadImmediately_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_validMine_mindustry_world_Tile_R_boolean 185
typedef jbool (*func_mindustry_gen_Unit_validMine_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_validMine_mindustry_world_Tile_boolean_R_boolean 186
typedef jbool (*func_mindustry_gen_Unit_validMine_mindustry_world_Tile_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_gen_Unit_mineTimer_R_float 187
typedef jfloat (*func_mindustry_gen_Unit_mineTimer_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_getMineResult_mindustry_world_Tile_R_mindustry_type_Item 188
typedef jobject (*func_mindustry_gen_Unit_getMineResult_mindustry_world_Tile_R_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_mineTile_mindustry_world_Tile 189
typedef void (*func_mindustry_gen_Unit_mineTile_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_mineTimer_float 190
typedef void (*func_mindustry_gen_Unit_mineTimer_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_solidity_R_mindustry_entities_EntityCollisions$SolidPred 191
typedef jobject (*func_mindustry_gen_Unit_solidity_R_mindustry_entities_EntityCollisions$SolidPred)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_canPassOn_R_boolean 192
typedef jbool (*func_mindustry_gen_Unit_canPassOn_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_canPass_int_int_R_boolean 193
typedef jbool (*func_mindustry_gen_Unit_canPass_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2 194
typedef jobject (*func_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_ignoreSolids_R_boolean 195
typedef jbool (*func_mindustry_gen_Unit_ignoreSolids_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_moving_R_boolean 196
typedef jbool (*func_mindustry_gen_Unit_moving_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_drag_R_float 197
typedef jfloat (*func_mindustry_gen_Unit_drag_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_drag_float 198
typedef void (*func_mindustry_gen_Unit_drag_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_move_arc_math_geom_Vec2 199
typedef void (*func_mindustry_gen_Unit_move_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_move_float_float 200
typedef void (*func_mindustry_gen_Unit_move_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_vel_arc_math_geom_Vec2 201
typedef void (*func_mindustry_gen_Unit_vel_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_velAddNet_arc_math_geom_Vec2 202
typedef void (*func_mindustry_gen_Unit_velAddNet_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_velAddNet_float_float 203
typedef void (*func_mindustry_gen_Unit_velAddNet_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_hasPhysicsRef_R_boolean 204
typedef jbool (*func_mindustry_gen_Unit_hasPhysicsRef_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_mass_R_float 205
typedef jfloat (*func_mindustry_gen_Unit_mass_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_hasPhysicsRef_boolean 206
typedef void (*func_mindustry_gen_Unit_hasPhysicsRef_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Unit_impulse_arc_math_geom_Vec2 207
typedef void (*func_mindustry_gen_Unit_impulse_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_impulse_float_float 208
typedef void (*func_mindustry_gen_Unit_impulse_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_impulseNet_arc_math_geom_Vec2 209
typedef void (*func_mindustry_gen_Unit_impulseNet_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_shield_R_float 210
typedef jfloat (*func_mindustry_gen_Unit_shield_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_shield_float 211
typedef void (*func_mindustry_gen_Unit_shield_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_shieldAlpha_R_float 212
typedef jfloat (*func_mindustry_gen_Unit_shieldAlpha_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_shieldAlpha_float 213
typedef void (*func_mindustry_gen_Unit_shieldAlpha_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_armor_R_float 214
typedef jfloat (*func_mindustry_gen_Unit_armor_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_armor_float 215
typedef void (*func_mindustry_gen_Unit_armor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_rawDamage_float 216
typedef void (*func_mindustry_gen_Unit_rawDamage_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_isSyncHidden_mindustry_game_Team_R_boolean 217
typedef jbool (*func_mindustry_gen_Unit_isSyncHidden_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_lastUpdated_R_long 218
typedef jlong (*func_mindustry_gen_Unit_lastUpdated_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_updateSpacing_R_long 219
typedef jlong (*func_mindustry_gen_Unit_updateSpacing_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_afterSync 220
typedef void (*func_mindustry_gen_Unit_afterSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_handleSyncHidden 221
typedef void (*func_mindustry_gen_Unit_handleSyncHidden)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_interpolate 222
typedef void (*func_mindustry_gen_Unit_interpolate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_lastUpdated_long 223
typedef void (*func_mindustry_gen_Unit_lastUpdated_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Unit_readSync_arc_util_io_Reads 224
typedef void (*func_mindustry_gen_Unit_readSync_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_readSyncManual_java_nio_FloatBuffer 225
typedef void (*func_mindustry_gen_Unit_readSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_snapInterpolation 226
typedef void (*func_mindustry_gen_Unit_snapInterpolation)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_snapSync 227
typedef void (*func_mindustry_gen_Unit_snapSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_updateSpacing_long 228
typedef void (*func_mindustry_gen_Unit_updateSpacing_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Unit_writeSync_arc_util_io_Writes 229
typedef void (*func_mindustry_gen_Unit_writeSync_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_writeSyncManual_java_nio_FloatBuffer 230
typedef void (*func_mindustry_gen_Unit_writeSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_aim_float_float 231
typedef void (*func_mindustry_gen_Unit_aim_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_aim_float_float_boolean 232
typedef void (*func_mindustry_gen_Unit_aim_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_gen_Unit_mounts_R_Array1_mindustry_entities_units_WeaponMount 233
typedef jobject (*func_mindustry_gen_Unit_mounts_R_Array1_mindustry_entities_units_WeaponMount)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_mounts_Array1_mindustry_entities_units_WeaponMount 234
typedef void (*func_mindustry_gen_Unit_mounts_Array1_mindustry_entities_units_WeaponMount)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_canShoot_R_boolean 235
typedef jbool (*func_mindustry_gen_Unit_canShoot_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_isRotate_R_boolean 236
typedef jbool (*func_mindustry_gen_Unit_isRotate_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_isShooting_R_boolean 237
typedef jbool (*func_mindustry_gen_Unit_isShooting_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_aimX_R_float 238
typedef jfloat (*func_mindustry_gen_Unit_aimX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_aimY_R_float 239
typedef jfloat (*func_mindustry_gen_Unit_aimY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_aim_arc_math_geom_Position 240
typedef void (*func_mindustry_gen_Unit_aim_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_aimX_float 241
typedef void (*func_mindustry_gen_Unit_aimX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_aimY_float 242
typedef void (*func_mindustry_gen_Unit_aimY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_controlWeapons_boolean_boolean 243
typedef void (*func_mindustry_gen_Unit_controlWeapons_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_mindustry_gen_Unit_controlWeapons_boolean 244
typedef void (*func_mindustry_gen_Unit_controlWeapons_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Unit_isShooting_boolean 245
typedef void (*func_mindustry_gen_Unit_isShooting_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Unit_setWeaponRotation_float 246
typedef void (*func_mindustry_gen_Unit_setWeaponRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_setupWeapons_mindustry_type_UnitType 247
typedef void (*func_mindustry_gen_Unit_setupWeapons_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_range_R_float 248
typedef jfloat (*func_mindustry_gen_Unit_range_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_sense_mindustry_logic_LAccess_R_double 249
typedef jdouble (*func_mindustry_gen_Unit_sense_mindustry_logic_LAccess_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_sense_mindustry_ctype_Content_R_double 250
typedef jdouble (*func_mindustry_gen_Unit_sense_mindustry_ctype_Content_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_senseObject_mindustry_logic_LAccess_R_java_lang_Object 251
typedef jobject (*func_mindustry_gen_Unit_senseObject_mindustry_logic_LAccess_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_setProp_mindustry_logic_LAccess_double 252
typedef void (*func_mindustry_gen_Unit_setProp_mindustry_logic_LAccess_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define VTABLE_mindustry_gen_Unit_setProp_mindustry_logic_LAccess_java_lang_Object 253
typedef void (*func_mindustry_gen_Unit_setProp_mindustry_logic_LAccess_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Unit_setProp_mindustry_ctype_UnlockableContent_double 254
typedef void (*func_mindustry_gen_Unit_setProp_mindustry_ctype_UnlockableContent_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define VTABLE_mindustry_gen_Unit_displayable_R_boolean 255
typedef jbool (*func_mindustry_gen_Unit_displayable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_display_arc_scene_ui_layout_Table 256
typedef void (*func_mindustry_gen_Unit_display_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_icon_R_arc_graphics_g2d_TextureRegion 257
typedef jobject (*func_mindustry_gen_Unit_icon_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_physicSize_R_float 258
typedef jfloat (*func_mindustry_gen_Unit_physicSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_getControllerName_R_java_lang_String 259
typedef jobject (*func_mindustry_gen_Unit_getControllerName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_speed_R_float 260
typedef jfloat (*func_mindustry_gen_Unit_speed_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_collisionLayer_R_int 261
typedef jint (*func_mindustry_gen_Unit_collisionLayer_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_prefRotation_R_float 262
typedef jfloat (*func_mindustry_gen_Unit_prefRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_allowCommand_R_boolean 263
typedef jbool (*func_mindustry_gen_Unit_allowCommand_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_isCommandable_R_boolean 264
typedef jbool (*func_mindustry_gen_Unit_isCommandable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_canLand_R_boolean 265
typedef jbool (*func_mindustry_gen_Unit_canLand_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_destroy 266
typedef void (*func_mindustry_gen_Unit_destroy)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_unloaded 267
typedef void (*func_mindustry_gen_Unit_unloaded)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_movePref_arc_math_geom_Vec2 268
typedef void (*func_mindustry_gen_Unit_movePref_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_hasTarget_R_boolean 269
typedef jbool (*func_mindustry_gen_Unit_hasTarget_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_hasTarget_boolean 270
typedef void (*func_mindustry_gen_Unit_hasTarget_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Unit_trail_R_mindustry_graphics_Trail 271
typedef jobject (*func_mindustry_gen_Unit_trail_R_mindustry_graphics_Trail)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_dockedType_R_mindustry_type_UnitType 272
typedef jobject (*func_mindustry_gen_Unit_dockedType_R_mindustry_type_UnitType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_lastDrownFloor_R_mindustry_world_blocks_environment_Floor 273
typedef jobject (*func_mindustry_gen_Unit_lastDrownFloor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player 274
typedef jobject (*func_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_canDrown_R_boolean 275
typedef jbool (*func_mindustry_gen_Unit_canDrown_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_canTarget_mindustry_gen_Teamc_R_boolean 276
typedef jbool (*func_mindustry_gen_Unit_canTarget_mindustry_gen_Teamc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean 277
typedef jbool (*func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_mindustry_gen_Unit_hasWeapons_R_boolean 278
typedef jbool (*func_mindustry_gen_Unit_hasWeapons_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_hittable_R_boolean 279
typedef jbool (*func_mindustry_gen_Unit_hittable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_inRange_arc_math_geom_Position_R_boolean 280
typedef jbool (*func_mindustry_gen_Unit_inRange_arc_math_geom_Position_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_isAI_R_boolean 281
typedef jbool (*func_mindustry_gen_Unit_isAI_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_isEnemy_R_boolean 282
typedef jbool (*func_mindustry_gen_Unit_isEnemy_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_isFlying_R_boolean 283
typedef jbool (*func_mindustry_gen_Unit_isFlying_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_isMissile_R_boolean 284
typedef jbool (*func_mindustry_gen_Unit_isMissile_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_isPathImpassable_int_int_R_boolean 285
typedef jbool (*func_mindustry_gen_Unit_isPathImpassable_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_gen_Unit_isPlayer_R_boolean 286
typedef jbool (*func_mindustry_gen_Unit_isPlayer_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_killable_R_boolean 287
typedef jbool (*func_mindustry_gen_Unit_killable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_playerControllable_R_boolean 288
typedef jbool (*func_mindustry_gen_Unit_playerControllable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_shouldUpdateController_R_boolean 289
typedef jbool (*func_mindustry_gen_Unit_shouldUpdateController_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_spawnedByCore_R_boolean 290
typedef jbool (*func_mindustry_gen_Unit_spawnedByCore_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean 291
typedef jbool (*func_mindustry_gen_Unit_targetable_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_flag_R_double 292
typedef jdouble (*func_mindustry_gen_Unit_flag_R_double)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_ammof_R_float 293
typedef jfloat (*func_mindustry_gen_Unit_ammof_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_bounds_R_float 294
typedef jfloat (*func_mindustry_gen_Unit_bounds_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_drownTime_R_float 295
typedef jfloat (*func_mindustry_gen_Unit_drownTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_elevation_R_float 296
typedef jfloat (*func_mindustry_gen_Unit_elevation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_floorSpeedMultiplier_R_float 297
typedef jfloat (*func_mindustry_gen_Unit_floorSpeedMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_healTime_R_float 298
typedef jfloat (*func_mindustry_gen_Unit_healTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_shadowAlpha_R_float 299
typedef jfloat (*func_mindustry_gen_Unit_shadowAlpha_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_splashTimer_R_float 300
typedef jfloat (*func_mindustry_gen_Unit_splashTimer_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_cap_R_int 301
typedef jint (*func_mindustry_gen_Unit_cap_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_count_R_int 302
typedef jint (*func_mindustry_gen_Unit_count_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_lastFogPos_R_int 303
typedef jint (*func_mindustry_gen_Unit_lastFogPos_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_lastCommanded_R_java_lang_String 304
typedef jobject (*func_mindustry_gen_Unit_lastCommanded_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI 305
typedef jobject (*func_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_abilities_R_Array1_mindustry_entities_abilities_Ability 306
typedef jobject (*func_mindustry_gen_Unit_abilities_R_Array1_mindustry_entities_abilities_Ability)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController 307
typedef jobject (*func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_type_R_mindustry_type_UnitType 308
typedef jobject (*func_mindustry_gen_Unit_type_R_mindustry_type_UnitType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_drownFloor_R_mindustry_world_blocks_environment_Floor 309
typedef jobject (*func_mindustry_gen_Unit_drownFloor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_abilities_Array1_mindustry_entities_abilities_Ability 310
typedef void (*func_mindustry_gen_Unit_abilities_Array1_mindustry_entities_abilities_Ability)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_aimLook_arc_math_geom_Position 311
typedef void (*func_mindustry_gen_Unit_aimLook_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_aimLook_float_float 312
typedef void (*func_mindustry_gen_Unit_aimLook_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_approach_arc_math_geom_Vec2 313
typedef void (*func_mindustry_gen_Unit_approach_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController 314
typedef void (*func_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_dockedType_mindustry_type_UnitType 315
typedef void (*func_mindustry_gen_Unit_dockedType_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_drownTime_float 316
typedef void (*func_mindustry_gen_Unit_drownTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_elevation_float 317
typedef void (*func_mindustry_gen_Unit_elevation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_flag_double 318
typedef void (*func_mindustry_gen_Unit_flag_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_mindustry_gen_Unit_healTime_float 319
typedef void (*func_mindustry_gen_Unit_healTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_landed 320
typedef void (*func_mindustry_gen_Unit_landed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_lastCommanded_java_lang_String 321
typedef void (*func_mindustry_gen_Unit_lastCommanded_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_lastDrownFloor_mindustry_world_blocks_environment_Floor 322
typedef void (*func_mindustry_gen_Unit_lastDrownFloor_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_lastFogPos_int 323
typedef void (*func_mindustry_gen_Unit_lastFogPos_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Unit_lookAt_arc_math_geom_Position 324
typedef void (*func_mindustry_gen_Unit_lookAt_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_lookAt_float 325
typedef void (*func_mindustry_gen_Unit_lookAt_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_lookAt_float_float 326
typedef void (*func_mindustry_gen_Unit_lookAt_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_moveAt_arc_math_geom_Vec2 327
typedef void (*func_mindustry_gen_Unit_moveAt_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_moveAt_arc_math_geom_Vec2_float 328
typedef void (*func_mindustry_gen_Unit_moveAt_arc_math_geom_Vec2_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Unit_resetController 329
typedef void (*func_mindustry_gen_Unit_resetController)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_rotateMove_arc_math_geom_Vec2 330
typedef void (*func_mindustry_gen_Unit_rotateMove_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_set_mindustry_type_UnitType_mindustry_entities_units_UnitController 331
typedef void (*func_mindustry_gen_Unit_set_mindustry_type_UnitType_mindustry_entities_units_UnitController)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Unit_setType_mindustry_type_UnitType 332
typedef void (*func_mindustry_gen_Unit_setType_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_shadowAlpha_float 333
typedef void (*func_mindustry_gen_Unit_shadowAlpha_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_spawnedByCore_boolean 334
typedef void (*func_mindustry_gen_Unit_spawnedByCore_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Unit_splashTimer_float 335
typedef void (*func_mindustry_gen_Unit_splashTimer_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Unit_trail_mindustry_graphics_Trail 336
typedef void (*func_mindustry_gen_Unit_trail_mindustry_graphics_Trail)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_type_mindustry_type_UnitType 337
typedef void (*func_mindustry_gen_Unit_type_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Unit_updateBoosting_boolean 338
typedef void (*func_mindustry_gen_Unit_updateBoosting_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Unit_updateBoosting_boolean_boolean 339
typedef void (*func_mindustry_gen_Unit_updateBoosting_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_mindustry_gen_Unit_updateDrowning 340
typedef void (*func_mindustry_gen_Unit_updateDrowning)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Unit_wobble 341
typedef void (*func_mindustry_gen_Unit_wobble)(jcontext ctx, jobject self);

void mark_mindustry_gen_Unit(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Unit(jcontext ctx);
void init_mindustry_gen_Unit(jcontext ctx, jobject self);
jobject M_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2(jcontext ctx, jobject self);
jobject M_mindustry_gen_Unit_plans_R_arc_struct_Queue(jcontext ctx, jobject self);
jbool M_mindustry_gen_Unit_dead_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Unit_disarmed_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Unit_hasPhysicsRef_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Unit_hasTarget_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Unit_isShooting_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Unit_spawnedByCore_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Unit_updateBuilding_R_boolean(jcontext ctx, jobject self);
jdouble M_mindustry_gen_Unit_flag_R_double(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_aimX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_aimY_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_armor_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_armorOverride_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_buildAlpha_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_buildSpeedMultiplier_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_damageMultiplier_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_deltaX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_deltaY_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_drag_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_dragMultiplier_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_drownTime_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_elevation_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_healTime_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_health_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_healthMultiplier_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_hitTime_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_itemTime_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_lastX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_lastY_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_maxHealth_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_mineTimer_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_reloadMultiplier_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_rotation_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_shadowAlpha_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_shield_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_shieldAlpha_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_speedMultiplier_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_splashTimer_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_x_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Unit_y_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_Unit_id_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Unit_lastFogPos_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_Unit_lastCommanded_R_java_lang_String(jcontext ctx, jobject self);
jlong M_mindustry_gen_Unit_lastUpdated_R_long(jcontext ctx, jobject self);
jlong M_mindustry_gen_Unit_updateSpacing_R_long(jcontext ctx, jobject self);
jobject M_mindustry_gen_Unit_abilities_R_Array1_mindustry_entities_abilities_Ability(jcontext ctx, jobject self);
jobject M_mindustry_gen_Unit_mounts_R_Array1_mindustry_entities_units_WeaponMount(jcontext ctx, jobject self);
jobject M_mindustry_gen_Unit_team_R_mindustry_game_Team(jcontext ctx, jobject self);
jobject M_mindustry_gen_Unit_trail_R_mindustry_graphics_Trail(jcontext ctx, jobject self);
jobject M_mindustry_gen_Unit_stack_R_mindustry_type_ItemStack(jcontext ctx, jobject self);
jobject M_mindustry_gen_Unit_dockedType_R_mindustry_type_UnitType(jcontext ctx, jobject self);
jobject M_mindustry_gen_Unit_type_R_mindustry_type_UnitType(jcontext ctx, jobject self);
jobject M_mindustry_gen_Unit_mineTile_R_mindustry_world_Tile(jcontext ctx, jobject self);
jobject M_mindustry_gen_Unit_lastDrownFloor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
void M_mindustry_gen_Unit_abilities_Array1_mindustry_entities_abilities_Ability(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Unit_aimX_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_aimY_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_armor_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_armorOverride_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_buildAlpha_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_buildSpeedMultiplier_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_damageMultiplier_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_dead_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Unit_deltaX_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_deltaY_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_disarmed_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Unit_dockedType_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Unit_drag_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_dragMultiplier_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_drownTime_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_elevation_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_flag_double(jcontext ctx, jobject self, jdouble param0);
void M_mindustry_gen_Unit_hasPhysicsRef_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Unit_hasTarget_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Unit_healTime_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_health_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_healthMultiplier_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_hitSize_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_hitTime_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_id_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Unit_isShooting_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Unit_itemTime_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_lastCommanded_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Unit_lastDrownFloor_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Unit_lastFogPos_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Unit_lastUpdated_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_gen_Unit_lastX_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_lastY_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_maxHealth_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_mineTile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Unit_mineTimer_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_mounts_Array1_mindustry_entities_units_WeaponMount(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Unit_plans_arc_struct_Queue(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Unit_reloadMultiplier_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_rotation_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_setIndex__draw_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Unit_setIndex__sync_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Unit_setIndex__unit_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Unit_shadowAlpha_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_shield_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_shieldAlpha_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_spawnedByCore_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Unit_speedMultiplier_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_splashTimer_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_stack_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Unit_team_mindustry_game_Team(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Unit_trail_mindustry_graphics_Trail(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Unit_type_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Unit_updateBuilding_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Unit_updateSpacing_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_gen_Unit_vel_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Unit_x_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Unit_y_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
