#ifndef HEADER_mindustry_gen_Playerc
#define HEADER_mindustry_gen_Playerc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/Timerc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Playerc {
	java_lang_Object parent;
} mindustry_gen_Playerc;

extern Class class_mindustry_gen_Playerc;


#define INDEX_mindustry_gen_Playerc_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 0
typedef jobject (*func_mindustry_gen_Playerc_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_coloredName_R_java_lang_String 1
typedef jobject (*func_mindustry_gen_Playerc_coloredName_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_lastCommand_R_mindustry_ai_UnitCommand 2
typedef jobject (*func_mindustry_gen_Playerc_lastCommand_R_mindustry_ai_UnitCommand)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_lastCommand_mindustry_ai_UnitCommand 3
typedef void (*func_mindustry_gen_Playerc_lastCommand_mindustry_ai_UnitCommand)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_justSwitchFrom_R_mindustry_gen_Unit 4
typedef jobject (*func_mindustry_gen_Playerc_justSwitchFrom_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_justSwitchTo_R_mindustry_gen_Unit 5
typedef jobject (*func_mindustry_gen_Playerc_justSwitchTo_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_previewPlanTree_R_arc_math_geom_QuadTree 6
typedef jobject (*func_mindustry_gen_Playerc_previewPlanTree_R_arc_math_geom_QuadTree)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_pingText_R_java_lang_String 7
typedef jobject (*func_mindustry_gen_Playerc_pingText_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_planEachable_R_mindustry_input_InputHandler$QueryEachable 8
typedef jobject (*func_mindustry_gen_Playerc_planEachable_R_mindustry_input_InputHandler$QueryEachable)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_con_R_mindustry_net_NetConnection 9
typedef jobject (*func_mindustry_gen_Playerc_con_R_mindustry_net_NetConnection)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_selectedBlock_R_mindustry_world_Block 10
typedef jobject (*func_mindustry_gen_Playerc_selectedBlock_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_unit_R_mindustry_gen_Unit 11
typedef jobject (*func_mindustry_gen_Playerc_unit_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_color_R_arc_graphics_Color 12
typedef jobject (*func_mindustry_gen_Playerc_color_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_icon_R_arc_graphics_g2d_TextureRegion 13
typedef jobject (*func_mindustry_gen_Playerc_icon_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_getPreviewPlans_R_arc_struct_Seq 14
typedef jobject (*func_mindustry_gen_Playerc_getPreviewPlans_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_previewPlansAssembling_R_arc_struct_Seq 15
typedef jobject (*func_mindustry_gen_Playerc_previewPlansAssembling_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_previewPlansCurrent_R_arc_struct_Seq 16
typedef jobject (*func_mindustry_gen_Playerc_previewPlansCurrent_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_itemDepositRate_R_arc_util_Ratekeeper 17
typedef jobject (*func_mindustry_gen_Playerc_itemDepositRate_R_arc_util_Ratekeeper)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_admin_R_boolean 18
typedef jbool (*func_mindustry_gen_Playerc_admin_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_boosting_R_boolean 19
typedef jbool (*func_mindustry_gen_Playerc_boosting_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_dead_R_boolean 20
typedef jbool (*func_mindustry_gen_Playerc_dead_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_displayAmmo_R_boolean 21
typedef jbool (*func_mindustry_gen_Playerc_displayAmmo_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_isBuilder_R_boolean 22
typedef jbool (*func_mindustry_gen_Playerc_isBuilder_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_isLogicControllable_R_boolean 23
typedef jbool (*func_mindustry_gen_Playerc_isLogicControllable_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_isPinging_R_boolean 24
typedef jbool (*func_mindustry_gen_Playerc_isPinging_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_isValidController_R_boolean 25
typedef jbool (*func_mindustry_gen_Playerc_isValidController_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_previewPlansDirty_R_boolean 26
typedef jbool (*func_mindustry_gen_Playerc_previewPlansDirty_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_receivingNewPlanGroup_R_boolean 27
typedef jbool (*func_mindustry_gen_Playerc_receivingNewPlanGroup_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_shooting_R_boolean 28
typedef jbool (*func_mindustry_gen_Playerc_shooting_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_typing_R_boolean 29
typedef jbool (*func_mindustry_gen_Playerc_typing_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_clipSize_R_float 30
typedef jfloat (*func_mindustry_gen_Playerc_clipSize_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_deathTimer_R_float 31
typedef jfloat (*func_mindustry_gen_Playerc_deathTimer_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_mouseX_R_float 32
typedef jfloat (*func_mindustry_gen_Playerc_mouseX_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_mouseY_R_float 33
typedef jfloat (*func_mindustry_gen_Playerc_mouseY_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_pingTime_R_float 34
typedef jfloat (*func_mindustry_gen_Playerc_pingTime_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_pingX_R_float 35
typedef jfloat (*func_mindustry_gen_Playerc_pingX_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_pingY_R_float 36
typedef jfloat (*func_mindustry_gen_Playerc_pingY_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_textFadeTime_R_float 37
typedef jfloat (*func_mindustry_gen_Playerc_textFadeTime_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_lastPreviewPlanGroup_R_int 38
typedef jint (*func_mindustry_gen_Playerc_lastPreviewPlanGroup_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_lastPreviewPlanGroupServer_R_int 39
typedef jint (*func_mindustry_gen_Playerc_lastPreviewPlanGroupServer_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_selectedRotation_R_int 40
typedef jint (*func_mindustry_gen_Playerc_selectedRotation_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_ip_R_java_lang_String 41
typedef jobject (*func_mindustry_gen_Playerc_ip_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_lastText_R_java_lang_String 42
typedef jobject (*func_mindustry_gen_Playerc_lastText_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_locale_R_java_lang_String 43
typedef jobject (*func_mindustry_gen_Playerc_locale_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_name_R_java_lang_String 44
typedef jobject (*func_mindustry_gen_Playerc_name_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_plainName_R_java_lang_String 45
typedef jobject (*func_mindustry_gen_Playerc_plainName_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_usid_R_java_lang_String 46
typedef jobject (*func_mindustry_gen_Playerc_usid_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_uuid_R_java_lang_String 47
typedef jobject (*func_mindustry_gen_Playerc_uuid_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_lastPreviewPlanTimestamp_R_long 48
typedef jlong (*func_mindustry_gen_Playerc_lastPreviewPlanTimestamp_R_long)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_team_R_mindustry_game_Team 49
typedef jobject (*func_mindustry_gen_Playerc_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_getInfo_R_mindustry_net_Administration$PlayerInfo 50
typedef jobject (*func_mindustry_gen_Playerc_getInfo_R_mindustry_net_Administration$PlayerInfo)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 51
typedef jobject (*func_mindustry_gen_Playerc_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 52
typedef jobject (*func_mindustry_gen_Playerc_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_admin_boolean 53
typedef void (*func_mindustry_gen_Playerc_admin_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Playerc_afterSync 54
typedef void (*func_mindustry_gen_Playerc_afterSync)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_boosting_boolean 55
typedef void (*func_mindustry_gen_Playerc_boosting_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Playerc_checkSpawn 56
typedef void (*func_mindustry_gen_Playerc_checkSpawn)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_clearUnit 57
typedef void (*func_mindustry_gen_Playerc_clearUnit)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_color_arc_graphics_Color 58
typedef void (*func_mindustry_gen_Playerc_color_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_con_mindustry_net_NetConnection 59
typedef void (*func_mindustry_gen_Playerc_con_mindustry_net_NetConnection)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_deathTimer_float 60
typedef void (*func_mindustry_gen_Playerc_deathTimer_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Playerc_draw 61
typedef void (*func_mindustry_gen_Playerc_draw)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_drawName 62
typedef void (*func_mindustry_gen_Playerc_drawName)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_drawPing 63
typedef void (*func_mindustry_gen_Playerc_drawPing)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_handlePreviewPlans_int_arc_struct_Seq 64
typedef void (*func_mindustry_gen_Playerc_handlePreviewPlans_int_arc_struct_Seq)(jcontext ctx, jobject self, jint param0, jobject param1);
#define INDEX_mindustry_gen_Playerc_itemDepositRate_arc_util_Ratekeeper 65
typedef void (*func_mindustry_gen_Playerc_itemDepositRate_arc_util_Ratekeeper)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_justSwitchFrom_mindustry_gen_Unit 66
typedef void (*func_mindustry_gen_Playerc_justSwitchFrom_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_justSwitchTo_mindustry_gen_Unit 67
typedef void (*func_mindustry_gen_Playerc_justSwitchTo_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_kick_java_lang_String 68
typedef void (*func_mindustry_gen_Playerc_kick_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_kick_java_lang_String_long 69
typedef void (*func_mindustry_gen_Playerc_kick_java_lang_String_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define INDEX_mindustry_gen_Playerc_kick_mindustry_net_Packets$KickReason 70
typedef void (*func_mindustry_gen_Playerc_kick_mindustry_net_Packets$KickReason)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_kick_mindustry_net_Packets$KickReason_long 71
typedef void (*func_mindustry_gen_Playerc_kick_mindustry_net_Packets$KickReason_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define INDEX_mindustry_gen_Playerc_lastPreviewPlanGroup_int 72
typedef void (*func_mindustry_gen_Playerc_lastPreviewPlanGroup_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_mindustry_gen_Playerc_lastPreviewPlanGroupServer_int 73
typedef void (*func_mindustry_gen_Playerc_lastPreviewPlanGroupServer_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_mindustry_gen_Playerc_lastPreviewPlanTimestamp_long 74
typedef void (*func_mindustry_gen_Playerc_lastPreviewPlanTimestamp_long)(jcontext ctx, jobject self, jlong param0);
#define INDEX_mindustry_gen_Playerc_lastText_java_lang_String 75
typedef void (*func_mindustry_gen_Playerc_lastText_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_locale_java_lang_String 76
typedef void (*func_mindustry_gen_Playerc_locale_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_mouseX_float 77
typedef void (*func_mindustry_gen_Playerc_mouseX_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Playerc_mouseY_float 78
typedef void (*func_mindustry_gen_Playerc_mouseY_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Playerc_name_java_lang_String 79
typedef void (*func_mindustry_gen_Playerc_name_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_pingText_java_lang_String 80
typedef void (*func_mindustry_gen_Playerc_pingText_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_pingTime_float 81
typedef void (*func_mindustry_gen_Playerc_pingTime_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Playerc_pingX_float 82
typedef void (*func_mindustry_gen_Playerc_pingX_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Playerc_pingY_float 83
typedef void (*func_mindustry_gen_Playerc_pingY_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Playerc_planEachable_mindustry_input_InputHandler$QueryEachable 84
typedef void (*func_mindustry_gen_Playerc_planEachable_mindustry_input_InputHandler$QueryEachable)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_previewPlanTree_arc_math_geom_QuadTree 85
typedef void (*func_mindustry_gen_Playerc_previewPlanTree_arc_math_geom_QuadTree)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_previewPlansAssembling_arc_struct_Seq 86
typedef void (*func_mindustry_gen_Playerc_previewPlansAssembling_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_previewPlansCurrent_arc_struct_Seq 87
typedef void (*func_mindustry_gen_Playerc_previewPlansCurrent_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_previewPlansDirty_boolean 88
typedef void (*func_mindustry_gen_Playerc_previewPlansDirty_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Playerc_receivingNewPlanGroup_boolean 89
typedef void (*func_mindustry_gen_Playerc_receivingNewPlanGroup_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Playerc_remove 90
typedef void (*func_mindustry_gen_Playerc_remove)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_reset 91
typedef void (*func_mindustry_gen_Playerc_reset)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Playerc_selectedBlock_mindustry_world_Block 92
typedef void (*func_mindustry_gen_Playerc_selectedBlock_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_selectedRotation_int 93
typedef void (*func_mindustry_gen_Playerc_selectedRotation_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_mindustry_gen_Playerc_sendMessage_java_lang_String 94
typedef void (*func_mindustry_gen_Playerc_sendMessage_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_sendMessage_java_lang_String_mindustry_gen_Player 95
typedef void (*func_mindustry_gen_Playerc_sendMessage_java_lang_String_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_mindustry_gen_Playerc_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String 96
typedef void (*func_mindustry_gen_Playerc_sendMessage_java_lang_String_mindustry_gen_Player_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define INDEX_mindustry_gen_Playerc_sendUnformatted_mindustry_gen_Player_java_lang_String 97
typedef void (*func_mindustry_gen_Playerc_sendUnformatted_mindustry_gen_Player_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_mindustry_gen_Playerc_sendUnformatted_java_lang_String 98
typedef void (*func_mindustry_gen_Playerc_sendUnformatted_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_shooting_boolean 99
typedef void (*func_mindustry_gen_Playerc_shooting_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Playerc_team_mindustry_game_Team 100
typedef void (*func_mindustry_gen_Playerc_team_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_textFadeTime_float 101
typedef void (*func_mindustry_gen_Playerc_textFadeTime_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Playerc_typing_boolean 102
typedef void (*func_mindustry_gen_Playerc_typing_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Playerc_unit_mindustry_gen_Unit 103
typedef void (*func_mindustry_gen_Playerc_unit_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Playerc_update 104
typedef void (*func_mindustry_gen_Playerc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_Playerc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Playerc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
