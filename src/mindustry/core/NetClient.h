#ifndef HEADER_mindustry_core_NetClient
#define HEADER_mindustry_core_NetClient

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/ApplicationListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_NetClient {
	java_lang_Object parent;
	jlong F_ping;
	jbool F_connecting;
	jbool F_quiet;
	jbool F_quietReset;
	jfloat F_timeoutTime;
	jlong F_lastSnapshotTimestamp;
	jint F_lastSent;
	jref F_removed;
	jref F_byteStream;
	jref F_dataStream;
	jref F_dataStreamReads;
	jref F_customPacketHandlers;
	jref F_customBinaryPacketHandlers;
} mindustry_core_NetClient;

extern Class class_mindustry_core_NetClient;

extern jlong SF_mindustry_core_NetClient_entitySnapshotTimeout;
extern jfloat SF_mindustry_core_NetClient_dataTimeout;
extern jobject SF_mindustry_core_NetClient_playerSyncTime;
extern jobject SF_mindustry_core_NetClient_planSyncTime;
extern jobject SF_mindustry_core_NetClient_pingTime;
extern jobject SF_mindustry_core_NetClient_dataReads;
extern jobject SF_mindustry_core_NetClient_tmpJsonMap;
extern jobject SF_mindustry_core_NetClient_plansOut;

