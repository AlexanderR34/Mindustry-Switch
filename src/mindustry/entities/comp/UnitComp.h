#ifndef HEADER_mindustry_entities_comp_UnitComp
#define HEADER_mindustry_entities_comp_UnitComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/gen/Weaponsc.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/Shieldc.h"
#include "mindustry/ui/Displayable.h"
#include "mindustry/logic/Ranged.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/logic/Settable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_UnitComp {
	java_lang_Object parent;
	jbool F_dead;
	jbool F_disarmed;
	jfloat F_x;
	jfloat F_y;
	jfloat F_rotation;
	jfloat F_maxHealth;
	jfloat F_drag;
	jfloat F_armor;
	jfloat F_hitSize;
	jfloat F_health;
	jfloat F_shield;
	jfloat F_dragMultiplier;
	jfloat F_armorOverride;
	jfloat F_speedMultiplier;
	jref F_team;
	jint F_id;
	jref F_mineTile;
	jref F_vel;
	jref F_mounts;
	jref F_stack;
	jref F_controller;
	jref F_abilities;
	jref F_type;
	jbool F_spawnedByCore;
	jdouble F_flag;
	jref F_trail;
	jref F_dockedType;
	jref F_lastCommanded;
	jfloat F_shadowAlpha;
	jfloat F_healTime;
	jint F_lastFogPos;
	jbool F_hasTarget;
	jfloat F_resupplyTime;
	jbool F_wasPlayer;
	jbool F_wasHealed;
	jfloat F_elevation;
	jbool F_wasFlying;
	jfloat F_drownTime;
	jfloat F_splashTimer;
	jref F_lastDrownFloor;
} mindustry_entities_comp_UnitComp;

extern Class class_mindustry_entities_comp_UnitComp;

extern jobject SF_mindustry_entities_comp_UnitComp_tmp1;
extern jobject SF_mindustry_entities_comp_UnitComp_tmp2;
extern jfloat SF_mindustry_entities_comp_UnitComp_warpDst;

