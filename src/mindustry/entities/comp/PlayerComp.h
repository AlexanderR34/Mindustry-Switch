#ifndef HEADER_mindustry_entities_comp_PlayerComp
#define HEADER_mindustry_entities_comp_PlayerComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/Timerc.h"
#include "mindustry/gen/Drawc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_PlayerComp {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jref F_unit;
	jref F_con;
	jref F_team;
	jbool F_typing;
	jbool F_shooting;
	jbool F_boosting;
	jref F_selectedBlock;
	jint F_selectedRotation;
	jfloat F_mouseX;
	jfloat F_mouseY;
	jref F_lastCommand;
	jbool F_admin;
	jref F_name;
	jref F_color;
	jref F_locale;
	jfloat F_deathTimer;
	jref F_lastText;
	jfloat F_textFadeTime;
	jref F_itemDepositRate;
	jfloat F_pingX;
	jfloat F_pingY;
	jfloat F_pingTime;
	jref F_pingText;
	jref F_lastReadUnit;
	jint F_wrongReadUnits;
	jref F_justSwitchFrom;
	jref F_justSwitchTo;
	jint F_lastPreviewPlanGroup;
	jint F_lastPreviewPlanGroupServer;
	jlong F_lastPreviewPlanTimestamp;
	jbool F_receivingNewPlanGroup;
	jref F_previewPlansCurrent;
	jref F_previewPlansAssembling;
	jref F_previewPlanTree;
	jref F_planEachable;
	jbool F_previewPlansDirty;
} mindustry_entities_comp_PlayerComp;

extern Class class_mindustry_entities_comp_PlayerComp;

extern jfloat SF_mindustry_entities_comp_PlayerComp_deathDelay;
extern jfloat SF_mindustry_entities_comp_PlayerComp_pingDuration;

