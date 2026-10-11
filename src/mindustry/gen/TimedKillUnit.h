#ifndef HEADER_mindustry_gen_TimedKillUnit
#define HEADER_mindustry_gen_TimedKillUnit

#include "Clearwing.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Shieldc.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/TimedKillc.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/gen/Weaponsc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_TimedKillUnit {
	mindustry_gen_Unit parent;
	jbool F_added;
	jref F_applied;
	jfloat F_buildCounter;
	jref F_controller;
	jbool F_isRotate;
	jref F_lastActive;
	jint F_lastSize;
	jfloat F_lifetime;
	jfloat F_resupplyTime;
	jfloat F_rotation_LAST_;
	jfloat F_rotation_TARGET_;
	jref F_statuses;
	jfloat F_time;
	jbool F_wasFlying;
	jbool F_wasHealed;
	jbool F_wasPlayer;
	jfloat F_x_LAST_;
	jfloat F_x_TARGET_;
	jfloat F_y_LAST_;
	jfloat F_y_TARGET_;
} mindustry_gen_TimedKillUnit;

extern Class class_mindustry_gen_TimedKillUnit;

extern jfloat SF_mindustry_gen_TimedKillUnit_hitDuration;
extern jobject SF_mindustry_gen_TimedKillUnit_tmp1;
extern jobject SF_mindustry_gen_TimedKillUnit_tmp2;
extern jfloat SF_mindustry_gen_TimedKillUnit_warpDst;

