#ifndef HEADER_mindustry_entities_comp_BulletComp
#define HEADER_mindustry_entities_comp_BulletComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Timedc.h"
#include "mindustry/gen/Damagec.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Shielderc.h"
#include "mindustry/gen/Ownerc.h"
#include "mindustry/gen/Bulletc.h"
#include "mindustry/gen/Timerc.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/logic/Settable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_BulletComp {
	java_lang_Object parent;
	jref F_team;
	jref F_owner;
	jfloat F_x;
	jfloat F_y;
	jfloat F_damage;
	jfloat F_lastX;
	jfloat F_lastY;
	jfloat F_time;
	jfloat F_lifetime;
	jref F_collided;
	jref F_type;
	jref F_vel;
	jref F_data;
	jfloat F_fdata;
	jfloat F_rotation;
	jbool F_keepAlive;
	jbool F_justSpawned;
	jref F_shooter;
	jref F_aimTile;
	jfloat F_aimX;
	jfloat F_aimY;
	jfloat F_originX;
	jfloat F_originY;
	jfloat F_buildingDamageMultiplier;
	jref F_mover;
	jbool F_absorbed;
	jbool F_hit;
	jref F_trail;
	jint F_frags;
	jref F_stickyTarget;
	jfloat F_stickyX;
	jfloat F_stickyY;
	jfloat F_stickyRotation;
	jfloat F_stickyRotationOffset;
} mindustry_entities_comp_BulletComp;

extern Class class_mindustry_entities_comp_BulletComp;