#define VTABLE_mindustry_core_NetClient_hashCode_R_int 0
typedef jint (*func_mindustry_core_NetClient_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_core_NetClient_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetClient_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_core_NetClient_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_core_NetClient_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_core_NetClient_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_finalize 5
typedef void (*func_mindustry_core_NetClient_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_notify 6
typedef void (*func_mindustry_core_NetClient_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_notifyAll 7
typedef void (*func_mindustry_core_NetClient_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_wait 8
typedef void (*func_mindustry_core_NetClient_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_wait_long 9
typedef void (*func_mindustry_core_NetClient_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_NetClient_wait_long_int 10
typedef void (*func_mindustry_core_NetClient_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_core_NetClient_init 11
typedef void (*func_mindustry_core_NetClient_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_resize_int_int 12
typedef void (*func_mindustry_core_NetClient_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_NetClient_update 13
typedef void (*func_mindustry_core_NetClient_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_pause 14
typedef void (*func_mindustry_core_NetClient_pause)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_resume 15
typedef void (*func_mindustry_core_NetClient_resume)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_dispose 16
typedef void (*func_mindustry_core_NetClient_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_exit 17
typedef void (*func_mindustry_core_NetClient_exit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_fileDropped_arc_files_Fi 18
typedef void (*func_mindustry_core_NetClient_fileDropped_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetClient_addPacketHandler_java_lang_String_arc_func_Cons 19
typedef void (*func_mindustry_core_NetClient_addPacketHandler_java_lang_String_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_NetClient_getPacketHandlers_java_lang_String_R_arc_struct_Seq 20
typedef jobject (*func_mindustry_core_NetClient_getPacketHandlers_java_lang_String_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetClient_addBinaryPacketHandler_java_lang_String_arc_func_Cons 21
typedef void (*func_mindustry_core_NetClient_addBinaryPacketHandler_java_lang_String_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_NetClient_getBinaryPacketHandlers_java_lang_String_R_arc_struct_Seq 22
typedef jobject (*func_mindustry_core_NetClient_getBinaryPacketHandlers_java_lang_String_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetClient_resetTimeout 23
typedef void (*func_mindustry_core_NetClient_resetTimeout)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_isConnecting_R_boolean 24
typedef jbool (*func_mindustry_core_NetClient_isConnecting_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_getPing_R_int 25
typedef jint (*func_mindustry_core_NetClient_getPing_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_finishConnecting 26
typedef void (*func_mindustry_core_NetClient_finishConnecting)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_reset 27
typedef void (*func_mindustry_core_NetClient_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_beginConnecting 28
typedef void (*func_mindustry_core_NetClient_beginConnecting)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_disconnectQuietly 29
typedef void (*func_mindustry_core_NetClient_disconnectQuietly)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_disconnectNoReset 30
typedef void (*func_mindustry_core_NetClient_disconnectNoReset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_setQuiet 31
typedef void (*func_mindustry_core_NetClient_setQuiet)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_clearRemovedEntity_int 32
typedef void (*func_mindustry_core_NetClient_clearRemovedEntity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_core_NetClient_addRemovedEntity_int 33
typedef void (*func_mindustry_core_NetClient_addRemovedEntity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_core_NetClient_isEntityUsed_int_R_boolean 34
typedef jbool (*func_mindustry_core_NetClient_isEntityUsed_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_core_NetClient_sync 35
typedef void (*func_mindustry_core_NetClient_sync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_NetClient_getUsid_java_lang_String_R_java_lang_String 36
typedef jobject (*func_mindustry_core_NetClient_getUsid_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetClient_lambda$new$6_mindustry_net_Packets$StreamBegin 37
typedef void (*func_mindustry_core_NetClient_lambda$new$6_mindustry_net_Packets$StreamBegin)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetClient_lambda$new$7_mindustry_net_Packets$StreamBegin 38
typedef void (*func_mindustry_core_NetClient_lambda$new$7_mindustry_net_Packets$StreamBegin)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetClient_lambda$new$8_java_lang_Exception 39
typedef void (*func_mindustry_core_NetClient_lambda$new$8_java_lang_Exception)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetClient_lambda$new$3_mindustry_net_Packets$WorldStream 40
typedef void (*func_mindustry_core_NetClient_lambda$new$3_mindustry_net_Packets$WorldStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetClient_lambda$new$2_mindustry_net_Packets$Disconnect 41
typedef void (*func_mindustry_core_NetClient_lambda$new$2_mindustry_net_Packets$Disconnect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetClient_lambda$new$0_mindustry_net_Packets$Connect 42
typedef void (*func_mindustry_core_NetClient_lambda$new$0_mindustry_net_Packets$Connect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_NetClient_lambda$new$1 43
typedef void (*func_mindustry_core_NetClient_lambda$new$1)(jcontext ctx, jobject self);

void mark_mindustry_core_NetClient(jobject object, jint mark, jint depth);
void clinit_mindustry_core_NetClient(jcontext ctx);
void init_mindustry_core_NetClient(jcontext ctx, jobject self);
void M_mindustry_core_NetClient_addPacketHandler_java_lang_String_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_core_NetClient_getPacketHandlers_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetClient_addBinaryPacketHandler_java_lang_String_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_core_NetClient_getBinaryPacketHandlers_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_core_NetClient_clientBinaryPacketReliable_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_NetClient_clientBinaryPacketUnreliable_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_NetClient_clientPacketReliable_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_NetClient_clientPacketUnreliable_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_NetClient_playMusic_java_lang_String_boolean(jcontext ctx, jobject param0, jbool param1);
void SM_mindustry_core_NetClient_sound_arc_audio_Sound_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_core_NetClient_soundAt_arc_audio_Sound_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_core_NetClient_effect_mindustry_entities_Effect_float_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_core_NetClient_effect_mindustry_entities_Effect_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5);
void SM_mindustry_core_NetClient_effectReliable_mindustry_entities_Effect_float_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_core_NetClient_sendMessage_java_lang_String_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_core_NetClient_sendMessage_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_core_NetClient_sendChatMessage_mindustry_gen_Player_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_NetClient_connect_java_lang_String_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_core_NetClient_ping_mindustry_gen_Player_long(jcontext ctx, jobject param0, jlong param1);
void SM_mindustry_core_NetClient_pingResponse_long(jcontext ctx, jlong param0);
void SM_mindustry_core_NetClient_traceInfo_mindustry_gen_Player_mindustry_net_Administration$TraceInfo(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_NetClient_kick_mindustry_net_Packets$KickReason(jcontext ctx, jobject param0);
void SM_mindustry_core_NetClient_kick_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_core_NetClient_setRules_mindustry_game_Rules(jcontext ctx, jobject param0);
void SM_mindustry_core_NetClient_setRule_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_NetClient_setObjectives_mindustry_game_MapObjectives(jcontext ctx, jobject param0);
void SM_mindustry_core_NetClient_clearObjectives(jcontext ctx);
void SM_mindustry_core_NetClient_completeObjective_int(jcontext ctx, jint param0);
void SM_mindustry_core_NetClient_worldDataBegin(jcontext ctx);
void SM_mindustry_core_NetClient_setPosition_float_float(jcontext ctx, jfloat param0, jfloat param1);
void SM_mindustry_core_NetClient_setCameraPosition_float_float(jcontext ctx, jfloat param0, jfloat param1);
void SM_mindustry_core_NetClient_playerDisconnect_int(jcontext ctx, jint param0);
void SM_mindustry_core_NetClient_readSyncEntity_java_io_DataInputStream_arc_util_io_Reads(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_NetClient_entitySnapshot_short_Array1_byte(jcontext ctx, jshort param0, jobject param1);
void SM_mindustry_core_NetClient_hiddenSnapshot_arc_struct_IntSeq(jcontext ctx, jobject param0);
void SM_mindustry_core_NetClient_blockSnapshot_short_Array1_byte(jcontext ctx, jshort param0, jobject param1);
void SM_mindustry_core_NetClient_stateSnapshot_float_int_int_boolean_boolean_int_byte_long_long_Array1_byte(jcontext ctx, jfloat param0, jint param1, jint param2, jbool param3, jbool param4, jint param5, jbyte param6, jlong param7, jlong param8, jobject param9);
void M_mindustry_core_NetClient_update(jcontext ctx, jobject self);
void M_mindustry_core_NetClient_resetTimeout(jcontext ctx, jobject self);
jbool M_mindustry_core_NetClient_isConnecting_R_boolean(jcontext ctx, jobject self);
jint M_mindustry_core_NetClient_getPing_R_int(jcontext ctx, jobject self);
void M_mindustry_core_NetClient_finishConnecting(jcontext ctx, jobject self);
void M_mindustry_core_NetClient_reset(jcontext ctx, jobject self);
void M_mindustry_core_NetClient_beginConnecting(jcontext ctx, jobject self);
void M_mindustry_core_NetClient_disconnectQuietly(jcontext ctx, jobject self);
void M_mindustry_core_NetClient_disconnectNoReset(jcontext ctx, jobject self);
void M_mindustry_core_NetClient_setQuiet(jcontext ctx, jobject self);
void M_mindustry_core_NetClient_clearRemovedEntity_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_core_NetClient_addRemovedEntity_int(jcontext ctx, jobject self, jint param0);
jbool M_mindustry_core_NetClient_isEntityUsed_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_mindustry_core_NetClient_sync(jcontext ctx, jobject self);
jobject M_mindustry_core_NetClient_getUsid_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_core_NetClient_lambda$worldDataBegin$0(jcontext ctx);
void M_mindustry_core_NetClient_lambda$new$6_mindustry_net_Packets$StreamBegin(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetClient_lambda$new$7_mindustry_net_Packets$StreamBegin(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetClient_lambda$new$8_java_lang_Exception(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_core_NetClient_lambda$new$5_mindustry_net_Packets$TextureStream(jcontext ctx, jobject param0);
void SM_mindustry_core_NetClient_lambda$new$4_mindustry_net_Packets$AssetRequirementStream(jcontext ctx, jobject param0);
void M_mindustry_core_NetClient_lambda$new$3_mindustry_net_Packets$WorldStream(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetClient_lambda$new$2_mindustry_net_Packets$Disconnect(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetClient_lambda$new$0_mindustry_net_Packets$Connect(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_NetClient_lambda$new$1(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
