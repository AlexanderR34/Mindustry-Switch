#ifndef HEADER_mindustry_core_NetServer
#define HEADER_mindustry_core_NetServer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/ApplicationListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_NetServer {
	java_lang_Object parent;
	jref F_admins;
	jref F_clientCommands;
	jref F_assigner;
	jref F_chatFormatter;
	jref F_invalidHandler;
	jbool F_closing;
	jbool F_pvpAutoPaused;
	jref F_buildHealthChanged;
	jref F_currentlyKicking;
	jref F_writeBuffer;
	jref F_outputBuffer;
	jref F_syncStream;
	jref F_dataStream;
	jref F_dataStreamWrites;
	jref F_customPacketHandlers;
	jref F_customBinaryPacketHandlers;
	jref F_logicClientDataHandlers;
	jref F_playersToSend;
	jref F_tempConnections;
	jlong F_snapshotSyncTime;
} mindustry_core_NetServer;

extern Class class_mindustry_core_NetServer;

extern jint SF_mindustry_core_NetServer_maxSnapshotSize;
extern jobject SF_mindustry_core_NetServer_blockSyncTime;
extern jobject SF_mindustry_core_NetServer_healthSyncTime;
extern jobject SF_mindustry_core_NetServer_planPreviewSyncTime;
extern jobject SF_mindustry_core_NetServer_fbuffer;
extern jobject SF_mindustry_core_NetServer_dataWrites;
extern jobject SF_mindustry_core_NetServer_hiddenIds;
extern jobject SF_mindustry_core_NetServer_healthSeq;
extern jobject SF_mindustry_core_NetServer_vector;
extern jobject SF_mindustry_core_NetServer_plansOut;
extern jfloat SF_mindustry_core_NetServer_correctDist;
extern jint SF_mindustry_core_NetServer_kickDuration;
extern jfloat SF_mindustry_core_NetServer_voteDuration;
extern jint SF_mindustry_core_NetServer_voteCooldown;