#define VTABLE_mindustry_entities_comp_BulletComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_BulletComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_BulletComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_BulletComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_BulletComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_BulletComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_finalize 5
typedef void (*func_mindustry_entities_comp_BulletComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_notify 6
typedef void (*func_mindustry_entities_comp_BulletComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_BulletComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_wait 8
typedef void (*func_mindustry_entities_comp_BulletComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_wait_long 9
typedef void (*func_mindustry_entities_comp_BulletComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_BulletComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_BulletComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_BulletComp_fin_R_float 11
typedef jfloat (*func_mindustry_entities_comp_BulletComp_fin_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_fout_R_float 12
typedef jfloat (*func_mindustry_entities_comp_BulletComp_fout_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_fout_arc_math_Interp_R_float 13
typedef jfloat (*func_mindustry_entities_comp_BulletComp_fout_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_fout_float_R_float 14
typedef jfloat (*func_mindustry_entities_comp_BulletComp_fout_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_fin_arc_math_Interp_R_float 15
typedef jfloat (*func_mindustry_entities_comp_BulletComp_fin_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_finpow_R_float 16
typedef jfloat (*func_mindustry_entities_comp_BulletComp_finpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_foutpow_R_float 17
typedef jfloat (*func_mindustry_entities_comp_BulletComp_foutpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_finpowdown_R_float 18
typedef jfloat (*func_mindustry_entities_comp_BulletComp_finpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_foutpowdown_R_float 19
typedef jfloat (*func_mindustry_entities_comp_BulletComp_foutpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_fslope_R_float 20
typedef jfloat (*func_mindustry_entities_comp_BulletComp_fslope_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc 21
typedef jobject (*func_mindustry_entities_comp_BulletComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_as_R_java_lang_Object 22
typedef jobject (*func_mindustry_entities_comp_BulletComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_isAdded_R_boolean 23
typedef jbool (*func_mindustry_entities_comp_BulletComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_isLocal_R_boolean 24
typedef jbool (*func_mindustry_entities_comp_BulletComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_isRemote_R_boolean 25
typedef jbool (*func_mindustry_entities_comp_BulletComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_serialize_R_boolean 26
typedef jbool (*func_mindustry_entities_comp_BulletComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_classId_R_int 27
typedef jint (*func_mindustry_entities_comp_BulletComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_id_R_int 28
typedef jint (*func_mindustry_entities_comp_BulletComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_add 29
typedef void (*func_mindustry_entities_comp_BulletComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_afterRead 30
typedef void (*func_mindustry_entities_comp_BulletComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_afterReadAll 31
typedef void (*func_mindustry_entities_comp_BulletComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_beforeWrite 32
typedef void (*func_mindustry_entities_comp_BulletComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_id_int 33
typedef void (*func_mindustry_entities_comp_BulletComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_BulletComp_read_arc_util_io_Reads 34
typedef void (*func_mindustry_entities_comp_BulletComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_remove 35
typedef void (*func_mindustry_entities_comp_BulletComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_update 36
typedef void (*func_mindustry_entities_comp_BulletComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_write_arc_util_io_Writes 37
typedef void (*func_mindustry_entities_comp_BulletComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_lifetime_R_float 38
typedef jfloat (*func_mindustry_entities_comp_BulletComp_lifetime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_time_R_float 39
typedef jfloat (*func_mindustry_entities_comp_BulletComp_time_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_lifetime_float 40
typedef void (*func_mindustry_entities_comp_BulletComp_lifetime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_time_float 41
typedef void (*func_mindustry_entities_comp_BulletComp_time_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_damage_R_float 42
typedef jfloat (*func_mindustry_entities_comp_BulletComp_damage_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_damage_float 43
typedef void (*func_mindustry_entities_comp_BulletComp_damage_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_hitbox_arc_math_geom_Rect 44
typedef void (*func_mindustry_entities_comp_BulletComp_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_getX_R_float 45
typedef jfloat (*func_mindustry_entities_comp_BulletComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_getY_R_float 46
typedef jfloat (*func_mindustry_entities_comp_BulletComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_angleTo_arc_math_geom_Position_R_float 47
typedef jfloat (*func_mindustry_entities_comp_BulletComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_angleTo_float_float_R_float 48
typedef jfloat (*func_mindustry_entities_comp_BulletComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_BulletComp_dst2_arc_math_geom_Position_R_float 49
typedef jfloat (*func_mindustry_entities_comp_BulletComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_dst_arc_math_geom_Position_R_float 50
typedef jfloat (*func_mindustry_entities_comp_BulletComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_dst_float_float_R_float 51
typedef jfloat (*func_mindustry_entities_comp_BulletComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_BulletComp_dst2_float_float_R_float 52
typedef jfloat (*func_mindustry_entities_comp_BulletComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_BulletComp_within_arc_math_geom_Position_float_R_boolean 53
typedef jbool (*func_mindustry_entities_comp_BulletComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_BulletComp_within_float_float_float_R_boolean 54
typedef jbool (*func_mindustry_entities_comp_BulletComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_BulletComp_hitSize_R_float 55
typedef jfloat (*func_mindustry_entities_comp_BulletComp_hitSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_floorOn_R_mindustry_world_blocks_environment_Floor 56
typedef jobject (*func_mindustry_entities_comp_BulletComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_buildOn_R_mindustry_gen_Building 57
typedef jobject (*func_mindustry_entities_comp_BulletComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_onSolid_R_boolean 58
typedef jbool (*func_mindustry_entities_comp_BulletComp_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_x_R_float 59
typedef jfloat (*func_mindustry_entities_comp_BulletComp_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_y_R_float 60
typedef jfloat (*func_mindustry_entities_comp_BulletComp_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_tileX_R_int 61
typedef jint (*func_mindustry_entities_comp_BulletComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_tileY_R_int 62
typedef jint (*func_mindustry_entities_comp_BulletComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_blockOn_R_mindustry_world_Block 63
typedef jobject (*func_mindustry_entities_comp_BulletComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_tileOn_R_mindustry_world_Tile 64
typedef jobject (*func_mindustry_entities_comp_BulletComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_set_arc_math_geom_Position 65
typedef void (*func_mindustry_entities_comp_BulletComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_set_float_float 66
typedef void (*func_mindustry_entities_comp_BulletComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_BulletComp_trns_arc_math_geom_Position 67
typedef void (*func_mindustry_entities_comp_BulletComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_trns_float_float 68
typedef void (*func_mindustry_entities_comp_BulletComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_BulletComp_x_float 69
typedef void (*func_mindustry_entities_comp_BulletComp_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_y_float 70
typedef void (*func_mindustry_entities_comp_BulletComp_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_collides_mindustry_gen_Hitboxc_R_boolean 71
typedef jbool (*func_mindustry_entities_comp_BulletComp_collides_mindustry_gen_Hitboxc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_deltaAngle_R_float 72
typedef jfloat (*func_mindustry_entities_comp_BulletComp_deltaAngle_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_deltaLen_R_float 73
typedef jfloat (*func_mindustry_entities_comp_BulletComp_deltaLen_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_deltaX_R_float 74
typedef jfloat (*func_mindustry_entities_comp_BulletComp_deltaX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_deltaY_R_float 75
typedef jfloat (*func_mindustry_entities_comp_BulletComp_deltaY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_lastX_R_float 76
typedef jfloat (*func_mindustry_entities_comp_BulletComp_lastX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_lastY_R_float 77
typedef jfloat (*func_mindustry_entities_comp_BulletComp_lastY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_collision_mindustry_gen_Hitboxc_float_float 78
typedef void (*func_mindustry_entities_comp_BulletComp_collision_mindustry_gen_Hitboxc_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_BulletComp_deltaX_float 79
typedef void (*func_mindustry_entities_comp_BulletComp_deltaX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_deltaY_float 80
typedef void (*func_mindustry_entities_comp_BulletComp_deltaY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_getCollisions_arc_func_Cons 81
typedef void (*func_mindustry_entities_comp_BulletComp_getCollisions_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_hitSize_float 82
typedef void (*func_mindustry_entities_comp_BulletComp_hitSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_hitboxTile_arc_math_geom_Rect 83
typedef void (*func_mindustry_entities_comp_BulletComp_hitboxTile_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_lastX_float 84
typedef void (*func_mindustry_entities_comp_BulletComp_lastX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_lastY_float 85
typedef void (*func_mindustry_entities_comp_BulletComp_lastY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_updateLastPosition 86
typedef void (*func_mindustry_entities_comp_BulletComp_updateLastPosition)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_inFogTo_mindustry_game_Team_R_boolean 87
typedef jbool (*func_mindustry_entities_comp_BulletComp_inFogTo_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_cheating_R_boolean 88
typedef jbool (*func_mindustry_entities_comp_BulletComp_cheating_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_team_R_mindustry_game_Team 89
typedef jobject (*func_mindustry_entities_comp_BulletComp_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 90
typedef jobject (*func_mindustry_entities_comp_BulletComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 91
typedef jobject (*func_mindustry_entities_comp_BulletComp_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 92
typedef jobject (*func_mindustry_entities_comp_BulletComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_team_mindustry_game_Team 93
typedef void (*func_mindustry_entities_comp_BulletComp_team_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_clipSize_R_float 94
typedef jfloat (*func_mindustry_entities_comp_BulletComp_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_draw 95
typedef void (*func_mindustry_entities_comp_BulletComp_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_absorb 96
typedef void (*func_mindustry_entities_comp_BulletComp_absorb)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_owner_R_mindustry_gen_Entityc 97
typedef jobject (*func_mindustry_entities_comp_BulletComp_owner_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_owner_mindustry_gen_Entityc 98
typedef void (*func_mindustry_entities_comp_BulletComp_owner_mindustry_gen_Entityc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_timer_R_arc_util_Interval 99
typedef jobject (*func_mindustry_entities_comp_BulletComp_timer_R_arc_util_Interval)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_timer_int_float_R_boolean 100
typedef jbool (*func_mindustry_entities_comp_BulletComp_timer_int_float_R_boolean)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_BulletComp_timer_arc_util_Interval 101
typedef void (*func_mindustry_entities_comp_BulletComp_timer_arc_util_Interval)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_sense_mindustry_logic_LAccess_R_double 102
typedef jdouble (*func_mindustry_entities_comp_BulletComp_sense_mindustry_logic_LAccess_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_sense_mindustry_ctype_Content_R_double 103
typedef jdouble (*func_mindustry_entities_comp_BulletComp_sense_mindustry_ctype_Content_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_senseObject_mindustry_logic_LAccess_R_java_lang_Object 104
typedef jobject (*func_mindustry_entities_comp_BulletComp_senseObject_mindustry_logic_LAccess_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_setProp_mindustry_logic_LAccess_double 105
typedef void (*func_mindustry_entities_comp_BulletComp_setProp_mindustry_logic_LAccess_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define VTABLE_mindustry_entities_comp_BulletComp_setProp_mindustry_logic_LAccess_java_lang_Object 106
typedef void (*func_mindustry_entities_comp_BulletComp_setProp_mindustry_logic_LAccess_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_entities_comp_BulletComp_setProp_mindustry_ctype_UnlockableContent_double 107
typedef void (*func_mindustry_entities_comp_BulletComp_setProp_mindustry_ctype_UnlockableContent_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define VTABLE_mindustry_entities_comp_BulletComp_rotation_R_float 108
typedef jfloat (*func_mindustry_entities_comp_BulletComp_rotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_rotation_float 109
typedef void (*func_mindustry_entities_comp_BulletComp_rotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_shooter_R_mindustry_gen_Entityc 110
typedef jobject (*func_mindustry_entities_comp_BulletComp_shooter_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_shooter_mindustry_gen_Entityc 111
typedef void (*func_mindustry_entities_comp_BulletComp_shooter_mindustry_gen_Entityc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_mover_R_mindustry_entities_Mover 112
typedef jobject (*func_mindustry_entities_comp_BulletComp_mover_R_mindustry_entities_Mover)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_trail_R_mindustry_graphics_Trail 113
typedef jobject (*func_mindustry_entities_comp_BulletComp_trail_R_mindustry_graphics_Trail)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_aimTile_R_mindustry_world_Tile 114
typedef jobject (*func_mindustry_entities_comp_BulletComp_aimTile_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_stickyTarget_R_mindustry_gen_Posc 115
typedef jobject (*func_mindustry_entities_comp_BulletComp_stickyTarget_R_mindustry_gen_Posc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_vel_R_arc_math_geom_Vec2 116
typedef jobject (*func_mindustry_entities_comp_BulletComp_vel_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_collided_R_arc_struct_IntSeq 117
typedef jobject (*func_mindustry_entities_comp_BulletComp_collided_R_arc_struct_IntSeq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_absorbed_R_boolean 118
typedef jbool (*func_mindustry_entities_comp_BulletComp_absorbed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean 119
typedef jbool (*func_mindustry_entities_comp_BulletComp_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_BulletComp_hasCollided_int_R_boolean 120
typedef jbool (*func_mindustry_entities_comp_BulletComp_hasCollided_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_BulletComp_hit_R_boolean 121
typedef jbool (*func_mindustry_entities_comp_BulletComp_hit_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_justSpawned_R_boolean 122
typedef jbool (*func_mindustry_entities_comp_BulletComp_justSpawned_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_keepAlive_R_boolean 123
typedef jbool (*func_mindustry_entities_comp_BulletComp_keepAlive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_aimX_R_float 124
typedef jfloat (*func_mindustry_entities_comp_BulletComp_aimX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_aimY_R_float 125
typedef jfloat (*func_mindustry_entities_comp_BulletComp_aimY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_buildingDamageMultiplier_R_float 126
typedef jfloat (*func_mindustry_entities_comp_BulletComp_buildingDamageMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_damageMultiplier_R_float 127
typedef jfloat (*func_mindustry_entities_comp_BulletComp_damageMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_fdata_R_float 128
typedef jfloat (*func_mindustry_entities_comp_BulletComp_fdata_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_originX_R_float 129
typedef jfloat (*func_mindustry_entities_comp_BulletComp_originX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_originY_R_float 130
typedef jfloat (*func_mindustry_entities_comp_BulletComp_originY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_stickyRotation_R_float 131
typedef jfloat (*func_mindustry_entities_comp_BulletComp_stickyRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_stickyRotationOffset_R_float 132
typedef jfloat (*func_mindustry_entities_comp_BulletComp_stickyRotationOffset_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_stickyX_R_float 133
typedef jfloat (*func_mindustry_entities_comp_BulletComp_stickyX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_stickyY_R_float 134
typedef jfloat (*func_mindustry_entities_comp_BulletComp_stickyY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_frags_R_int 135
typedef jint (*func_mindustry_entities_comp_BulletComp_frags_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_data_R_java_lang_Object 136
typedef jobject (*func_mindustry_entities_comp_BulletComp_data_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_type_R_mindustry_entities_bullet_BulletType 137
typedef jobject (*func_mindustry_entities_comp_BulletComp_type_R_mindustry_entities_bullet_BulletType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_BulletComp_absorbed_boolean 138
typedef void (*func_mindustry_entities_comp_BulletComp_absorbed_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_comp_BulletComp_aimTile_mindustry_world_Tile 139
typedef void (*func_mindustry_entities_comp_BulletComp_aimTile_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_aimX_float 140
typedef void (*func_mindustry_entities_comp_BulletComp_aimX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_aimY_float 141
typedef void (*func_mindustry_entities_comp_BulletComp_aimY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_buildingDamageMultiplier_float 142
typedef void (*func_mindustry_entities_comp_BulletComp_buildingDamageMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_collided_arc_struct_IntSeq 143
typedef void (*func_mindustry_entities_comp_BulletComp_collided_arc_struct_IntSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_data_java_lang_Object 144
typedef void (*func_mindustry_entities_comp_BulletComp_data_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_fdata_float 145
typedef void (*func_mindustry_entities_comp_BulletComp_fdata_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_frags_int 146
typedef void (*func_mindustry_entities_comp_BulletComp_frags_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_BulletComp_hit_boolean 147
typedef void (*func_mindustry_entities_comp_BulletComp_hit_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_comp_BulletComp_initVel_float_float 148
typedef void (*func_mindustry_entities_comp_BulletComp_initVel_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_BulletComp_justSpawned_boolean 149
typedef void (*func_mindustry_entities_comp_BulletComp_justSpawned_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_comp_BulletComp_keepAlive_boolean 150
typedef void (*func_mindustry_entities_comp_BulletComp_keepAlive_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_comp_BulletComp_moveRelative_float_float 151
typedef void (*func_mindustry_entities_comp_BulletComp_moveRelative_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_BulletComp_mover_mindustry_entities_Mover 152
typedef void (*func_mindustry_entities_comp_BulletComp_mover_mindustry_entities_Mover)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_originX_float 153
typedef void (*func_mindustry_entities_comp_BulletComp_originX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_originY_float 154
typedef void (*func_mindustry_entities_comp_BulletComp_originY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_stickTo_mindustry_gen_Posc 155
typedef void (*func_mindustry_entities_comp_BulletComp_stickTo_mindustry_gen_Posc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_stickyRotation_float 156
typedef void (*func_mindustry_entities_comp_BulletComp_stickyRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_stickyRotationOffset_float 157
typedef void (*func_mindustry_entities_comp_BulletComp_stickyRotationOffset_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_stickyTarget_mindustry_gen_Posc 158
typedef void (*func_mindustry_entities_comp_BulletComp_stickyTarget_mindustry_gen_Posc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_stickyX_float 159
typedef void (*func_mindustry_entities_comp_BulletComp_stickyX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_stickyY_float 160
typedef void (*func_mindustry_entities_comp_BulletComp_stickyY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_BulletComp_tileRaycast_int_int_int_int 161
typedef void (*func_mindustry_entities_comp_BulletComp_tileRaycast_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_entities_comp_BulletComp_trail_mindustry_graphics_Trail 162
typedef void (*func_mindustry_entities_comp_BulletComp_trail_mindustry_graphics_Trail)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_turn_float_float 163
typedef void (*func_mindustry_entities_comp_BulletComp_turn_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_BulletComp_type_mindustry_entities_bullet_BulletType 164
typedef void (*func_mindustry_entities_comp_BulletComp_type_mindustry_entities_bullet_BulletType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_vel_arc_math_geom_Vec2 165
typedef void (*func_mindustry_entities_comp_BulletComp_vel_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_BulletComp_lambda$draw$0 166
typedef void (*func_mindustry_entities_comp_BulletComp_lambda$draw$0)(jcontext ctx, jobject self);

void mark_mindustry_entities_comp_BulletComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_BulletComp(jcontext ctx);
void init_mindustry_entities_comp_BulletComp(jcontext ctx, jobject self);
void M_mindustry_entities_comp_BulletComp_getCollisions_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_entities_comp_BulletComp_isLocal_R_boolean(jcontext ctx, jobject self);
void M_mindustry_entities_comp_BulletComp_add(jcontext ctx, jobject self);
void M_mindustry_entities_comp_BulletComp_remove(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_BulletComp_damageMultiplier_R_float(jcontext ctx, jobject self);
void M_mindustry_entities_comp_BulletComp_absorb(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_BulletComp_hasCollided_int_R_boolean(jcontext ctx, jobject self, jint param0);
jfloat M_mindustry_entities_comp_BulletComp_clipSize_R_float(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_BulletComp_collides_mindustry_gen_Hitboxc_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_BulletComp_collision_mindustry_gen_Hitboxc_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_mindustry_entities_comp_BulletComp_stickTo_mindustry_gen_Posc(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_BulletComp_update(jcontext ctx, jobject self);
void M_mindustry_entities_comp_BulletComp_moveRelative_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_entities_comp_BulletComp_turn_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_mindustry_entities_comp_BulletComp_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_mindustry_entities_comp_BulletComp_tileRaycast_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_mindustry_entities_comp_BulletComp_draw(jcontext ctx, jobject self);
void M_mindustry_entities_comp_BulletComp_initVel_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_entities_comp_BulletComp_rotation_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_mindustry_entities_comp_BulletComp_rotation_R_float(jcontext ctx, jobject self);
jdouble M_mindustry_entities_comp_BulletComp_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_BulletComp_setProp_mindustry_logic_LAccess_double(jcontext ctx, jobject self, jobject param0, jdouble param1);
void M_mindustry_entities_comp_BulletComp_setProp_mindustry_ctype_UnlockableContent_double(jcontext ctx, jobject self, jobject param0, jdouble param1);
void M_mindustry_entities_comp_BulletComp_setProp_mindustry_logic_LAccess_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_entities_comp_BulletComp_lambda$draw$0(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
