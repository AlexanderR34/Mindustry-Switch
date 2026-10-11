#ifndef HEADER_mindustry_gen_Bullet
#define HEADER_mindustry_gen_Bullet

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "mindustry/gen/Bulletc.h"
#include "mindustry/gen/Damagec.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/gen/IndexableEntity__bullet.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/Ownerc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Shielderc.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Timedc.h"
#include "mindustry/gen/Timerc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Bullet {
	java_lang_Object parent;
	jbool F_absorbed;
	jbool F_added;
	jref F_aimTile;
	jfloat F_aimX;
	jfloat F_aimY;
	jfloat F_buildingDamageMultiplier;
	jref F_collided;
	jfloat F_damage;
	jref F_data;
	jfloat F_deltaX;
	jfloat F_deltaY;
	jfloat F_fdata;
	jint F_frags;
	jbool F_hit;
	jfloat F_hitSize;
	jint F_id;
	jint F_index__bullet;
	jint F_index__draw;
	jbool F_justSpawned;
	jbool F_keepAlive;
	jfloat F_lastX;
	jfloat F_lastY;
	jfloat F_lifetime;
	jref F_mover;
	jfloat F_originX;
	jfloat F_originY;
	jref F_owner;
	jfloat F_rotation;
	jref F_shooter;
	jfloat F_stickyRotation;
	jfloat F_stickyRotationOffset;
	jref F_stickyTarget;
	jfloat F_stickyX;
	jfloat F_stickyY;
	jref F_team;
	jfloat F_time;
	jref F_timer;
	jref F_trail;
	jref F_type;
	jref F_vel;
	jfloat F_x;
	jfloat F_y;
} mindustry_gen_Bullet;

extern Class class_mindustry_gen_Bullet;


