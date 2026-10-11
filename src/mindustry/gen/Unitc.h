#ifndef HEADER_mindustry_gen_Unitc
#define HEADER_mindustry_gen_Unitc

#include "Clearwing.h"
#include "java/lang/Object.h"
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
#include "mindustry/gen/Velc.h"
#include "mindustry/gen/Weaponsc.h"
#include "mindustry/logic/Ranged.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/logic/Settable.h"
#include "mindustry/ui/Displayable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Unitc {
	java_lang_Object parent;
} mindustry_gen_Unitc;

extern Class class_mindustry_gen_Unitc;


#define INDEX_mindustry_gen_Unitc_icon_R_arc_graphics_g2d_TextureRegion 0
typedef jobject (*func_mindustry_gen_Unitc_icon_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_physicSize_R_float 1
typedef jfloat (*func_mindustry_gen_Unitc_physicSize_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_getControllerName_R_java_lang_String 2
typedef jobject (*func_mindustry_gen_Unitc_getControllerName_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_speed_R_float 3
typedef jfloat (*func_mindustry_gen_Unitc_speed_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_collisionLayer_R_int 4
typedef jint (*func_mindustry_gen_Unitc_collisionLayer_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_prefRotation_R_float 5
typedef jfloat (*func_mindustry_gen_Unitc_prefRotation_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_allowCommand_R_boolean 6
typedef jbool (*func_mindustry_gen_Unitc_allowCommand_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_isCommandable_R_boolean 7
typedef jbool (*func_mindustry_gen_Unitc_isCommandable_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_canLand_R_boolean 8
typedef jbool (*func_mindustry_gen_Unitc_canLand_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_destroy 9
typedef void (*func_mindustry_gen_Unitc_destroy)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_unloaded 10
typedef void (*func_mindustry_gen_Unitc_unloaded)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_movePref_arc_math_geom_Vec2 11
typedef void (*func_mindustry_gen_Unitc_movePref_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_hasTarget_R_boolean 12
typedef jbool (*func_mindustry_gen_Unitc_hasTarget_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_hasTarget_boolean 13
typedef void (*func_mindustry_gen_Unitc_hasTarget_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Unitc_trail_R_mindustry_graphics_Trail 14
typedef jobject (*func_mindustry_gen_Unitc_trail_R_mindustry_graphics_Trail)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_dockedType_R_mindustry_type_UnitType 15
typedef jobject (*func_mindustry_gen_Unitc_dockedType_R_mindustry_type_UnitType)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_lastDrownFloor_R_mindustry_world_blocks_environment_Floor 16
typedef jobject (*func_mindustry_gen_Unitc_lastDrownFloor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_getPlayer_R_mindustry_gen_Player 17
typedef jobject (*func_mindustry_gen_Unitc_getPlayer_R_mindustry_gen_Player)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_canDrown_R_boolean 18
typedef jbool (*func_mindustry_gen_Unitc_canDrown_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_canShoot_R_boolean 19
typedef jbool (*func_mindustry_gen_Unitc_canShoot_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_canTarget_mindustry_gen_Teamc_R_boolean 20
typedef jbool (*func_mindustry_gen_Unitc_canTarget_mindustry_gen_Teamc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_checkTarget_boolean_boolean_R_boolean 21
typedef jbool (*func_mindustry_gen_Unitc_checkTarget_boolean_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define INDEX_mindustry_gen_Unitc_collides_mindustry_gen_Hitboxc_R_boolean 22
typedef jbool (*func_mindustry_gen_Unitc_collides_mindustry_gen_Hitboxc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_displayable_R_boolean 23
typedef jbool (*func_mindustry_gen_Unitc_displayable_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_hasWeapons_R_boolean 24
typedef jbool (*func_mindustry_gen_Unitc_hasWeapons_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_hittable_R_boolean 25
typedef jbool (*func_mindustry_gen_Unitc_hittable_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_inFogTo_mindustry_game_Team_R_boolean 26
typedef jbool (*func_mindustry_gen_Unitc_inFogTo_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_inRange_arc_math_geom_Position_R_boolean 27
typedef jbool (*func_mindustry_gen_Unitc_inRange_arc_math_geom_Position_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_isAI_R_boolean 28
typedef jbool (*func_mindustry_gen_Unitc_isAI_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_isEnemy_R_boolean 29
typedef jbool (*func_mindustry_gen_Unitc_isEnemy_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_isFlying_R_boolean 30
typedef jbool (*func_mindustry_gen_Unitc_isFlying_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_isGrounded_R_boolean 31
typedef jbool (*func_mindustry_gen_Unitc_isGrounded_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_isMissile_R_boolean 32
typedef jbool (*func_mindustry_gen_Unitc_isMissile_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_isPathImpassable_int_int_R_boolean 33
typedef jbool (*func_mindustry_gen_Unitc_isPathImpassable_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_mindustry_gen_Unitc_isPlayer_R_boolean 34
typedef jbool (*func_mindustry_gen_Unitc_isPlayer_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_isSyncHidden_mindustry_game_Team_R_boolean 35
typedef jbool (*func_mindustry_gen_Unitc_isSyncHidden_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_killable_R_boolean 36
typedef jbool (*func_mindustry_gen_Unitc_killable_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_playerControllable_R_boolean 37
typedef jbool (*func_mindustry_gen_Unitc_playerControllable_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_shouldUpdateController_R_boolean 38
typedef jbool (*func_mindustry_gen_Unitc_shouldUpdateController_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_spawnedByCore_R_boolean 39
typedef jbool (*func_mindustry_gen_Unitc_spawnedByCore_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_targetable_mindustry_game_Team_R_boolean 40
typedef jbool (*func_mindustry_gen_Unitc_targetable_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_flag_R_double 41
typedef jdouble (*func_mindustry_gen_Unitc_flag_R_double)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_sense_mindustry_ctype_Content_R_double 42
typedef jdouble (*func_mindustry_gen_Unitc_sense_mindustry_ctype_Content_R_double)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_sense_mindustry_logic_LAccess_R_double 43
typedef jdouble (*func_mindustry_gen_Unitc_sense_mindustry_logic_LAccess_R_double)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_ammof_R_float 44
typedef jfloat (*func_mindustry_gen_Unitc_ammof_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_bounds_R_float 45
typedef jfloat (*func_mindustry_gen_Unitc_bounds_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_clipSize_R_float 46
typedef jfloat (*func_mindustry_gen_Unitc_clipSize_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_drownTime_R_float 47
typedef jfloat (*func_mindustry_gen_Unitc_drownTime_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_elevation_R_float 48
typedef jfloat (*func_mindustry_gen_Unitc_elevation_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_floorSpeedMultiplier_R_float 49
typedef jfloat (*func_mindustry_gen_Unitc_floorSpeedMultiplier_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_healTime_R_float 50
typedef jfloat (*func_mindustry_gen_Unitc_healTime_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_range_R_float 51
typedef jfloat (*func_mindustry_gen_Unitc_range_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_shadowAlpha_R_float 52
typedef jfloat (*func_mindustry_gen_Unitc_shadowAlpha_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_splashTimer_R_float 53
typedef jfloat (*func_mindustry_gen_Unitc_splashTimer_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_cap_R_int 54
typedef jint (*func_mindustry_gen_Unitc_cap_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_count_R_int 55
typedef jint (*func_mindustry_gen_Unitc_count_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_itemCapacity_R_int 56
typedef jint (*func_mindustry_gen_Unitc_itemCapacity_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_lastFogPos_R_int 57
typedef jint (*func_mindustry_gen_Unitc_lastFogPos_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_senseObject_mindustry_logic_LAccess_R_java_lang_Object 58
typedef jobject (*func_mindustry_gen_Unitc_senseObject_mindustry_logic_LAccess_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_lastCommanded_R_java_lang_String 59
typedef jobject (*func_mindustry_gen_Unitc_lastCommanded_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_toString_R_java_lang_String 60
typedef jobject (*func_mindustry_gen_Unitc_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_command_R_mindustry_ai_types_CommandAI 61
typedef jobject (*func_mindustry_gen_Unitc_command_R_mindustry_ai_types_CommandAI)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_abilities_R_Array1_mindustry_entities_abilities_Ability 62
typedef jobject (*func_mindustry_gen_Unitc_abilities_R_Array1_mindustry_entities_abilities_Ability)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController 63
typedef jobject (*func_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_type_R_mindustry_type_UnitType 64
typedef jobject (*func_mindustry_gen_Unitc_type_R_mindustry_type_UnitType)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_drownFloor_R_mindustry_world_blocks_environment_Floor 65
typedef jobject (*func_mindustry_gen_Unitc_drownFloor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_abilities_Array1_mindustry_entities_abilities_Ability 66
typedef void (*func_mindustry_gen_Unitc_abilities_Array1_mindustry_entities_abilities_Ability)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_add 67
typedef void (*func_mindustry_gen_Unitc_add)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_afterRead 68
typedef void (*func_mindustry_gen_Unitc_afterRead)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_afterReadAll 69
typedef void (*func_mindustry_gen_Unitc_afterReadAll)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_afterSync 70
typedef void (*func_mindustry_gen_Unitc_afterSync)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_aimLook_arc_math_geom_Position 71
typedef void (*func_mindustry_gen_Unitc_aimLook_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_aimLook_float_float 72
typedef void (*func_mindustry_gen_Unitc_aimLook_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_mindustry_gen_Unitc_approach_arc_math_geom_Vec2 73
typedef void (*func_mindustry_gen_Unitc_approach_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_collision_mindustry_gen_Hitboxc_float_float 74
typedef void (*func_mindustry_gen_Unitc_collision_mindustry_gen_Hitboxc_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define INDEX_mindustry_gen_Unitc_controller_mindustry_entities_units_UnitController 75
typedef void (*func_mindustry_gen_Unitc_controller_mindustry_entities_units_UnitController)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_display_arc_scene_ui_layout_Table 76
typedef void (*func_mindustry_gen_Unitc_display_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_dockedType_mindustry_type_UnitType 77
typedef void (*func_mindustry_gen_Unitc_dockedType_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_draw 78
typedef void (*func_mindustry_gen_Unitc_draw)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_drownTime_float 79
typedef void (*func_mindustry_gen_Unitc_drownTime_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Unitc_elevation_float 80
typedef void (*func_mindustry_gen_Unitc_elevation_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Unitc_flag_double 81
typedef void (*func_mindustry_gen_Unitc_flag_double)(jcontext ctx, jobject self, jdouble param0);
#define INDEX_mindustry_gen_Unitc_handleSyncHidden 82
typedef void (*func_mindustry_gen_Unitc_handleSyncHidden)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_heal_float 83
typedef void (*func_mindustry_gen_Unitc_heal_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Unitc_healTime_float 84
typedef void (*func_mindustry_gen_Unitc_healTime_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Unitc_kill 85
typedef void (*func_mindustry_gen_Unitc_kill)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_killed 86
typedef void (*func_mindustry_gen_Unitc_killed)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_landed 87
typedef void (*func_mindustry_gen_Unitc_landed)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_lastCommanded_java_lang_String 88
typedef void (*func_mindustry_gen_Unitc_lastCommanded_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_lastDrownFloor_mindustry_world_blocks_environment_Floor 89
typedef void (*func_mindustry_gen_Unitc_lastDrownFloor_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_lastFogPos_int 90
typedef void (*func_mindustry_gen_Unitc_lastFogPos_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_mindustry_gen_Unitc_lookAt_arc_math_geom_Position 91
typedef void (*func_mindustry_gen_Unitc_lookAt_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_lookAt_float 92
typedef void (*func_mindustry_gen_Unitc_lookAt_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Unitc_lookAt_float_float 93
typedef void (*func_mindustry_gen_Unitc_lookAt_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_mindustry_gen_Unitc_moveAt_arc_math_geom_Vec2 94
typedef void (*func_mindustry_gen_Unitc_moveAt_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_moveAt_arc_math_geom_Vec2_float 95
typedef void (*func_mindustry_gen_Unitc_moveAt_arc_math_geom_Vec2_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define INDEX_mindustry_gen_Unitc_remove 96
typedef void (*func_mindustry_gen_Unitc_remove)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_resetController 97
typedef void (*func_mindustry_gen_Unitc_resetController)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_rotateMove_arc_math_geom_Vec2 98
typedef void (*func_mindustry_gen_Unitc_rotateMove_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_set_mindustry_type_UnitType_mindustry_entities_units_UnitController 99
typedef void (*func_mindustry_gen_Unitc_set_mindustry_type_UnitType_mindustry_entities_units_UnitController)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_mindustry_gen_Unitc_setProp_mindustry_ctype_UnlockableContent_double 100
typedef void (*func_mindustry_gen_Unitc_setProp_mindustry_ctype_UnlockableContent_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define INDEX_mindustry_gen_Unitc_setProp_mindustry_logic_LAccess_double 101
typedef void (*func_mindustry_gen_Unitc_setProp_mindustry_logic_LAccess_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define INDEX_mindustry_gen_Unitc_setProp_mindustry_logic_LAccess_java_lang_Object 102
typedef void (*func_mindustry_gen_Unitc_setProp_mindustry_logic_LAccess_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_mindustry_gen_Unitc_setType_mindustry_type_UnitType 103
typedef void (*func_mindustry_gen_Unitc_setType_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_shadowAlpha_float 104
typedef void (*func_mindustry_gen_Unitc_shadowAlpha_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Unitc_spawnedByCore_boolean 105
typedef void (*func_mindustry_gen_Unitc_spawnedByCore_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Unitc_splashTimer_float 106
typedef void (*func_mindustry_gen_Unitc_splashTimer_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Unitc_trail_mindustry_graphics_Trail 107
typedef void (*func_mindustry_gen_Unitc_trail_mindustry_graphics_Trail)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_type_mindustry_type_UnitType 108
typedef void (*func_mindustry_gen_Unitc_type_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Unitc_update 109
typedef void (*func_mindustry_gen_Unitc_update)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_updateBoosting_boolean 110
typedef void (*func_mindustry_gen_Unitc_updateBoosting_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Unitc_updateBoosting_boolean_boolean 111
typedef void (*func_mindustry_gen_Unitc_updateBoosting_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define INDEX_mindustry_gen_Unitc_updateDrowning 112
typedef void (*func_mindustry_gen_Unitc_updateDrowning)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Unitc_wobble 113
typedef void (*func_mindustry_gen_Unitc_wobble)(jcontext ctx, jobject self);

void mark_mindustry_gen_Unitc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Unitc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