#define VTABLE_mindustry_core_NetServer_hashCode_R_int 0
typedef jint (*func_mindustry_core_NetServer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_core_NetServer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetServer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_core_NetServer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_core_NetServer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_core_NetServer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_finalize 5
typedef void (*func_mindustry_core_NetServer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_notify 6
typedef void (*func_mindustry_core_NetServer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_notifyAll 7
typedef void (*func_mindustry_core_NetServer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_wait 8
typedef void (*func_mindustry_core_NetServer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_wait_long 9
typedef void (*func_mindustry_core_NetServer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_NetServer_wait_long_int 10
typedef void (*func_mindustry_core_NetServer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_core_NetServer_init 11
typedef void (*func_mindustry_core_NetServer_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_resize_int_int 12
typedef void (*func_mindustry_core_NetServer_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_NetServer_update 13
typedef void (*func_mindustry_core_NetServer_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_pause 14
typedef void (*func_mindustry_core_NetServer_pause)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_resume 15
typedef void (*func_mindustry_core_NetServer_resume)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_dispose 16
typedef void (*func_mindustry_core_NetServer_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_exit 17
typedef void (*func_mindustry_core_NetServer_exit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_fileDropped_arc_files_Fi 18
typedef void (*func_mindustry_core_NetServer_fileDropped_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetServer_sendWorldAndAssets_mindustry_gen_Player 19
typedef void (*func_mindustry_core_NetServer_sendWorldAndAssets_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetServer_registerCommands 20
typedef void (*func_mindustry_core_NetServer_registerCommands)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_votesRequired_R_int 21
typedef jint (*func_mindustry_core_NetServer_votesRequired_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_R_mindustry_game_Team 22
typedef jobject (*func_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_R_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team 23
typedef jobject (*func_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_NetServer_sendAssetRequirements_mindustry_gen_Player 24
typedef void (*func_mindustry_core_NetServer_sendAssetRequirements_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetServer_sendWorldData_mindustry_gen_Player 25
typedef void (*func_mindustry_core_NetServer_sendWorldData_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetServer_sendTexture_mindustry_net_NetConnection_java_lang_String_Array1_byte 26
typedef void (*func_mindustry_core_NetServer_sendTexture_mindustry_net_NetConnection_java_lang_String_Array1_byte)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_core_NetServer_sendTexture_java_lang_String_Array1_byte 27
typedef void (*func_mindustry_core_NetServer_sendTexture_java_lang_String_Array1_byte)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_NetServer_removeTexture_mindustry_net_NetConnection_java_lang_String 28
typedef void (*func_mindustry_core_NetServer_removeTexture_mindustry_net_NetConnection_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_NetServer_removeTexture_java_lang_String 29
typedef void (*func_mindustry_core_NetServer_removeTexture_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetServer_addPacketHandler_java_lang_String_arc_func_Cons2 30
typedef void (*func_mindustry_core_NetServer_addPacketHandler_java_lang_String_arc_func_Cons2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_NetServer_getPacketHandlers_java_lang_String_R_arc_struct_Seq 31
typedef jobject (*func_mindustry_core_NetServer_getPacketHandlers_java_lang_String_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetServer_addBinaryPacketHandler_java_lang_String_arc_func_Cons2 32
typedef void (*func_mindustry_core_NetServer_addBinaryPacketHandler_java_lang_String_arc_func_Cons2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_NetServer_getBinaryPacketHandlers_java_lang_String_R_arc_struct_Seq 33
typedef jobject (*func_mindustry_core_NetServer_getBinaryPacketHandlers_java_lang_String_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetServer_addLogicDataHandler_java_lang_String_arc_func_Cons2 34
typedef void (*func_mindustry_core_NetServer_addLogicDataHandler_java_lang_String_arc_func_Cons2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_NetServer_isWaitingForPlayers_R_boolean 35
typedef jbool (*func_mindustry_core_NetServer_isWaitingForPlayers_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_buildHealthUpdate_mindustry_gen_Building 36
typedef void (*func_mindustry_core_NetServer_buildHealthUpdate_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetServer_openServer 37
typedef void (*func_mindustry_core_NetServer_openServer)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_kickAll_mindustry_net_Packets$KickReason 38
typedef void (*func_mindustry_core_NetServer_kickAll_mindustry_net_Packets$KickReason)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetServer_writeBlockSnapshots 39
typedef void (*func_mindustry_core_NetServer_writeBlockSnapshots)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_writeStateSnapshot 40
typedef void (*func_mindustry_core_NetServer_writeStateSnapshot)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_writeEntitySnapshotsAll 41
typedef void (*func_mindustry_core_NetServer_writeEntitySnapshotsAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_writeEntitySnapshotsTeam_mindustry_game_Team_arc_struct_Seq 42
typedef void (*func_mindustry_core_NetServer_writeEntitySnapshotsTeam_mindustry_game_Team_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_NetServer_sendEntitySnapshots_arc_struct_Seq_short_Array1_byte 43
typedef void (*func_mindustry_core_NetServer_sendEntitySnapshots_arc_struct_Seq_short_Array1_byte)(jcontext ctx, jobject self, jobject param0, jshort param1, jobject param2);
#define VTABLE_mindustry_core_NetServer_writeCustomEntitySnapshot_mindustry_gen_Player_java_lang_Iterable 44
typedef void (*func_mindustry_core_NetServer_writeCustomEntitySnapshot_mindustry_gen_Player_java_lang_Iterable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_NetServer_writeEntity_mindustry_gen_Syncc_java_io_DataOutputStream 45
typedef void (*func_mindustry_core_NetServer_writeEntity_mindustry_gen_Syncc_java_io_DataOutputStream)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_NetServer_fixName_java_lang_String_R_java_lang_String 46
typedef jobject (*func_mindustry_core_NetServer_fixName_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetServer_checkColor_java_lang_String_R_java_lang_String 47
typedef jobject (*func_mindustry_core_NetServer_checkColor_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetServer_sync 48
typedef void (*func_mindustry_core_NetServer_sync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_lambda$update$0 49
typedef void (*func_mindustry_core_NetServer_lambda$update$0)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetServer_lambda$registerCommands$12_Array1_java_lang_String_mindustry_gen_Player 50
typedef void (*func_mindustry_core_NetServer_lambda$registerCommands$12_Array1_java_lang_String_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_NetServer_lambda$registerCommands$6_arc_struct_ObjectMap_Array1_java_lang_String_mindustry_gen_Player 51
typedef void (*func_mindustry_core_NetServer_lambda$registerCommands$6_arc_struct_ObjectMap_Array1_java_lang_String_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_core_NetServer_lambda$registerCommands$4_Array1_java_lang_String_mindustry_gen_Player 52
typedef void (*func_mindustry_core_NetServer_lambda$registerCommands$4_Array1_java_lang_String_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_NetServer_lambda$registerCommands$1_Array1_java_lang_String_mindustry_gen_Player 53
typedef void (*func_mindustry_core_NetServer_lambda$registerCommands$1_Array1_java_lang_String_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_NetServer_lambda$registerCommands$0_Array1_java_lang_String_mindustry_gen_Player 54
typedef void (*func_mindustry_core_NetServer_lambda$registerCommands$0_Array1_java_lang_String_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_NetServer_lambda$init$0_mindustry_mod_Mod 55
typedef void (*func_mindustry_core_NetServer_lambda$init$0_mindustry_mod_Mod)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetServer_lambda$new$6_mindustry_net_NetConnection_mindustry_net_Packets$ConnectPacket 56
typedef void (*func_mindustry_core_NetServer_lambda$new$6_mindustry_net_NetConnection_mindustry_net_Packets$ConnectPacket)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_NetServer_lambda$new$4_mindustry_net_NetConnection_mindustry_net_Packets$Connect 57
typedef void (*func_mindustry_core_NetServer_lambda$new$4_mindustry_net_NetConnection_mindustry_net_Packets$Connect)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_core_NetServer(jobject object, jint mark, jint depth);
void clinit_mindustry_core_NetServer(jcontext ctx);
void init_mindustry_core_NetServer(jcontext ctx, jobject self);
void M_mindustry_core_NetServer_sendWorldAndAssets_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetServer_init(jcontext ctx, jobject self);
void M_mindustry_core_NetServer_registerCommands(jcontext ctx, jobject self);
jint M_mindustry_core_NetServer_votesRequired_R_int(jcontext ctx, jobject self);
jobject M_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_R_mindustry_game_Team(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_core_NetServer_assignTeam_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_NetServer_sendAssetRequirements_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetServer_sendWorldData_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetServer_sendTexture_mindustry_net_NetConnection_java_lang_String_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_core_NetServer_sendTexture_java_lang_String_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_NetServer_removeTexture_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_NetServer_removeTexture_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetServer_addPacketHandler_java_lang_String_arc_func_Cons2(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_core_NetServer_getPacketHandlers_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetServer_addBinaryPacketHandler_java_lang_String_arc_func_Cons2(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_core_NetServer_getBinaryPacketHandlers_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetServer_addLogicDataHandler_java_lang_String_arc_func_Cons2(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_core_NetServer_onDisconnect_mindustry_gen_Player_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_NetServer_requestDebugStatus_mindustry_gen_Player(jcontext ctx, jobject param0);
void SM_mindustry_core_NetServer_debugStatusClient_int_int(jcontext ctx, jint param0, jint param1);
void SM_mindustry_core_NetServer_debugStatusClientUnreliable_int_int(jcontext ctx, jint param0, jint param1);
void SM_mindustry_core_NetServer_logClientStatus_boolean_int_int(jcontext ctx, jbool param0, jint param1, jint param2);
void SM_mindustry_core_NetServer_serverPacketReliable_mindustry_gen_Player_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_core_NetServer_serverPacketUnreliable_mindustry_gen_Player_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_core_NetServer_serverBinaryPacketReliable_mindustry_gen_Player_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_core_NetServer_serverBinaryPacketUnreliable_mindustry_gen_Player_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_core_NetServer_clientLogicDataReliable_mindustry_gen_Player_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_core_NetServer_clientLogicDataUnreliable_mindustry_gen_Player_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_mindustry_core_NetServer_invalid_float_R_boolean(jcontext ctx, jfloat param0);
void SM_mindustry_core_NetServer_syncBuilding_mindustry_gen_Building(jcontext ctx, jobject param0);
void SM_mindustry_core_NetServer_requestBlockSnapshot_mindustry_gen_Player_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_core_NetServer_clientPlanSnapshot_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_mindustry_core_NetServer_clientPlanSnapshotReceived_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_mindustry_core_NetServer_clientSnapshot_mindustry_gen_Player_int_int_boolean_float_float_float_float_float_float_float_float_mindustry_world_Tile_boolean_boolean_boolean_boolean_mindustry_world_Block_int_arc_struct_Queue_float_float_float_float(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jfloat param11, jobject param12, jbool param13, jbool param14, jbool param15, jbool param16, jobject param17, jint param18, jobject param19, jfloat param20, jfloat param21, jfloat param22, jfloat param23);
void SM_mindustry_core_NetServer_adminRequest_mindustry_gen_Player_mindustry_gen_Player_mindustry_net_Packets$AdminAction_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
void SM_mindustry_core_NetServer_requestWorld_mindustry_gen_Player(jcontext ctx, jobject param0);
void SM_mindustry_core_NetServer_requestAssets_mindustry_gen_Player_Array1_short(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_NetServer_connectConfirm_mindustry_gen_Player(jcontext ctx, jobject param0);
jbool M_mindustry_core_NetServer_isWaitingForPlayers_R_boolean(jcontext ctx, jobject self);
void M_mindustry_core_NetServer_update(jcontext ctx, jobject self);
void M_mindustry_core_NetServer_buildHealthUpdate_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetServer_openServer(jcontext ctx, jobject self);
void M_mindustry_core_NetServer_kickAll_mindustry_net_Packets$KickReason(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetServer_writeBlockSnapshots(jcontext ctx, jobject self);
void M_mindustry_core_NetServer_writeStateSnapshot(jcontext ctx, jobject self);
void M_mindustry_core_NetServer_writeEntitySnapshotsAll(jcontext ctx, jobject self);
void M_mindustry_core_NetServer_writeEntitySnapshotsTeam_mindustry_game_Team_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_NetServer_sendEntitySnapshots_arc_struct_Seq_short_Array1_byte(jcontext ctx, jobject self, jobject param0, jshort param1, jobject param2);
void M_mindustry_core_NetServer_writeCustomEntitySnapshot_mindustry_gen_Player_java_lang_Iterable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_NetServer_writeEntity_mindustry_gen_Syncc_java_io_DataOutputStream(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_core_NetServer_fixName_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_core_NetServer_checkColor_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetServer_sync(jcontext ctx, jobject self);
void SM_mindustry_core_NetServer_clientPlanSnapshotSend_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_mindustry_core_NetServer_lambda$sync$3_mindustry_gen_Player(jcontext ctx, jobject param0);
jbool SM_mindustry_core_NetServer_lambda$sync$2_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_core_NetServer_lambda$sync$1_mindustry_gen_Player(jcontext ctx, jobject param0);
jbool SM_mindustry_core_NetServer_lambda$sync$0_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_core_NetServer_lambda$writeStateSnapshot$0_mindustry_game_Teams$TeamData_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_core_NetServer_lambda$update$0(jcontext ctx, jobject self);
jbool SM_mindustry_core_NetServer_lambda$isWaitingForPlayers$0_mindustry_game_Teams$TeamData_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_NetServer_lambda$requestAssets$0_arc_struct_Seq_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_NetServer_lambda$clientSnapshot$1_mindustry_entities_units_BuildPlan_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_core_NetServer_lambda$clientSnapshot$0_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_NetServer_lambda$sendAssetRequirements$0_arc_struct_Seq_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_NetServer_lambda$registerCommands$13_Array1_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_core_NetServer_lambda$registerCommands$12_Array1_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_NetServer_lambda$registerCommands$6_arc_struct_ObjectMap_Array1_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_core_NetServer_lambda$registerCommands$11_R_arc_util_Timekeeper(jcontext ctx);
jbool SM_mindustry_core_NetServer_lambda$registerCommands$10_Array1_java_lang_String_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_core_NetServer_lambda$registerCommands$9_int_mindustry_gen_Player_R_boolean(jcontext ctx, jint param0, jobject param1);
void SM_mindustry_core_NetServer_lambda$registerCommands$8_java_lang_StringBuilder_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_core_NetServer_lambda$registerCommands$7_mindustry_gen_Player_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_core_NetServer_lambda$registerCommands$4_Array1_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_core_NetServer_lambda$registerCommands$5_java_lang_String_mindustry_gen_Player_Array1_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
void M_mindustry_core_NetServer_lambda$registerCommands$1_Array1_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_core_NetServer_lambda$registerCommands$3_java_lang_String_mindustry_gen_Player_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jbool SM_mindustry_core_NetServer_lambda$registerCommands$2_mindustry_gen_Player_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_core_NetServer_lambda$registerCommands$0_Array1_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_NetServer_lambda$init$0_mindustry_mod_Mod(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetServer_lambda$new$6_mindustry_net_NetConnection_mindustry_net_Packets$ConnectPacket(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool SM_mindustry_core_NetServer_lambda$new$8_mindustry_net_Packets$ConnectPacket_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_core_NetServer_lambda$new$7_mindustry_net_Packets$ConnectPacket_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_NetServer_lambda$new$5_mindustry_net_NetConnection_mindustry_net_Packets$Disconnect(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_core_NetServer_lambda$new$4_mindustry_net_NetConnection_mindustry_net_Packets$Connect(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_mindustry_core_NetServer_lambda$new$3_mindustry_gen_Player_arc_util_CommandHandler$CommandResponse_R_java_lang_String(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_core_NetServer_lambda$new$2_mindustry_gen_Player_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_core_NetServer_lambda$new$0_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1);
jfloat SM_mindustry_core_NetServer_lambda$new$1_java_lang_Iterable_mindustry_gen_Player_mindustry_game_Teams$TeamData_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
