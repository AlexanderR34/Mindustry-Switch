#ifndef HEADER_mindustry_net_NetConnection
#define HEADER_mindustry_net_NetConnection

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_NetConnection {
	java_lang_Object parent;
	jref F_address;
	jref F_uuid;
	jref F_usid;
	jbool F_mobile;
	jbool F_modclient;
	jref F_player;
	jbool F_kicked;
	jlong F_connectTime;
	jint F_lastReceivedClientSnapshot;
	jlong F_lastReceivedClientTime;
	jref F_rejectedRequests;
	jref F_chatRate;
	jref F_packetRate;
	jref F_localEntities;
	jbool F_hasConnected;
	jbool F_hasBegunConnecting;
	jbool F_determiningAssets;
	jbool F_receivingAssets;
	jbool F_hasDisconnected;
	jfloat F_viewWidth;
	jfloat F_viewHeight;
	jfloat F_viewX;
	jfloat F_viewY;
} mindustry_net_NetConnection;

extern Class class_mindustry_net_NetConnection;


#define VTABLE_mindustry_net_NetConnection_hashCode_R_int 0
typedef jint (*func_mindustry_net_NetConnection_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetConnection_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_NetConnection_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_NetConnection_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_NetConnection_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetConnection_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_NetConnection_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetConnection_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_NetConnection_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetConnection_finalize 5
typedef void (*func_mindustry_net_NetConnection_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetConnection_notify 6
typedef void (*func_mindustry_net_NetConnection_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetConnection_notifyAll 7
typedef void (*func_mindustry_net_NetConnection_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetConnection_wait 8
typedef void (*func_mindustry_net_NetConnection_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetConnection_wait_long 9
typedef void (*func_mindustry_net_NetConnection_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_NetConnection_wait_long_int 10
typedef void (*func_mindustry_net_NetConnection_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_NetConnection_kick 11
typedef void (*func_mindustry_net_NetConnection_kick)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason 12
typedef void (*func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason_long 13
typedef void (*func_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_mindustry_net_NetConnection_kick_java_lang_String 14
typedef void (*func_mindustry_net_NetConnection_kick_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_NetConnection_kick_java_lang_String_long 15
typedef void (*func_mindustry_net_NetConnection_kick_java_lang_String_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_mindustry_net_NetConnection_kick_java_lang_String_mindustry_net_Packets$KickReason_long 16
typedef void (*func_mindustry_net_NetConnection_kick_java_lang_String_mindustry_net_Packets$KickReason_long)(jcontext ctx, jobject self, jobject param0, jobject param1, jlong param2);
#define VTABLE_mindustry_net_NetConnection_kickDisconnect 17
typedef void (*func_mindustry_net_NetConnection_kickDisconnect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetConnection_isConnected_R_boolean 18
typedef jbool (*func_mindustry_net_NetConnection_isConnected_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream 19
typedef void (*func_mindustry_net_NetConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable_java_io_ByteArrayOutputStream 20
typedef void (*func_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable_java_io_ByteArrayOutputStream)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable 21
typedef void (*func_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_NetConnection_blacklist 22
typedef void (*func_mindustry_net_NetConnection_blacklist)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean 23
typedef void (*func_mindustry_net_NetConnection_send_java_lang_Object_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_net_NetConnection_close 24
typedef void (*func_mindustry_net_NetConnection_close)(jcontext ctx, jobject self);

void mark_mindustry_net_NetConnection(jobject object, jint mark, jint depth);
void clinit_mindustry_net_NetConnection(jcontext ctx);
void init_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_NetConnection_kick(jcontext ctx, jobject self);
void M_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_NetConnection_kick_mindustry_net_Packets$KickReason_long(jcontext ctx, jobject self, jobject param0, jlong param1);
void M_mindustry_net_NetConnection_kick_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_NetConnection_kick_java_lang_String_long(jcontext ctx, jobject self, jobject param0, jlong param1);
void M_mindustry_net_NetConnection_kick_java_lang_String_mindustry_net_Packets$KickReason_long(jcontext ctx, jobject self, jobject param0, jobject param1, jlong param2);
void M_mindustry_net_NetConnection_kickDisconnect(jcontext ctx, jobject self);
jbool M_mindustry_net_NetConnection_isConnected_R_boolean(jcontext ctx, jobject self);
void M_mindustry_net_NetConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable_java_io_ByteArrayOutputStream(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_net_NetConnection_sendStream_mindustry_net_Streamable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_NetConnection_blacklist(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
