#ifndef HEADER_mindustry_gen_Building
#define HEADER_mindustry_gen_Building

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Buildingc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/gen/IndexableEntity__build.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Timerc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Building {
	java_lang_Object parent;
	jbool F_added;
	jref F_block;
	jint F_cdump;
	jbool F_dead;
	jfloat F_dumpAccum;
	jfloat F_efficiency;
	jbool F_enabled;
	jfloat F_healSuppressionTime;
	jfloat F_health;
	jfloat F_hitTime;
	jint F_id;
	jint F_index__build;
	jshort F_indexerBuildIndex;
	jshort F_indexerBuildTypeIndex;
	jbool F_initialized;
	jref F_items;
	jref F_lastAccessed;
	jfloat F_lastDamageTime;
	jref F_lastDisabler;
	jfloat F_lastHealTime;
	jref F_liquids;
	jfloat F_maxHealth;
	jfloat F_optionalEfficiency;
	jfloat F_potentialEfficiency;
	jref F_power;
	jref F_proximity;
	jint F_rotation;
	jbool F_shouldConsumePower;
	jfloat F_sleepTime;
	jbool F_sleeping;
	jref F_suppressColor;
	jref F_team;
	jref F_tile;
	jfloat F_timeScale;
	jfloat F_timeScaleDuration;
	jref F_timer;
	jlong F_visibleFlags;
	jfloat F_visualLiquid;
	jbool F_wasDamaged;
	jbool F_wasVisible;
	jfloat F_x;
	jfloat F_y;
} mindustry_gen_Building;

static inline void syncBuildingOuterBlock(jobject self, jobject block) {
	if (!self) return;
	if (!block) {
		block = (jobject)((mindustry_gen_Building *) self)->F_block;
		if (!block) return;
	}
	auto cl = (jclass) self->clazz;
	while (cl) {
		if (cl->nativeFields) {
			auto fds = (FieldMetadata *) cl->nativeFields;
			for (int fi = 0; fi < cl->fieldCount; fi++) {
				if (fds[fi].name && strcmp(fds[fi].name, "this$0") == 0) {
					*(jref *)((char *) self + fds[fi].offset) = (jref) block;
					return;
				}
			}
		}
		cl = (jclass) cl->parentClass;
	}
}

extern Class class_mindustry_gen_Building;

extern jobject SF_mindustry_gen_Building_bulletDamageEvent;
extern jfloat SF_mindustry_gen_Building_hitDuration;
extern jfloat SF_mindustry_gen_Building_recentDamageTime;
extern jint SF_mindustry_gen_Building_sleepingEntities;
extern jobject SF_mindustry_gen_Building_teamChangeEvent;
extern jobject SF_mindustry_gen_Building_tempBuilds;
extern jfloat SF_mindustry_gen_Building_timeToSleep;
extern jobject SF_mindustry_gen_Building_tmpTiles;