#define VTABLE_mindustry_entities_comp_UnitComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_UnitComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_UnitComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_UnitComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_UnitComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_UnitComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_finalize 5
typedef void (*func_mindustry_entities_comp_UnitComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_notify 6
typedef void (*func_mindustry_entities_comp_UnitComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_UnitComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_wait 8
typedef void (*func_mindustry_entities_comp_UnitComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_wait_long 9
typedef void (*func_mindustry_entities_comp_UnitComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_UnitComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_UnitComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_entities_comp_UnitComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_entities_comp_UnitComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_isAdded_R_boolean 13
typedef jbool (*func_mindustry_entities_comp_UnitComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_isLocal_R_boolean 14
typedef jbool (*func_mindustry_entities_comp_UnitComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_isRemote_R_boolean 15
typedef jbool (*func_mindustry_entities_comp_UnitComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_serialize_R_boolean 16
typedef jbool (*func_mindustry_entities_comp_UnitComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_classId_R_int 17
typedef jint (*func_mindustry_entities_comp_UnitComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_id_R_int 18
typedef jint (*func_mindustry_entities_comp_UnitComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_add 19
typedef void (*func_mindustry_entities_comp_UnitComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_afterRead 20
typedef void (*func_mindustry_entities_comp_UnitComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_afterReadAll 21
typedef void (*func_mindustry_entities_comp_UnitComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_beforeWrite 22
typedef void (*func_mindustry_entities_comp_UnitComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_id_int 23
typedef void (*func_mindustry_entities_comp_UnitComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_UnitComp_read_arc_util_io_Reads 24
typedef void (*func_mindustry_entities_comp_UnitComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_remove 25
typedef void (*func_mindustry_entities_comp_UnitComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_update 26
typedef void (*func_mindustry_entities_comp_UnitComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_write_arc_util_io_Writes 27
typedef void (*func_mindustry_entities_comp_UnitComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_getX_R_float 28
typedef jfloat (*func_mindustry_entities_comp_UnitComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_getY_R_float 29
typedef jfloat (*func_mindustry_entities_comp_UnitComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_angleTo_arc_math_geom_Position_R_float 30
typedef jfloat (*func_mindustry_entities_comp_UnitComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_angleTo_float_float_R_float 31
typedef jfloat (*func_mindustry_entities_comp_UnitComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_dst2_arc_math_geom_Position_R_float 32
typedef jfloat (*func_mindustry_entities_comp_UnitComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_dst_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_entities_comp_UnitComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_dst_float_float_R_float 34
typedef jfloat (*func_mindustry_entities_comp_UnitComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_dst2_float_float_R_float 35
typedef jfloat (*func_mindustry_entities_comp_UnitComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_within_arc_math_geom_Position_float_R_boolean 36
typedef jbool (*func_mindustry_entities_comp_UnitComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_within_float_float_float_R_boolean 37
typedef jbool (*func_mindustry_entities_comp_UnitComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_UnitComp_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_entities_comp_UnitComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_entities_comp_UnitComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_onSolid_R_boolean 40
typedef jbool (*func_mindustry_entities_comp_UnitComp_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_x_R_float 41
typedef jfloat (*func_mindustry_entities_comp_UnitComp_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_y_R_float 42
typedef jfloat (*func_mindustry_entities_comp_UnitComp_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_tileX_R_int 43
typedef jint (*func_mindustry_entities_comp_UnitComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_tileY_R_int 44
typedef jint (*func_mindustry_entities_comp_UnitComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_entities_comp_UnitComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_entities_comp_UnitComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_set_arc_math_geom_Position 47
typedef void (*func_mindustry_entities_comp_UnitComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_set_float_float 48
typedef void (*func_mindustry_entities_comp_UnitComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_entities_comp_UnitComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_trns_float_float 50
typedef void (*func_mindustry_entities_comp_UnitComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_x_float 51
typedef void (*func_mindustry_entities_comp_UnitComp_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_y_float 52
typedef void (*func_mindustry_entities_comp_UnitComp_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_damageArmorMult_float_float 53
typedef void (*func_mindustry_entities_comp_UnitComp_damageArmorMult_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_damageArmorMult_float_float_boolean 54
typedef void (*func_mindustry_entities_comp_UnitComp_damageArmorMult_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_entities_comp_UnitComp_damagePierce_float 55
typedef void (*func_mindustry_entities_comp_UnitComp_damagePierce_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_damagePierce_float_boolean 56
typedef void (*func_mindustry_entities_comp_UnitComp_damagePierce_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define VTABLE_mindustry_entities_comp_UnitComp_healFract_float 57
typedef void (*func_mindustry_entities_comp_UnitComp_healFract_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_heal_float 58
typedef void (*func_mindustry_entities_comp_UnitComp_heal_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_damaged_R_boolean 59
typedef jbool (*func_mindustry_entities_comp_UnitComp_damaged_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_dead_R_boolean 60
typedef jbool (*func_mindustry_entities_comp_UnitComp_dead_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_isValid_R_boolean 61
typedef jbool (*func_mindustry_entities_comp_UnitComp_isValid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_health_R_float 62
typedef jfloat (*func_mindustry_entities_comp_UnitComp_health_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_healthf_R_float 63
typedef jfloat (*func_mindustry_entities_comp_UnitComp_healthf_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_hitTime_R_float 64
typedef jfloat (*func_mindustry_entities_comp_UnitComp_hitTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_maxHealth_R_float 65
typedef jfloat (*func_mindustry_entities_comp_UnitComp_maxHealth_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_clampHealth 66
typedef void (*func_mindustry_entities_comp_UnitComp_clampHealth)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_damage_float 67
typedef void (*func_mindustry_entities_comp_UnitComp_damage_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_damage_float_boolean 68
typedef void (*func_mindustry_entities_comp_UnitComp_damage_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define VTABLE_mindustry_entities_comp_UnitComp_damageContinuous_float 69
typedef void (*func_mindustry_entities_comp_UnitComp_damageContinuous_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_damageContinuousArmorMult_float_float 70
typedef void (*func_mindustry_entities_comp_UnitComp_damageContinuousArmorMult_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_damageContinuousPierce_float 71
typedef void (*func_mindustry_entities_comp_UnitComp_damageContinuousPierce_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_dead_boolean 72
typedef void (*func_mindustry_entities_comp_UnitComp_dead_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_comp_UnitComp_heal 73
typedef void (*func_mindustry_entities_comp_UnitComp_heal)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_health_float 74
typedef void (*func_mindustry_entities_comp_UnitComp_health_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_hitTime_float 75
typedef void (*func_mindustry_entities_comp_UnitComp_hitTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_kill 76
typedef void (*func_mindustry_entities_comp_UnitComp_kill)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_killed 77
typedef void (*func_mindustry_entities_comp_UnitComp_killed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_maxHealth_float 78
typedef void (*func_mindustry_entities_comp_UnitComp_maxHealth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_hitbox_arc_math_geom_Rect 79
typedef void (*func_mindustry_entities_comp_UnitComp_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_hitSize_R_float 80
typedef jfloat (*func_mindustry_entities_comp_UnitComp_hitSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_collides_mindustry_gen_Hitboxc_R_boolean 81
typedef jbool (*func_mindustry_entities_comp_UnitComp_collides_mindustry_gen_Hitboxc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_deltaAngle_R_float 82
typedef jfloat (*func_mindustry_entities_comp_UnitComp_deltaAngle_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_deltaLen_R_float 83
typedef jfloat (*func_mindustry_entities_comp_UnitComp_deltaLen_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_deltaX_R_float 84
typedef jfloat (*func_mindustry_entities_comp_UnitComp_deltaX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_deltaY_R_float 85
typedef jfloat (*func_mindustry_entities_comp_UnitComp_deltaY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_lastX_R_float 86
typedef jfloat (*func_mindustry_entities_comp_UnitComp_lastX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_lastY_R_float 87
typedef jfloat (*func_mindustry_entities_comp_UnitComp_lastY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_collision_mindustry_gen_Hitboxc_float_float 88
typedef void (*func_mindustry_entities_comp_UnitComp_collision_mindustry_gen_Hitboxc_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_UnitComp_deltaX_float 89
typedef void (*func_mindustry_entities_comp_UnitComp_deltaX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_deltaY_float 90
typedef void (*func_mindustry_entities_comp_UnitComp_deltaY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_getCollisions_arc_func_Cons 91
typedef void (*func_mindustry_entities_comp_UnitComp_getCollisions_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_hitSize_float 92
typedef void (*func_mindustry_entities_comp_UnitComp_hitSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_hitboxTile_arc_math_geom_Rect 93
typedef void (*func_mindustry_entities_comp_UnitComp_hitboxTile_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_lastX_float 94
typedef void (*func_mindustry_entities_comp_UnitComp_lastX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_lastY_float 95
typedef void (*func_mindustry_entities_comp_UnitComp_lastY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_updateLastPosition 96
typedef void (*func_mindustry_entities_comp_UnitComp_updateLastPosition)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred 97
typedef jobject (*func_mindustry_entities_comp_UnitComp_solidity_R_mindustry_entities_EntityCollisions$SolidPred)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_canPassOn_R_boolean 98
typedef jbool (*func_mindustry_entities_comp_UnitComp_canPassOn_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_canPass_int_int_R_boolean 99
typedef jbool (*func_mindustry_entities_comp_UnitComp_canPass_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_entities_comp_UnitComp_vel_R_arc_math_geom_Vec2 100
typedef jobject (*func_mindustry_entities_comp_UnitComp_vel_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_ignoreSolids_R_boolean 101
typedef jbool (*func_mindustry_entities_comp_UnitComp_ignoreSolids_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_moving_R_boolean 102
typedef jbool (*func_mindustry_entities_comp_UnitComp_moving_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_drag_R_float 103
typedef jfloat (*func_mindustry_entities_comp_UnitComp_drag_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_drag_float 104
typedef void (*func_mindustry_entities_comp_UnitComp_drag_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_move_arc_math_geom_Vec2 105
typedef void (*func_mindustry_entities_comp_UnitComp_move_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_move_float_float 106
typedef void (*func_mindustry_entities_comp_UnitComp_move_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_vel_arc_math_geom_Vec2 107
typedef void (*func_mindustry_entities_comp_UnitComp_vel_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_velAddNet_arc_math_geom_Vec2 108
typedef void (*func_mindustry_entities_comp_UnitComp_velAddNet_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_velAddNet_float_float 109
typedef void (*func_mindustry_entities_comp_UnitComp_velAddNet_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_hasPhysicsRef_R_boolean 110
typedef jbool (*func_mindustry_entities_comp_UnitComp_hasPhysicsRef_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_mass_R_float 111
typedef jfloat (*func_mindustry_entities_comp_UnitComp_mass_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_hasPhysicsRef_boolean 112
typedef void (*func_mindustry_entities_comp_UnitComp_hasPhysicsRef_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_comp_UnitComp_impulse_arc_math_geom_Vec2 113
typedef void (*func_mindustry_entities_comp_UnitComp_impulse_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_impulse_float_float 114
typedef void (*func_mindustry_entities_comp_UnitComp_impulse_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_impulseNet_arc_math_geom_Vec2 115
typedef void (*func_mindustry_entities_comp_UnitComp_impulseNet_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry 116
typedef jobject (*func_mindustry_entities_comp_UnitComp_applyDynamicStatus_R_mindustry_entities_units_StatusEntry)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_apply_mindustry_type_StatusEffect_float 117
typedef void (*func_mindustry_entities_comp_UnitComp_apply_mindustry_type_StatusEffect_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_apply_mindustry_type_StatusEffect 118
typedef void (*func_mindustry_entities_comp_UnitComp_apply_mindustry_type_StatusEffect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_unapply_mindustry_type_StatusEffect 119
typedef void (*func_mindustry_entities_comp_UnitComp_unapply_mindustry_type_StatusEffect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_statusDamageMultiplier_float 120
typedef void (*func_mindustry_entities_comp_UnitComp_statusDamageMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_statusReloadMultiplier_float 121
typedef void (*func_mindustry_entities_comp_UnitComp_statusReloadMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_statusArmor_float 122
typedef void (*func_mindustry_entities_comp_UnitComp_statusArmor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_statusBuildSpeed_float 123
typedef void (*func_mindustry_entities_comp_UnitComp_statusBuildSpeed_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_statusDrag_float 124
typedef void (*func_mindustry_entities_comp_UnitComp_statusDrag_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_statusMaxHealth_float 125
typedef void (*func_mindustry_entities_comp_UnitComp_statusMaxHealth_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_statusSpeed_float 126
typedef void (*func_mindustry_entities_comp_UnitComp_statusSpeed_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_statusColor_R_arc_graphics_Color 127
typedef jobject (*func_mindustry_entities_comp_UnitComp_statusColor_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_statusBits_R_arc_struct_Bits 128
typedef jobject (*func_mindustry_entities_comp_UnitComp_statusBits_R_arc_struct_Bits)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_disarmed_R_boolean 129
typedef jbool (*func_mindustry_entities_comp_UnitComp_disarmed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_hasEffect_mindustry_type_StatusEffect_R_boolean 130
typedef jbool (*func_mindustry_entities_comp_UnitComp_hasEffect_mindustry_type_StatusEffect_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_isBoss_R_boolean 131
typedef jbool (*func_mindustry_entities_comp_UnitComp_isBoss_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_isGrounded_R_boolean 132
typedef jbool (*func_mindustry_entities_comp_UnitComp_isGrounded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_isImmune_mindustry_type_StatusEffect_R_boolean 133
typedef jbool (*func_mindustry_entities_comp_UnitComp_isImmune_mindustry_type_StatusEffect_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_armorOverride_R_float 134
typedef jfloat (*func_mindustry_entities_comp_UnitComp_armorOverride_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_buildSpeedMultiplier_R_float 135
typedef jfloat (*func_mindustry_entities_comp_UnitComp_buildSpeedMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_damageMultiplier_R_float 136
typedef jfloat (*func_mindustry_entities_comp_UnitComp_damageMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_dragMultiplier_R_float 137
typedef jfloat (*func_mindustry_entities_comp_UnitComp_dragMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_getDuration_mindustry_type_StatusEffect_R_float 138
typedef jfloat (*func_mindustry_entities_comp_UnitComp_getDuration_mindustry_type_StatusEffect_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_healthMultiplier_R_float 139
typedef jfloat (*func_mindustry_entities_comp_UnitComp_healthMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_reloadMultiplier_R_float 140
typedef jfloat (*func_mindustry_entities_comp_UnitComp_reloadMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_speedMultiplier_R_float 141
typedef jfloat (*func_mindustry_entities_comp_UnitComp_speedMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_armorOverride_float 142
typedef void (*func_mindustry_entities_comp_UnitComp_armorOverride_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_buildSpeedMultiplier_float 143
typedef void (*func_mindustry_entities_comp_UnitComp_buildSpeedMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_clearStatuses 144
typedef void (*func_mindustry_entities_comp_UnitComp_clearStatuses)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_damageMultiplier_float 145
typedef void (*func_mindustry_entities_comp_UnitComp_damageMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_disarmed_boolean 146
typedef void (*func_mindustry_entities_comp_UnitComp_disarmed_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_comp_UnitComp_dragMultiplier_float 147
typedef void (*func_mindustry_entities_comp_UnitComp_dragMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_draw 148
typedef void (*func_mindustry_entities_comp_UnitComp_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_healthMultiplier_float 149
typedef void (*func_mindustry_entities_comp_UnitComp_healthMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_reloadMultiplier_float 150
typedef void (*func_mindustry_entities_comp_UnitComp_reloadMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_setDuration_mindustry_type_StatusEffect_float 151
typedef void (*func_mindustry_entities_comp_UnitComp_setDuration_mindustry_type_StatusEffect_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_speedMultiplier_float 152
typedef void (*func_mindustry_entities_comp_UnitComp_speedMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_inFogTo_mindustry_game_Team_R_boolean 153
typedef jbool (*func_mindustry_entities_comp_UnitComp_inFogTo_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_cheating_R_boolean 154
typedef jbool (*func_mindustry_entities_comp_UnitComp_cheating_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_team_R_mindustry_game_Team 155
typedef jobject (*func_mindustry_entities_comp_UnitComp_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 156
typedef jobject (*func_mindustry_entities_comp_UnitComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 157
typedef jobject (*func_mindustry_entities_comp_UnitComp_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 158
typedef jobject (*func_mindustry_entities_comp_UnitComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_team_mindustry_game_Team 159
typedef void (*func_mindustry_entities_comp_UnitComp_team_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_acceptsItem_mindustry_type_Item_R_boolean 160
typedef jbool (*func_mindustry_entities_comp_UnitComp_acceptsItem_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_hasItem_R_boolean 161
typedef jbool (*func_mindustry_entities_comp_UnitComp_hasItem_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_itemTime_R_float 162
typedef jfloat (*func_mindustry_entities_comp_UnitComp_itemTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_itemCapacity_R_int 163
typedef jint (*func_mindustry_entities_comp_UnitComp_itemCapacity_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_maxAccepted_mindustry_type_Item_R_int 164
typedef jint (*func_mindustry_entities_comp_UnitComp_maxAccepted_mindustry_type_Item_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_item_R_mindustry_type_Item 165
typedef jobject (*func_mindustry_entities_comp_UnitComp_item_R_mindustry_type_Item)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_stack_R_mindustry_type_ItemStack 166
typedef jobject (*func_mindustry_entities_comp_UnitComp_stack_R_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_addItem_mindustry_type_Item 167
typedef void (*func_mindustry_entities_comp_UnitComp_addItem_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_addItem_mindustry_type_Item_int 168
typedef void (*func_mindustry_entities_comp_UnitComp_addItem_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_entities_comp_UnitComp_clearItem 169
typedef void (*func_mindustry_entities_comp_UnitComp_clearItem)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_itemTime_float 170
typedef void (*func_mindustry_entities_comp_UnitComp_itemTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_stack_mindustry_type_ItemStack 171
typedef void (*func_mindustry_entities_comp_UnitComp_stack_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_rotation_R_float 172
typedef jfloat (*func_mindustry_entities_comp_UnitComp_rotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_rotation_float 173
typedef void (*func_mindustry_entities_comp_UnitComp_rotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_buildPlan_R_mindustry_entities_units_BuildPlan 174
typedef jobject (*func_mindustry_entities_comp_UnitComp_buildPlan_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean 175
typedef jbool (*func_mindustry_entities_comp_UnitComp_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_entities_comp_UnitComp_addBuild_mindustry_entities_units_BuildPlan_boolean 176
typedef void (*func_mindustry_entities_comp_UnitComp_addBuild_mindustry_entities_units_BuildPlan_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_entities_comp_UnitComp_addBuild_mindustry_entities_units_BuildPlan 177
typedef void (*func_mindustry_entities_comp_UnitComp_addBuild_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_clearBuilding 178
typedef void (*func_mindustry_entities_comp_UnitComp_clearBuilding)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_isBuilding_R_boolean 179
typedef jbool (*func_mindustry_entities_comp_UnitComp_isBuilding_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_plans_R_arc_struct_Queue 180
typedef jobject (*func_mindustry_entities_comp_UnitComp_plans_R_arc_struct_Queue)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_activelyBuilding_R_boolean 181
typedef jbool (*func_mindustry_entities_comp_UnitComp_activelyBuilding_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_canBuild_R_boolean 182
typedef jbool (*func_mindustry_entities_comp_UnitComp_canBuild_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_updateBuilding_R_boolean 183
typedef jbool (*func_mindustry_entities_comp_UnitComp_updateBuilding_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_buildAlpha_R_float 184
typedef jfloat (*func_mindustry_entities_comp_UnitComp_buildAlpha_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_buildAlpha_float 185
typedef void (*func_mindustry_entities_comp_UnitComp_buildAlpha_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_drawBuilding 186
typedef void (*func_mindustry_entities_comp_UnitComp_drawBuilding)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_drawBuildingBeam_float_float 187
typedef void (*func_mindustry_entities_comp_UnitComp_drawBuildingBeam_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_drawPlan_mindustry_entities_units_BuildPlan_float 188
typedef void (*func_mindustry_entities_comp_UnitComp_drawPlan_mindustry_entities_units_BuildPlan_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_drawPlanTop_mindustry_entities_units_BuildPlan_float 189
typedef void (*func_mindustry_entities_comp_UnitComp_drawPlanTop_mindustry_entities_units_BuildPlan_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_plans_arc_struct_Queue 190
typedef void (*func_mindustry_entities_comp_UnitComp_plans_arc_struct_Queue)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_removeBuild_int_int_boolean 191
typedef void (*func_mindustry_entities_comp_UnitComp_removeBuild_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
#define VTABLE_mindustry_entities_comp_UnitComp_updateBuildLogic 192
typedef void (*func_mindustry_entities_comp_UnitComp_updateBuildLogic)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_updateBuilding_boolean 193
typedef void (*func_mindustry_entities_comp_UnitComp_updateBuilding_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_comp_UnitComp_validatePlans 194
typedef void (*func_mindustry_entities_comp_UnitComp_validatePlans)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_clipSize_R_float 195
typedef jfloat (*func_mindustry_entities_comp_UnitComp_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_mineTile_R_mindustry_world_Tile 196
typedef jobject (*func_mindustry_entities_comp_UnitComp_mineTile_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_canMine_R_boolean 197
typedef jbool (*func_mindustry_entities_comp_UnitComp_canMine_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_canMine_mindustry_type_Item_R_boolean 198
typedef jbool (*func_mindustry_entities_comp_UnitComp_canMine_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_mining_R_boolean 199
typedef jbool (*func_mindustry_entities_comp_UnitComp_mining_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_offloadImmediately_R_boolean 200
typedef jbool (*func_mindustry_entities_comp_UnitComp_offloadImmediately_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_validMine_mindustry_world_Tile_R_boolean 201
typedef jbool (*func_mindustry_entities_comp_UnitComp_validMine_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_validMine_mindustry_world_Tile_boolean_R_boolean 202
typedef jbool (*func_mindustry_entities_comp_UnitComp_validMine_mindustry_world_Tile_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_entities_comp_UnitComp_mineTimer_R_float 203
typedef jfloat (*func_mindustry_entities_comp_UnitComp_mineTimer_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_getMineResult_mindustry_world_Tile_R_mindustry_type_Item 204
typedef jobject (*func_mindustry_entities_comp_UnitComp_getMineResult_mindustry_world_Tile_R_mindustry_type_Item)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_mineTile_mindustry_world_Tile 205
typedef void (*func_mindustry_entities_comp_UnitComp_mineTile_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_mineTimer_float 206
typedef void (*func_mindustry_entities_comp_UnitComp_mineTimer_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_shield_R_float 207
typedef jfloat (*func_mindustry_entities_comp_UnitComp_shield_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_shield_float 208
typedef void (*func_mindustry_entities_comp_UnitComp_shield_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_shieldAlpha_R_float 209
typedef jfloat (*func_mindustry_entities_comp_UnitComp_shieldAlpha_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_shieldAlpha_float 210
typedef void (*func_mindustry_entities_comp_UnitComp_shieldAlpha_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_armor_R_float 211
typedef jfloat (*func_mindustry_entities_comp_UnitComp_armor_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_armor_float 212
typedef void (*func_mindustry_entities_comp_UnitComp_armor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_rawDamage_float 213
typedef void (*func_mindustry_entities_comp_UnitComp_rawDamage_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_isSyncHidden_mindustry_game_Team_R_boolean 214
typedef jbool (*func_mindustry_entities_comp_UnitComp_isSyncHidden_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_lastUpdated_R_long 215
typedef jlong (*func_mindustry_entities_comp_UnitComp_lastUpdated_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_updateSpacing_R_long 216
typedef jlong (*func_mindustry_entities_comp_UnitComp_updateSpacing_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_afterSync 217
typedef void (*func_mindustry_entities_comp_UnitComp_afterSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_handleSyncHidden 218
typedef void (*func_mindustry_entities_comp_UnitComp_handleSyncHidden)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_interpolate 219
typedef void (*func_mindustry_entities_comp_UnitComp_interpolate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_lastUpdated_long 220
typedef void (*func_mindustry_entities_comp_UnitComp_lastUpdated_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_UnitComp_readSync_arc_util_io_Reads 221
typedef void (*func_mindustry_entities_comp_UnitComp_readSync_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_readSyncManual_java_nio_FloatBuffer 222
typedef void (*func_mindustry_entities_comp_UnitComp_readSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_snapInterpolation 223
typedef void (*func_mindustry_entities_comp_UnitComp_snapInterpolation)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_snapSync 224
typedef void (*func_mindustry_entities_comp_UnitComp_snapSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_updateSpacing_long 225
typedef void (*func_mindustry_entities_comp_UnitComp_updateSpacing_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_UnitComp_writeSync_arc_util_io_Writes 226
typedef void (*func_mindustry_entities_comp_UnitComp_writeSync_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_writeSyncManual_java_nio_FloatBuffer 227
typedef void (*func_mindustry_entities_comp_UnitComp_writeSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_aim_float_float 228
typedef void (*func_mindustry_entities_comp_UnitComp_aim_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_aim_float_float_boolean 229
typedef void (*func_mindustry_entities_comp_UnitComp_aim_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_entities_comp_UnitComp_mounts_R_Array1_mindustry_entities_units_WeaponMount 230
typedef jobject (*func_mindustry_entities_comp_UnitComp_mounts_R_Array1_mindustry_entities_units_WeaponMount)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_mounts_Array1_mindustry_entities_units_WeaponMount 231
typedef void (*func_mindustry_entities_comp_UnitComp_mounts_Array1_mindustry_entities_units_WeaponMount)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_canShoot_R_boolean 232
typedef jbool (*func_mindustry_entities_comp_UnitComp_canShoot_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_isRotate_R_boolean 233
typedef jbool (*func_mindustry_entities_comp_UnitComp_isRotate_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_isShooting_R_boolean 234
typedef jbool (*func_mindustry_entities_comp_UnitComp_isShooting_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_aimX_R_float 235
typedef jfloat (*func_mindustry_entities_comp_UnitComp_aimX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_aimY_R_float 236
typedef jfloat (*func_mindustry_entities_comp_UnitComp_aimY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_aim_arc_math_geom_Position 237
typedef void (*func_mindustry_entities_comp_UnitComp_aim_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_aimX_float 238
typedef void (*func_mindustry_entities_comp_UnitComp_aimX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_aimY_float 239
typedef void (*func_mindustry_entities_comp_UnitComp_aimY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_controlWeapons_boolean_boolean 240
typedef void (*func_mindustry_entities_comp_UnitComp_controlWeapons_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_mindustry_entities_comp_UnitComp_controlWeapons_boolean 241
typedef void (*func_mindustry_entities_comp_UnitComp_controlWeapons_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_comp_UnitComp_isShooting_boolean 242
typedef void (*func_mindustry_entities_comp_UnitComp_isShooting_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_comp_UnitComp_setWeaponRotation_float 243
typedef void (*func_mindustry_entities_comp_UnitComp_setWeaponRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_setupWeapons_mindustry_type_UnitType 244
typedef void (*func_mindustry_entities_comp_UnitComp_setupWeapons_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_range_R_float 245
typedef jfloat (*func_mindustry_entities_comp_UnitComp_range_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_sense_mindustry_logic_LAccess_R_double 246
typedef jdouble (*func_mindustry_entities_comp_UnitComp_sense_mindustry_logic_LAccess_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_sense_mindustry_ctype_Content_R_double 247
typedef jdouble (*func_mindustry_entities_comp_UnitComp_sense_mindustry_ctype_Content_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_senseObject_mindustry_logic_LAccess_R_java_lang_Object 248
typedef jobject (*func_mindustry_entities_comp_UnitComp_senseObject_mindustry_logic_LAccess_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_setProp_mindustry_logic_LAccess_double 249
typedef void (*func_mindustry_entities_comp_UnitComp_setProp_mindustry_logic_LAccess_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define VTABLE_mindustry_entities_comp_UnitComp_setProp_mindustry_logic_LAccess_java_lang_Object 250
typedef void (*func_mindustry_entities_comp_UnitComp_setProp_mindustry_logic_LAccess_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_entities_comp_UnitComp_setProp_mindustry_ctype_UnlockableContent_double 251
typedef void (*func_mindustry_entities_comp_UnitComp_setProp_mindustry_ctype_UnlockableContent_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define VTABLE_mindustry_entities_comp_UnitComp_displayable_R_boolean 252
typedef jbool (*func_mindustry_entities_comp_UnitComp_displayable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_display_arc_scene_ui_layout_Table 253
typedef void (*func_mindustry_entities_comp_UnitComp_display_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_icon_R_arc_graphics_g2d_TextureRegion 254
typedef jobject (*func_mindustry_entities_comp_UnitComp_icon_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_physicSize_R_float 255
typedef jfloat (*func_mindustry_entities_comp_UnitComp_physicSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_getControllerName_R_java_lang_String 256
typedef jobject (*func_mindustry_entities_comp_UnitComp_getControllerName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_speed_R_float 257
typedef jfloat (*func_mindustry_entities_comp_UnitComp_speed_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_collisionLayer_R_int 258
typedef jint (*func_mindustry_entities_comp_UnitComp_collisionLayer_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_prefRotation_R_float 259
typedef jfloat (*func_mindustry_entities_comp_UnitComp_prefRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_allowCommand_R_boolean 260
typedef jbool (*func_mindustry_entities_comp_UnitComp_allowCommand_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_isCommandable_R_boolean 261
typedef jbool (*func_mindustry_entities_comp_UnitComp_isCommandable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_canLand_R_boolean 262
typedef jbool (*func_mindustry_entities_comp_UnitComp_canLand_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_destroy 263
typedef void (*func_mindustry_entities_comp_UnitComp_destroy)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_unloaded 264
typedef void (*func_mindustry_entities_comp_UnitComp_unloaded)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_movePref_arc_math_geom_Vec2 265
typedef void (*func_mindustry_entities_comp_UnitComp_movePref_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_hasTarget_R_boolean 266
typedef jbool (*func_mindustry_entities_comp_UnitComp_hasTarget_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_hasTarget_boolean 267
typedef void (*func_mindustry_entities_comp_UnitComp_hasTarget_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_comp_UnitComp_trail_R_mindustry_graphics_Trail 268
typedef jobject (*func_mindustry_entities_comp_UnitComp_trail_R_mindustry_graphics_Trail)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_dockedType_R_mindustry_type_UnitType 269
typedef jobject (*func_mindustry_entities_comp_UnitComp_dockedType_R_mindustry_type_UnitType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_lastDrownFloor_R_mindustry_world_blocks_environment_Floor 270
typedef jobject (*func_mindustry_entities_comp_UnitComp_lastDrownFloor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_getPlayer_R_mindustry_gen_Player 271
typedef jobject (*func_mindustry_entities_comp_UnitComp_getPlayer_R_mindustry_gen_Player)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_canDrown_R_boolean 272
typedef jbool (*func_mindustry_entities_comp_UnitComp_canDrown_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_canTarget_mindustry_gen_Teamc_R_boolean 273
typedef jbool (*func_mindustry_entities_comp_UnitComp_canTarget_mindustry_gen_Teamc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_checkTarget_boolean_boolean_R_boolean 274
typedef jbool (*func_mindustry_entities_comp_UnitComp_checkTarget_boolean_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_mindustry_entities_comp_UnitComp_hasWeapons_R_boolean 275
typedef jbool (*func_mindustry_entities_comp_UnitComp_hasWeapons_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_hittable_R_boolean 276
typedef jbool (*func_mindustry_entities_comp_UnitComp_hittable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_inRange_arc_math_geom_Position_R_boolean 277
typedef jbool (*func_mindustry_entities_comp_UnitComp_inRange_arc_math_geom_Position_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_isAI_R_boolean 278
typedef jbool (*func_mindustry_entities_comp_UnitComp_isAI_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_isEnemy_R_boolean 279
typedef jbool (*func_mindustry_entities_comp_UnitComp_isEnemy_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_isFlying_R_boolean 280
typedef jbool (*func_mindustry_entities_comp_UnitComp_isFlying_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_isMissile_R_boolean 281
typedef jbool (*func_mindustry_entities_comp_UnitComp_isMissile_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_isPathImpassable_int_int_R_boolean 282
typedef jbool (*func_mindustry_entities_comp_UnitComp_isPathImpassable_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_entities_comp_UnitComp_isPlayer_R_boolean 283
typedef jbool (*func_mindustry_entities_comp_UnitComp_isPlayer_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_killable_R_boolean 284
typedef jbool (*func_mindustry_entities_comp_UnitComp_killable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_playerControllable_R_boolean 285
typedef jbool (*func_mindustry_entities_comp_UnitComp_playerControllable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_shouldUpdateController_R_boolean 286
typedef jbool (*func_mindustry_entities_comp_UnitComp_shouldUpdateController_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_spawnedByCore_R_boolean 287
typedef jbool (*func_mindustry_entities_comp_UnitComp_spawnedByCore_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_targetable_mindustry_game_Team_R_boolean 288
typedef jbool (*func_mindustry_entities_comp_UnitComp_targetable_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_flag_R_double 289
typedef jdouble (*func_mindustry_entities_comp_UnitComp_flag_R_double)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_ammof_R_float 290
typedef jfloat (*func_mindustry_entities_comp_UnitComp_ammof_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_bounds_R_float 291
typedef jfloat (*func_mindustry_entities_comp_UnitComp_bounds_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_drownTime_R_float 292
typedef jfloat (*func_mindustry_entities_comp_UnitComp_drownTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_elevation_R_float 293
typedef jfloat (*func_mindustry_entities_comp_UnitComp_elevation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_floorSpeedMultiplier_R_float 294
typedef jfloat (*func_mindustry_entities_comp_UnitComp_floorSpeedMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_healTime_R_float 295
typedef jfloat (*func_mindustry_entities_comp_UnitComp_healTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_shadowAlpha_R_float 296
typedef jfloat (*func_mindustry_entities_comp_UnitComp_shadowAlpha_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_splashTimer_R_float 297
typedef jfloat (*func_mindustry_entities_comp_UnitComp_splashTimer_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_cap_R_int 298
typedef jint (*func_mindustry_entities_comp_UnitComp_cap_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_count_R_int 299
typedef jint (*func_mindustry_entities_comp_UnitComp_count_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_lastFogPos_R_int 300
typedef jint (*func_mindustry_entities_comp_UnitComp_lastFogPos_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_lastCommanded_R_java_lang_String 301
typedef jobject (*func_mindustry_entities_comp_UnitComp_lastCommanded_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_command_R_mindustry_ai_types_CommandAI 302
typedef jobject (*func_mindustry_entities_comp_UnitComp_command_R_mindustry_ai_types_CommandAI)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_abilities_R_Array1_mindustry_entities_abilities_Ability 303
typedef jobject (*func_mindustry_entities_comp_UnitComp_abilities_R_Array1_mindustry_entities_abilities_Ability)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_controller_R_mindustry_entities_units_UnitController 304
typedef jobject (*func_mindustry_entities_comp_UnitComp_controller_R_mindustry_entities_units_UnitController)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_type_R_mindustry_type_UnitType 305
typedef jobject (*func_mindustry_entities_comp_UnitComp_type_R_mindustry_type_UnitType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_drownFloor_R_mindustry_world_blocks_environment_Floor 306
typedef jobject (*func_mindustry_entities_comp_UnitComp_drownFloor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_abilities_Array1_mindustry_entities_abilities_Ability 307
typedef void (*func_mindustry_entities_comp_UnitComp_abilities_Array1_mindustry_entities_abilities_Ability)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_aimLook_arc_math_geom_Position 308
typedef void (*func_mindustry_entities_comp_UnitComp_aimLook_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_aimLook_float_float 309
typedef void (*func_mindustry_entities_comp_UnitComp_aimLook_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_approach_arc_math_geom_Vec2 310
typedef void (*func_mindustry_entities_comp_UnitComp_approach_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_controller_mindustry_entities_units_UnitController 311
typedef void (*func_mindustry_entities_comp_UnitComp_controller_mindustry_entities_units_UnitController)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_dockedType_mindustry_type_UnitType 312
typedef void (*func_mindustry_entities_comp_UnitComp_dockedType_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_drownTime_float 313
typedef void (*func_mindustry_entities_comp_UnitComp_drownTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_elevation_float 314
typedef void (*func_mindustry_entities_comp_UnitComp_elevation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_flag_double 315
typedef void (*func_mindustry_entities_comp_UnitComp_flag_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_mindustry_entities_comp_UnitComp_healTime_float 316
typedef void (*func_mindustry_entities_comp_UnitComp_healTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_landed 317
typedef void (*func_mindustry_entities_comp_UnitComp_landed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_lastCommanded_java_lang_String 318
typedef void (*func_mindustry_entities_comp_UnitComp_lastCommanded_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_lastDrownFloor_mindustry_world_blocks_environment_Floor 319
typedef void (*func_mindustry_entities_comp_UnitComp_lastDrownFloor_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_lastFogPos_int 320
typedef void (*func_mindustry_entities_comp_UnitComp_lastFogPos_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_UnitComp_lookAt_arc_math_geom_Position 321
typedef void (*func_mindustry_entities_comp_UnitComp_lookAt_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_lookAt_float 322
typedef void (*func_mindustry_entities_comp_UnitComp_lookAt_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_lookAt_float_float 323
typedef void (*func_mindustry_entities_comp_UnitComp_lookAt_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2 324
typedef void (*func_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2_float 325
typedef void (*func_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_UnitComp_resetController 326
typedef void (*func_mindustry_entities_comp_UnitComp_resetController)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_rotateMove_arc_math_geom_Vec2 327
typedef void (*func_mindustry_entities_comp_UnitComp_rotateMove_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_set_mindustry_type_UnitType_mindustry_entities_units_UnitController 328
typedef void (*func_mindustry_entities_comp_UnitComp_set_mindustry_type_UnitType_mindustry_entities_units_UnitController)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_entities_comp_UnitComp_setType_mindustry_type_UnitType 329
typedef void (*func_mindustry_entities_comp_UnitComp_setType_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_shadowAlpha_float 330
typedef void (*func_mindustry_entities_comp_UnitComp_shadowAlpha_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_spawnedByCore_boolean 331
typedef void (*func_mindustry_entities_comp_UnitComp_spawnedByCore_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_comp_UnitComp_splashTimer_float 332
typedef void (*func_mindustry_entities_comp_UnitComp_splashTimer_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_UnitComp_trail_mindustry_graphics_Trail 333
typedef void (*func_mindustry_entities_comp_UnitComp_trail_mindustry_graphics_Trail)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_type_mindustry_type_UnitType 334
typedef void (*func_mindustry_entities_comp_UnitComp_type_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_UnitComp_updateBoosting_boolean 335
typedef void (*func_mindustry_entities_comp_UnitComp_updateBoosting_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_entities_comp_UnitComp_updateBoosting_boolean_boolean 336
typedef void (*func_mindustry_entities_comp_UnitComp_updateBoosting_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_mindustry_entities_comp_UnitComp_updateDrowning 337
typedef void (*func_mindustry_entities_comp_UnitComp_updateDrowning)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_wobble 338
typedef void (*func_mindustry_entities_comp_UnitComp_wobble)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_UnitComp_lambda$destroy$0_float_mindustry_gen_Building_R_boolean 339
typedef jbool (*func_mindustry_entities_comp_UnitComp_lambda$destroy$0_float_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jfloat param0, jobject param1);
#define VTABLE_mindustry_entities_comp_UnitComp_lambda$canLand$0_mindustry_gen_Unit_R_boolean 340
typedef jbool (*func_mindustry_entities_comp_UnitComp_lambda$canLand$0_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_entities_comp_UnitComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_UnitComp(jcontext ctx);
void init_mindustry_entities_comp_UnitComp(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_checkTarget_boolean_boolean_R_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
jbool M_mindustry_entities_comp_UnitComp_isGrounded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_isFlying_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_canDrown_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_UnitComp_drownFloor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_wobble(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
jfloat M_mindustry_entities_comp_UnitComp_floorSpeedMultiplier_R_float(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_unloaded(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_updateBoosting_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_entities_comp_UnitComp_updateBoosting_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_mindustry_entities_comp_UnitComp_movePref_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_UnitComp_moveAt_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_UnitComp_approach_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_UnitComp_rotateMove_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_UnitComp_aimLook_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_UnitComp_aimLook_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_mindustry_entities_comp_UnitComp_isPathImpassable_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jfloat M_mindustry_entities_comp_UnitComp_physicSize_R_float(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_canLand_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_inRange_arc_math_geom_Position_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_entities_comp_UnitComp_hasWeapons_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_UnitComp_speed_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_UnitComp_prefRotation_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_UnitComp_ammof_R_float(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_displayable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_UnitComp_handleSyncHidden(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_inFogTo_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_entities_comp_UnitComp_range_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_UnitComp_clipSize_R_float(jcontext ctx, jobject self);
jdouble M_mindustry_entities_comp_UnitComp_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_entities_comp_UnitComp_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jdouble M_mindustry_entities_comp_UnitComp_sense_mindustry_ctype_Content_R_double(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_UnitComp_setProp_mindustry_logic_LAccess_double(jcontext ctx, jobject self, jobject param0, jdouble param1);
void M_mindustry_entities_comp_UnitComp_setProp_mindustry_logic_LAccess_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_entities_comp_UnitComp_setProp_mindustry_ctype_UnlockableContent_double(jcontext ctx, jobject self, jobject param0, jdouble param1);
jbool M_mindustry_entities_comp_UnitComp_canShoot_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_isEnemy_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_collides_mindustry_gen_Hitboxc_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_UnitComp_collision_mindustry_gen_Hitboxc_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jint M_mindustry_entities_comp_UnitComp_itemCapacity_R_int(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_UnitComp_bounds_R_float(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_controller_mindustry_entities_units_UnitController(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_entities_comp_UnitComp_controller_R_mindustry_entities_units_UnitController(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_resetController(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_set_mindustry_type_UnitType_mindustry_entities_units_UnitController(jcontext ctx, jobject self, jobject param0, jobject param1);
jint M_mindustry_entities_comp_UnitComp_collisionLayer_R_int(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_lookAt_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_entities_comp_UnitComp_lookAt_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_UnitComp_lookAt_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_mindustry_entities_comp_UnitComp_isAI_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_allowCommand_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_isCommandable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_canTarget_mindustry_gen_Teamc_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_entities_comp_UnitComp_command_R_mindustry_ai_types_CommandAI(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_isMissile_R_boolean(jcontext ctx, jobject self);
jint M_mindustry_entities_comp_UnitComp_count_R_int(jcontext ctx, jobject self);
jint M_mindustry_entities_comp_UnitComp_cap_R_int(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_setType_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_entities_comp_UnitComp_playerControllable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_targetable_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_entities_comp_UnitComp_killable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_hittable_R_boolean(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_afterSync(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_afterRead(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_afterReadAll(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_add(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_remove(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_landed(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_heal_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_entities_comp_UnitComp_updateDrowning(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_update(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_shouldUpdateController_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_UnitComp_icon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_destroy(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_UnitComp_getControllerName_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_UnitComp_draw(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_isPlayer_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_UnitComp_getPlayer_R_mindustry_gen_Player(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_killed(jcontext ctx, jobject self);
void M_mindustry_entities_comp_UnitComp_kill(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_UnitComp_toString_R_java_lang_String(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_UnitComp_lambda$destroy$0_float_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jfloat param0, jobject param1);
jbool SM_mindustry_entities_comp_UnitComp_lambda$sense$1_mindustry_world_Block_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_entities_comp_UnitComp_lambda$sense$0_mindustry_type_UnitType_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool M_mindustry_entities_comp_UnitComp_lambda$canLand$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
