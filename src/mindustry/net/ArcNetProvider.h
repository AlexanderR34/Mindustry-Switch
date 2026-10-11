#ifndef HEADER_mindustry_net_ArcNetProvider
#define HEADER_mindustry_net_ArcNetProvider

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/net/Net_NetProvider.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_ArcNetProvider {
	java_lang_Object parent;
	jref F_client;
	jref F_packetSupplier;
	jref F_server;
	jref F_connections;
	jref F_serverThread;
	volatile jint F_playerLimitCache;
	volatile jint F_packetSpamLimit;
	jref F_clientUdpErrorRate;
} mindustry_net_ArcNetProvider;

extern Class class_mindustry_net_ArcNetProvider;

extern jint SF_mindustry_net_ArcNetProvider_clientReadBufferSize;
extern jobject SF_mindustry_net_ArcNetProvider_decompressor;
extern jobject SF_mindustry_net_ArcNetProvider_compressor;
extern jobject SF_mindustry_net_ArcNetProvider_writeConnections;

#define VTABLE_mindustry_net_ArcNetProvider_hashCode_R_int 0
typedef jint (*func_mindustry_net_ArcNetProvider_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_ArcNetProvider_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_ArcNetProvider_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_ArcNetProvider_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_ArcNetProvider_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider_finalize 5
typedef void (*func_mindustry_net_ArcNetProvider_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider_notify 6
typedef void (*func_mindustry_net_ArcNetProvider_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider_notifyAll 7
typedef void (*func_mindustry_net_ArcNetProvider_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider_wait 8
typedef void (*func_mindustry_net_ArcNetProvider_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider_wait_long 9
typedef void (*func_mindustry_net_ArcNetProvider_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_ArcNetProvider_wait_long_int 10
typedef void (*func_mindustry_net_ArcNetProvider_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_ArcNetProvider_sendAllServer_java_lang_Object_java_lang_Iterable_boolean 11
typedef void (*func_mindustry_net_ArcNetProvider_sendAllServer_java_lang_Object_java_lang_Iterable_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_mindustry_net_ArcNetProvider_sendAllServer_java_lang_Object_boolean 12
typedef void (*func_mindustry_net_ArcNetProvider_sendAllServer_java_lang_Object_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_net_ArcNetProvider_sendExceptServer_mindustry_net_NetConnection_java_lang_Object_boolean 13
typedef void (*func_mindustry_net_ArcNetProvider_sendExceptServer_mindustry_net_NetConnection_java_lang_Object_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_mindustry_net_ArcNetProvider_connectClient_java_lang_String_int_java_lang_Runnable 14
typedef void (*func_mindustry_net_ArcNetProvider_connectClient_java_lang_String_int_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_mindustry_net_ArcNetProvider_sendClient_java_lang_Object_boolean 15
typedef void (*func_mindustry_net_ArcNetProvider_sendClient_java_lang_Object_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_net_ArcNetProvider_disconnectClient 16
typedef void (*func_mindustry_net_ArcNetProvider_disconnectClient)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider_discoverServers_arc_func_Cons_java_lang_Runnable 17
typedef void (*func_mindustry_net_ArcNetProvider_discoverServers_arc_func_Cons_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_net_ArcNetProvider_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons 18
typedef void (*func_mindustry_net_ArcNetProvider_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
#define VTABLE_mindustry_net_ArcNetProvider_hostServer_int 19
typedef void (*func_mindustry_net_ArcNetProvider_hostServer_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_net_ArcNetProvider_getConnections_R_java_lang_Iterable 20
typedef jobject (*func_mindustry_net_ArcNetProvider_getConnections_R_java_lang_Iterable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider_closeServer 21
typedef void (*func_mindustry_net_ArcNetProvider_closeServer)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider_dispose 22
typedef void (*func_mindustry_net_ArcNetProvider_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider_setConnectFilter_arc_net_Server$ServerConnectFilter 23
typedef void (*func_mindustry_net_ArcNetProvider_setConnectFilter_arc_net_Server$ServerConnectFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider_getConnectFilter_R_arc_net_Server$ServerConnectFilter 24
typedef jobject (*func_mindustry_net_ArcNetProvider_getConnectFilter_R_arc_net_Server$ServerConnectFilter)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider_pingHostImpl_java_lang_String_int_R_mindustry_net_Host 25
typedef jobject (*func_mindustry_net_ArcNetProvider_pingHostImpl_java_lang_String_int_R_mindustry_net_Host)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_net_ArcNetProvider_lambda$hostServer$0 26
typedef void (*func_mindustry_net_ArcNetProvider_lambda$hostServer$0)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider_lambda$connectClient$0_java_lang_String_int_java_lang_Runnable 27
typedef void (*func_mindustry_net_ArcNetProvider_lambda$connectClient$0_java_lang_String_int_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_mindustry_net_ArcNetProvider_lambda$connectClient$1 28
typedef void (*func_mindustry_net_ArcNetProvider_lambda$connectClient$1)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider_lambda$new$2 29
typedef void (*func_mindustry_net_ArcNetProvider_lambda$new$2)(jcontext ctx, jobject self);

void mark_mindustry_net_ArcNetProvider(jobject object, jint mark, jint depth);
void clinit_mindustry_net_ArcNetProvider(jcontext ctx);
void init_mindustry_net_ArcNetProvider(jcontext ctx, jobject self);
void M_mindustry_net_ArcNetProvider_setConnectFilter_arc_net_Server$ServerConnectFilter(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_net_ArcNetProvider_getConnectFilter_R_arc_net_Server$ServerConnectFilter(jcontext ctx, jobject self);
jbool SM_mindustry_net_ArcNetProvider_isLocal_java_net_InetAddress_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_net_ArcNetProvider_connectClient_java_lang_String_int_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
void M_mindustry_net_ArcNetProvider_disconnectClient(jcontext ctx, jobject self);
void M_mindustry_net_ArcNetProvider_sendClient_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_net_ArcNetProvider_pingHost_java_lang_String_int_arc_func_Cons_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
jobject M_mindustry_net_ArcNetProvider_pingHostImpl_java_lang_String_int_R_mindustry_net_Host(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_net_ArcNetProvider_discoverServers_arc_func_Cons_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_net_ArcNetProvider_dispose(jcontext ctx, jobject self);
jobject M_mindustry_net_ArcNetProvider_getConnections_R_java_lang_Iterable(jcontext ctx, jobject self);
void M_mindustry_net_ArcNetProvider_sendAllServer_java_lang_Object_java_lang_Iterable_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_mindustry_net_ArcNetProvider_sendAllServer_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_net_ArcNetProvider_sendExceptServer_mindustry_net_NetConnection_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_mindustry_net_ArcNetProvider_hostServer_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_net_ArcNetProvider_closeServer(jcontext ctx, jobject self);
void M_mindustry_net_ArcNetProvider_lambda$hostServer$0(jcontext ctx, jobject self);
void SM_mindustry_net_ArcNetProvider_lambda$discoverServers$3_java_lang_Runnable(jcontext ctx, jobject param0);
void SM_mindustry_net_ArcNetProvider_lambda$discoverServers$0_arc_struct_Seq_long_arc_func_Cons_java_net_DatagramPacket(jcontext ctx, jobject param0, jlong param1, jobject param2, jobject param3);
void SM_mindustry_net_ArcNetProvider_lambda$discoverServers$2_arc_func_Cons_mindustry_net_Host(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_net_ArcNetProvider_lambda$discoverServers$1_java_net_DatagramPacket_java_net_InetAddress_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_net_ArcNetProvider_lambda$pingHost$2_arc_func_Cons_java_io_IOException(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_net_ArcNetProvider_lambda$pingHost$1_arc_func_Cons_mindustry_net_Host(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_net_ArcNetProvider_lambda$pingHost$0_arc_func_Cons_mindustry_net_Host(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_net_ArcNetProvider_lambda$connectClient$0_java_lang_String_int_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
void M_mindustry_net_ArcNetProvider_lambda$connectClient$1(jcontext ctx, jobject self);
void SM_mindustry_net_ArcNetProvider_lambda$new$3_java_net_InetAddress_arc_net_ServerDiscoveryHandler$ReponseHandler(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_net_ArcNetProvider_lambda$new$2(jcontext ctx, jobject self);
void SM_mindustry_net_ArcNetProvider_lambda$new$1_java_lang_Throwable(jcontext ctx, jobject param0);
jobject SM_mindustry_net_ArcNetProvider_lambda$new$0_R_java_net_DatagramPacket(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
