#ifndef HEADER_mindustry_gen_Player
#define HEADER_mindustry_gen_Player

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/IndexableEntity__player.h"
#include "mindustry/gen/IndexableEntity__sync.h"
#include "mindustry/gen/Playerc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/Timerc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Player {
	java_lang_Object parent;
	jbool F_added;
	jbool F_admin;
	jbool F_boosting;
	jref F_color;
	jref F_con;
	jfloat F_deathTimer;
	jint F_id;
	jint F_index__draw;
	jint F_index__player;
	jint F_index__sync;
	jref F_itemDepositRate;
	jref F_justSwitchFrom;
	jref F_justSwitchTo;
	jref F_lastCommand;
	jint F_lastPreviewPlanGroup;
	jint F_lastPreviewPlanGroupServer;
	jlong F_lastPreviewPlanTimestamp;
	jref F_lastReadUnit;
	jref F_lastText;
	jlong F_lastUpdated;
	jref F_locale;
	jfloat F_mouseX;
	jfloat F_mouseY;
	jref F_name;
	jref F_pingText;
	jfloat F_pingTime;
	jfloat F_pingX;
	jfloat F_pingY;
	jref F_planEachable;
	jref F_previewPlanTree;
	jref F_previewPlansAssembling;
	jref F_previewPlansCurrent;
	jbool F_previewPlansDirty;
	jbool F_receivingNewPlanGroup;
	jref F_selectedBlock;
	jint F_selectedRotation;
	jbool F_shooting;
	jref F_team;
	jfloat F_textFadeTime;
	jref F_timer;
	jbool F_typing;
	jref F_unit;
	jlong F_updateSpacing;
	jint F_wrongReadUnits;
	jfloat F_x;
	jfloat F_x_LAST_;
	jfloat F_x_TARGET_;
	jfloat F_y;
	jfloat F_y_LAST_;
	jfloat F_y_TARGET_;
} mindustry_gen_Player;

extern Class class_mindustry_gen_Player;

extern jfloat SF_mindustry_gen_Player_deathDelay;
extern jfloat SF_mindustry_gen_Player_pingDuration;