#define VTABLE_mindustry_gen_Bullet_hashCode_R_int 0
typedef jint (*func_mindustry_gen_Bullet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_Bullet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_Bullet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_Bullet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_Bullet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_finalize 5
typedef void (*func_mindustry_gen_Bullet_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_notify 6
typedef void (*func_mindustry_gen_Bullet_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_notifyAll 7
typedef void (*func_mindustry_gen_Bullet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_wait 8
typedef void (*func_mindustry_gen_Bullet_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_wait_long 9
typedef void (*func_mindustry_gen_Bullet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Bullet_wait_long_int 10
typedef void (*func_mindustry_gen_Bullet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_Bullet_reset 11
typedef void (*func_mindustry_gen_Bullet_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_self_R_mindustry_gen_Entityc 12
typedef jobject (*func_mindustry_gen_Bullet_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_as_R_java_lang_Object 13
typedef jobject (*func_mindustry_gen_Bullet_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_isAdded_R_boolean 14
typedef jbool (*func_mindustry_gen_Bullet_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_isLocal_R_boolean 15
typedef jbool (*func_mindustry_gen_Bullet_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_isRemote_R_boolean 16
typedef jbool (*func_mindustry_gen_Bullet_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_serialize_R_boolean 17
typedef jbool (*func_mindustry_gen_Bullet_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_classId_R_int 18
typedef jint (*func_mindustry_gen_Bullet_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_id_R_int 19
typedef jint (*func_mindustry_gen_Bullet_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_add 20
typedef void (*func_mindustry_gen_Bullet_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_afterRead 21
typedef void (*func_mindustry_gen_Bullet_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_afterReadAll 22
typedef void (*func_mindustry_gen_Bullet_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_beforeWrite 23
typedef void (*func_mindustry_gen_Bullet_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_id_int 24
typedef void (*func_mindustry_gen_Bullet_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Bullet_read_arc_util_io_Reads 25
typedef void (*func_mindustry_gen_Bullet_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_remove 26
typedef void (*func_mindustry_gen_Bullet_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_update 27
typedef void (*func_mindustry_gen_Bullet_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_write_arc_util_io_Writes 28
typedef void (*func_mindustry_gen_Bullet_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_damage_R_float 29
typedef jfloat (*func_mindustry_gen_Bullet_damage_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_damage_float 30
typedef void (*func_mindustry_gen_Bullet_damage_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_getX_R_float 31
typedef jfloat (*func_mindustry_gen_Bullet_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_getY_R_float 32
typedef jfloat (*func_mindustry_gen_Bullet_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_angleTo_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_gen_Bullet_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_angleTo_float_float_R_float 34
typedef jfloat (*func_mindustry_gen_Bullet_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Bullet_dst2_arc_math_geom_Position_R_float 35
typedef jfloat (*func_mindustry_gen_Bullet_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_dst_arc_math_geom_Position_R_float 36
typedef jfloat (*func_mindustry_gen_Bullet_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_dst_float_float_R_float 37
typedef jfloat (*func_mindustry_gen_Bullet_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Bullet_dst2_float_float_R_float 38
typedef jfloat (*func_mindustry_gen_Bullet_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Bullet_within_arc_math_geom_Position_float_R_boolean 39
typedef jbool (*func_mindustry_gen_Bullet_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Bullet_within_float_float_float_R_boolean 40
typedef jbool (*func_mindustry_gen_Bullet_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_Bullet_floorOn_R_mindustry_world_blocks_environment_Floor 41
typedef jobject (*func_mindustry_gen_Bullet_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_buildOn_R_mindustry_gen_Building 42
typedef jobject (*func_mindustry_gen_Bullet_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_onSolid_R_boolean 43
typedef jbool (*func_mindustry_gen_Bullet_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_x_R_float 44
typedef jfloat (*func_mindustry_gen_Bullet_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_y_R_float 45
typedef jfloat (*func_mindustry_gen_Bullet_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_tileX_R_int 46
typedef jint (*func_mindustry_gen_Bullet_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_tileY_R_int 47
typedef jint (*func_mindustry_gen_Bullet_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_blockOn_R_mindustry_world_Block 48
typedef jobject (*func_mindustry_gen_Bullet_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_tileOn_R_mindustry_world_Tile 49
typedef jobject (*func_mindustry_gen_Bullet_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_set_arc_math_geom_Position 50
typedef void (*func_mindustry_gen_Bullet_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_set_float_float 51
typedef void (*func_mindustry_gen_Bullet_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Bullet_trns_arc_math_geom_Position 52
typedef void (*func_mindustry_gen_Bullet_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_trns_float_float 53
typedef void (*func_mindustry_gen_Bullet_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Bullet_x_float 54
typedef void (*func_mindustry_gen_Bullet_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_y_float 55
typedef void (*func_mindustry_gen_Bullet_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_clipSize_R_float 56
typedef jfloat (*func_mindustry_gen_Bullet_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_draw 57
typedef void (*func_mindustry_gen_Bullet_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_hitbox_arc_math_geom_Rect 58
typedef void (*func_mindustry_gen_Bullet_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_hitSize_R_float 59
typedef jfloat (*func_mindustry_gen_Bullet_hitSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_collides_mindustry_gen_Hitboxc_R_boolean 60
typedef jbool (*func_mindustry_gen_Bullet_collides_mindustry_gen_Hitboxc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_deltaAngle_R_float 61
typedef jfloat (*func_mindustry_gen_Bullet_deltaAngle_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_deltaLen_R_float 62
typedef jfloat (*func_mindustry_gen_Bullet_deltaLen_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_deltaX_R_float 63
typedef jfloat (*func_mindustry_gen_Bullet_deltaX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_deltaY_R_float 64
typedef jfloat (*func_mindustry_gen_Bullet_deltaY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_lastX_R_float 65
typedef jfloat (*func_mindustry_gen_Bullet_lastX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_lastY_R_float 66
typedef jfloat (*func_mindustry_gen_Bullet_lastY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_collision_mindustry_gen_Hitboxc_float_float 67
typedef void (*func_mindustry_gen_Bullet_collision_mindustry_gen_Hitboxc_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_Bullet_deltaX_float 68
typedef void (*func_mindustry_gen_Bullet_deltaX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_deltaY_float 69
typedef void (*func_mindustry_gen_Bullet_deltaY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_getCollisions_arc_func_Cons 70
typedef void (*func_mindustry_gen_Bullet_getCollisions_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_hitSize_float 71
typedef void (*func_mindustry_gen_Bullet_hitSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_hitboxTile_arc_math_geom_Rect 72
typedef void (*func_mindustry_gen_Bullet_hitboxTile_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_lastX_float 73
typedef void (*func_mindustry_gen_Bullet_lastX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_lastY_float 74
typedef void (*func_mindustry_gen_Bullet_lastY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_updateLastPosition 75
typedef void (*func_mindustry_gen_Bullet_updateLastPosition)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_owner_R_mindustry_gen_Entityc 76
typedef jobject (*func_mindustry_gen_Bullet_owner_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_owner_mindustry_gen_Entityc 77
typedef void (*func_mindustry_gen_Bullet_owner_mindustry_gen_Entityc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_inFogTo_mindustry_game_Team_R_boolean 78
typedef jbool (*func_mindustry_gen_Bullet_inFogTo_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_cheating_R_boolean 79
typedef jbool (*func_mindustry_gen_Bullet_cheating_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_team_R_mindustry_game_Team 80
typedef jobject (*func_mindustry_gen_Bullet_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 81
typedef jobject (*func_mindustry_gen_Bullet_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 82
typedef jobject (*func_mindustry_gen_Bullet_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 83
typedef jobject (*func_mindustry_gen_Bullet_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_team_mindustry_game_Team 84
typedef void (*func_mindustry_gen_Bullet_team_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_absorb 85
typedef void (*func_mindustry_gen_Bullet_absorb)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_fin_R_float 86
typedef jfloat (*func_mindustry_gen_Bullet_fin_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_fout_R_float 87
typedef jfloat (*func_mindustry_gen_Bullet_fout_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_fout_arc_math_Interp_R_float 88
typedef jfloat (*func_mindustry_gen_Bullet_fout_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_fout_float_R_float 89
typedef jfloat (*func_mindustry_gen_Bullet_fout_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_fin_arc_math_Interp_R_float 90
typedef jfloat (*func_mindustry_gen_Bullet_fin_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_finpow_R_float 91
typedef jfloat (*func_mindustry_gen_Bullet_finpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_foutpow_R_float 92
typedef jfloat (*func_mindustry_gen_Bullet_foutpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_finpowdown_R_float 93
typedef jfloat (*func_mindustry_gen_Bullet_finpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_foutpowdown_R_float 94
typedef jfloat (*func_mindustry_gen_Bullet_foutpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_fslope_R_float 95
typedef jfloat (*func_mindustry_gen_Bullet_fslope_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_lifetime_R_float 96
typedef jfloat (*func_mindustry_gen_Bullet_lifetime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_time_R_float 97
typedef jfloat (*func_mindustry_gen_Bullet_time_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_lifetime_float 98
typedef void (*func_mindustry_gen_Bullet_lifetime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_time_float 99
typedef void (*func_mindustry_gen_Bullet_time_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_timer_R_arc_util_Interval 100
typedef jobject (*func_mindustry_gen_Bullet_timer_R_arc_util_Interval)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_timer_int_float_R_boolean 101
typedef jbool (*func_mindustry_gen_Bullet_timer_int_float_R_boolean)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_mindustry_gen_Bullet_timer_arc_util_Interval 102
typedef void (*func_mindustry_gen_Bullet_timer_arc_util_Interval)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_sense_mindustry_logic_LAccess_R_double 103
typedef jdouble (*func_mindustry_gen_Bullet_sense_mindustry_logic_LAccess_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_sense_mindustry_ctype_Content_R_double 104
typedef jdouble (*func_mindustry_gen_Bullet_sense_mindustry_ctype_Content_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_senseObject_mindustry_logic_LAccess_R_java_lang_Object 105
typedef jobject (*func_mindustry_gen_Bullet_senseObject_mindustry_logic_LAccess_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_setProp_mindustry_logic_LAccess_double 106
typedef void (*func_mindustry_gen_Bullet_setProp_mindustry_logic_LAccess_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define VTABLE_mindustry_gen_Bullet_setProp_mindustry_logic_LAccess_java_lang_Object 107
typedef void (*func_mindustry_gen_Bullet_setProp_mindustry_logic_LAccess_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Bullet_setProp_mindustry_ctype_UnlockableContent_double 108
typedef void (*func_mindustry_gen_Bullet_setProp_mindustry_ctype_UnlockableContent_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define VTABLE_mindustry_gen_Bullet_rotation_R_float 109
typedef jfloat (*func_mindustry_gen_Bullet_rotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_rotation_float 110
typedef void (*func_mindustry_gen_Bullet_rotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_shooter_R_mindustry_gen_Entityc 111
typedef jobject (*func_mindustry_gen_Bullet_shooter_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_shooter_mindustry_gen_Entityc 112
typedef void (*func_mindustry_gen_Bullet_shooter_mindustry_gen_Entityc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_mover_R_mindustry_entities_Mover 113
typedef jobject (*func_mindustry_gen_Bullet_mover_R_mindustry_entities_Mover)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_trail_R_mindustry_graphics_Trail 114
typedef jobject (*func_mindustry_gen_Bullet_trail_R_mindustry_graphics_Trail)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_aimTile_R_mindustry_world_Tile 115
typedef jobject (*func_mindustry_gen_Bullet_aimTile_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_stickyTarget_R_mindustry_gen_Posc 116
typedef jobject (*func_mindustry_gen_Bullet_stickyTarget_R_mindustry_gen_Posc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_vel_R_arc_math_geom_Vec2 117
typedef jobject (*func_mindustry_gen_Bullet_vel_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_collided_R_arc_struct_IntSeq 118
typedef jobject (*func_mindustry_gen_Bullet_collided_R_arc_struct_IntSeq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_absorbed_R_boolean 119
typedef jbool (*func_mindustry_gen_Bullet_absorbed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean 120
typedef jbool (*func_mindustry_gen_Bullet_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_Bullet_hasCollided_int_R_boolean 121
typedef jbool (*func_mindustry_gen_Bullet_hasCollided_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Bullet_hit_R_boolean 122
typedef jbool (*func_mindustry_gen_Bullet_hit_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_justSpawned_R_boolean 123
typedef jbool (*func_mindustry_gen_Bullet_justSpawned_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_keepAlive_R_boolean 124
typedef jbool (*func_mindustry_gen_Bullet_keepAlive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_aimX_R_float 125
typedef jfloat (*func_mindustry_gen_Bullet_aimX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_aimY_R_float 126
typedef jfloat (*func_mindustry_gen_Bullet_aimY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_buildingDamageMultiplier_R_float 127
typedef jfloat (*func_mindustry_gen_Bullet_buildingDamageMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_damageMultiplier_R_float 128
typedef jfloat (*func_mindustry_gen_Bullet_damageMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_fdata_R_float 129
typedef jfloat (*func_mindustry_gen_Bullet_fdata_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_originX_R_float 130
typedef jfloat (*func_mindustry_gen_Bullet_originX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_originY_R_float 131
typedef jfloat (*func_mindustry_gen_Bullet_originY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_stickyRotation_R_float 132
typedef jfloat (*func_mindustry_gen_Bullet_stickyRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_stickyRotationOffset_R_float 133
typedef jfloat (*func_mindustry_gen_Bullet_stickyRotationOffset_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_stickyX_R_float 134
typedef jfloat (*func_mindustry_gen_Bullet_stickyX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_stickyY_R_float 135
typedef jfloat (*func_mindustry_gen_Bullet_stickyY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_frags_R_int 136
typedef jint (*func_mindustry_gen_Bullet_frags_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_data_R_java_lang_Object 137
typedef jobject (*func_mindustry_gen_Bullet_data_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_type_R_mindustry_entities_bullet_BulletType 138
typedef jobject (*func_mindustry_gen_Bullet_type_R_mindustry_entities_bullet_BulletType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Bullet_absorbed_boolean 139
typedef void (*func_mindustry_gen_Bullet_absorbed_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Bullet_aimTile_mindustry_world_Tile 140
typedef void (*func_mindustry_gen_Bullet_aimTile_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_aimX_float 141
typedef void (*func_mindustry_gen_Bullet_aimX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_aimY_float 142
typedef void (*func_mindustry_gen_Bullet_aimY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_buildingDamageMultiplier_float 143
typedef void (*func_mindustry_gen_Bullet_buildingDamageMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_collided_arc_struct_IntSeq 144
typedef void (*func_mindustry_gen_Bullet_collided_arc_struct_IntSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_data_java_lang_Object 145
typedef void (*func_mindustry_gen_Bullet_data_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_fdata_float 146
typedef void (*func_mindustry_gen_Bullet_fdata_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_frags_int 147
typedef void (*func_mindustry_gen_Bullet_frags_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Bullet_hit_boolean 148
typedef void (*func_mindustry_gen_Bullet_hit_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Bullet_initVel_float_float 149
typedef void (*func_mindustry_gen_Bullet_initVel_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Bullet_justSpawned_boolean 150
typedef void (*func_mindustry_gen_Bullet_justSpawned_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Bullet_keepAlive_boolean 151
typedef void (*func_mindustry_gen_Bullet_keepAlive_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Bullet_moveRelative_float_float 152
typedef void (*func_mindustry_gen_Bullet_moveRelative_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Bullet_mover_mindustry_entities_Mover 153
typedef void (*func_mindustry_gen_Bullet_mover_mindustry_entities_Mover)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_originX_float 154
typedef void (*func_mindustry_gen_Bullet_originX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_originY_float 155
typedef void (*func_mindustry_gen_Bullet_originY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_stickTo_mindustry_gen_Posc 156
typedef void (*func_mindustry_gen_Bullet_stickTo_mindustry_gen_Posc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_stickyRotation_float 157
typedef void (*func_mindustry_gen_Bullet_stickyRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_stickyRotationOffset_float 158
typedef void (*func_mindustry_gen_Bullet_stickyRotationOffset_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_stickyTarget_mindustry_gen_Posc 159
typedef void (*func_mindustry_gen_Bullet_stickyTarget_mindustry_gen_Posc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_stickyX_float 160
typedef void (*func_mindustry_gen_Bullet_stickyX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_stickyY_float 161
typedef void (*func_mindustry_gen_Bullet_stickyY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Bullet_tileRaycast_int_int_int_int 162
typedef void (*func_mindustry_gen_Bullet_tileRaycast_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_gen_Bullet_trail_mindustry_graphics_Trail 163
typedef void (*func_mindustry_gen_Bullet_trail_mindustry_graphics_Trail)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_turn_float_float 164
typedef void (*func_mindustry_gen_Bullet_turn_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Bullet_type_mindustry_entities_bullet_BulletType 165
typedef void (*func_mindustry_gen_Bullet_type_mindustry_entities_bullet_BulletType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_vel_arc_math_geom_Vec2 166
typedef void (*func_mindustry_gen_Bullet_vel_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Bullet_setIndex__bullet_int 167
typedef void (*func_mindustry_gen_Bullet_setIndex__bullet_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Bullet_setIndex__draw_int 168
typedef void (*func_mindustry_gen_Bullet_setIndex__draw_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Bullet_lambda$draw$0 169
typedef void (*func_mindustry_gen_Bullet_lambda$draw$0)(jcontext ctx, jobject self);

void mark_mindustry_gen_Bullet(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Bullet(jcontext ctx);
void init_mindustry_gen_Bullet(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_vel_R_arc_math_geom_Vec2(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_collided_R_arc_struct_IntSeq(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_timer_R_arc_util_Interval(jcontext ctx, jobject self);
jbool M_mindustry_gen_Bullet_absorbed_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Bullet_hit_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Bullet_justSpawned_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Bullet_keepAlive_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_aimX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_aimY_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_buildingDamageMultiplier_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_damage_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_deltaX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_deltaY_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_fdata_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_lastX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_lastY_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_lifetime_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_originX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_originY_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_stickyRotation_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_stickyRotationOffset_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_stickyX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_stickyY_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_time_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_x_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_y_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_Bullet_classId_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Bullet_frags_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Bullet_id_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_data_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_mover_R_mindustry_entities_Mover(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_type_R_mindustry_entities_bullet_BulletType(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_team_R_mindustry_game_Team(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_owner_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_shooter_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_stickyTarget_R_mindustry_gen_Posc(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_trail_R_mindustry_graphics_Trail(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_aimTile_R_mindustry_world_Tile(jcontext ctx, jobject self);
void M_mindustry_gen_Bullet_absorbed_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Bullet_aimTile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_aimX_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_aimY_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_buildingDamageMultiplier_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_collided_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_damage_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_data_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_deltaX_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_deltaY_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_fdata_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_frags_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Bullet_hit_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Bullet_hitSize_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_id_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Bullet_justSpawned_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Bullet_keepAlive_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Bullet_lastX_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_lastY_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_lifetime_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_mover_mindustry_entities_Mover(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_originX_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_originY_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_owner_mindustry_gen_Entityc(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_setIndex__bullet_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Bullet_setIndex__draw_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Bullet_shooter_mindustry_gen_Entityc(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_stickyRotation_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_stickyRotationOffset_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_stickyTarget_mindustry_gen_Posc(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_stickyX_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_stickyY_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_team_mindustry_game_Team(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_time_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_timer_arc_util_Interval(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_trail_mindustry_graphics_Trail(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_type_mindustry_entities_bullet_BulletType(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_vel_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_x_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_y_float(jcontext ctx, jobject self, jfloat param0);
jobject M_mindustry_gen_Bullet_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_as_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_mindustry_gen_Bullet_cheating_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Bullet_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jbool M_mindustry_gen_Bullet_collides_mindustry_gen_Hitboxc_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Bullet_hasCollided_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_mindustry_gen_Bullet_inFogTo_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Bullet_isAdded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Bullet_isLocal_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Bullet_isRemote_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Bullet_onSolid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Bullet_serialize_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Bullet_timer_int_float_R_boolean(jcontext ctx, jobject self, jint param0, jfloat param1);
jdouble M_mindustry_gen_Bullet_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_gen_Bullet_clipSize_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_damageMultiplier_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_deltaAngle_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_deltaLen_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_fin_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_getX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_getY_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_hitSize_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Bullet_rotation_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_Bullet_tileX_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Bullet_tileY_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self);
jobject M_mindustry_gen_Bullet_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject SM_mindustry_gen_Bullet_create_R_mindustry_gen_Bullet(jcontext ctx);
void M_mindustry_gen_Bullet_absorb(jcontext ctx, jobject self);
void M_mindustry_gen_Bullet_add(jcontext ctx, jobject self);
void M_mindustry_gen_Bullet_afterRead(jcontext ctx, jobject self);
void M_mindustry_gen_Bullet_afterReadAll(jcontext ctx, jobject self);
void M_mindustry_gen_Bullet_beforeWrite(jcontext ctx, jobject self);
void M_mindustry_gen_Bullet_collision_mindustry_gen_Hitboxc_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_mindustry_gen_Bullet_draw(jcontext ctx, jobject self);
void M_mindustry_gen_Bullet_getCollisions_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_hitbox_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_hitboxTile_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_initVel_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Bullet_moveRelative_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Bullet_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_remove(jcontext ctx, jobject self);
void M_mindustry_gen_Bullet_reset(jcontext ctx, jobject self);
void M_mindustry_gen_Bullet_rotation_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Bullet_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Bullet_setProp_mindustry_ctype_UnlockableContent_double(jcontext ctx, jobject self, jobject param0, jdouble param1);
void M_mindustry_gen_Bullet_setProp_mindustry_logic_LAccess_double(jcontext ctx, jobject self, jobject param0, jdouble param1);
void M_mindustry_gen_Bullet_setProp_mindustry_logic_LAccess_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_gen_Bullet_stickTo_mindustry_gen_Posc(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_tileRaycast_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_mindustry_gen_Bullet_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Bullet_turn_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Bullet_update(jcontext ctx, jobject self);
void M_mindustry_gen_Bullet_updateLastPosition(jcontext ctx, jobject self);
void M_mindustry_gen_Bullet_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Bullet_lambda$draw$0(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