#define VTABLE_mindustry_gen_TimedKillUnit_hashCode_R_int 0
typedef jint (*func_mindustry_gen_TimedKillUnit_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_TimedKillUnit_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_TimedKillUnit_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_TimedKillUnit_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_TimedKillUnit_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_finalize 5
typedef void (*func_mindustry_gen_TimedKillUnit_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_notify 6
typedef void (*func_mindustry_gen_TimedKillUnit_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_notifyAll 7
typedef void (*func_mindustry_gen_TimedKillUnit_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_wait 8
typedef void (*func_mindustry_gen_TimedKillUnit_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_wait_long 9
typedef void (*func_mindustry_gen_TimedKillUnit_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_TimedKillUnit_wait_long_int 10
typedef void (*func_mindustry_gen_TimedKillUnit_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_TimedKillUnit_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_gen_TimedKillUnit_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_gen_TimedKillUnit_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_isAdded_R_boolean 13
typedef jbool (*func_mindustry_gen_TimedKillUnit_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_isLocal_R_boolean 14
typedef jbool (*func_mindustry_gen_TimedKillUnit_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_isRemote_R_boolean 15
typedef jbool (*func_mindustry_gen_TimedKillUnit_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_serialize_R_boolean 16
typedef jbool (*func_mindustry_gen_TimedKillUnit_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_classId_R_int 17
typedef jint (*func_mindustry_gen_TimedKillUnit_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_id_R_int 18
typedef jint (*func_mindustry_gen_TimedKillUnit_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_add 19
typedef void (*func_mindustry_gen_TimedKillUnit_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_afterRead 20
typedef void (*func_mindustry_gen_TimedKillUnit_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_afterReadAll 21
typedef void (*func_mindustry_gen_TimedKillUnit_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_beforeWrite 22
typedef void (*func_mindustry_gen_TimedKillUnit_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_id_int 23
typedef void (*func_mindustry_gen_TimedKillUnit_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_TimedKillUnit_read_arc_util_io_Reads 24
typedef void (*func_mindustry_gen_TimedKillUnit_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_remove 25
typedef void (*func_mindustry_gen_TimedKillUnit_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_update 26
typedef void (*func_mindustry_gen_TimedKillUnit_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_write_arc_util_io_Writes 27
typedef void (*func_mindustry_gen_TimedKillUnit_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_getX_R_float 28
typedef jfloat (*func_mindustry_gen_TimedKillUnit_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_getY_R_float 29
typedef jfloat (*func_mindustry_gen_TimedKillUnit_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_angleTo_arc_math_geom_Position_R_float 30
typedef jfloat (*func_mindustry_gen_TimedKillUnit_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_angleTo_float_float_R_float 31
typedef jfloat (*func_mindustry_gen_TimedKillUnit_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_dst2_arc_math_geom_Position_R_float 32
typedef jfloat (*func_mindustry_gen_TimedKillUnit_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_dst_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_gen_TimedKillUnit_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_dst_float_float_R_float 34
typedef jfloat (*func_mindustry_gen_TimedKillUnit_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_dst2_float_float_R_float 35
typedef jfloat (*func_mindustry_gen_TimedKillUnit_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_within_arc_math_geom_Position_float_R_boolean 36
typedef jbool (*func_mindustry_gen_TimedKillUnit_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_within_float_float_float_R_boolean 37
typedef jbool (*func_mindustry_gen_TimedKillUnit_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_TimedKillUnit_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_gen_TimedKillUnit_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_gen_TimedKillUnit_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_onSolid_R_boolean 40
typedef jbool (*func_mindustry_gen_TimedKillUnit_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_x_R_float 41
typedef jfloat (*func_mindustry_gen_TimedKillUnit_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_y_R_float 42
typedef jfloat (*func_mindustry_gen_TimedKillUnit_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_tileX_R_int 43
typedef jint (*func_mindustry_gen_TimedKillUnit_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_tileY_R_int 44
typedef jint (*func_mindustry_gen_TimedKillUnit_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_gen_TimedKillUnit_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_gen_TimedKillUnit_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_set_arc_math_geom_Position 47
typedef void (*func_mindustry_gen_TimedKillUnit_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_set_float_float 48
typedef void (*func_mindustry_gen_TimedKillUnit_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_gen_TimedKillUnit_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_trns_float_float 50
typedef void (*func_mindustry_gen_TimedKillUnit_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_x_float 51
typedef void (*func_mindustry_gen_TimedKillUnit_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_y_float 52
typedef void (*func_mindustry_gen_TimedKillUnit_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_rotation_R_float 53
typedef jfloat (*func_mindustry_gen_TimedKillUnit_rotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_rotation_float 54
typedef void (*func_mindustry_gen_TimedKillUnit_rotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry 55
typedef jobject (*func_mindustry_gen_TimedKillUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_apply_mindustry_type_StatusEffect_float 56
typedef void (*func_mindustry_gen_TimedKillUnit_apply_mindustry_type_StatusEffect_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_apply_mindustry_type_StatusEffect 57
typedef void (*func_mindustry_gen_TimedKillUnit_apply_mindustry_type_StatusEffect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_unapply_mindustry_type_StatusEffect 58
typedef void (*func_mindustry_gen_TimedKillUnit_unapply_mindustry_type_StatusEffect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_statusDamageMultiplier_float 59
typedef void (*func_mindustry_gen_TimedKillUnit_statusDamageMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_statusReloadMultiplier_float 60
typedef void (*func_mindustry_gen_TimedKillUnit_statusReloadMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_statusArmor_float 61
typedef void (*func_mindustry_gen_TimedKillUnit_statusArmor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_statusBuildSpeed_float 62
typedef void (*func_mindustry_gen_TimedKillUnit_statusBuildSpeed_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_statusDrag_float 63
typedef void (*func_mindustry_gen_TimedKillUnit_statusDrag_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_statusMaxHealth_float 64
typedef void (*func_mindustry_gen_TimedKillUnit_statusMaxHealth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_statusSpeed_float 65
typedef void (*func_mindustry_gen_TimedKillUnit_statusSpeed_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_statusColor_R_arc_graphics_Color 66
typedef jobject (*func_mindustry_gen_TimedKillUnit_statusColor_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_statusBits_R_arc_struct_Bits 67
typedef jobject (*func_mindustry_gen_TimedKillUnit_statusBits_R_arc_struct_Bits)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_disarmed_R_boolean 68
typedef jbool (*func_mindustry_gen_TimedKillUnit_disarmed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_hasEffect_mindustry_type_StatusEffect_R_boolean 69
typedef jbool (*func_mindustry_gen_TimedKillUnit_hasEffect_mindustry_type_StatusEffect_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_isBoss_R_boolean 70
typedef jbool (*func_mindustry_gen_TimedKillUnit_isBoss_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_isGrounded_R_boolean 71
typedef jbool (*func_mindustry_gen_TimedKillUnit_isGrounded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_isImmune_mindustry_type_StatusEffect_R_boolean 72
typedef jbool (*func_mindustry_gen_TimedKillUnit_isImmune_mindustry_type_StatusEffect_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_armorOverride_R_float 73
typedef jfloat (*func_mindustry_gen_TimedKillUnit_armorOverride_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_buildSpeedMultiplier_R_float 74
typedef jfloat (*func_mindustry_gen_TimedKillUnit_buildSpeedMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_damageMultiplier_R_float 75
typedef jfloat (*func_mindustry_gen_TimedKillUnit_damageMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_dragMultiplier_R_float 76
typedef jfloat (*func_mindustry_gen_TimedKillUnit_dragMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_getDuration_mindustry_type_StatusEffect_R_float 77
typedef jfloat (*func_mindustry_gen_TimedKillUnit_getDuration_mindustry_type_StatusEffect_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_healthMultiplier_R_float 78
typedef jfloat (*func_mindustry_gen_TimedKillUnit_healthMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_reloadMultiplier_R_float 79
typedef jfloat (*func_mindustry_gen_TimedKillUnit_reloadMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_speedMultiplier_R_float 80
typedef jfloat (*func_mindustry_gen_TimedKillUnit_speedMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_armorOverride_float 81
typedef void (*func_mindustry_gen_TimedKillUnit_armorOverride_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_buildSpeedMultiplier_float 82
typedef void (*func_mindustry_gen_TimedKillUnit_buildSpeedMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_clearStatuses 83
typedef void (*func_mindustry_gen_TimedKillUnit_clearStatuses)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_damageMultiplier_float 84
typedef void (*func_mindustry_gen_TimedKillUnit_damageMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_disarmed_boolean 85
typedef void (*func_mindustry_gen_TimedKillUnit_disarmed_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_TimedKillUnit_dragMultiplier_float 86
typedef void (*func_mindustry_gen_TimedKillUnit_dragMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_draw 87
typedef void (*func_mindustry_gen_TimedKillUnit_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_healthMultiplier_float 88
typedef void (*func_mindustry_gen_TimedKillUnit_healthMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_reloadMultiplier_float 89
typedef void (*func_mindustry_gen_TimedKillUnit_reloadMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_setDuration_mindustry_type_StatusEffect_float 90
typedef void (*func_mindustry_gen_TimedKillUnit_setDuration_mindustry_type_StatusEffect_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_speedMultiplier_float 91
typedef void (*func_mindustry_gen_TimedKillUnit_speedMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_inFogTo_mindustry_game_Team_R_boolean 92
typedef jbool (*func_mindustry_gen_TimedKillUnit_inFogTo_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_cheating_R_boolean 93
typedef jbool (*func_mindustry_gen_TimedKillUnit_cheating_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_team_R_mindustry_game_Team 94
typedef jobject (*func_mindustry_gen_TimedKillUnit_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 95
typedef jobject (*func_mindustry_gen_TimedKillUnit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 96
typedef jobject (*func_mindustry_gen_TimedKillUnit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 97
typedef jobject (*func_mindustry_gen_TimedKillUnit_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_team_mindustry_game_Team 98
typedef void (*func_mindustry_gen_TimedKillUnit_team_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_buildPlan_R_mindustry_entities_units_BuildPlan 99
typedef jobject (*func_mindustry_gen_TimedKillUnit_buildPlan_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean 100
typedef jbool (*func_mindustry_gen_TimedKillUnit_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_TimedKillUnit_addBuild_mindustry_entities_units_BuildPlan_boolean 101
typedef void (*func_mindustry_gen_TimedKillUnit_addBuild_mindustry_entities_units_BuildPlan_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_gen_TimedKillUnit_addBuild_mindustry_entities_units_BuildPlan 102
typedef void (*func_mindustry_gen_TimedKillUnit_addBuild_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_clearBuilding 103
typedef void (*func_mindustry_gen_TimedKillUnit_clearBuilding)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_isBuilding_R_boolean 104
typedef jbool (*func_mindustry_gen_TimedKillUnit_isBuilding_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_plans_R_arc_struct_Queue 105
typedef jobject (*func_mindustry_gen_TimedKillUnit_plans_R_arc_struct_Queue)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_activelyBuilding_R_boolean 106
typedef jbool (*func_mindustry_gen_TimedKillUnit_activelyBuilding_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_canBuild_R_boolean 107
typedef jbool (*func_mindustry_gen_TimedKillUnit_canBuild_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_updateBuilding_R_boolean 108
typedef jbool (*func_mindustry_gen_TimedKillUnit_updateBuilding_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_buildAlpha_R_float 109
typedef jfloat (*func_mindustry_gen_TimedKillUnit_buildAlpha_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_buildAlpha_float 110
typedef void (*func_mindustry_gen_TimedKillUnit_buildAlpha_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_drawBuilding 111
typedef void (*func_mindustry_gen_TimedKillUnit_drawBuilding)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_drawBuildingBeam_float_float 112
typedef void (*func_mindustry_gen_TimedKillUnit_drawBuildingBeam_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_drawPlan_mindustry_entities_units_BuildPlan_float 113
typedef void (*func_mindustry_gen_TimedKillUnit_drawPlan_mindustry_entities_units_BuildPlan_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_drawPlanTop_mindustry_entities_units_BuildPlan_float 114
typedef void (*func_mindustry_gen_TimedKillUnit_drawPlanTop_mindustry_entities_units_BuildPlan_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_plans_arc_struct_Queue 115
typedef void (*func_mindustry_gen_TimedKillUnit_plans_arc_struct_Queue)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_removeBuild_int_int_boolean 116
typedef void (*func_mindustry_gen_TimedKillUnit_removeBuild_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
#define VTABLE_mindustry_gen_TimedKillUnit_updateBuildLogic 117
typedef void (*func_mindustry_gen_TimedKillUnit_updateBuildLogic)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_updateBuilding_boolean 118
typedef void (*func_mindustry_gen_TimedKillUnit_updateBuilding_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_TimedKillUnit_validatePlans 119
typedef void (*func_mindustry_gen_TimedKillUnit_validatePlans)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_clipSize_R_float 120
typedef jfloat (*func_mindustry_gen_TimedKillUnit_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_damageArmorMult_float_float 121
typedef void (*func_mindustry_gen_TimedKillUnit_damageArmorMult_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_damageArmorMult_float_float_boolean 122
typedef void (*func_mindustry_gen_TimedKillUnit_damageArmorMult_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_gen_TimedKillUnit_damagePierce_float 123
typedef void (*func_mindustry_gen_TimedKillUnit_damagePierce_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_damagePierce_float_boolean 124
typedef void (*func_mindustry_gen_TimedKillUnit_damagePierce_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define VTABLE_mindustry_gen_TimedKillUnit_healFract_float 125
typedef void (*func_mindustry_gen_TimedKillUnit_healFract_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_heal_float 126
typedef void (*func_mindustry_gen_TimedKillUnit_heal_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_damaged_R_boolean 127
typedef jbool (*func_mindustry_gen_TimedKillUnit_damaged_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_dead_R_boolean 128
typedef jbool (*func_mindustry_gen_TimedKillUnit_dead_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_isValid_R_boolean 129
typedef jbool (*func_mindustry_gen_TimedKillUnit_isValid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_health_R_float 130
typedef jfloat (*func_mindustry_gen_TimedKillUnit_health_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_healthf_R_float 131
typedef jfloat (*func_mindustry_gen_TimedKillUnit_healthf_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_hitTime_R_float 132
typedef jfloat (*func_mindustry_gen_TimedKillUnit_hitTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_maxHealth_R_float 133
typedef jfloat (*func_mindustry_gen_TimedKillUnit_maxHealth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_clampHealth 134
typedef void (*func_mindustry_gen_TimedKillUnit_clampHealth)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_damage_float 135
typedef void (*func_mindustry_gen_TimedKillUnit_damage_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_damage_float_boolean 136
typedef void (*func_mindustry_gen_TimedKillUnit_damage_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define VTABLE_mindustry_gen_TimedKillUnit_damageContinuous_float 137
typedef void (*func_mindustry_gen_TimedKillUnit_damageContinuous_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_damageContinuousArmorMult_float_float 138
typedef void (*func_mindustry_gen_TimedKillUnit_damageContinuousArmorMult_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_damageContinuousPierce_float 139
typedef void (*func_mindustry_gen_TimedKillUnit_damageContinuousPierce_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_dead_boolean 140
typedef void (*func_mindustry_gen_TimedKillUnit_dead_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_TimedKillUnit_heal 141
typedef void (*func_mindustry_gen_TimedKillUnit_heal)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_health_float 142
typedef void (*func_mindustry_gen_TimedKillUnit_health_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_hitTime_float 143
typedef void (*func_mindustry_gen_TimedKillUnit_hitTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_kill 144
typedef void (*func_mindustry_gen_TimedKillUnit_kill)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_killed 145
typedef void (*func_mindustry_gen_TimedKillUnit_killed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_maxHealth_float 146
typedef void (*func_mindustry_gen_TimedKillUnit_maxHealth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_hitbox_arc_math_geom_Rect 147
typedef void (*func_mindustry_gen_TimedKillUnit_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_hitSize_R_float 148
typedef jfloat (*func_mindustry_gen_TimedKillUnit_hitSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_collides_mindustry_gen_Hitboxc_R_boolean 149
typedef jbool (*func_mindustry_gen_TimedKillUnit_collides_mindustry_gen_Hitboxc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_deltaAngle_R_float 150
typedef jfloat (*func_mindustry_gen_TimedKillUnit_deltaAngle_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_deltaLen_R_float 151
typedef jfloat (*func_mindustry_gen_TimedKillUnit_deltaLen_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_deltaX_R_float 152
typedef jfloat (*func_mindustry_gen_TimedKillUnit_deltaX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_deltaY_R_float 153
typedef jfloat (*func_mindustry_gen_TimedKillUnit_deltaY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_lastX_R_float 154
typedef jfloat (*func_mindustry_gen_TimedKillUnit_lastX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_lastY_R_float 155
typedef jfloat (*func_mindustry_gen_TimedKillUnit_lastY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_collision_mindustry_gen_Hitboxc_float_float 156
typedef void (*func_mindustry_gen_TimedKillUnit_collision_mindustry_gen_Hitboxc_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_TimedKillUnit_deltaX_float 157
typedef void (*func_mindustry_gen_TimedKillUnit_deltaX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_deltaY_float 158
typedef void (*func_mindustry_gen_TimedKillUnit_deltaY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_getCollisions_arc_func_Cons 159
typedef void (*func_mindustry_gen_TimedKillUnit_getCollisions_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_hitSize_float 160
typedef void (*func_mindustry_gen_TimedKillUnit_hitSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_hitboxTile_arc_math_geom_Rect 161
typedef void (*func_mindustry_gen_TimedKillUnit_hitboxTile_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_lastX_float 162
typedef void (*func_mindustry_gen_TimedKillUnit_lastX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_lastY_float 163
typedef void (*func_mindustry_gen_TimedKillUnit_lastY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_updateLastPosition 164
typedef void (*func_mindustry_gen_TimedKillUnit_updateLastPosition)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_setIndex__draw_int 165
typedef void (*func_mindustry_gen_TimedKillUnit_setIndex__draw_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_TimedKillUnit_setIndex__sync_int 166
typedef void (*func_mindustry_gen_TimedKillUnit_setIndex__sync_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_TimedKillUnit_setIndex__unit_int 167
typedef void (*func_mindustry_gen_TimedKillUnit_setIndex__unit_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_TimedKillUnit_acceptsItem_mindustry_type_Item_R_boolean 168
typedef jbool (*func_mindustry_gen_TimedKillUnit_acceptsItem_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_hasItem_R_boolean 169
typedef jbool (*func_mindustry_gen_TimedKillUnit_hasItem_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_itemTime_R_float 170
typedef jfloat (*func_mindustry_gen_TimedKillUnit_itemTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_itemCapacity_R_int 171
typedef jint (*func_mindustry_gen_TimedKillUnit_itemCapacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_maxAccepted_mindustry_type_Item_R_int 172
typedef jint (*func_mindustry_gen_TimedKillUnit_maxAccepted_mindustry_type_Item_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_item_R_mindustry_type_Item 173
typedef jobject (*func_mindustry_gen_TimedKillUnit_item_R_mindustry_type_Item)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_stack_R_mindustry_type_ItemStack 174
typedef jobject (*func_mindustry_gen_TimedKillUnit_stack_R_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_addItem_mindustry_type_Item 175
typedef void (*func_mindustry_gen_TimedKillUnit_addItem_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_addItem_mindustry_type_Item_int 176
typedef void (*func_mindustry_gen_TimedKillUnit_addItem_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_gen_TimedKillUnit_clearItem 177
typedef void (*func_mindustry_gen_TimedKillUnit_clearItem)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_itemTime_float 178
typedef void (*func_mindustry_gen_TimedKillUnit_itemTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_stack_mindustry_type_ItemStack 179
typedef void (*func_mindustry_gen_TimedKillUnit_stack_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_mineTile_R_mindustry_world_Tile 180
typedef jobject (*func_mindustry_gen_TimedKillUnit_mineTile_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_canMine_R_boolean 181
typedef jbool (*func_mindustry_gen_TimedKillUnit_canMine_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_canMine_mindustry_type_Item_R_boolean 182
typedef jbool (*func_mindustry_gen_TimedKillUnit_canMine_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_mining_R_boolean 183
typedef jbool (*func_mindustry_gen_TimedKillUnit_mining_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_offloadImmediately_R_boolean 184
typedef jbool (*func_mindustry_gen_TimedKillUnit_offloadImmediately_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_validMine_mindustry_world_Tile_R_boolean 185
typedef jbool (*func_mindustry_gen_TimedKillUnit_validMine_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_validMine_mindustry_world_Tile_boolean_R_boolean 186
typedef jbool (*func_mindustry_gen_TimedKillUnit_validMine_mindustry_world_Tile_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_gen_TimedKillUnit_mineTimer_R_float 187
typedef jfloat (*func_mindustry_gen_TimedKillUnit_mineTimer_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_getMineResult_mindustry_world_Tile_R_mindustry_type_Item 188
typedef jobject (*func_mindustry_gen_TimedKillUnit_getMineResult_mindustry_world_Tile_R_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_mineTile_mindustry_world_Tile 189
typedef void (*func_mindustry_gen_TimedKillUnit_mineTile_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_mineTimer_float 190
typedef void (*func_mindustry_gen_TimedKillUnit_mineTimer_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_solidity_R_mindustry_entities_EntityCollisions$SolidPred 191
typedef jobject (*func_mindustry_gen_TimedKillUnit_solidity_R_mindustry_entities_EntityCollisions$SolidPred)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_canPassOn_R_boolean 192
typedef jbool (*func_mindustry_gen_TimedKillUnit_canPassOn_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_canPass_int_int_R_boolean 193
typedef jbool (*func_mindustry_gen_TimedKillUnit_canPass_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_gen_TimedKillUnit_vel_R_arc_math_geom_Vec2 194
typedef jobject (*func_mindustry_gen_TimedKillUnit_vel_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_ignoreSolids_R_boolean 195
typedef jbool (*func_mindustry_gen_TimedKillUnit_ignoreSolids_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_moving_R_boolean 196
typedef jbool (*func_mindustry_gen_TimedKillUnit_moving_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_drag_R_float 197
typedef jfloat (*func_mindustry_gen_TimedKillUnit_drag_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_drag_float 198
typedef void (*func_mindustry_gen_TimedKillUnit_drag_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_move_arc_math_geom_Vec2 199
typedef void (*func_mindustry_gen_TimedKillUnit_move_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_move_float_float 200
typedef void (*func_mindustry_gen_TimedKillUnit_move_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_vel_arc_math_geom_Vec2 201
typedef void (*func_mindustry_gen_TimedKillUnit_vel_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_velAddNet_arc_math_geom_Vec2 202
typedef void (*func_mindustry_gen_TimedKillUnit_velAddNet_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_velAddNet_float_float 203
typedef void (*func_mindustry_gen_TimedKillUnit_velAddNet_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_hasPhysicsRef_R_boolean 204
typedef jbool (*func_mindustry_gen_TimedKillUnit_hasPhysicsRef_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_mass_R_float 205
typedef jfloat (*func_mindustry_gen_TimedKillUnit_mass_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_hasPhysicsRef_boolean 206
typedef void (*func_mindustry_gen_TimedKillUnit_hasPhysicsRef_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_TimedKillUnit_impulse_arc_math_geom_Vec2 207
typedef void (*func_mindustry_gen_TimedKillUnit_impulse_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_impulse_float_float 208
typedef void (*func_mindustry_gen_TimedKillUnit_impulse_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_impulseNet_arc_math_geom_Vec2 209
typedef void (*func_mindustry_gen_TimedKillUnit_impulseNet_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_shield_R_float 210
typedef jfloat (*func_mindustry_gen_TimedKillUnit_shield_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_shield_float 211
typedef void (*func_mindustry_gen_TimedKillUnit_shield_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_shieldAlpha_R_float 212
typedef jfloat (*func_mindustry_gen_TimedKillUnit_shieldAlpha_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_shieldAlpha_float 213
typedef void (*func_mindustry_gen_TimedKillUnit_shieldAlpha_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_armor_R_float 214
typedef jfloat (*func_mindustry_gen_TimedKillUnit_armor_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_armor_float 215
typedef void (*func_mindustry_gen_TimedKillUnit_armor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_rawDamage_float 216
typedef void (*func_mindustry_gen_TimedKillUnit_rawDamage_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_isSyncHidden_mindustry_game_Team_R_boolean 217
typedef jbool (*func_mindustry_gen_TimedKillUnit_isSyncHidden_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_lastUpdated_R_long 218
typedef jlong (*func_mindustry_gen_TimedKillUnit_lastUpdated_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_updateSpacing_R_long 219
typedef jlong (*func_mindustry_gen_TimedKillUnit_updateSpacing_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_afterSync 220
typedef void (*func_mindustry_gen_TimedKillUnit_afterSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_handleSyncHidden 221
typedef void (*func_mindustry_gen_TimedKillUnit_handleSyncHidden)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_interpolate 222
typedef void (*func_mindustry_gen_TimedKillUnit_interpolate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_lastUpdated_long 223
typedef void (*func_mindustry_gen_TimedKillUnit_lastUpdated_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_TimedKillUnit_readSync_arc_util_io_Reads 224
typedef void (*func_mindustry_gen_TimedKillUnit_readSync_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_readSyncManual_java_nio_FloatBuffer 225
typedef void (*func_mindustry_gen_TimedKillUnit_readSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_snapInterpolation 226
typedef void (*func_mindustry_gen_TimedKillUnit_snapInterpolation)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_snapSync 227
typedef void (*func_mindustry_gen_TimedKillUnit_snapSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_updateSpacing_long 228
typedef void (*func_mindustry_gen_TimedKillUnit_updateSpacing_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_TimedKillUnit_writeSync_arc_util_io_Writes 229
typedef void (*func_mindustry_gen_TimedKillUnit_writeSync_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_writeSyncManual_java_nio_FloatBuffer 230
typedef void (*func_mindustry_gen_TimedKillUnit_writeSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_aim_float_float 231
typedef void (*func_mindustry_gen_TimedKillUnit_aim_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_aim_float_float_boolean 232
typedef void (*func_mindustry_gen_TimedKillUnit_aim_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_gen_TimedKillUnit_mounts_R_Array1_mindustry_entities_units_WeaponMount 233
typedef jobject (*func_mindustry_gen_TimedKillUnit_mounts_R_Array1_mindustry_entities_units_WeaponMount)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_mounts_Array1_mindustry_entities_units_WeaponMount 234
typedef void (*func_mindustry_gen_TimedKillUnit_mounts_Array1_mindustry_entities_units_WeaponMount)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_canShoot_R_boolean 235
typedef jbool (*func_mindustry_gen_TimedKillUnit_canShoot_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_isRotate_R_boolean 236
typedef jbool (*func_mindustry_gen_TimedKillUnit_isRotate_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_isShooting_R_boolean 237
typedef jbool (*func_mindustry_gen_TimedKillUnit_isShooting_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_aimX_R_float 238
typedef jfloat (*func_mindustry_gen_TimedKillUnit_aimX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_aimY_R_float 239
typedef jfloat (*func_mindustry_gen_TimedKillUnit_aimY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_aim_arc_math_geom_Position 240
typedef void (*func_mindustry_gen_TimedKillUnit_aim_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_aimX_float 241
typedef void (*func_mindustry_gen_TimedKillUnit_aimX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_aimY_float 242
typedef void (*func_mindustry_gen_TimedKillUnit_aimY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_controlWeapons_boolean_boolean 243
typedef void (*func_mindustry_gen_TimedKillUnit_controlWeapons_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_mindustry_gen_TimedKillUnit_controlWeapons_boolean 244
typedef void (*func_mindustry_gen_TimedKillUnit_controlWeapons_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_TimedKillUnit_isShooting_boolean 245
typedef void (*func_mindustry_gen_TimedKillUnit_isShooting_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_TimedKillUnit_setWeaponRotation_float 246
typedef void (*func_mindustry_gen_TimedKillUnit_setWeaponRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_setupWeapons_mindustry_type_UnitType 247
typedef void (*func_mindustry_gen_TimedKillUnit_setupWeapons_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_range_R_float 248
typedef jfloat (*func_mindustry_gen_TimedKillUnit_range_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_sense_mindustry_logic_LAccess_R_double 249
typedef jdouble (*func_mindustry_gen_TimedKillUnit_sense_mindustry_logic_LAccess_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_sense_mindustry_ctype_Content_R_double 250
typedef jdouble (*func_mindustry_gen_TimedKillUnit_sense_mindustry_ctype_Content_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_senseObject_mindustry_logic_LAccess_R_java_lang_Object 251
typedef jobject (*func_mindustry_gen_TimedKillUnit_senseObject_mindustry_logic_LAccess_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_setProp_mindustry_logic_LAccess_double 252
typedef void (*func_mindustry_gen_TimedKillUnit_setProp_mindustry_logic_LAccess_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define VTABLE_mindustry_gen_TimedKillUnit_setProp_mindustry_logic_LAccess_java_lang_Object 253
typedef void (*func_mindustry_gen_TimedKillUnit_setProp_mindustry_logic_LAccess_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_TimedKillUnit_setProp_mindustry_ctype_UnlockableContent_double 254
typedef void (*func_mindustry_gen_TimedKillUnit_setProp_mindustry_ctype_UnlockableContent_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define VTABLE_mindustry_gen_TimedKillUnit_displayable_R_boolean 255
typedef jbool (*func_mindustry_gen_TimedKillUnit_displayable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_display_arc_scene_ui_layout_Table 256
typedef void (*func_mindustry_gen_TimedKillUnit_display_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_icon_R_arc_graphics_g2d_TextureRegion 257
typedef jobject (*func_mindustry_gen_TimedKillUnit_icon_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_physicSize_R_float 258
typedef jfloat (*func_mindustry_gen_TimedKillUnit_physicSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_getControllerName_R_java_lang_String 259
typedef jobject (*func_mindustry_gen_TimedKillUnit_getControllerName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_speed_R_float 260
typedef jfloat (*func_mindustry_gen_TimedKillUnit_speed_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_collisionLayer_R_int 261
typedef jint (*func_mindustry_gen_TimedKillUnit_collisionLayer_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_prefRotation_R_float 262
typedef jfloat (*func_mindustry_gen_TimedKillUnit_prefRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_allowCommand_R_boolean 263
typedef jbool (*func_mindustry_gen_TimedKillUnit_allowCommand_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_isCommandable_R_boolean 264
typedef jbool (*func_mindustry_gen_TimedKillUnit_isCommandable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_canLand_R_boolean 265
typedef jbool (*func_mindustry_gen_TimedKillUnit_canLand_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_destroy 266
typedef void (*func_mindustry_gen_TimedKillUnit_destroy)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_unloaded 267
typedef void (*func_mindustry_gen_TimedKillUnit_unloaded)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_movePref_arc_math_geom_Vec2 268
typedef void (*func_mindustry_gen_TimedKillUnit_movePref_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_hasTarget_R_boolean 269
typedef jbool (*func_mindustry_gen_TimedKillUnit_hasTarget_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_hasTarget_boolean 270
typedef void (*func_mindustry_gen_TimedKillUnit_hasTarget_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_TimedKillUnit_trail_R_mindustry_graphics_Trail 271
typedef jobject (*func_mindustry_gen_TimedKillUnit_trail_R_mindustry_graphics_Trail)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_dockedType_R_mindustry_type_UnitType 272
typedef jobject (*func_mindustry_gen_TimedKillUnit_dockedType_R_mindustry_type_UnitType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_lastDrownFloor_R_mindustry_world_blocks_environment_Floor 273
typedef jobject (*func_mindustry_gen_TimedKillUnit_lastDrownFloor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_getPlayer_R_mindustry_gen_Player 274
typedef jobject (*func_mindustry_gen_TimedKillUnit_getPlayer_R_mindustry_gen_Player)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_canDrown_R_boolean 275
typedef jbool (*func_mindustry_gen_TimedKillUnit_canDrown_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_canTarget_mindustry_gen_Teamc_R_boolean 276
typedef jbool (*func_mindustry_gen_TimedKillUnit_canTarget_mindustry_gen_Teamc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_checkTarget_boolean_boolean_R_boolean 277
typedef jbool (*func_mindustry_gen_TimedKillUnit_checkTarget_boolean_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_mindustry_gen_TimedKillUnit_hasWeapons_R_boolean 278
typedef jbool (*func_mindustry_gen_TimedKillUnit_hasWeapons_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_hittable_R_boolean 279
typedef jbool (*func_mindustry_gen_TimedKillUnit_hittable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_inRange_arc_math_geom_Position_R_boolean 280
typedef jbool (*func_mindustry_gen_TimedKillUnit_inRange_arc_math_geom_Position_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_isAI_R_boolean 281
typedef jbool (*func_mindustry_gen_TimedKillUnit_isAI_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_isEnemy_R_boolean 282
typedef jbool (*func_mindustry_gen_TimedKillUnit_isEnemy_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_isFlying_R_boolean 283
typedef jbool (*func_mindustry_gen_TimedKillUnit_isFlying_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_isMissile_R_boolean 284
typedef jbool (*func_mindustry_gen_TimedKillUnit_isMissile_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_isPathImpassable_int_int_R_boolean 285
typedef jbool (*func_mindustry_gen_TimedKillUnit_isPathImpassable_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_gen_TimedKillUnit_isPlayer_R_boolean 286
typedef jbool (*func_mindustry_gen_TimedKillUnit_isPlayer_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_killable_R_boolean 287
typedef jbool (*func_mindustry_gen_TimedKillUnit_killable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_playerControllable_R_boolean 288
typedef jbool (*func_mindustry_gen_TimedKillUnit_playerControllable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_shouldUpdateController_R_boolean 289
typedef jbool (*func_mindustry_gen_TimedKillUnit_shouldUpdateController_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_spawnedByCore_R_boolean 290
typedef jbool (*func_mindustry_gen_TimedKillUnit_spawnedByCore_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_targetable_mindustry_game_Team_R_boolean 291
typedef jbool (*func_mindustry_gen_TimedKillUnit_targetable_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_flag_R_double 292
typedef jdouble (*func_mindustry_gen_TimedKillUnit_flag_R_double)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_ammof_R_float 293
typedef jfloat (*func_mindustry_gen_TimedKillUnit_ammof_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_bounds_R_float 294
typedef jfloat (*func_mindustry_gen_TimedKillUnit_bounds_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_drownTime_R_float 295
typedef jfloat (*func_mindustry_gen_TimedKillUnit_drownTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_elevation_R_float 296
typedef jfloat (*func_mindustry_gen_TimedKillUnit_elevation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_floorSpeedMultiplier_R_float 297
typedef jfloat (*func_mindustry_gen_TimedKillUnit_floorSpeedMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_healTime_R_float 298
typedef jfloat (*func_mindustry_gen_TimedKillUnit_healTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_shadowAlpha_R_float 299
typedef jfloat (*func_mindustry_gen_TimedKillUnit_shadowAlpha_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_splashTimer_R_float 300
typedef jfloat (*func_mindustry_gen_TimedKillUnit_splashTimer_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_cap_R_int 301
typedef jint (*func_mindustry_gen_TimedKillUnit_cap_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_count_R_int 302
typedef jint (*func_mindustry_gen_TimedKillUnit_count_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_lastFogPos_R_int 303
typedef jint (*func_mindustry_gen_TimedKillUnit_lastFogPos_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_lastCommanded_R_java_lang_String 304
typedef jobject (*func_mindustry_gen_TimedKillUnit_lastCommanded_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_command_R_mindustry_ai_types_CommandAI 305
typedef jobject (*func_mindustry_gen_TimedKillUnit_command_R_mindustry_ai_types_CommandAI)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_abilities_R_Array1_mindustry_entities_abilities_Ability 306
typedef jobject (*func_mindustry_gen_TimedKillUnit_abilities_R_Array1_mindustry_entities_abilities_Ability)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_controller_R_mindustry_entities_units_UnitController 307
typedef jobject (*func_mindustry_gen_TimedKillUnit_controller_R_mindustry_entities_units_UnitController)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_type_R_mindustry_type_UnitType 308
typedef jobject (*func_mindustry_gen_TimedKillUnit_type_R_mindustry_type_UnitType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_drownFloor_R_mindustry_world_blocks_environment_Floor 309
typedef jobject (*func_mindustry_gen_TimedKillUnit_drownFloor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_abilities_Array1_mindustry_entities_abilities_Ability 310
typedef void (*func_mindustry_gen_TimedKillUnit_abilities_Array1_mindustry_entities_abilities_Ability)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_aimLook_arc_math_geom_Position 311
typedef void (*func_mindustry_gen_TimedKillUnit_aimLook_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_aimLook_float_float 312
typedef void (*func_mindustry_gen_TimedKillUnit_aimLook_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_approach_arc_math_geom_Vec2 313
typedef void (*func_mindustry_gen_TimedKillUnit_approach_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_controller_mindustry_entities_units_UnitController 314
typedef void (*func_mindustry_gen_TimedKillUnit_controller_mindustry_entities_units_UnitController)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_dockedType_mindustry_type_UnitType 315
typedef void (*func_mindustry_gen_TimedKillUnit_dockedType_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_drownTime_float 316
typedef void (*func_mindustry_gen_TimedKillUnit_drownTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_elevation_float 317
typedef void (*func_mindustry_gen_TimedKillUnit_elevation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_flag_double 318
typedef void (*func_mindustry_gen_TimedKillUnit_flag_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_mindustry_gen_TimedKillUnit_healTime_float 319
typedef void (*func_mindustry_gen_TimedKillUnit_healTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_landed 320
typedef void (*func_mindustry_gen_TimedKillUnit_landed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_lastCommanded_java_lang_String 321
typedef void (*func_mindustry_gen_TimedKillUnit_lastCommanded_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_lastDrownFloor_mindustry_world_blocks_environment_Floor 322
typedef void (*func_mindustry_gen_TimedKillUnit_lastDrownFloor_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_lastFogPos_int 323
typedef void (*func_mindustry_gen_TimedKillUnit_lastFogPos_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_TimedKillUnit_lookAt_arc_math_geom_Position 324
typedef void (*func_mindustry_gen_TimedKillUnit_lookAt_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_lookAt_float 325
typedef void (*func_mindustry_gen_TimedKillUnit_lookAt_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_lookAt_float_float 326
typedef void (*func_mindustry_gen_TimedKillUnit_lookAt_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_moveAt_arc_math_geom_Vec2 327
typedef void (*func_mindustry_gen_TimedKillUnit_moveAt_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_moveAt_arc_math_geom_Vec2_float 328
typedef void (*func_mindustry_gen_TimedKillUnit_moveAt_arc_math_geom_Vec2_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_TimedKillUnit_resetController 329
typedef void (*func_mindustry_gen_TimedKillUnit_resetController)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_rotateMove_arc_math_geom_Vec2 330
typedef void (*func_mindustry_gen_TimedKillUnit_rotateMove_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_set_mindustry_type_UnitType_mindustry_entities_units_UnitController 331
typedef void (*func_mindustry_gen_TimedKillUnit_set_mindustry_type_UnitType_mindustry_entities_units_UnitController)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_TimedKillUnit_setType_mindustry_type_UnitType 332
typedef void (*func_mindustry_gen_TimedKillUnit_setType_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_shadowAlpha_float 333
typedef void (*func_mindustry_gen_TimedKillUnit_shadowAlpha_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_spawnedByCore_boolean 334
typedef void (*func_mindustry_gen_TimedKillUnit_spawnedByCore_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_TimedKillUnit_splashTimer_float 335
typedef void (*func_mindustry_gen_TimedKillUnit_splashTimer_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_trail_mindustry_graphics_Trail 336
typedef void (*func_mindustry_gen_TimedKillUnit_trail_mindustry_graphics_Trail)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_type_mindustry_type_UnitType 337
typedef void (*func_mindustry_gen_TimedKillUnit_type_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_updateBoosting_boolean 338
typedef void (*func_mindustry_gen_TimedKillUnit_updateBoosting_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_TimedKillUnit_updateBoosting_boolean_boolean 339
typedef void (*func_mindustry_gen_TimedKillUnit_updateBoosting_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_mindustry_gen_TimedKillUnit_updateDrowning 340
typedef void (*func_mindustry_gen_TimedKillUnit_updateDrowning)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_wobble 341
typedef void (*func_mindustry_gen_TimedKillUnit_wobble)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_fin_R_float 342
typedef jfloat (*func_mindustry_gen_TimedKillUnit_fin_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_fout_R_float 343
typedef jfloat (*func_mindustry_gen_TimedKillUnit_fout_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_fout_arc_math_Interp_R_float 344
typedef jfloat (*func_mindustry_gen_TimedKillUnit_fout_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_fout_float_R_float 345
typedef jfloat (*func_mindustry_gen_TimedKillUnit_fout_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_fin_arc_math_Interp_R_float 346
typedef jfloat (*func_mindustry_gen_TimedKillUnit_fin_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_finpow_R_float 347
typedef jfloat (*func_mindustry_gen_TimedKillUnit_finpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_foutpow_R_float 348
typedef jfloat (*func_mindustry_gen_TimedKillUnit_foutpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_finpowdown_R_float 349
typedef jfloat (*func_mindustry_gen_TimedKillUnit_finpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_foutpowdown_R_float 350
typedef jfloat (*func_mindustry_gen_TimedKillUnit_foutpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_fslope_R_float 351
typedef jfloat (*func_mindustry_gen_TimedKillUnit_fslope_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_lifetime_R_float 352
typedef jfloat (*func_mindustry_gen_TimedKillUnit_lifetime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_time_R_float 353
typedef jfloat (*func_mindustry_gen_TimedKillUnit_time_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_TimedKillUnit_lifetime_float 354
typedef void (*func_mindustry_gen_TimedKillUnit_lifetime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_time_float 355
typedef void (*func_mindustry_gen_TimedKillUnit_time_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_TimedKillUnit_applyStatus_mindustry_type_StatusEffect_float_boolean 356
typedef void (*func_mindustry_gen_TimedKillUnit_applyStatus_mindustry_type_StatusEffect_float_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_gen_TimedKillUnit_lambda$unapply$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean 357
typedef jbool (*func_mindustry_gen_TimedKillUnit_lambda$unapply$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_TimedKillUnit_lambda$destroy$0_float_mindustry_gen_Building_R_boolean 358
typedef jbool (*func_mindustry_gen_TimedKillUnit_lambda$destroy$0_float_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jfloat param0, jobject param1);
#define VTABLE_mindustry_gen_TimedKillUnit_lambda$clearStatuses$0_mindustry_entities_units_StatusEntry 359
typedef void (*func_mindustry_gen_TimedKillUnit_lambda$clearStatuses$0_mindustry_entities_units_StatusEntry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_TimedKillUnit_lambda$canLand$0_mindustry_gen_Unit_R_boolean 360
typedef jbool (*func_mindustry_gen_TimedKillUnit_lambda$canLand$0_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_TimedKillUnit(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_TimedKillUnit(jcontext ctx);
void init_mindustry_gen_TimedKillUnit(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_getPlayer_R_mindustry_gen_Player(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_getControllerName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_solidity_R_mindustry_entities_EntityCollisions$SolidPred(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_buildPlan_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_getMineResult_mindustry_world_Tile_R_mindustry_type_Item(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_gen_TimedKillUnit_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_drownFloor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_isRotate_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_lifetime_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_time_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_TimedKillUnit_classId_R_int(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_lifetime_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_time_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_applyStatus_mindustry_type_StatusEffect_float_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jbool param2);
jobject M_mindustry_gen_TimedKillUnit_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_as_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_statusColor_R_arc_graphics_Color(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_icon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_statusBits_R_arc_struct_Bits(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_acceptsItem_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_TimedKillUnit_activelyBuilding_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_allowCommand_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_canBuild_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_canDrown_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_canLand_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_canMine_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_canMine_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_TimedKillUnit_canPass_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_mindustry_gen_TimedKillUnit_canPassOn_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_canShoot_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_canTarget_mindustry_gen_Teamc_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_TimedKillUnit_cheating_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_checkTarget_boolean_boolean_R_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
jbool M_mindustry_gen_TimedKillUnit_collides_mindustry_gen_Hitboxc_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_TimedKillUnit_damaged_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_displayable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_hasEffect_mindustry_type_StatusEffect_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_TimedKillUnit_hasItem_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_hasWeapons_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_hittable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_ignoreSolids_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_inFogTo_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_TimedKillUnit_inRange_arc_math_geom_Position_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_TimedKillUnit_isAI_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_isAdded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_isBoss_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_isBuilding_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_isCommandable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_isEnemy_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_isFlying_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_isGrounded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_isImmune_mindustry_type_StatusEffect_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_TimedKillUnit_isLocal_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_isMissile_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_isPathImpassable_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_mindustry_gen_TimedKillUnit_isPlayer_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_isRemote_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_TimedKillUnit_isValid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_killable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_mining_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_moving_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_offloadImmediately_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_onSolid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_playerControllable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_serialize_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_gen_TimedKillUnit_shouldUpdateController_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_TimedKillUnit_targetable_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_TimedKillUnit_validMine_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_TimedKillUnit_validMine_mindustry_world_Tile_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jdouble M_mindustry_gen_TimedKillUnit_sense_mindustry_ctype_Content_R_double(jcontext ctx, jobject self, jobject param0);
jdouble M_mindustry_gen_TimedKillUnit_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_gen_TimedKillUnit_ammof_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_bounds_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_clipSize_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_deltaAngle_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_deltaLen_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_fin_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_floorSpeedMultiplier_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_getDuration_mindustry_type_StatusEffect_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_gen_TimedKillUnit_getX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_getY_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_healthf_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_hitSize_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_mass_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_physicSize_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_prefRotation_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_range_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_TimedKillUnit_speed_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_TimedKillUnit_cap_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_TimedKillUnit_collisionLayer_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_TimedKillUnit_count_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_TimedKillUnit_itemCapacity_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_TimedKillUnit_maxAccepted_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_gen_TimedKillUnit_tileX_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_TimedKillUnit_tileY_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_gen_TimedKillUnit_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_command_R_mindustry_ai_types_CommandAI(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_applyDynamicStatus_R_mindustry_entities_units_StatusEntry(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_controller_R_mindustry_entities_units_UnitController(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_item_R_mindustry_type_Item(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self);
jobject M_mindustry_gen_TimedKillUnit_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject SM_mindustry_gen_TimedKillUnit_create_R_mindustry_gen_TimedKillUnit(jcontext ctx);
void M_mindustry_gen_TimedKillUnit_add(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_addBuild_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_addBuild_mindustry_entities_units_BuildPlan_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_gen_TimedKillUnit_addItem_mindustry_type_Item(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_addItem_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_gen_TimedKillUnit_afterRead(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_afterReadAll(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_afterSync(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_aim_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_aim_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_TimedKillUnit_aim_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
void M_mindustry_gen_TimedKillUnit_aimLook_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_aimLook_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_TimedKillUnit_apply_mindustry_type_StatusEffect(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_apply_mindustry_type_StatusEffect_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_gen_TimedKillUnit_approach_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_beforeWrite(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_clampHealth(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_clearBuilding(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_clearItem(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_clearStatuses(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_collision_mindustry_gen_Hitboxc_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_mindustry_gen_TimedKillUnit_controlWeapons_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_mindustry_gen_TimedKillUnit_controlWeapons_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_TimedKillUnit_controller_mindustry_entities_units_UnitController(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_damage_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_damage_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1);
void M_mindustry_gen_TimedKillUnit_damageArmorMult_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_TimedKillUnit_damageArmorMult_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
void M_mindustry_gen_TimedKillUnit_damageContinuous_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_damageContinuousArmorMult_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_TimedKillUnit_damageContinuousPierce_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_damagePierce_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_damagePierce_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1);
void M_mindustry_gen_TimedKillUnit_destroy(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_draw(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_drawBuilding(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_drawBuildingBeam_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_TimedKillUnit_drawPlan_mindustry_entities_units_BuildPlan_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_gen_TimedKillUnit_drawPlanTop_mindustry_entities_units_BuildPlan_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_gen_TimedKillUnit_getCollisions_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_handleSyncHidden(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_heal(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_heal_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_healFract_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_hitbox_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_hitboxTile_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_impulse_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_impulse_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_TimedKillUnit_impulseNet_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_interpolate(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_kill(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_killed(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_landed(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_lookAt_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_lookAt_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_lookAt_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_TimedKillUnit_move_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_move_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_TimedKillUnit_moveAt_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_moveAt_arc_math_geom_Vec2_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_gen_TimedKillUnit_movePref_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_rawDamage_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_readSync_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_readSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_remove(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_removeBuild_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
void M_mindustry_gen_TimedKillUnit_resetController(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_rotateMove_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_TimedKillUnit_set_mindustry_type_UnitType_mindustry_entities_units_UnitController(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_gen_TimedKillUnit_setDuration_mindustry_type_StatusEffect_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_gen_TimedKillUnit_setProp_mindustry_ctype_UnlockableContent_double(jcontext ctx, jobject self, jobject param0, jdouble param1);
void M_mindustry_gen_TimedKillUnit_setProp_mindustry_logic_LAccess_double(jcontext ctx, jobject self, jobject param0, jdouble param1);
void M_mindustry_gen_TimedKillUnit_setProp_mindustry_logic_LAccess_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_gen_TimedKillUnit_setType_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_setWeaponRotation_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_setupWeapons_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_snapInterpolation(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_snapSync(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_statusArmor_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_statusBuildSpeed_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_statusDamageMultiplier_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_statusDrag_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_statusMaxHealth_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_statusReloadMultiplier_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_statusSpeed_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_TimedKillUnit_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_TimedKillUnit_unapply_mindustry_type_StatusEffect(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_unloaded(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_update(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_updateBoosting_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_TimedKillUnit_updateBoosting_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_mindustry_gen_TimedKillUnit_updateBuildLogic(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_updateDrowning(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_updateLastPosition(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_validatePlans(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_velAddNet_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_velAddNet_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_TimedKillUnit_wobble(jcontext ctx, jobject self);
void M_mindustry_gen_TimedKillUnit_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_TimedKillUnit_writeSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_gen_TimedKillUnit_lambda$updateBuildLogic$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool M_mindustry_gen_TimedKillUnit_lambda$unapply$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool SM_mindustry_gen_TimedKillUnit_lambda$removeBuild$0_boolean_int_int_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jbool param0, jint param1, jint param2, jobject param3);
jbool M_mindustry_gen_TimedKillUnit_lambda$destroy$0_float_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jfloat param0, jobject param1);
void M_mindustry_gen_TimedKillUnit_lambda$clearStatuses$0_mindustry_entities_units_StatusEntry(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_gen_TimedKillUnit_lambda$applyDynamicStatus$0_mindustry_entities_units_StatusEntry_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_gen_TimedKillUnit_lambda$getDuration$0_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_gen_TimedKillUnit_lambda$sense$1_mindustry_world_Block_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_gen_TimedKillUnit_lambda$sense$0_mindustry_type_UnitType_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_gen_TimedKillUnit_lambda$shouldSkip$0_mindustry_gen_Building_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool M_mindustry_gen_TimedKillUnit_lambda$canLand$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