#define VTABLE_mindustry_gen_Player_hashCode_R_int 0
typedef jint (*func_mindustry_gen_Player_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_Player_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_Player_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_Player_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_Player_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_finalize 5
typedef void (*func_mindustry_gen_Player_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_notify 6
typedef void (*func_mindustry_gen_Player_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_notifyAll 7
typedef void (*func_mindustry_gen_Player_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_wait 8
typedef void (*func_mindustry_gen_Player_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_wait_long 9
typedef void (*func_mindustry_gen_Player_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Player_wait_long_int 10
typedef void (*func_mindustry_gen_Player_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_Player_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_gen_Player_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_gen_Player_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_isAdded_R_boolean 13
typedef jbool (*func_mindustry_gen_Player_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_isLocal_R_boolean 14
typedef jbool (*func_mindustry_gen_Player_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_isRemote_R_boolean 15
typedef jbool (*func_mindustry_gen_Player_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_serialize_R_boolean 16
typedef jbool (*func_mindustry_gen_Player_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_classId_R_int 17
typedef jint (*func_mindustry_gen_Player_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_id_R_int 18
typedef jint (*func_mindustry_gen_Player_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_add 19
typedef void (*func_mindustry_gen_Player_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_afterRead 20
typedef void (*func_mindustry_gen_Player_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_afterReadAll 21
typedef void (*func_mindustry_gen_Player_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_beforeWrite 22
typedef void (*func_mindustry_gen_Player_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_id_int 23
typedef void (*func_mindustry_gen_Player_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Player_read_arc_util_io_Reads 24
typedef void (*func_mindustry_gen_Player_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_remove 25
typedef void (*func_mindustry_gen_Player_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_update 26
typedef void (*func_mindustry_gen_Player_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_write_arc_util_io_Writes 27
typedef void (*func_mindustry_gen_Player_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_getX_R_float 28
typedef jfloat (*func_mindustry_gen_Player_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_getY_R_float 29
typedef jfloat (*func_mindustry_gen_Player_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_angleTo_arc_math_geom_Position_R_float 30
typedef jfloat (*func_mindustry_gen_Player_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_angleTo_float_float_R_float 31
typedef jfloat (*func_mindustry_gen_Player_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Player_dst2_arc_math_geom_Position_R_float 32
typedef jfloat (*func_mindustry_gen_Player_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_dst_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_gen_Player_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_dst_float_float_R_float 34
typedef jfloat (*func_mindustry_gen_Player_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Player_dst2_float_float_R_float 35
typedef jfloat (*func_mindustry_gen_Player_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Player_within_arc_math_geom_Position_float_R_boolean 36
typedef jbool (*func_mindustry_gen_Player_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Player_within_float_float_float_R_boolean 37
typedef jbool (*func_mindustry_gen_Player_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_Player_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_gen_Player_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_gen_Player_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_onSolid_R_boolean 40
typedef jbool (*func_mindustry_gen_Player_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_x_R_float 41
typedef jfloat (*func_mindustry_gen_Player_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_y_R_float 42
typedef jfloat (*func_mindustry_gen_Player_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_tileX_R_int 43
typedef jint (*func_mindustry_gen_Player_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_tileY_R_int 44
typedef jint (*func_mindustry_gen_Player_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_gen_Player_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_gen_Player_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_set_arc_math_geom_Position 47
typedef void (*func_mindustry_gen_Player_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_set_float_float 48
typedef void (*func_mindustry_gen_Player_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Player_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_gen_Player_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_trns_float_float 50
typedef void (*func_mindustry_gen_Player_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Player_x_float 51
typedef void (*func_mindustry_gen_Player_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Player_y_float 52
typedef void (*func_mindustry_gen_Player_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Player_clipSize_R_float 53
typedef jfloat (*func_mindustry_gen_Player_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_draw 54
typedef void (*func_mindustry_gen_Player_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_setIndex__draw_int 55
typedef void (*func_mindustry_gen_Player_setIndex__draw_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Player_setIndex__player_int 56
typedef void (*func_mindustry_gen_Player_setIndex__player_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Player_setIndex__sync_int 57
typedef void (*func_mindustry_gen_Player_setIndex__sync_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Player_unit_mindustry_gen_Unit 58
typedef void (*func_mindustry_gen_Player_unit_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit 59
typedef jobject (*func_mindustry_gen_Player_unit_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_hit_mindustry_gen_Bullet 60
typedef void (*func_mindustry_gen_Player_hit_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_isValidController_R_boolean 61
typedef jbool (*func_mindustry_gen_Player_isValidController_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_isLogicControllable_R_boolean 62
typedef jbool (*func_mindustry_gen_Player_isLogicControllable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_updateUnit 63
typedef void (*func_mindustry_gen_Player_updateUnit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_removed_mindustry_gen_Unit 64
typedef void (*func_mindustry_gen_Player_removed_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_afterRead_mindustry_gen_Unit 65
typedef void (*func_mindustry_gen_Player_afterRead_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_isSyncHidden_mindustry_game_Team_R_boolean 66
typedef jbool (*func_mindustry_gen_Player_isSyncHidden_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_lastUpdated_R_long 67
typedef jlong (*func_mindustry_gen_Player_lastUpdated_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_updateSpacing_R_long 68
typedef jlong (*func_mindustry_gen_Player_updateSpacing_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_afterSync 69
typedef void (*func_mindustry_gen_Player_afterSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_handleSyncHidden 70
typedef void (*func_mindustry_gen_Player_handleSyncHidden)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_interpolate 71
typedef void (*func_mindustry_gen_Player_interpolate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_lastUpdated_long 72
typedef void (*func_mindustry_gen_Player_lastUpdated_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Player_readSync_arc_util_io_Reads 73
typedef void (*func_mindustry_gen_Player_readSync_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_readSyncManual_java_nio_FloatBuffer 74
typedef void (*func_mindustry_gen_Player_readSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_snapInterpolation 75
typedef void (*func_mindustry_gen_Player_snapInterpolation)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_snapSync 76
typedef void (*func_mindustry_gen_Player_snapSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_updateSpacing_long 77
typedef void (*func_mindustry_gen_Player_updateSpacing_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Player_writeSync_arc_util_io_Writes 78
typedef void (*func_mindustry_gen_Player_writeSync_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_writeSyncManual_java_nio_FloatBuffer 79
typedef void (*func_mindustry_gen_Player_writeSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_timer_R_arc_util_Interval 80
typedef jobject (*func_mindustry_gen_Player_timer_R_arc_util_Interval)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_timer_int_float_R_boolean 81
typedef jbool (*func_mindustry_gen_Player_timer_int_float_R_boolean)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_mindustry_gen_Player_timer_arc_util_Interval 82
typedef void (*func_mindustry_gen_Player_timer_arc_util_Interval)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 83
typedef jobject (*func_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_coloredName_R_java_lang_String 84
typedef jobject (*func_mindustry_gen_Player_coloredName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_lastCommand_R_mindustry_ai_UnitCommand 85
typedef jobject (*func_mindustry_gen_Player_lastCommand_R_mindustry_ai_UnitCommand)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_lastCommand_mindustry_ai_UnitCommand 86
typedef void (*func_mindustry_gen_Player_lastCommand_mindustry_ai_UnitCommand)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_justSwitchFrom_R_mindustry_gen_Unit 87
typedef jobject (*func_mindustry_gen_Player_justSwitchFrom_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_justSwitchTo_R_mindustry_gen_Unit 88
typedef jobject (*func_mindustry_gen_Player_justSwitchTo_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_previewPlanTree_R_arc_math_geom_QuadTree 89
typedef jobject (*func_mindustry_gen_Player_previewPlanTree_R_arc_math_geom_QuadTree)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_pingText_R_java_lang_String 90
typedef jobject (*func_mindustry_gen_Player_pingText_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_planEachable_R_mindustry_input_InputHandler$QueryEachable 91
typedef jobject (*func_mindustry_gen_Player_planEachable_R_mindustry_input_InputHandler$QueryEachable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_con_R_mindustry_net_NetConnection 92
typedef jobject (*func_mindustry_gen_Player_con_R_mindustry_net_NetConnection)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_selectedBlock_R_mindustry_world_Block 93
typedef jobject (*func_mindustry_gen_Player_selectedBlock_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_color_R_arc_graphics_Color 94
typedef jobject (*func_mindustry_gen_Player_color_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_icon_R_arc_graphics_g2d_TextureRegion 95
typedef jobject (*func_mindustry_gen_Player_icon_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_getPreviewPlans_R_arc_struct_Seq 96
typedef jobject (*func_mindustry_gen_Player_getPreviewPlans_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_previewPlansAssembling_R_arc_struct_Seq 97
typedef jobject (*func_mindustry_gen_Player_previewPlansAssembling_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_previewPlansCurrent_R_arc_struct_Seq 98
typedef jobject (*func_mindustry_gen_Player_previewPlansCurrent_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_itemDepositRate_R_arc_util_Ratekeeper 99
typedef jobject (*func_mindustry_gen_Player_itemDepositRate_R_arc_util_Ratekeeper)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_admin_R_boolean 100
typedef jbool (*func_mindustry_gen_Player_admin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_boosting_R_boolean 101
typedef jbool (*func_mindustry_gen_Player_boosting_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_dead_R_boolean 102
typedef jbool (*func_mindustry_gen_Player_dead_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_displayAmmo_R_boolean 103
typedef jbool (*func_mindustry_gen_Player_displayAmmo_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_isBuilder_R_boolean 104
typedef jbool (*func_mindustry_gen_Player_isBuilder_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_isPinging_R_boolean 105
typedef jbool (*func_mindustry_gen_Player_isPinging_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_previewPlansDirty_R_boolean 106
typedef jbool (*func_mindustry_gen_Player_previewPlansDirty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_receivingNewPlanGroup_R_boolean 107
typedef jbool (*func_mindustry_gen_Player_receivingNewPlanGroup_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_shooting_R_boolean 108
typedef jbool (*func_mindustry_gen_Player_shooting_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_typing_R_boolean 109
typedef jbool (*func_mindustry_gen_Player_typing_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_deathTimer_R_float 110
typedef jfloat (*func_mindustry_gen_Player_deathTimer_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_mouseX_R_float 111
typedef jfloat (*func_mindustry_gen_Player_mouseX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_mouseY_R_float 112
typedef jfloat (*func_mindustry_gen_Player_mouseY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_pingTime_R_float 113
typedef jfloat (*func_mindustry_gen_Player_pingTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_pingX_R_float 114
typedef jfloat (*func_mindustry_gen_Player_pingX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_pingY_R_float 115
typedef jfloat (*func_mindustry_gen_Player_pingY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_textFadeTime_R_float 116
typedef jfloat (*func_mindustry_gen_Player_textFadeTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_lastPreviewPlanGroup_R_int 117
typedef jint (*func_mindustry_gen_Player_lastPreviewPlanGroup_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_lastPreviewPlanGroupServer_R_int 118
typedef jint (*func_mindustry_gen_Player_lastPreviewPlanGroupServer_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_selectedRotation_R_int 119
typedef jint (*func_mindustry_gen_Player_selectedRotation_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_ip_R_java_lang_String 120
typedef jobject (*func_mindustry_gen_Player_ip_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_lastText_R_java_lang_String 121
typedef jobject (*func_mindustry_gen_Player_lastText_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_locale_R_java_lang_String 122
typedef jobject (*func_mindustry_gen_Player_locale_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_name_R_java_lang_String 123
typedef jobject (*func_mindustry_gen_Player_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_plainName_R_java_lang_String 124
typedef jobject (*func_mindustry_gen_Player_plainName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_usid_R_java_lang_String 125
typedef jobject (*func_mindustry_gen_Player_usid_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_uuid_R_java_lang_String 126
typedef jobject (*func_mindustry_gen_Player_uuid_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_lastPreviewPlanTimestamp_R_long 127
typedef jlong (*func_mindustry_gen_Player_lastPreviewPlanTimestamp_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team 128
typedef jobject (*func_mindustry_gen_Player_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo 129
typedef jobject (*func_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 130
typedef jobject (*func_mindustry_gen_Player_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 131
typedef jobject (*func_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_admin_boolean 132
typedef void (*func_mindustry_gen_Player_admin_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Player_boosting_boolean 133
typedef void (*func_mindustry_gen_Player_boosting_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Player_checkSpawn 134
typedef void (*func_mindustry_gen_Player_checkSpawn)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_clearUnit 135
typedef void (*func_mindustry_gen_Player_clearUnit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_color_arc_graphics_Color 136
typedef void (*func_mindustry_gen_Player_color_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_con_mindustry_net_NetConnection 137
typedef void (*func_mindustry_gen_Player_con_mindustry_net_NetConnection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_deathTimer_float 138
typedef void (*func_mindustry_gen_Player_deathTimer_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Player_drawName 139
typedef void (*func_mindustry_gen_Player_drawName)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_drawPing 140
typedef void (*func_mindustry_gen_Player_drawPing)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_handlePreviewPlans_int_arc_struct_Seq 141
typedef void (*func_mindustry_gen_Player_handlePreviewPlans_int_arc_struct_Seq)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_gen_Player_itemDepositRate_arc_util_Ratekeeper 142
typedef void (*func_mindustry_gen_Player_itemDepositRate_arc_util_Ratekeeper)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_justSwitchFrom_mindustry_gen_Unit 143
typedef void (*func_mindustry_gen_Player_justSwitchFrom_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_justSwitchTo_mindustry_gen_Unit 144
typedef void (*func_mindustry_gen_Player_justSwitchTo_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_kick_java_lang_String 145
typedef void (*func_mindustry_gen_Player_kick_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_kick_java_lang_String_long 146
typedef void (*func_mindustry_gen_Player_kick_java_lang_String_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason 147
typedef void (*func_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason_long 148
typedef void (*func_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_mindustry_gen_Player_lastPreviewPlanGroup_int 149
typedef void (*func_mindustry_gen_Player_lastPreviewPlanGroup_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Player_lastPreviewPlanGroupServer_int 150
typedef void (*func_mindustry_gen_Player_lastPreviewPlanGroupServer_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Player_lastPreviewPlanTimestamp_long 151
typedef void (*func_mindustry_gen_Player_lastPreviewPlanTimestamp_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Player_lastText_java_lang_String 152
typedef void (*func_mindustry_gen_Player_lastText_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_locale_java_lang_String 153
typedef void (*func_mindustry_gen_Player_locale_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_mouseX_float 154
typedef void (*func_mindustry_gen_Player_mouseX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Player_mouseY_float 155
typedef void (*func_mindustry_gen_Player_mouseY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Player_name_java_lang_String 156
typedef void (*func_mindustry_gen_Player_name_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_pingText_java_lang_String 157
typedef void (*func_mindustry_gen_Player_pingText_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_pingTime_float 158
typedef void (*func_mindustry_gen_Player_pingTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Player_pingX_float 159
typedef void (*func_mindustry_gen_Player_pingX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Player_pingY_float 160
typedef void (*func_mindustry_gen_Player_pingY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Player_planEachable_mindustry_input_InputHandler$QueryEachable 161
typedef void (*func_mindustry_gen_Player_planEachable_mindustry_input_InputHandler$QueryEachable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_previewPlanTree_arc_math_geom_QuadTree 162
typedef void (*func_mindustry_gen_Player_previewPlanTree_arc_math_geom_QuadTree)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_previewPlansAssembling_arc_struct_Seq 163
typedef void (*func_mindustry_gen_Player_previewPlansAssembling_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_previewPlansCurrent_arc_struct_Seq 164
typedef void (*func_mindustry_gen_Player_previewPlansCurrent_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_previewPlansDirty_boolean 165
typedef void (*func_mindustry_gen_Player_previewPlansDirty_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Player_receivingNewPlanGroup_boolean 166
typedef void (*func_mindustry_gen_Player_receivingNewPlanGroup_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Player_reset 167
typedef void (*func_mindustry_gen_Player_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Player_selectedBlock_mindustry_world_Block 168
typedef void (*func_mindustry_gen_Player_selectedBlock_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_selectedRotation_int 169
typedef void (*func_mindustry_gen_Player_selectedRotation_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Player_sendMessage_java_lang_String 170
typedef void (*func_mindustry_gen_Player_sendMessage_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player 171
typedef void (*func_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String 172
typedef void (*func_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_gen_Player_sendUnformatted_mindustry_gen_Player_java_lang_String 173
typedef void (*func_mindustry_gen_Player_sendUnformatted_mindustry_gen_Player_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_gen_Player_sendUnformatted_java_lang_String 174
typedef void (*func_mindustry_gen_Player_sendUnformatted_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_shooting_boolean 175
typedef void (*func_mindustry_gen_Player_shooting_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Player_team_mindustry_game_Team 176
typedef void (*func_mindustry_gen_Player_team_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Player_textFadeTime_float 177
typedef void (*func_mindustry_gen_Player_textFadeTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Player_typing_boolean 178
typedef void (*func_mindustry_gen_Player_typing_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_Player_lambda$bestCore$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float 179
typedef jfloat (*func_mindustry_gen_Player_lambda$bestCore$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_Player(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Player(jcontext ctx);
void init_mindustry_gen_Player(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_unit_R_mindustry_gen_Unit(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_justSwitchFrom_R_mindustry_gen_Unit(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_justSwitchTo_R_mindustry_gen_Unit(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_color_R_arc_graphics_Color(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_previewPlanTree_R_arc_math_geom_QuadTree(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_previewPlansAssembling_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_previewPlansCurrent_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_timer_R_arc_util_Interval(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_itemDepositRate_R_arc_util_Ratekeeper(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_admin_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_boosting_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_previewPlansDirty_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_receivingNewPlanGroup_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_shooting_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_typing_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Player_deathTimer_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Player_mouseX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Player_mouseY_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Player_pingTime_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Player_pingX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Player_pingY_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Player_textFadeTime_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Player_x_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Player_y_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_Player_classId_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Player_id_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Player_lastPreviewPlanGroup_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Player_lastPreviewPlanGroupServer_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Player_selectedRotation_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_lastText_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_locale_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_name_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_pingText_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_toString_R_java_lang_String(jcontext ctx, jobject self);
jlong M_mindustry_gen_Player_lastPreviewPlanTimestamp_R_long(jcontext ctx, jobject self);
jlong M_mindustry_gen_Player_lastUpdated_R_long(jcontext ctx, jobject self);
jlong M_mindustry_gen_Player_updateSpacing_R_long(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_lastCommand_R_mindustry_ai_UnitCommand(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_team_R_mindustry_game_Team(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_planEachable_R_mindustry_input_InputHandler$QueryEachable(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_con_R_mindustry_net_NetConnection(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_selectedBlock_R_mindustry_world_Block(jcontext ctx, jobject self);
void M_mindustry_gen_Player_admin_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Player_boosting_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Player_color_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_con_mindustry_net_NetConnection(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_deathTimer_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Player_id_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Player_itemDepositRate_arc_util_Ratekeeper(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_justSwitchFrom_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_justSwitchTo_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_lastCommand_mindustry_ai_UnitCommand(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_lastPreviewPlanGroup_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Player_lastPreviewPlanGroupServer_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Player_lastPreviewPlanTimestamp_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_gen_Player_lastText_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_lastUpdated_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_gen_Player_locale_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_mouseX_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Player_mouseY_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Player_name_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_pingText_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_pingTime_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Player_pingX_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Player_pingY_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Player_planEachable_mindustry_input_InputHandler$QueryEachable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_previewPlanTree_arc_math_geom_QuadTree(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_previewPlansAssembling_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_previewPlansCurrent_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_previewPlansDirty_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Player_receivingNewPlanGroup_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Player_selectedBlock_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_selectedRotation_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Player_setIndex__draw_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Player_setIndex__player_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Player_setIndex__sync_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Player_shooting_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Player_textFadeTime_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Player_timer_arc_util_Interval(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_typing_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_Player_updateSpacing_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_gen_Player_x_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Player_y_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Player_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_gen_Player_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_as_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_icon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_getPreviewPlans_R_arc_struct_Seq(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_dead_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_displayAmmo_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_isAdded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_isBuilder_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_isLocal_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_isLogicControllable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_isPinging_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_isRemote_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_Player_isValidController_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_onSolid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_serialize_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Player_timer_int_float_R_boolean(jcontext ctx, jobject self, jint param0, jfloat param1);
jfloat M_mindustry_gen_Player_clipSize_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Player_getX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Player_getY_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_Player_tileX_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Player_tileY_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_coloredName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_ip_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_plainName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_usid_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_uuid_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self);
jobject M_mindustry_gen_Player_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject SM_mindustry_gen_Player_create_R_mindustry_gen_Player(jcontext ctx);
void M_mindustry_gen_Player_add(jcontext ctx, jobject self);
void M_mindustry_gen_Player_afterRead(jcontext ctx, jobject self);
void M_mindustry_gen_Player_afterReadAll(jcontext ctx, jobject self);
void M_mindustry_gen_Player_afterSync(jcontext ctx, jobject self);
void M_mindustry_gen_Player_beforeWrite(jcontext ctx, jobject self);
void M_mindustry_gen_Player_checkSpawn(jcontext ctx, jobject self);
void M_mindustry_gen_Player_clearUnit(jcontext ctx, jobject self);
void M_mindustry_gen_Player_draw(jcontext ctx, jobject self);
void M_mindustry_gen_Player_drawName(jcontext ctx, jobject self);
void M_mindustry_gen_Player_drawPing(jcontext ctx, jobject self);
void M_mindustry_gen_Player_handlePreviewPlans_int_arc_struct_Seq(jcontext ctx, jobject self, jint param0, jobject param1);
void M_mindustry_gen_Player_handleSyncHidden(jcontext ctx, jobject self);
void M_mindustry_gen_Player_interpolate(jcontext ctx, jobject self);
void M_mindustry_gen_Player_kick_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_kick_java_lang_String_long(jcontext ctx, jobject self, jobject param0, jlong param1);
void M_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_kick_mindustry_net_Packets$KickReason_long(jcontext ctx, jobject self, jobject param0, jlong param1);
void M_mindustry_gen_Player_readSync_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_readSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_remove(jcontext ctx, jobject self);
void M_mindustry_gen_Player_reset(jcontext ctx, jobject self);
void M_mindustry_gen_Player_sendMessage_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_gen_Player_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_gen_Player_sendUnformatted_mindustry_gen_Player_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_gen_Player_sendUnformatted_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Player_snapInterpolation(jcontext ctx, jobject self);
void M_mindustry_gen_Player_snapSync(jcontext ctx, jobject self);
void M_mindustry_gen_Player_team_mindustry_game_Team(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Player_unit_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_update(jcontext ctx, jobject self);
void M_mindustry_gen_Player_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Player_writeSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_gen_Player_lambda$bestCore$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float(jcontext ctx, jobject self, jobject param0);
jint SM_mindustry_gen_Player_lambda$bestCore$1_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_int(jcontext ctx, jobject param0);
jbool SM_mindustry_gen_Player_lambda$bestCore$0_arc_struct_Seq_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