#define VTABLE_mindustry_entities_comp_PlayerComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_PlayerComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_PlayerComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_PlayerComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_PlayerComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_PlayerComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_finalize 5
typedef void (*func_mindustry_entities_comp_PlayerComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_notify 6
typedef void (*func_mindustry_entities_comp_PlayerComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_PlayerComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_wait 8
typedef void (*func_mindustry_entities_comp_PlayerComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_wait_long 9
typedef void (*func_mindustry_entities_comp_PlayerComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_PlayerComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_PlayerComp_unit_mindustry_gen_Unit 11
typedef void (*func_mindustry_entities_comp_PlayerComp_unit_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_unit_R_mindustry_gen_Unit 12
typedef jobject (*func_mindustry_entities_comp_PlayerComp_unit_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_hit_mindustry_gen_Bullet 13
typedef void (*func_mindustry_entities_comp_PlayerComp_hit_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_isValidController_R_boolean 14
typedef jbool (*func_mindustry_entities_comp_PlayerComp_isValidController_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_isLogicControllable_R_boolean 15
typedef jbool (*func_mindustry_entities_comp_PlayerComp_isLogicControllable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_updateUnit 16
typedef void (*func_mindustry_entities_comp_PlayerComp_updateUnit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_removed_mindustry_gen_Unit 17
typedef void (*func_mindustry_entities_comp_PlayerComp_removed_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_afterRead_mindustry_gen_Unit 18
typedef void (*func_mindustry_entities_comp_PlayerComp_afterRead_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_self_R_mindustry_gen_Entityc 19
typedef jobject (*func_mindustry_entities_comp_PlayerComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_as_R_java_lang_Object 20
typedef jobject (*func_mindustry_entities_comp_PlayerComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_isAdded_R_boolean 21
typedef jbool (*func_mindustry_entities_comp_PlayerComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_isLocal_R_boolean 22
typedef jbool (*func_mindustry_entities_comp_PlayerComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_isRemote_R_boolean 23
typedef jbool (*func_mindustry_entities_comp_PlayerComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_serialize_R_boolean 24
typedef jbool (*func_mindustry_entities_comp_PlayerComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_classId_R_int 25
typedef jint (*func_mindustry_entities_comp_PlayerComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_id_R_int 26
typedef jint (*func_mindustry_entities_comp_PlayerComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_add 27
typedef void (*func_mindustry_entities_comp_PlayerComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_afterRead 28
typedef void (*func_mindustry_entities_comp_PlayerComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_afterReadAll 29
typedef void (*func_mindustry_entities_comp_PlayerComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_beforeWrite 30
typedef void (*func_mindustry_entities_comp_PlayerComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_id_int 31
typedef void (*func_mindustry_entities_comp_PlayerComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_read_arc_util_io_Reads 32
typedef void (*func_mindustry_entities_comp_PlayerComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_remove 33
typedef void (*func_mindustry_entities_comp_PlayerComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_update 34
typedef void (*func_mindustry_entities_comp_PlayerComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_write_arc_util_io_Writes 35
typedef void (*func_mindustry_entities_comp_PlayerComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_isSyncHidden_mindustry_game_Team_R_boolean 36
typedef jbool (*func_mindustry_entities_comp_PlayerComp_isSyncHidden_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_lastUpdated_R_long 37
typedef jlong (*func_mindustry_entities_comp_PlayerComp_lastUpdated_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_updateSpacing_R_long 38
typedef jlong (*func_mindustry_entities_comp_PlayerComp_updateSpacing_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_afterSync 39
typedef void (*func_mindustry_entities_comp_PlayerComp_afterSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_handleSyncHidden 40
typedef void (*func_mindustry_entities_comp_PlayerComp_handleSyncHidden)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_interpolate 41
typedef void (*func_mindustry_entities_comp_PlayerComp_interpolate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_lastUpdated_long 42
typedef void (*func_mindustry_entities_comp_PlayerComp_lastUpdated_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_readSync_arc_util_io_Reads 43
typedef void (*func_mindustry_entities_comp_PlayerComp_readSync_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_readSyncManual_java_nio_FloatBuffer 44
typedef void (*func_mindustry_entities_comp_PlayerComp_readSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_snapInterpolation 45
typedef void (*func_mindustry_entities_comp_PlayerComp_snapInterpolation)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_snapSync 46
typedef void (*func_mindustry_entities_comp_PlayerComp_snapSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_updateSpacing_long 47
typedef void (*func_mindustry_entities_comp_PlayerComp_updateSpacing_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_writeSync_arc_util_io_Writes 48
typedef void (*func_mindustry_entities_comp_PlayerComp_writeSync_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_writeSyncManual_java_nio_FloatBuffer 49
typedef void (*func_mindustry_entities_comp_PlayerComp_writeSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_timer_R_arc_util_Interval 50
typedef jobject (*func_mindustry_entities_comp_PlayerComp_timer_R_arc_util_Interval)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_timer_int_float_R_boolean 51
typedef jbool (*func_mindustry_entities_comp_PlayerComp_timer_int_float_R_boolean)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PlayerComp_timer_arc_util_Interval 52
typedef void (*func_mindustry_entities_comp_PlayerComp_timer_arc_util_Interval)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_getX_R_float 53
typedef jfloat (*func_mindustry_entities_comp_PlayerComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_getY_R_float 54
typedef jfloat (*func_mindustry_entities_comp_PlayerComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_angleTo_arc_math_geom_Position_R_float 55
typedef jfloat (*func_mindustry_entities_comp_PlayerComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_angleTo_float_float_R_float 56
typedef jfloat (*func_mindustry_entities_comp_PlayerComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PlayerComp_dst2_arc_math_geom_Position_R_float 57
typedef jfloat (*func_mindustry_entities_comp_PlayerComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_dst_arc_math_geom_Position_R_float 58
typedef jfloat (*func_mindustry_entities_comp_PlayerComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_dst_float_float_R_float 59
typedef jfloat (*func_mindustry_entities_comp_PlayerComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PlayerComp_dst2_float_float_R_float 60
typedef jfloat (*func_mindustry_entities_comp_PlayerComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PlayerComp_within_arc_math_geom_Position_float_R_boolean 61
typedef jbool (*func_mindustry_entities_comp_PlayerComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PlayerComp_within_float_float_float_R_boolean 62
typedef jbool (*func_mindustry_entities_comp_PlayerComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_PlayerComp_floorOn_R_mindustry_world_blocks_environment_Floor 63
typedef jobject (*func_mindustry_entities_comp_PlayerComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_buildOn_R_mindustry_gen_Building 64
typedef jobject (*func_mindustry_entities_comp_PlayerComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_onSolid_R_boolean 65
typedef jbool (*func_mindustry_entities_comp_PlayerComp_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_x_R_float 66
typedef jfloat (*func_mindustry_entities_comp_PlayerComp_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_y_R_float 67
typedef jfloat (*func_mindustry_entities_comp_PlayerComp_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_tileX_R_int 68
typedef jint (*func_mindustry_entities_comp_PlayerComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_tileY_R_int 69
typedef jint (*func_mindustry_entities_comp_PlayerComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_blockOn_R_mindustry_world_Block 70
typedef jobject (*func_mindustry_entities_comp_PlayerComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_tileOn_R_mindustry_world_Tile 71
typedef jobject (*func_mindustry_entities_comp_PlayerComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_set_arc_math_geom_Position 72
typedef void (*func_mindustry_entities_comp_PlayerComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_set_float_float 73
typedef void (*func_mindustry_entities_comp_PlayerComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PlayerComp_trns_arc_math_geom_Position 74
typedef void (*func_mindustry_entities_comp_PlayerComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_trns_float_float 75
typedef void (*func_mindustry_entities_comp_PlayerComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PlayerComp_x_float 76
typedef void (*func_mindustry_entities_comp_PlayerComp_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_y_float 77
typedef void (*func_mindustry_entities_comp_PlayerComp_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_clipSize_R_float 78
typedef jfloat (*func_mindustry_entities_comp_PlayerComp_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_draw 79
typedef void (*func_mindustry_entities_comp_PlayerComp_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_getPreviewPlans_R_arc_struct_Seq 80
typedef jobject (*func_mindustry_entities_comp_PlayerComp_getPreviewPlans_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_handlePreviewPlans_int_arc_struct_Seq 81
typedef void (*func_mindustry_entities_comp_PlayerComp_handlePreviewPlans_int_arc_struct_Seq)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_entities_comp_PlayerComp_isBuilder_R_boolean 82
typedef jbool (*func_mindustry_entities_comp_PlayerComp_isBuilder_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 83
typedef jobject (*func_mindustry_entities_comp_PlayerComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 84
typedef jobject (*func_mindustry_entities_comp_PlayerComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 85
typedef jobject (*func_mindustry_entities_comp_PlayerComp_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_icon_R_arc_graphics_g2d_TextureRegion 86
typedef jobject (*func_mindustry_entities_comp_PlayerComp_icon_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_displayAmmo_R_boolean 87
typedef jbool (*func_mindustry_entities_comp_PlayerComp_displayAmmo_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_reset 88
typedef void (*func_mindustry_entities_comp_PlayerComp_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_checkSpawn 89
typedef void (*func_mindustry_entities_comp_PlayerComp_checkSpawn)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_team_mindustry_game_Team 90
typedef void (*func_mindustry_entities_comp_PlayerComp_team_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_clearUnit 91
typedef void (*func_mindustry_entities_comp_PlayerComp_clearUnit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_dead_R_boolean 92
typedef jbool (*func_mindustry_entities_comp_PlayerComp_dead_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_ip_R_java_lang_String 93
typedef jobject (*func_mindustry_entities_comp_PlayerComp_ip_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_uuid_R_java_lang_String 94
typedef jobject (*func_mindustry_entities_comp_PlayerComp_uuid_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_usid_R_java_lang_String 95
typedef jobject (*func_mindustry_entities_comp_PlayerComp_usid_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_kick_mindustry_net_Packets$KickReason 96
typedef void (*func_mindustry_entities_comp_PlayerComp_kick_mindustry_net_Packets$KickReason)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_kick_mindustry_net_Packets$KickReason_long 97
typedef void (*func_mindustry_entities_comp_PlayerComp_kick_mindustry_net_Packets$KickReason_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_mindustry_entities_comp_PlayerComp_kick_java_lang_String 98
typedef void (*func_mindustry_entities_comp_PlayerComp_kick_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_kick_java_lang_String_long 99
typedef void (*func_mindustry_entities_comp_PlayerComp_kick_java_lang_String_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_mindustry_entities_comp_PlayerComp_isPinging_R_boolean 100
typedef jbool (*func_mindustry_entities_comp_PlayerComp_isPinging_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_drawPing 101
typedef void (*func_mindustry_entities_comp_PlayerComp_drawPing)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_drawName 102
typedef void (*func_mindustry_entities_comp_PlayerComp_drawName)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_coloredName_R_java_lang_String 103
typedef jobject (*func_mindustry_entities_comp_PlayerComp_coloredName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_plainName_R_java_lang_String 104
typedef jobject (*func_mindustry_entities_comp_PlayerComp_plainName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String 105
typedef void (*func_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player 106
typedef void (*func_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String 107
typedef void (*func_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_entities_comp_PlayerComp_sendUnformatted_java_lang_String 108
typedef void (*func_mindustry_entities_comp_PlayerComp_sendUnformatted_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PlayerComp_sendUnformatted_mindustry_gen_Player_java_lang_String 109
typedef void (*func_mindustry_entities_comp_PlayerComp_sendUnformatted_mindustry_gen_Player_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_entities_comp_PlayerComp_getInfo_R_mindustry_net_Administration$PlayerInfo 110
typedef jobject (*func_mindustry_entities_comp_PlayerComp_getInfo_R_mindustry_net_Administration$PlayerInfo)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PlayerComp_lambda$bestCore$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float 111
typedef jfloat (*func_mindustry_entities_comp_PlayerComp_lambda$bestCore$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_entities_comp_PlayerComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_PlayerComp(jcontext ctx);
void init_mindustry_entities_comp_PlayerComp(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_PlayerComp_getPreviewPlans_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PlayerComp_handlePreviewPlans_int_arc_struct_Seq(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_mindustry_entities_comp_PlayerComp_isBuilder_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_PlayerComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_PlayerComp_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_PlayerComp_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_PlayerComp_icon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_PlayerComp_displayAmmo_R_boolean(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PlayerComp_reset(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_PlayerComp_isValidController_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_PlayerComp_isLogicControllable_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_PlayerComp_clipSize_R_float(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PlayerComp_afterSync(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PlayerComp_update(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PlayerComp_checkSpawn(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PlayerComp_remove(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PlayerComp_team_mindustry_game_Team(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_PlayerComp_clearUnit(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_PlayerComp_unit_R_mindustry_gen_Unit(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PlayerComp_unit_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_entities_comp_PlayerComp_dead_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_PlayerComp_ip_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_PlayerComp_uuid_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_PlayerComp_usid_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PlayerComp_kick_mindustry_net_Packets$KickReason(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_PlayerComp_kick_mindustry_net_Packets$KickReason_long(jcontext ctx, jobject self, jobject param0, jlong param1);
void M_mindustry_entities_comp_PlayerComp_kick_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_PlayerComp_kick_java_lang_String_long(jcontext ctx, jobject self, jobject param0, jlong param1);
void M_mindustry_entities_comp_PlayerComp_draw(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_PlayerComp_isPinging_R_boolean(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PlayerComp_drawPing(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PlayerComp_drawName(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_PlayerComp_coloredName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_PlayerComp_plainName_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_entities_comp_PlayerComp_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_entities_comp_PlayerComp_sendUnformatted_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_PlayerComp_sendUnformatted_mindustry_gen_Player_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_entities_comp_PlayerComp_getInfo_R_mindustry_net_Administration$PlayerInfo(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_PlayerComp_lambda$bestCore$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float(jcontext ctx, jobject self, jobject param0);
jint SM_mindustry_entities_comp_PlayerComp_lambda$bestCore$1_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_int(jcontext ctx, jobject param0);
jbool SM_mindustry_entities_comp_PlayerComp_lambda$bestCore$0_arc_struct_Seq_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