#define VTABLE_mindustry_gen_Building_hashCode_R_int 0
typedef jint (*func_mindustry_gen_Building_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_Building_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_Building_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_Building_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_Building_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_finalize 5
typedef void (*func_mindustry_gen_Building_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_notify 6
typedef void (*func_mindustry_gen_Building_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_notifyAll 7
typedef void (*func_mindustry_gen_Building_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_wait 8
typedef void (*func_mindustry_gen_Building_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_wait_long 9
typedef void (*func_mindustry_gen_Building_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Building_wait_long_int 10
typedef void (*func_mindustry_gen_Building_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_Building_hitbox_arc_math_geom_Rect 11
typedef void (*func_mindustry_gen_Building_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_getX_R_float 12
typedef jfloat (*func_mindustry_gen_Building_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_getY_R_float 13
typedef jfloat (*func_mindustry_gen_Building_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_angleTo_arc_math_geom_Position_R_float 14
typedef jfloat (*func_mindustry_gen_Building_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_angleTo_float_float_R_float 15
typedef jfloat (*func_mindustry_gen_Building_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_dst2_arc_math_geom_Position_R_float 16
typedef jfloat (*func_mindustry_gen_Building_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_dst_arc_math_geom_Position_R_float 17
typedef jfloat (*func_mindustry_gen_Building_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_dst_float_float_R_float 18
typedef jfloat (*func_mindustry_gen_Building_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_dst2_float_float_R_float 19
typedef jfloat (*func_mindustry_gen_Building_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_within_arc_math_geom_Position_float_R_boolean 20
typedef jbool (*func_mindustry_gen_Building_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_within_float_float_float_R_boolean 21
typedef jbool (*func_mindustry_gen_Building_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_Building_isValid_R_boolean 22
typedef jbool (*func_mindustry_gen_Building_isValid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_shouldAmbientSound_R_boolean 23
typedef jbool (*func_mindustry_gen_Building_shouldAmbientSound_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_getAmbientVolume_R_float 24
typedef jfloat (*func_mindustry_gen_Building_getAmbientVolume_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_getAmbientSound_R_arc_audio_Sound 25
typedef jobject (*func_mindustry_gen_Building_getAmbientSound_R_arc_audio_Sound)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_hitSize_R_float 26
typedef jfloat (*func_mindustry_gen_Building_hitSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_self_R_mindustry_gen_Entityc 27
typedef jobject (*func_mindustry_gen_Building_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_as_R_java_lang_Object 28
typedef jobject (*func_mindustry_gen_Building_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_isAdded_R_boolean 29
typedef jbool (*func_mindustry_gen_Building_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_isLocal_R_boolean 30
typedef jbool (*func_mindustry_gen_Building_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_isRemote_R_boolean 31
typedef jbool (*func_mindustry_gen_Building_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_serialize_R_boolean 32
typedef jbool (*func_mindustry_gen_Building_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_classId_R_int 33
typedef jint (*func_mindustry_gen_Building_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_id_R_int 34
typedef jint (*func_mindustry_gen_Building_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_add 35
typedef void (*func_mindustry_gen_Building_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_afterRead 36
typedef void (*func_mindustry_gen_Building_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_afterReadAll 37
typedef void (*func_mindustry_gen_Building_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_beforeWrite 38
typedef void (*func_mindustry_gen_Building_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_id_int 39
typedef void (*func_mindustry_gen_Building_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Building_read_arc_util_io_Reads 40
typedef void (*func_mindustry_gen_Building_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_remove 41
typedef void (*func_mindustry_gen_Building_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_update 42
typedef void (*func_mindustry_gen_Building_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_write_arc_util_io_Writes 43
typedef void (*func_mindustry_gen_Building_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_floorOn_R_mindustry_world_blocks_environment_Floor 44
typedef jobject (*func_mindustry_gen_Building_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_buildOn_R_mindustry_gen_Building 45
typedef jobject (*func_mindustry_gen_Building_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_onSolid_R_boolean 46
typedef jbool (*func_mindustry_gen_Building_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_x_R_float 47
typedef jfloat (*func_mindustry_gen_Building_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_y_R_float 48
typedef jfloat (*func_mindustry_gen_Building_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_tileX_R_int 49
typedef jint (*func_mindustry_gen_Building_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_tileY_R_int 50
typedef jint (*func_mindustry_gen_Building_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_blockOn_R_mindustry_world_Block 51
typedef jobject (*func_mindustry_gen_Building_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_tileOn_R_mindustry_world_Tile 52
typedef jobject (*func_mindustry_gen_Building_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_set_arc_math_geom_Position 53
typedef void (*func_mindustry_gen_Building_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_set_float_float 54
typedef void (*func_mindustry_gen_Building_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_trns_arc_math_geom_Position 55
typedef void (*func_mindustry_gen_Building_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_trns_float_float 56
typedef void (*func_mindustry_gen_Building_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_x_float 57
typedef void (*func_mindustry_gen_Building_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Building_y_float 58
typedef void (*func_mindustry_gen_Building_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Building_damageArmorMult_float_float 59
typedef void (*func_mindustry_gen_Building_damageArmorMult_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_damageArmorMult_float_float_boolean 60
typedef void (*func_mindustry_gen_Building_damageArmorMult_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_gen_Building_damagePierce_float 61
typedef void (*func_mindustry_gen_Building_damagePierce_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Building_damagePierce_float_boolean 62
typedef void (*func_mindustry_gen_Building_damagePierce_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define VTABLE_mindustry_gen_Building_healFract_float 63
typedef void (*func_mindustry_gen_Building_healFract_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Building_heal_float 64
typedef void (*func_mindustry_gen_Building_heal_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Building_damaged_R_boolean 65
typedef jbool (*func_mindustry_gen_Building_damaged_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_dead_R_boolean 66
typedef jbool (*func_mindustry_gen_Building_dead_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_health_R_float 67
typedef jfloat (*func_mindustry_gen_Building_health_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_healthf_R_float 68
typedef jfloat (*func_mindustry_gen_Building_healthf_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_hitTime_R_float 69
typedef jfloat (*func_mindustry_gen_Building_hitTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_maxHealth_R_float 70
typedef jfloat (*func_mindustry_gen_Building_maxHealth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_clampHealth 71
typedef void (*func_mindustry_gen_Building_clampHealth)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_damage_float 72
typedef void (*func_mindustry_gen_Building_damage_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Building_damage_float_boolean 73
typedef void (*func_mindustry_gen_Building_damage_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define VTABLE_mindustry_gen_Building_damageContinuous_float 74
typedef void (*func_mindustry_gen_Building_damageContinuous_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Building_damageContinuousArmorMult_float_float 75
typedef void (*func_mindustry_gen_Building_damageContinuousArmorMult_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_damageContinuousPierce_float 76
typedef void (*func_mindustry_gen_Building_damageContinuousPierce_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Building_dead_boolean 77
typedef void (*func_mindustry_gen_Building_dead_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Building_heal 78
typedef void (*func_mindustry_gen_Building_heal)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_health_float 79
typedef void (*func_mindustry_gen_Building_health_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Building_hitTime_float 80
typedef void (*func_mindustry_gen_Building_hitTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Building_kill 81
typedef void (*func_mindustry_gen_Building_kill)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_killed 82
typedef void (*func_mindustry_gen_Building_killed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_maxHealth_float 83
typedef void (*func_mindustry_gen_Building_maxHealth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean 84
typedef jbool (*func_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_cheating_R_boolean 85
typedef jbool (*func_mindustry_gen_Building_cheating_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_team_R_mindustry_game_Team 86
typedef jobject (*func_mindustry_gen_Building_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 87
typedef jobject (*func_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 88
typedef jobject (*func_mindustry_gen_Building_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 89
typedef jobject (*func_mindustry_gen_Building_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_team_mindustry_game_Team 90
typedef void (*func_mindustry_gen_Building_team_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_timer_R_arc_util_Interval 91
typedef jobject (*func_mindustry_gen_Building_timer_R_arc_util_Interval)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_timer_int_float_R_boolean 92
typedef jbool (*func_mindustry_gen_Building_timer_int_float_R_boolean)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_timer_arc_util_Interval 93
typedef void (*func_mindustry_gen_Building_timer_arc_util_Interval)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double 94
typedef void (*func_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double)(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4);
#define VTABLE_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double 95
typedef void (*func_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double)(jcontext ctx, jobject self, jobject param0, jobject param1, jdouble param2, jdouble param3, jdouble param4);
#define VTABLE_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double 96
typedef jdouble (*func_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double 97
typedef jdouble (*func_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object 98
typedef jobject (*func_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double 99
typedef void (*func_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define VTABLE_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object 100
typedef void (*func_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double 101
typedef void (*func_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define VTABLE_mindustry_gen_Building_displayable_R_boolean 102
typedef jbool (*func_mindustry_gen_Building_displayable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_display_arc_scene_ui_layout_Table 103
typedef void (*func_mindustry_gen_Building_display_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_setIndex__build_int 104
typedef void (*func_mindustry_gen_Building_setIndex__build_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Building_back_R_mindustry_gen_Building 105
typedef jobject (*func_mindustry_gen_Building_back_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_front_R_mindustry_gen_Building 106
typedef jobject (*func_mindustry_gen_Building_front_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_left_R_mindustry_gen_Building 107
typedef jobject (*func_mindustry_gen_Building_left_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_right_R_mindustry_gen_Building 108
typedef jobject (*func_mindustry_gen_Building_right_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2 109
typedef jobject (*func_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_config_R_java_lang_Object 110
typedef jobject (*func_mindustry_gen_Building_config_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq 111
typedef jobject (*func_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile 112
typedef jobject (*func_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload 113
typedef jobject (*func_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload 114
typedef jobject (*func_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_onRepaired 115
typedef void (*func_mindustry_gen_Building_onRepaired)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_placed 116
typedef void (*func_mindustry_gen_Building_placed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_playerPlaced_java_lang_Object 117
typedef void (*func_mindustry_gen_Building_playerPlaced_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_read_arc_util_io_Reads_byte 118
typedef void (*func_mindustry_gen_Building_read_arc_util_io_Reads_byte)(jcontext ctx, jobject self, jobject param0, jbyte param1);
#define VTABLE_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building 119
typedef jobject (*func_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building 120
typedef jobject (*func_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building 121
typedef jobject (*func_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jint param3);
#define VTABLE_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building 122
typedef jobject (*func_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building 123
typedef jobject (*func_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor 124
typedef jobject (*func_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion 125
typedef jobject (*func_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq 126
typedef jobject (*func_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_absorbLasers_R_boolean 127
typedef jbool (*func_mindustry_gen_Building_absorbLasers_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean 128
typedef jbool (*func_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean 129
typedef jbool (*func_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean 130
typedef jbool (*func_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_allowDeposit_R_boolean 131
typedef jbool (*func_mindustry_gen_Building_allowDeposit_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_allowUpdate_R_boolean 132
typedef jbool (*func_mindustry_gen_Building_allowUpdate_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean 133
typedef jbool (*func_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_canConsume_R_boolean 134
typedef jbool (*func_mindustry_gen_Building_canConsume_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean 135
typedef jbool (*func_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean 136
typedef jbool (*func_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean 137
typedef jbool (*func_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_canPickup_R_boolean 138
typedef jbool (*func_mindustry_gen_Building_canPickup_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_canResupply_R_boolean 139
typedef jbool (*func_mindustry_gen_Building_canResupply_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_canUnload_R_boolean 140
typedef jbool (*func_mindustry_gen_Building_canUnload_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_canWithdraw_R_boolean 141
typedef jbool (*func_mindustry_gen_Building_canWithdraw_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_checkSolid_R_boolean 142
typedef jbool (*func_mindustry_gen_Building_checkSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_checkSuppression_R_boolean 143
typedef jbool (*func_mindustry_gen_Building_checkSuppression_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean 144
typedef jbool (*func_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean 145
typedef jbool (*func_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean 146
typedef jbool (*func_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_configTapped_R_boolean 147
typedef jbool (*func_mindustry_gen_Building_configTapped_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_consumeTriggerValid_R_boolean 148
typedef jbool (*func_mindustry_gen_Building_consumeTriggerValid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_dump_R_boolean 149
typedef jbool (*func_mindustry_gen_Building_dump_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean 150
typedef jbool (*func_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_dumpAccumulate_R_boolean 151
typedef jbool (*func_mindustry_gen_Building_dumpAccumulate_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean 152
typedef jbool (*func_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean 153
typedef jbool (*func_mindustry_gen_Building_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_inMapArea_R_boolean 154
typedef jbool (*func_mindustry_gen_Building_inMapArea_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean 155
typedef jbool (*func_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_isCommandable_R_boolean 156
typedef jbool (*func_mindustry_gen_Building_isCommandable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean 157
typedef jbool (*func_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_isHealSuppressed_R_boolean 158
typedef jbool (*func_mindustry_gen_Building_isHealSuppressed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_isInsulated_R_boolean 159
typedef jbool (*func_mindustry_gen_Building_isInsulated_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_isPayload_R_boolean 160
typedef jbool (*func_mindustry_gen_Building_isPayload_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_moveForward_mindustry_type_Item_R_boolean 161
typedef jbool (*func_mindustry_gen_Building_moveForward_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean 162
typedef jbool (*func_mindustry_gen_Building_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean 163
typedef jbool (*func_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean 164
typedef jbool (*func_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_payloadCheck_int_R_boolean 165
typedef jbool (*func_mindustry_gen_Building_payloadCheck_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Building_productionValid_R_boolean 166
typedef jbool (*func_mindustry_gen_Building_productionValid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_put_mindustry_type_Item_R_boolean 167
typedef jbool (*func_mindustry_gen_Building_put_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_shouldConsume_R_boolean 168
typedef jbool (*func_mindustry_gen_Building_shouldConsume_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean 169
typedef jbool (*func_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean 170
typedef jbool (*func_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_wasRecentlyDamaged_R_boolean 171
typedef jbool (*func_mindustry_gen_Building_wasRecentlyDamaged_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean 172
typedef jbool (*func_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte 173
typedef jbyte (*func_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_relativeTo_int_int_R_byte 174
typedef jbyte (*func_mindustry_gen_Building_relativeTo_int_int_R_byte)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte 175
typedef jbyte (*func_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte 176
typedef jbyte (*func_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_version_R_byte 177
typedef jbyte (*func_mindustry_gen_Building_version_R_byte)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_ambientVolume_R_float 178
typedef jfloat (*func_mindustry_gen_Building_ambientVolume_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_calculateHeat_Array1_float_R_float 179
typedef jfloat (*func_mindustry_gen_Building_calculateHeat_Array1_float_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float 180
typedef jfloat (*func_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_delta_R_float 181
typedef jfloat (*func_mindustry_gen_Building_delta_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_drawrot_R_float 182
typedef jfloat (*func_mindustry_gen_Building_drawrot_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_edelta_R_float 183
typedef jfloat (*func_mindustry_gen_Building_edelta_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_efficiencyScale_R_float 184
typedef jfloat (*func_mindustry_gen_Building_efficiencyScale_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_fogRadius_R_float 185
typedef jfloat (*func_mindustry_gen_Building_fogRadius_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_getDisplayEfficiency_R_float 186
typedef jfloat (*func_mindustry_gen_Building_getDisplayEfficiency_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_getPowerProduction_R_float 187
typedef jfloat (*func_mindustry_gen_Building_getPowerProduction_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_getProgressIncrease_float_R_float 188
typedef jfloat (*func_mindustry_gen_Building_getProgressIncrease_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Building_handleDamage_float_R_float 189
typedef jfloat (*func_mindustry_gen_Building_handleDamage_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float 190
typedef jfloat (*func_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float 191
typedef jfloat (*func_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float)(jcontext ctx, jobject self, jbool param0, jobject param1);
#define VTABLE_mindustry_gen_Building_progress_R_float 192
typedef jfloat (*func_mindustry_gen_Building_progress_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_rotdeg_R_float 193
typedef jfloat (*func_mindustry_gen_Building_rotdeg_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_timeScale_R_float 194
typedef jfloat (*func_mindustry_gen_Building_timeScale_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_totalProgress_R_float 195
typedef jfloat (*func_mindustry_gen_Building_totalProgress_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_warmup_R_float 196
typedef jfloat (*func_mindustry_gen_Building_warmup_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int 197
typedef jint (*func_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_mindustry_gen_Building_explosionItemCap_R_int 198
typedef jint (*func_mindustry_gen_Building_explosionItemCap_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int 199
typedef jint (*func_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_moduleBitmask_R_int 200
typedef jint (*func_mindustry_gen_Building_moduleBitmask_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_pos_R_int 201
typedef jint (*func_mindustry_gen_Building_pos_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int 202
typedef jint (*func_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_gen_Building_getDisplayName_R_java_lang_String 203
typedef jobject (*func_mindustry_gen_Building_getDisplayName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor 204
typedef jobject (*func_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus 205
typedef jobject (*func_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule 206
typedef jobject (*func_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_addPlan_boolean 207
typedef void (*func_mindustry_gen_Building_addPlan_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Building_addPlan_boolean_boolean 208
typedef void (*func_mindustry_gen_Building_addPlan_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_mindustry_gen_Building_afterDestroyed 209
typedef void (*func_mindustry_gen_Building_afterDestroyed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_afterPickedUp 210
typedef void (*func_mindustry_gen_Building_afterPickedUp)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_applyBoost_float_float 211
typedef void (*func_mindustry_gen_Building_applyBoost_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_applyHealSuppression_float 212
typedef void (*func_mindustry_gen_Building_applyHealSuppression_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color 213
typedef void (*func_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jobject param1);
#define VTABLE_mindustry_gen_Building_applySlowdown_float_float 214
typedef void (*func_mindustry_gen_Building_applySlowdown_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_buildConfiguration_arc_scene_ui_layout_Table 215
typedef void (*func_mindustry_gen_Building_buildConfiguration_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_changeTeam_mindustry_game_Team 216
typedef void (*func_mindustry_gen_Building_changeTeam_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean 217
typedef void (*func_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_gen_Building_checkAllowUpdate 218
typedef void (*func_mindustry_gen_Building_checkAllowUpdate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_configure_java_lang_Object 219
typedef void (*func_mindustry_gen_Building_configure_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_configureAny_java_lang_Object 220
typedef void (*func_mindustry_gen_Building_configureAny_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object 221
typedef void (*func_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_consume 222
typedef void (*func_mindustry_gen_Building_consume)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_created 223
typedef void (*func_mindustry_gen_Building_created)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float 224
typedef void (*func_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_gen_Building_damage_mindustry_game_Team_float 225
typedef void (*func_mindustry_gen_Building_damage_mindustry_game_Team_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_deselect 226
typedef void (*func_mindustry_gen_Building_deselect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table 227
typedef void (*func_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table 228
typedef void (*func_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_draw 229
typedef void (*func_mindustry_gen_Building_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_drawCached 230
typedef void (*func_mindustry_gen_Building_drawCached)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_drawConfigure 231
typedef void (*func_mindustry_gen_Building_drawConfigure)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_drawCracks 232
typedef void (*func_mindustry_gen_Building_drawCracks)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_drawDisabled 233
typedef void (*func_mindustry_gen_Building_drawDisabled)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent 234
typedef void (*func_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_drawLight 235
typedef void (*func_mindustry_gen_Building_drawLight)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float 236
typedef void (*func_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_drawSelect 237
typedef void (*func_mindustry_gen_Building_drawSelect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_drawStatus 238
typedef void (*func_mindustry_gen_Building_drawStatus)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_drawTeam 239
typedef void (*func_mindustry_gen_Building_drawTeam)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_drawTeamTop 240
typedef void (*func_mindustry_gen_Building_drawTeamTop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_dropped 241
typedef void (*func_mindustry_gen_Building_dropped)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid 242
typedef void (*func_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float 243
typedef void (*func_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int 244
typedef void (*func_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int)(jcontext ctx, jobject self, jobject param0, jfloat param1, jint param2);
#define VTABLE_mindustry_gen_Building_eachEdge_arc_func_Cons 245
typedef void (*func_mindustry_gen_Building_eachEdge_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2 246
typedef void (*func_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item 247
typedef void (*func_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float 248
typedef void (*func_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload 249
typedef void (*func_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc 250
typedef void (*func_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_mindustry_gen_Building_handleString_java_lang_Object 251
typedef void (*func_mindustry_gen_Building_handleString_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons 252
typedef void (*func_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_healthChanged 253
typedef void (*func_mindustry_gen_Building_healthChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_incrementDump_int 254
typedef void (*func_mindustry_gen_Building_incrementDump_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Building_itemTaken_mindustry_type_Item 255
typedef void (*func_mindustry_gen_Building_itemTaken_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_noSleep 256
typedef void (*func_mindustry_gen_Building_noSleep)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_offload_mindustry_type_Item 257
typedef void (*func_mindustry_gen_Building_offload_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_onCommand_arc_math_geom_Vec2 258
typedef void (*func_mindustry_gen_Building_onCommand_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_onConfigureClosed 259
typedef void (*func_mindustry_gen_Building_onConfigureClosed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_onControlSelect_mindustry_gen_Unit 260
typedef void (*func_mindustry_gen_Building_onControlSelect_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit 261
typedef void (*func_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_onDestroyed 262
typedef void (*func_mindustry_gen_Building_onDestroyed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building 263
typedef void (*func_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_onProximityAdded 264
typedef void (*func_mindustry_gen_Building_onProximityAdded)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_onProximityRemoved 265
typedef void (*func_mindustry_gen_Building_onProximityRemoved)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_onProximityUpdate 266
typedef void (*func_mindustry_gen_Building_onProximityUpdate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_onRemoved 267
typedef void (*func_mindustry_gen_Building_onRemoved)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_overwrote_arc_struct_Seq 268
typedef void (*func_mindustry_gen_Building_overwrote_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_payloadDraw 269
typedef void (*func_mindustry_gen_Building_payloadDraw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_pickedUp 270
typedef void (*func_mindustry_gen_Building_pickedUp)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_playDestroySound 271
typedef void (*func_mindustry_gen_Building_playDestroySound)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_powerGraphRemoved 272
typedef void (*func_mindustry_gen_Building_powerGraphRemoved)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_produced_mindustry_type_Item 273
typedef void (*func_mindustry_gen_Building_produced_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_produced_mindustry_type_Item_int 274
typedef void (*func_mindustry_gen_Building_produced_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle 275
typedef void (*func_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_readAll_arc_util_io_Reads_byte 276
typedef void (*func_mindustry_gen_Building_readAll_arc_util_io_Reads_byte)(jcontext ctx, jobject self, jobject param0, jbyte param1);
#define VTABLE_mindustry_gen_Building_readBase_arc_util_io_Reads 277
typedef void (*func_mindustry_gen_Building_readBase_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_readSync_arc_util_io_Reads_byte 278
typedef void (*func_mindustry_gen_Building_readSync_arc_util_io_Reads_byte)(jcontext ctx, jobject self, jobject param0, jbyte param1);
#define VTABLE_mindustry_gen_Building_recache 279
typedef void (*func_mindustry_gen_Building_recache)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_recentlyHealed 280
typedef void (*func_mindustry_gen_Building_recentlyHealed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_removeFromProximity 281
typedef void (*func_mindustry_gen_Building_removeFromProximity)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_sleep 282
typedef void (*func_mindustry_gen_Building_sleep)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float 283
typedef void (*func_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_tapped 284
typedef void (*func_mindustry_gen_Building_tapped)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid 285
typedef void (*func_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid)(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
#define VTABLE_mindustry_gen_Building_unitOn_mindustry_gen_Unit 286
typedef void (*func_mindustry_gen_Building_unitOn_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit 287
typedef void (*func_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_unitRemoved_mindustry_gen_Unit 288
typedef void (*func_mindustry_gen_Building_unitRemoved_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_updateConsumption 289
typedef void (*func_mindustry_gen_Building_updateConsumption)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_updateEfficiencyMultiplier 290
typedef void (*func_mindustry_gen_Building_updateEfficiencyMultiplier)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_updateFogVisibility 291
typedef void (*func_mindustry_gen_Building_updateFogVisibility)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player 292
typedef void (*func_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building 293
typedef void (*func_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_updatePowerGraph 294
typedef void (*func_mindustry_gen_Building_updatePowerGraph)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_updateProximity 295
typedef void (*func_mindustry_gen_Building_updateProximity)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table 296
typedef void (*func_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_updateTile 297
typedef void (*func_mindustry_gen_Building_updateTile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Building_writeAll_arc_util_io_Writes 298
typedef void (*func_mindustry_gen_Building_writeAll_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_writeBase_arc_util_io_Writes 299
typedef void (*func_mindustry_gen_Building_writeBase_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_writeSync_arc_util_io_Writes 300
typedef void (*func_mindustry_gen_Building_writeSync_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_lambda$splashLiquid$0_mindustry_type_Liquid_float 301
typedef void (*func_mindustry_gen_Building_lambda$splashLiquid$0_mindustry_type_Liquid_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Building_lambda$onDeconstructed$0_float_mindustry_world_Tile 302
typedef void (*func_mindustry_gen_Building_lambda$onDeconstructed$0_float_mindustry_world_Tile)(jcontext ctx, jobject self, jfloat param0, jobject param1);
#define VTABLE_mindustry_gen_Building_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table 303
typedef void (*func_mindustry_gen_Building_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_lambda$display$9_arc_struct_Bits_java_lang_Runnable 304
typedef void (*func_mindustry_gen_Building_lambda$display$9_arc_struct_Bits_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String 305
typedef void (*func_mindustry_gen_Building_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence 306
typedef jobject (*func_mindustry_gen_Building_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Building_lambda$display$1_arc_scene_ui_layout_Table 307
typedef void (*func_mindustry_gen_Building_lambda$display$1_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_lambda$display$0_arc_scene_ui_layout_Table 308
typedef void (*func_mindustry_gen_Building_lambda$display$0_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Building_lambda$placed$0_mindustry_gen_Building 309
typedef void (*func_mindustry_gen_Building_lambda$placed$0_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_Building(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Building(jcontext ctx);
void init_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_back_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_front_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_left_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_right_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_config_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_getPayloads_R_mindustry_type_PayloadSeq(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_findClosestEdge_arc_math_geom_Position_arc_func_Boolf_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_gen_Building_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_timer_R_arc_util_Interval(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_dead_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_health_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_hitTime_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_maxHealth_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_x_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_y_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_Building_classId_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Building_id_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_team_R_mindustry_game_Team(jcontext ctx, jobject self);
void M_mindustry_gen_Building_dead_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Building_health_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Building_hitTime_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Building_id_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Building_maxHealth_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Building_setIndex__build_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Building_team_mindustry_game_Team(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_timer_arc_util_Interval(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_x_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Building_y_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Building_onRepaired(jcontext ctx, jobject self);
void M_mindustry_gen_Building_placed(jcontext ctx, jobject self);
void M_mindustry_gen_Building_playerPlaced_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_read_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1);
void M_mindustry_gen_Building_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_gen_Building_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_as_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_gen_Building_getLiquidDestination_mindustry_gen_Building_mindustry_type_Liquid_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jint param3);
jobject M_mindustry_gen_Building_nearby_int_int_R_mindustry_gen_Building(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_gen_Building_nearby_int_R_mindustry_gen_Building(jcontext ctx, jobject self, jint param0);
jobject M_mindustry_gen_Building_getCursor_R_arc_Graphics$Cursor(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_getAmbientSound_R_arc_audio_Sound(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_getPowerConnections_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_absorbLasers_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_acceptItem_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_gen_Building_acceptLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_gen_Building_allowDeposit_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_allowUpdate_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_canBeReplaced_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_canConsume_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_canDump_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_gen_Building_canDumpLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_gen_Building_canPickup_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_canResupply_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_canUnload_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_canWithdraw_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_cheating_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_checkSolid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_checkSuppression_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_collide_mindustry_gen_Bullet_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_collision_mindustry_gen_Bullet_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_conductsTo_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_configTapped_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_consumeTriggerValid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_damaged_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_dump_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_dump_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_dumpAccumulate_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_dumpAccumulate_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_dumpPayload_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_inFogTo_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_inMapArea_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_isAdded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_isCommandable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_isHealSuppressed_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_isInsulated_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_isLocal_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_isPayload_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_isRemote_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_isValid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_moveForward_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_movePayload_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_mindustry_gen_Building_onSolid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_payloadCheck_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_mindustry_gen_Building_productionValid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_put_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_serialize_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_shouldAmbientSound_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_shouldConsume_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_shouldHideConfigure_mindustry_gen_Player_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Building_timer_int_float_R_boolean(jcontext ctx, jobject self, jint param0, jfloat param1);
jbool M_mindustry_gen_Building_wasRecentlyDamaged_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Building_wasRecentlyHealed_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jbyte M_mindustry_gen_Building_relativeTo_mindustry_gen_Building_R_byte(jcontext ctx, jobject self, jobject param0);
jbyte M_mindustry_gen_Building_relativeTo_int_int_R_byte(jcontext ctx, jobject self, jint param0, jint param1);
jbyte M_mindustry_gen_Building_relativeTo_mindustry_world_Tile_R_byte(jcontext ctx, jobject self, jobject param0);
jbyte M_mindustry_gen_Building_relativeToEdge_mindustry_world_Tile_R_byte(jcontext ctx, jobject self, jobject param0);
jbyte M_mindustry_gen_Building_version_R_byte(jcontext ctx, jobject self);
jdouble M_mindustry_gen_Building_sense_mindustry_ctype_Content_R_double(jcontext ctx, jobject self, jobject param0);
jdouble M_mindustry_gen_Building_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_gen_Building_ambientVolume_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_calculateHeat_Array1_float_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_gen_Building_calculateHeat_Array1_float_arc_struct_IntSet_R_float(jcontext ctx, jobject self, jobject param0, jobject param1);
jfloat M_mindustry_gen_Building_delta_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_drawrot_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_edelta_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_efficiencyScale_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_fogRadius_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_getAmbientVolume_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_getDisplayEfficiency_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_getPowerProduction_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_getProgressIncrease_float_R_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_mindustry_gen_Building_getX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_getY_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_handleDamage_float_R_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_mindustry_gen_Building_healthf_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_hitSize_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_moveLiquid_mindustry_gen_Building_mindustry_type_Liquid_R_float(jcontext ctx, jobject self, jobject param0, jobject param1);
jfloat M_mindustry_gen_Building_moveLiquidForward_boolean_mindustry_type_Liquid_R_float(jcontext ctx, jobject self, jbool param0, jobject param1);
jfloat M_mindustry_gen_Building_progress_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_rotdeg_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_timeScale_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_totalProgress_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Building_warmup_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jint M_mindustry_gen_Building_explosionItemCap_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Building_getMaximumAccepted_mindustry_type_Item_R_int(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_gen_Building_moduleBitmask_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Building_pos_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_mindustry_gen_Building_tileX_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Building_tileY_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_gen_Building_getDisplayName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_floor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus(jcontext ctx, jobject self);
jobject M_mindustry_gen_Building_flowItems_R_mindustry_world_modules_ItemModule(jcontext ctx, jobject self);
jobject SM_mindustry_gen_Building_create_R_mindustry_gen_Building(jcontext ctx);
void M_mindustry_gen_Building_add(jcontext ctx, jobject self);
void M_mindustry_gen_Building_addPlan_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Building_addPlan_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_mindustry_gen_Building_afterDestroyed(jcontext ctx, jobject self);
void M_mindustry_gen_Building_afterPickedUp(jcontext ctx, jobject self);
void M_mindustry_gen_Building_afterRead(jcontext ctx, jobject self);
void M_mindustry_gen_Building_afterReadAll(jcontext ctx, jobject self);
void M_mindustry_gen_Building_applyBoost_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Building_applyHealSuppression_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Building_applyHealSuppression_float_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jobject param1);
void M_mindustry_gen_Building_applySlowdown_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Building_beforeWrite(jcontext ctx, jobject self);
void M_mindustry_gen_Building_buildConfiguration_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_changeTeam_mindustry_game_Team(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_changeTeam_mindustry_game_Team_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_gen_Building_checkAllowUpdate(jcontext ctx, jobject self);
void M_mindustry_gen_Building_clampHealth(jcontext ctx, jobject self);
void M_mindustry_gen_Building_configure_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_configureAny_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_gen_Building_consume(jcontext ctx, jobject self);
void M_mindustry_gen_Building_control_mindustry_logic_LAccess_double_double_double_double(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4);
void M_mindustry_gen_Building_control_mindustry_logic_LAccess_java_lang_Object_double_double_double(jcontext ctx, jobject self, jobject param0, jobject param1, jdouble param2, jdouble param3, jdouble param4);
void M_mindustry_gen_Building_created(jcontext ctx, jobject self);
void M_mindustry_gen_Building_damage_mindustry_gen_Bullet_mindustry_game_Team_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
void M_mindustry_gen_Building_damage_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1);
void M_mindustry_gen_Building_damage_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Building_damage_mindustry_game_Team_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_gen_Building_damageArmorMult_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Building_damageArmorMult_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
void M_mindustry_gen_Building_damageContinuous_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Building_damageContinuousArmorMult_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Building_damageContinuousPierce_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Building_damagePierce_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Building_damagePierce_float_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1);
void M_mindustry_gen_Building_deselect(jcontext ctx, jobject self);
void M_mindustry_gen_Building_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_displayBars_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_displayConsumption_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_draw(jcontext ctx, jobject self);
void M_mindustry_gen_Building_drawCached(jcontext ctx, jobject self);
void M_mindustry_gen_Building_drawConfigure(jcontext ctx, jobject self);
void M_mindustry_gen_Building_drawCracks(jcontext ctx, jobject self);
void M_mindustry_gen_Building_drawDisabled(jcontext ctx, jobject self);
void M_mindustry_gen_Building_drawItemSelection_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_drawLight(jcontext ctx, jobject self);
void M_mindustry_gen_Building_drawLiquidLight_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_gen_Building_drawSelect(jcontext ctx, jobject self);
void M_mindustry_gen_Building_drawStatus(jcontext ctx, jobject self);
void M_mindustry_gen_Building_drawTeam(jcontext ctx, jobject self);
void M_mindustry_gen_Building_drawTeamTop(jcontext ctx, jobject self);
void M_mindustry_gen_Building_dropped(jcontext ctx, jobject self);
void M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_gen_Building_dumpLiquid_mindustry_type_Liquid_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jint param2);
void M_mindustry_gen_Building_eachEdge_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_getStackOffset_mindustry_type_Item_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_gen_Building_handleItem_mindustry_gen_Building_mindustry_type_Item(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_gen_Building_handleLiquid_mindustry_gen_Building_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
void M_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
void M_mindustry_gen_Building_handleString_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_handleUnitPayload_mindustry_gen_Unit_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_gen_Building_heal(jcontext ctx, jobject self);
void M_mindustry_gen_Building_heal_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Building_healFract_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Building_healthChanged(jcontext ctx, jobject self);
void M_mindustry_gen_Building_hitbox_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_incrementDump_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Building_itemTaken_mindustry_type_Item(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_kill(jcontext ctx, jobject self);
void M_mindustry_gen_Building_killed(jcontext ctx, jobject self);
void M_mindustry_gen_Building_noSleep(jcontext ctx, jobject self);
void M_mindustry_gen_Building_offload_mindustry_type_Item(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_onCommand_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_onConfigureClosed(jcontext ctx, jobject self);
void M_mindustry_gen_Building_onControlSelect_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_onDeconstructed_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_onDestroyed(jcontext ctx, jobject self);
void M_mindustry_gen_Building_onNearbyBuildAdded_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_onProximityAdded(jcontext ctx, jobject self);
void M_mindustry_gen_Building_onProximityRemoved(jcontext ctx, jobject self);
void M_mindustry_gen_Building_onProximityUpdate(jcontext ctx, jobject self);
void M_mindustry_gen_Building_onRemoved(jcontext ctx, jobject self);
void M_mindustry_gen_Building_overwrote_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_payloadDraw(jcontext ctx, jobject self);
void M_mindustry_gen_Building_pickedUp(jcontext ctx, jobject self);
void M_mindustry_gen_Building_playDestroySound(jcontext ctx, jobject self);
void M_mindustry_gen_Building_powerGraphRemoved(jcontext ctx, jobject self);
void M_mindustry_gen_Building_produced_mindustry_type_Item(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_produced_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_gen_Building_puddleOn_mindustry_gen_Puddle(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_readAll_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1);
void M_mindustry_gen_Building_readBase_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_readSync_arc_util_io_Reads_byte(jcontext ctx, jobject self, jobject param0, jbyte param1);
void M_mindustry_gen_Building_recache(jcontext ctx, jobject self);
void M_mindustry_gen_Building_recentlyHealed(jcontext ctx, jobject self);
void M_mindustry_gen_Building_remove(jcontext ctx, jobject self);
void M_mindustry_gen_Building_removeFromProximity(jcontext ctx, jobject self);
void M_mindustry_gen_Building_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Building_setProp_mindustry_ctype_UnlockableContent_double(jcontext ctx, jobject self, jobject param0, jdouble param1);
void M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_double(jcontext ctx, jobject self, jobject param0, jdouble param1);
void M_mindustry_gen_Building_setProp_mindustry_logic_LAccess_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_gen_Building_sleep(jcontext ctx, jobject self);
void M_mindustry_gen_Building_splashLiquid_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_gen_Building_tapped(jcontext ctx, jobject self);
void M_mindustry_gen_Building_transferLiquid_mindustry_gen_Building_float_mindustry_type_Liquid(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
void M_mindustry_gen_Building_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Building_unitOn_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_unitOnAny_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_unitRemoved_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_update(jcontext ctx, jobject self);
void M_mindustry_gen_Building_updateConsumption(jcontext ctx, jobject self);
void M_mindustry_gen_Building_updateEfficiencyMultiplier(jcontext ctx, jobject self);
void M_mindustry_gen_Building_updateFogVisibility(jcontext ctx, jobject self);
void M_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_gen_Building_updatePowerGraph(jcontext ctx, jobject self);
void M_mindustry_gen_Building_updateProximity(jcontext ctx, jobject self);
void M_mindustry_gen_Building_updateTableAlign_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_updateTile(jcontext ctx, jobject self);
void M_mindustry_gen_Building_writeAll_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_writeBase_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_lambda$splashLiquid$0_mindustry_type_Liquid_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
jfloat SM_mindustry_gen_Building_lambda$onDestroyed$1_mindustry_type_Liquid_float_R_float(jcontext ctx, jobject param0, jfloat param1);
jfloat SM_mindustry_gen_Building_lambda$onDestroyed$0_mindustry_type_Liquid_float_R_float(jcontext ctx, jobject param0, jfloat param1);
void M_mindustry_gen_Building_lambda$onDeconstructed$0_float_mindustry_world_Tile(jcontext ctx, jobject self, jfloat param0, jobject param1);
void SM_mindustry_gen_Building_lambda$handleUnitPayload$0_mindustry_gen_Unit(jcontext ctx, jobject param0);
void M_mindustry_gen_Building_lambda$display$6_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_gen_Building_lambda$display$9_arc_struct_Bits_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_gen_Building_lambda$display$7_arc_scene_ui_layout_Table_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_gen_Building_lambda$display$8_mindustry_type_Liquid_java_lang_String_R_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_gen_Building_lambda$display$2_mindustry_world_modules_ItemModule_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Building_lambda$display$5_mindustry_world_modules_ItemModule_arc_struct_Bits_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Building_lambda$display$3_arc_scene_ui_layout_Table_mindustry_world_modules_ItemModule_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_gen_Building_lambda$display$4_mindustry_world_modules_ItemModule_mindustry_type_Item_java_lang_String_R_java_lang_CharSequence(jcontext ctx, jobject param0, jobject param1, jobject param2);
void M_mindustry_gen_Building_lambda$display$1_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_lambda$display$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Building_lambda$placed$0_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
