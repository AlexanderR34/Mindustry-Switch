#ifndef HEADER_mindustry_net_Net
#define HEADER_mindustry_net_Net

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Net {
	java_lang_Object parent;
	jbool F_server;
	jbool F_active;
	jbool F_clientLoaded;
	jref F_currentStream;
	jref F_packetQueue;
	jref F_clientListeners;
	jref F_serverListeners;
	jref F_streams;
	jref F_pingExecutor;
	jref F_provider;
} mindustry_net_Net;

extern Class class_mindustry_net_Net;

extern jint SF_mindustry_net_Net_packetIdAssetStream;
extern jint SF_mindustry_net_Net_packetIdWorldStream;
extern jint SF_mindustry_net_Net_packetIdTextureStream;
extern jobject SF_mindustry_net_Net_packetProvs;
extern jobject SF_mindustry_net_Net_packetClasses;
extern jobject SF_mindustry_net_Net_packetToId;

#define VTABLE_mindustry_net_Net_hashCode_R_int 0
typedef jint (*func_mindustry_net_Net_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_Net_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Net_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_Net_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_Net_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_Net_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_finalize 5
typedef void (*func_mindustry_net_Net_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_notify 6
typedef void (*func_mindustry_net_Net_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_notifyAll 7
typedef void (*func_mindustry_net_Net_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_wait 8
typedef void (*func_mindustry_net_Net_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_wait_long 9
typedef void (*func_mindustry_net_Net_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_Net_wait_long_int 10
typedef void (*func_mindustry_net_Net_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_Net_handleException_java_lang_Throwable 11
typedef void (*func_mindustry_net_Net_handleException_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Net_showError_java_lang_Throwable 12
typedef void (*func_mindustry_net_Net_showError_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Net_setClientLoaded_boolean 13
typedef void (*func_mindustry_net_Net_setClientLoaded_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_net_Net_setClientConnected 14
typedef void (*func_mindustry_net_Net_setClientConnected)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_connect_java_lang_String_int_java_lang_Runnable 15
typedef void (*func_mindustry_net_Net_connect_java_lang_String_int_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_mindustry_net_Net_host_int 16
typedef void (*func_mindustry_net_Net_host_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_net_Net_closeServer 17
typedef void (*func_mindustry_net_Net_closeServer)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_reset 18
typedef void (*func_mindustry_net_Net_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_disconnect 19
typedef void (*func_mindustry_net_Net_disconnect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_discoverServers_arc_func_Cons_java_lang_Runnable 20
typedef void (*func_mindustry_net_Net_discoverServers_arc_func_Cons_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_net_Net_getConnections_R_java_lang_Iterable 21
typedef jobject (*func_mindustry_net_Net_getConnections_R_java_lang_Iterable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_send_java_lang_Object_boolean 22
typedef void (*func_mindustry_net_Net_send_java_lang_Object_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_net_Net_send_java_lang_Object_java_lang_Iterable_boolean 23
typedef void (*func_mindustry_net_Net_send_java_lang_Object_java_lang_Iterable_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_mindustry_net_Net_sendExcept_mindustry_net_NetConnection_java_lang_Object_boolean 24
typedef void (*func_mindustry_net_Net_sendExcept_mindustry_net_NetConnection_java_lang_Object_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_mindustry_net_Net_getCurrentStream_R_mindustry_net_Streamable$StreamBuilder 25
typedef jobject (*func_mindustry_net_Net_getCurrentStream_R_mindustry_net_Streamable$StreamBuilder)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons 26
typedef void (*func_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_net_Net_handleServer_java_lang_Class_arc_func_Cons2 27
typedef void (*func_mindustry_net_Net_handleServer_java_lang_Class_arc_func_Cons2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_net_Net_handleClientReceived_mindustry_net_Packet 28
typedef void (*func_mindustry_net_Net_handleClientReceived_mindustry_net_Packet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Net_handleServerReceived_mindustry_net_NetConnection_mindustry_net_Packet 29
typedef void (*func_mindustry_net_Net_handleServerReceived_mindustry_net_NetConnection_mindustry_net_Packet)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_net_Net_setConnectFilter_arc_net_Server$ServerConnectFilter 30
typedef void (*func_mindustry_net_Net_setConnectFilter_arc_net_Server$ServerConnectFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Net_getConnectFilter_R_arc_net_Server$ServerConnectFilter 31
typedef jobject (*func_mindustry_net_Net_getConnectFilter_R_arc_net_Server$ServerConnectFilter)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons 32
typedef void (*func_mindustry_net_Net_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
#define VTABLE_mindustry_net_Net_active_R_boolean 33
typedef jbool (*func_mindustry_net_Net_active_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_server_R_boolean 34
typedef jbool (*func_mindustry_net_Net_server_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_client_R_boolean 35
typedef jbool (*func_mindustry_net_Net_client_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_dispose 36
typedef void (*func_mindustry_net_Net_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Net_lambda$pingHost$0_java_lang_String_int_arc_func_Cons_arc_func_Cons 37
typedef void (*func_mindustry_net_Net_lambda$pingHost$0_java_lang_String_int_arc_func_Cons_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
#define VTABLE_mindustry_net_Net_lambda$handleException$2_java_lang_Throwable 38
typedef void (*func_mindustry_net_Net_lambda$handleException$2_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Net_lambda$handleException$1_java_lang_Throwable 39
typedef void (*func_mindustry_net_Net_lambda$handleException$1_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Net_lambda$handleException$0_java_lang_Throwable 40
typedef void (*func_mindustry_net_Net_lambda$handleException$0_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_net_Net(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Net(jcontext ctx);
jint SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(jcontext ctx, jobject param0);
jbyte SM_mindustry_net_Net_getPacketClassId_java_lang_Class_R_byte(jcontext ctx, jobject param0);
jbyte SM_mindustry_net_Net_getPacketId_mindustry_net_Packet_R_byte(jcontext ctx, jobject param0);
jobject SM_mindustry_net_Net_newPacket_byte_R_mindustry_net_Packet(jcontext ctx, jbyte param0);
void init_mindustry_net_Net_mindustry_net_Net$NetProvider(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_Net_handleException_java_lang_Throwable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_Net_showError_java_lang_Throwable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_Net_setClientLoaded_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_net_Net_setClientConnected(jcontext ctx, jobject self);
void M_mindustry_net_Net_connect_java_lang_String_int_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
void M_mindustry_net_Net_host_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_net_Net_closeServer(jcontext ctx, jobject self);
void M_mindustry_net_Net_reset(jcontext ctx, jobject self);
void M_mindustry_net_Net_disconnect(jcontext ctx, jobject self);
void M_mindustry_net_Net_discoverServers_arc_func_Cons_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_net_Net_getConnections_R_java_lang_Iterable(jcontext ctx, jobject self);
void M_mindustry_net_Net_send_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_net_Net_send_java_lang_Object_java_lang_Iterable_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_mindustry_net_Net_sendExcept_mindustry_net_NetConnection_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
jobject M_mindustry_net_Net_getCurrentStream_R_mindustry_net_Streamable$StreamBuilder(jcontext ctx, jobject self);
void M_mindustry_net_Net_handleClient_java_lang_Class_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_net_Net_handleServer_java_lang_Class_arc_func_Cons2(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_net_Net_handleClientReceived_mindustry_net_Packet(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_Net_handleServerReceived_mindustry_net_NetConnection_mindustry_net_Packet(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_net_Net_setConnectFilter_arc_net_Server$ServerConnectFilter(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_net_Net_getConnectFilter_R_arc_net_Server$ServerConnectFilter(jcontext ctx, jobject self);
void M_mindustry_net_Net_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
jbool M_mindustry_net_Net_active_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_net_Net_server_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_net_Net_client_R_boolean(jcontext ctx, jobject self);
void M_mindustry_net_Net_dispose(jcontext ctx, jobject self);
void M_mindustry_net_Net_lambda$pingHost$0_java_lang_String_int_arc_func_Cons_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
void M_mindustry_net_Net_lambda$handleException$2_java_lang_Throwable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_Net_lambda$handleException$1_java_lang_Throwable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_Net_lambda$handleException$0_java_lang_Throwable(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
