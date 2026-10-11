#ifndef HEADER_mindustry_gen_Call
#define HEADER_mindustry_gen_Call

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Call {
	java_lang_Object parent;
} mindustry_gen_Call;

extern Class class_mindustry_gen_Call;


#define VTABLE_mindustry_gen_Call_hashCode_R_int 0
typedef jint (*func_mindustry_gen_Call_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Call_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_Call_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Call_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_Call_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Call_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_Call_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Call_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_Call_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Call_finalize 5
typedef void (*func_mindustry_gen_Call_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Call_notify 6
typedef void (*func_mindustry_gen_Call_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Call_notifyAll 7
typedef void (*func_mindustry_gen_Call_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Call_wait 8
typedef void (*func_mindustry_gen_Call_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Call_wait_long 9
typedef void (*func_mindustry_gen_Call_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Call_wait_long_int 10
typedef void (*func_mindustry_gen_Call_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_Call(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Call(jcontext ctx);
void init_mindustry_gen_Call(jcontext ctx, jobject self);
void SM_mindustry_gen_Call_adminRequest_mindustry_gen_Player_mindustry_net_Packets$AdminAction_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_announce_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_announce_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_assemblerDroneSpawned_mindustry_world_Tile_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_Call_assemblerUnitSpawned_mindustry_world_Tile(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_autoDoorToggle_mindustry_world_Tile_boolean(jcontext ctx, jobject param0, jbool param1);
void SM_mindustry_gen_Call_beginBreak_mindustry_gen_Unit_mindustry_game_Team_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
void SM_mindustry_gen_Call_beginPlace_mindustry_gen_Unit_mindustry_world_Block_mindustry_game_Team_int_int_int_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jint param4, jint param5, jobject param6);
void SM_mindustry_gen_Call_blockSnapshot_short_Array1_byte(jcontext ctx, jshort param0, jobject param1);
void SM_mindustry_gen_Call_blockSnapshot_mindustry_net_NetConnection_short_Array1_byte(jcontext ctx, jobject param0, jshort param1, jobject param2);
void SM_mindustry_gen_Call_buildDestroyed_mindustry_gen_Building(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_buildHealthUpdate_arc_struct_IntSeq(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_buildingControlSelect_mindustry_gen_Player_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_clearItems_mindustry_gen_Building(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_clearLiquids_mindustry_gen_Building(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_clearObjectives(jcontext ctx);
void SM_mindustry_gen_Call_clearObjectives_mindustry_net_NetConnection(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_clientBinaryPacketReliable_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_clientBinaryPacketReliable_mindustry_net_NetConnection_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_clientBinaryPacketUnreliable_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_clientBinaryPacketUnreliable_mindustry_net_NetConnection_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_clientLogicDataReliable_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_clientLogicDataUnreliable_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_clientPacketReliable_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_clientPacketReliable_mindustry_net_NetConnection_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_clientPacketUnreliable_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_clientPacketUnreliable_mindustry_net_NetConnection_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_clientPlanSnapshot_int_mindustry_io_TypeIO$ClientBuildPlans(jcontext ctx, jint param0, jobject param1);
void SM_mindustry_gen_Call_clientPlanSnapshotReceived_mindustry_net_NetConnection_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3);
void SM_mindustry_gen_Call_clientSnapshot_int_int_boolean_float_float_float_float_float_float_float_float_mindustry_world_Tile_boolean_boolean_boolean_boolean_mindustry_world_Block_int_arc_struct_Queue_float_float_float_float(jcontext ctx, jint param0, jint param1, jbool param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jobject param11, jbool param12, jbool param13, jbool param14, jbool param15, jobject param16, jint param17, jobject param18, jfloat param19, jfloat param20, jfloat param21, jfloat param22);
void SM_mindustry_gen_Call_commandBuilding_mindustry_gen_Player_Array1_int_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_commandBuilding__forward_mindustry_net_NetConnection_mindustry_gen_Player_Array1_int_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
void SM_mindustry_gen_Call_commandUnits_mindustry_gen_Player_Array1_int_mindustry_gen_Building_mindustry_gen_Unit_arc_math_geom_Vec2_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jbool param5, jbool param6);
void SM_mindustry_gen_Call_commandUnits__forward_mindustry_net_NetConnection_mindustry_gen_Player_Array1_int_mindustry_gen_Building_mindustry_gen_Unit_arc_math_geom_Vec2_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6, jbool param7);
void SM_mindustry_gen_Call_completeObjective_int(jcontext ctx, jint param0);
void SM_mindustry_gen_Call_completeObjective_mindustry_net_NetConnection_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_Call_connect_mindustry_net_NetConnection_java_lang_String_int(jcontext ctx, jobject param0, jobject param1, jint param2);
void SM_mindustry_gen_Call_connectConfirm(jcontext ctx);
void SM_mindustry_gen_Call_constructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit_byte_mindustry_game_Team_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jbyte param3, jobject param4, jobject param5);
void SM_mindustry_gen_Call_copyToClipboard_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_copyToClipboard_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_createBullet_mindustry_entities_bullet_BulletType_mindustry_game_Team_float_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
void SM_mindustry_gen_Call_createMarker_int_mindustry_game_MapObjectives$ObjectiveMarker(jcontext ctx, jint param0, jobject param1);
void SM_mindustry_gen_Call_createMarker_mindustry_net_NetConnection_int_mindustry_game_MapObjectives$ObjectiveMarker(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_mindustry_gen_Call_createWeather_mindustry_type_Weather_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_gen_Call_debugStatusClient_int_int(jcontext ctx, jint param0, jint param1);
void SM_mindustry_gen_Call_debugStatusClient_mindustry_net_NetConnection_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_mindustry_gen_Call_debugStatusClientUnreliable_int_int(jcontext ctx, jint param0, jint param1);
void SM_mindustry_gen_Call_debugStatusClientUnreliable_mindustry_net_NetConnection_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_mindustry_gen_Call_deconstructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_deletePlans_mindustry_gen_Player_Array1_int(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_deletePlans__forward_mindustry_net_NetConnection_mindustry_gen_Player_Array1_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_destroyPayload_mindustry_gen_Building(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_dropItem_float(jcontext ctx, jfloat param0);
void SM_mindustry_gen_Call_effect_mindustry_entities_Effect_float_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_gen_Call_effect_mindustry_net_NetConnection_mindustry_entities_Effect_float_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5);
void SM_mindustry_gen_Call_effect_mindustry_entities_Effect_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5);
void SM_mindustry_gen_Call_effect_mindustry_net_NetConnection_mindustry_entities_Effect_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jobject param6);
void SM_mindustry_gen_Call_effectReliable_mindustry_entities_Effect_float_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_gen_Call_effectReliable_mindustry_net_NetConnection_mindustry_entities_Effect_float_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5);
void SM_mindustry_gen_Call_entitySnapshot_short_Array1_byte(jcontext ctx, jshort param0, jobject param1);
void SM_mindustry_gen_Call_entitySnapshot_mindustry_net_NetConnection_short_Array1_byte(jcontext ctx, jobject param0, jshort param1, jobject param2);
void SM_mindustry_gen_Call_fillTileBlocks_int_int_int_int_mindustry_world_Block_mindustry_game_Team(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5);
void SM_mindustry_gen_Call_fillTileFloors_int_int_int_int_mindustry_world_Block(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4);
void SM_mindustry_gen_Call_fillTileOverlays_int_int_int_int_mindustry_world_Block(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4);
void SM_mindustry_gen_Call_followUpMenu_int_java_lang_String_java_lang_String_Array2_java_lang_String(jcontext ctx, jint param0, jobject param1, jobject param2, jobject param3);
void SM_mindustry_gen_Call_followUpMenu_mindustry_net_NetConnection_int_java_lang_String_java_lang_String_Array2_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jobject param4);
void SM_mindustry_gen_Call_gameOver_mindustry_game_Team(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_hiddenSnapshot_mindustry_net_NetConnection_arc_struct_IntSeq(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_hideFollowUpMenu_int(jcontext ctx, jint param0);
void SM_mindustry_gen_Call_hideFollowUpMenu_mindustry_net_NetConnection_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_Call_hideHudText(jcontext ctx);
void SM_mindustry_gen_Call_hideHudText_mindustry_net_NetConnection(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_hideMenuBuilder_int(jcontext ctx, jint param0);
void SM_mindustry_gen_Call_hideMenuBuilder_mindustry_net_NetConnection_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_Call_infoMessage_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_infoMessage_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_infoPopup_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jfloat param1, jint param2, jint param3, jint param4, jint param5, jint param6);
void SM_mindustry_gen_Call_infoPopup_mindustry_net_NetConnection_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jint param3, jint param4, jint param5, jint param6, jint param7);
void SM_mindustry_gen_Call_infoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jint param3, jint param4, jint param5, jint param6, jint param7);
void SM_mindustry_gen_Call_infoPopup_mindustry_net_NetConnection_java_lang_String_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jint param4, jint param5, jint param6, jint param7, jint param8);
void SM_mindustry_gen_Call_infoPopupReliable_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jfloat param1, jint param2, jint param3, jint param4, jint param5, jint param6);
void SM_mindustry_gen_Call_infoPopupReliable_mindustry_net_NetConnection_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jint param3, jint param4, jint param5, jint param6, jint param7);
void SM_mindustry_gen_Call_infoPopupReliable_java_lang_String_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jint param3, jint param4, jint param5, jint param6, jint param7);
void SM_mindustry_gen_Call_infoPopupReliable_mindustry_net_NetConnection_java_lang_String_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jint param4, jint param5, jint param6, jint param7, jint param8);
void SM_mindustry_gen_Call_infoToast_java_lang_String_float(jcontext ctx, jobject param0, jfloat param1);
void SM_mindustry_gen_Call_infoToast_mindustry_net_NetConnection_java_lang_String_float(jcontext ctx, jobject param0, jobject param1, jfloat param2);
void SM_mindustry_gen_Call_kick_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_kick_mindustry_net_NetConnection_mindustry_net_Packets$KickReason(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_label_java_lang_String_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_gen_Call_label_mindustry_net_NetConnection_java_lang_String_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_gen_Call_label_java_lang_String_int_float_float_float(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_gen_Call_label_mindustry_net_NetConnection_java_lang_String_int_float_float_float(jcontext ctx, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jfloat param5);
void SM_mindustry_gen_Call_label_java_lang_String_int_float_float_float_int(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jint param5);
void SM_mindustry_gen_Call_label_mindustry_net_NetConnection_java_lang_String_int_float_float_float_int(jcontext ctx, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jint param6);
void SM_mindustry_gen_Call_labelReliable_java_lang_String_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_gen_Call_labelReliable_mindustry_net_NetConnection_java_lang_String_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_gen_Call_labelReliable_java_lang_String_int_float_float_float(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_gen_Call_labelReliable_mindustry_net_NetConnection_java_lang_String_int_float_float_float(jcontext ctx, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jfloat param5);
void SM_mindustry_gen_Call_labelReliable_java_lang_String_int_float_float_float_int(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jint param5);
void SM_mindustry_gen_Call_labelReliable_mindustry_net_NetConnection_java_lang_String_int_float_float_float_int(jcontext ctx, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jint param6);
void SM_mindustry_gen_Call_landingPadLanded_mindustry_world_Tile(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_logicExplosion_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jbool param5, jbool param6, jbool param7, jbool param8);
void SM_mindustry_gen_Call_menu_int_java_lang_String_java_lang_String_Array2_java_lang_String(jcontext ctx, jint param0, jobject param1, jobject param2, jobject param3);
void SM_mindustry_gen_Call_menu_mindustry_net_NetConnection_int_java_lang_String_java_lang_String_Array2_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jobject param4);
void SM_mindustry_gen_Call_menuBuilder_int_long_java_lang_String_boolean_boolean_boolean_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jint param0, jlong param1, jobject param2, jbool param3, jbool param4, jbool param5, jobject param6);
void SM_mindustry_gen_Call_menuBuilder_mindustry_net_NetConnection_int_long_java_lang_String_boolean_boolean_boolean_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject param0, jint param1, jlong param2, jobject param3, jbool param4, jbool param5, jbool param6, jobject param7);
void SM_mindustry_gen_Call_menuBuilderChoose_mindustry_gen_Player_int_mindustry_ui_builder_MenuResult(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_mindustry_gen_Call_menuBuilderUpdate_int_java_lang_String_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jint param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_menuBuilderUpdate_mindustry_net_NetConnection_int_java_lang_String_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3);
void SM_mindustry_gen_Call_menuChoose_mindustry_gen_Player_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_mindustry_gen_Call_openURI_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_openURI_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_payloadDropped_mindustry_gen_Unit_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
void SM_mindustry_gen_Call_pickedBuildPayload_mindustry_gen_Unit_mindustry_gen_Building_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2);
void SM_mindustry_gen_Call_pickedUnitPayload_mindustry_gen_Unit_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_ping_long(jcontext ctx, jlong param0);
void SM_mindustry_gen_Call_pingLocation_mindustry_gen_Player_float_float_java_lang_String(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_gen_Call_pingLocation__forward_mindustry_net_NetConnection_mindustry_gen_Player_float_float_java_lang_String(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_gen_Call_pingResponse_mindustry_net_NetConnection_long(jcontext ctx, jobject param0, jlong param1);
void SM_mindustry_gen_Call_playMusic_java_lang_String_boolean(jcontext ctx, jobject param0, jbool param1);
void SM_mindustry_gen_Call_playMusic_mindustry_net_NetConnection_java_lang_String_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2);
void SM_mindustry_gen_Call_playerDisconnect_int(jcontext ctx, jint param0);
void SM_mindustry_gen_Call_playerSpawn_mindustry_world_Tile_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_removeMarker_int(jcontext ctx, jint param0);
void SM_mindustry_gen_Call_removeMarker_mindustry_net_NetConnection_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_Call_removeQueueBlock_mindustry_net_NetConnection_int_int_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3);
void SM_mindustry_gen_Call_removeTile_mindustry_world_Tile(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_removeWorldLabel_int(jcontext ctx, jint param0);
void SM_mindustry_gen_Call_removeWorldLabel_mindustry_net_NetConnection_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_Call_requestAssets_Array1_short(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_requestBlockSnapshot_int(jcontext ctx, jint param0);
void SM_mindustry_gen_Call_requestBuildPayload_mindustry_gen_Player_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_requestDebugStatus(jcontext ctx);
void SM_mindustry_gen_Call_requestDropPayload_mindustry_gen_Player_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
void SM_mindustry_gen_Call_requestItem_mindustry_gen_Player_mindustry_gen_Building_mindustry_type_Item_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3);
void SM_mindustry_gen_Call_requestItem__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_gen_Building_mindustry_type_Item_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
void SM_mindustry_gen_Call_requestUnitPayload_mindustry_gen_Player_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_requestWorld(jcontext ctx);
void SM_mindustry_gen_Call_researched_mindustry_ctype_Content(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_rotateBlock_mindustry_gen_Player_mindustry_gen_Building_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2);
void SM_mindustry_gen_Call_rotateBlock__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_gen_Building_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3);
void SM_mindustry_gen_Call_sectorCapture(jcontext ctx);
void SM_mindustry_gen_Call_sendChatMessage_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_sendMessage_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_sendMessage_java_lang_String_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_sendMessage_mindustry_net_NetConnection_java_lang_String_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
void SM_mindustry_gen_Call_serverBinaryPacketReliable_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_serverBinaryPacketUnreliable_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_serverPacketReliable_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_serverPacketUnreliable_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_setCameraPosition_float_float(jcontext ctx, jfloat param0, jfloat param1);
void SM_mindustry_gen_Call_setCameraPosition_mindustry_net_NetConnection_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
void SM_mindustry_gen_Call_setFlag_java_lang_String_boolean(jcontext ctx, jobject param0, jbool param1);
void SM_mindustry_gen_Call_setFloor_mindustry_world_Tile_mindustry_world_Block_mindustry_world_Block(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_setHudText_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_setHudText_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_setHudTextReliable_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_setHudTextReliable_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_setItem_mindustry_gen_Building_mindustry_type_Item_int(jcontext ctx, jobject param0, jobject param1, jint param2);
void SM_mindustry_gen_Call_setItems_mindustry_gen_Building_Array1_mindustry_type_ItemStack(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_setLiquid_mindustry_gen_Building_mindustry_type_Liquid_float(jcontext ctx, jobject param0, jobject param1, jfloat param2);
void SM_mindustry_gen_Call_setLiquids_mindustry_gen_Building_Array1_mindustry_type_LiquidStack(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_setMapArea_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_mindustry_gen_Call_setObjectives_mindustry_game_MapObjectives(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_setObjectives_mindustry_net_NetConnection_mindustry_game_MapObjectives(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_setOverlay_mindustry_world_Tile_mindustry_world_Block(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_setPlayerTeamEditor_mindustry_gen_Player_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_setPlayerTeamEditor__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_setPosition_mindustry_net_NetConnection_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
void SM_mindustry_gen_Call_setRule_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_setRule_mindustry_net_NetConnection_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_setRules_mindustry_game_Rules(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_setRules_mindustry_net_NetConnection_mindustry_game_Rules(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_setTeam_mindustry_gen_Building_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_setTeams_Array1_int_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_setTile_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3);
void SM_mindustry_gen_Call_setTileBlocks_mindustry_world_Block_mindustry_game_Team_Array1_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_setTileFloors_mindustry_world_Block_Array1_int(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_setTileItems_mindustry_type_Item_int_Array1_int(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_mindustry_gen_Call_setTileLiquids_mindustry_type_Liquid_float_Array1_int(jcontext ctx, jobject param0, jfloat param1, jobject param2);
void SM_mindustry_gen_Call_setTileOverlays_mindustry_world_Block_Array1_int(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_setUnitCommand_mindustry_gen_Player_Array1_int_mindustry_ai_UnitCommand(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_setUnitCommand__forward_mindustry_net_NetConnection_mindustry_gen_Player_Array1_int_mindustry_ai_UnitCommand(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
void SM_mindustry_gen_Call_setUnitStance_mindustry_gen_Player_Array1_int_mindustry_ai_UnitStance_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3);
void SM_mindustry_gen_Call_setUnitStance__forward_mindustry_net_NetConnection_mindustry_gen_Player_Array1_int_mindustry_ai_UnitStance_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4);
void SM_mindustry_gen_Call_sound_arc_audio_Sound_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_gen_Call_sound_mindustry_net_NetConnection_arc_audio_Sound_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_gen_Call_soundAt_arc_audio_Sound_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_gen_Call_soundAt_mindustry_net_NetConnection_arc_audio_Sound_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void SM_mindustry_gen_Call_spawnEffect_float_float_float_mindustry_type_UnitType(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_gen_Call_stateSnapshot_float_int_int_boolean_boolean_int_byte_long_long_Array1_byte(jcontext ctx, jfloat param0, jint param1, jint param2, jbool param3, jbool param4, jint param5, jbyte param6, jlong param7, jlong param8, jobject param9);
void SM_mindustry_gen_Call_syncVariable_mindustry_gen_Building_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_mindustry_gen_Call_takeItems_mindustry_gen_Building_mindustry_type_Item_int_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3);
void SM_mindustry_gen_Call_textInput_int_java_lang_String_java_lang_String_int_java_lang_String_boolean(jcontext ctx, jint param0, jobject param1, jobject param2, jint param3, jobject param4, jbool param5);
void SM_mindustry_gen_Call_textInput_mindustry_net_NetConnection_int_java_lang_String_java_lang_String_int_java_lang_String_boolean(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jint param4, jobject param5, jbool param6);
void SM_mindustry_gen_Call_textInput_int_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean(jcontext ctx, jint param0, jobject param1, jobject param2, jint param3, jobject param4, jbool param5, jbool param6);
void SM_mindustry_gen_Call_textInput_mindustry_net_NetConnection_int_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jint param4, jobject param5, jbool param6, jbool param7);
void SM_mindustry_gen_Call_textInputResult_mindustry_gen_Player_int_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_mindustry_gen_Call_tileConfig_mindustry_gen_Player_mindustry_gen_Building_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_tileConfig__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_gen_Building_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
void SM_mindustry_gen_Call_tileTap_mindustry_gen_Player_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_traceInfo_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_net_Administration$TraceInfo(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_transferInventory_mindustry_gen_Player_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_transferInventory__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_transferItemEffect_mindustry_type_Item_float_float_mindustry_gen_Itemsc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_gen_Call_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jobject param5);
void SM_mindustry_gen_Call_transferItemToUnit_mindustry_type_Item_float_float_mindustry_gen_Itemsc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_gen_Call_unitBlockSpawn_mindustry_world_Tile(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_unitBuildingControlSelect_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_unitCapDeath_mindustry_gen_Unit(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_unitClear_mindustry_gen_Player(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_unitClear__forward_mindustry_net_NetConnection_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_unitControl_mindustry_gen_Player_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_unitControl__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_gen_Call_unitDeath_int(jcontext ctx, jint param0);
void SM_mindustry_gen_Call_unitDespawn_mindustry_gen_Unit(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_unitDestroy_int(jcontext ctx, jint param0);
void SM_mindustry_gen_Call_unitEnteredPayload_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_gen_Call_unitEnvDeath_mindustry_gen_Unit(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_unitSafeDeath_mindustry_gen_Unit(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_unitSpawn_mindustry_entities_Units$UnitSyncContainer(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_unitTetherBlockSpawned_mindustry_world_Tile_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_gen_Call_updateGameOver_mindustry_game_Team(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_updateMarker_int_mindustry_logic_LMarkerControl_double_double_double(jcontext ctx, jint param0, jobject param1, jdouble param2, jdouble param3, jdouble param4);
void SM_mindustry_gen_Call_updateMarker_mindustry_net_NetConnection_int_mindustry_logic_LMarkerControl_double_double_double(jcontext ctx, jobject param0, jint param1, jobject param2, jdouble param3, jdouble param4, jdouble param5);
void SM_mindustry_gen_Call_updateMarkerText_int_mindustry_logic_LMarkerControl_boolean_java_lang_String(jcontext ctx, jint param0, jobject param1, jbool param2, jobject param3);
void SM_mindustry_gen_Call_updateMarkerText_mindustry_net_NetConnection_int_mindustry_logic_LMarkerControl_boolean_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2, jbool param3, jobject param4);
void SM_mindustry_gen_Call_updateMarkerTexture_int_java_lang_Object(jcontext ctx, jint param0, jobject param1);
void SM_mindustry_gen_Call_updateMarkerTexture_mindustry_net_NetConnection_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_mindustry_gen_Call_warningToast_int_java_lang_String(jcontext ctx, jint param0, jobject param1);
void SM_mindustry_gen_Call_warningToast_mindustry_net_NetConnection_int_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_mindustry_gen_Call_worldDataBegin(jcontext ctx);
void SM_mindustry_gen_Call_worldDataBegin_mindustry_net_NetConnection(jcontext ctx, jobject param0);
void SM_mindustry_gen_Call_registerPackets(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
