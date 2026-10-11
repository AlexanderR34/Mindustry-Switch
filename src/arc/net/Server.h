#ifndef HEADER_arc_net_Server
#define HEADER_arc_net_Server

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/net/EndPoint.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_Server {
	java_lang_Object parent;
	jref F_serializer;
	jint F_writeBufferSize;
	jint F_objectBufferSize;
	jref F_selector;
	jint F_emptySelects;
	jref F_serverChannel;
	jref F_udp;
	jref F_connections;
	jref F_udpAddressToConnection;
	jref F_pendingConnections;
	jref F_listeners;
	jref F_listenerLock;
	volatile jbool F_shutdown;
	jref F_updateLock;
	jref F_updateThread;
	jint F_multicastPort;
	jref F_multicastGroup;
	jref F_discoveryReceiver;
	jref F_discoveryHandler;
	jref F_connectFilter;
	jref F_bulkWriteBuffer;
	jref F_bulkWriteLock;
	jref F_dispatchListener;
} arc_net_Server;

extern Class class_arc_net_Server;


#define VTABLE_arc_net_Server_hashCode_R_int 0
typedef jint (*func_arc_net_Server_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_Server_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Server_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_Server_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_Server_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_Server_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_finalize 5
typedef void (*func_arc_net_Server_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_notify 6
typedef void (*func_arc_net_Server_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_notifyAll 7
typedef void (*func_arc_net_Server_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_wait 8
typedef void (*func_arc_net_Server_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_wait_long 9
typedef void (*func_arc_net_Server_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_Server_wait_long_int 10
typedef void (*func_arc_net_Server_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_net_Server_run 11
typedef void (*func_arc_net_Server_run)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_addListener_arc_net_NetListener 12
typedef void (*func_arc_net_Server_addListener_arc_net_NetListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Server_removeListener_arc_net_NetListener 13
typedef void (*func_arc_net_Server_removeListener_arc_net_NetListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Server_start 14
typedef void (*func_arc_net_Server_start)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_stop 15
typedef void (*func_arc_net_Server_stop)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_close 16
typedef void (*func_arc_net_Server_close)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_update_int 17
typedef void (*func_arc_net_Server_update_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_net_Server_getUpdateThread_R_java_lang_Thread 18
typedef jobject (*func_arc_net_Server_getUpdateThread_R_java_lang_Thread)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_setMulticast_java_lang_String_int 19
typedef void (*func_arc_net_Server_setMulticast_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_net_Server_setDiscoveryHandler_arc_net_ServerDiscoveryHandler 20
typedef void (*func_arc_net_Server_setDiscoveryHandler_arc_net_ServerDiscoveryHandler)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Server_setConnectFilter_arc_net_Server$ServerConnectFilter 21
typedef void (*func_arc_net_Server_setConnectFilter_arc_net_Server$ServerConnectFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Server_getConnectFilter_R_arc_net_Server$ServerConnectFilter 22
typedef jobject (*func_arc_net_Server_getConnectFilter_R_arc_net_Server$ServerConnectFilter)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_bind_int 23
typedef void (*func_arc_net_Server_bind_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_net_Server_bind_int_int 24
typedef void (*func_arc_net_Server_bind_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_net_Server_bind_java_net_InetSocketAddress_java_net_InetSocketAddress 25
typedef void (*func_arc_net_Server_bind_java_net_InetSocketAddress_java_net_InetSocketAddress)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_Server_acceptOperation_java_nio_channels_SocketChannel 26
typedef void (*func_arc_net_Server_acceptOperation_java_nio_channels_SocketChannel)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Server_generateId_R_int 27
typedef jint (*func_arc_net_Server_generateId_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_newConnection_R_arc_net_Connection 28
typedef jobject (*func_arc_net_Server_newConnection_R_arc_net_Connection)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_addConnection_arc_net_Connection 29
typedef void (*func_arc_net_Server_addConnection_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Server_removeConnection_arc_net_Connection 30
typedef void (*func_arc_net_Server_removeConnection_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Server_sendToAllTCP_java_lang_Object 31
typedef void (*func_arc_net_Server_sendToAllTCP_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Server_sendToAllExceptTCP_int_java_lang_Object 32
typedef void (*func_arc_net_Server_sendToAllExceptTCP_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_net_Server_sendToAllTCP_java_lang_Object_java_lang_Iterable 33
typedef void (*func_arc_net_Server_sendToAllTCP_java_lang_Object_java_lang_Iterable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_Server_sendToAllUDP_java_lang_Object 34
typedef void (*func_arc_net_Server_sendToAllUDP_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Server_sendToAllExceptUDP_int_java_lang_Object 35
typedef void (*func_arc_net_Server_sendToAllExceptUDP_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_net_Server_sendToAllUDP_java_lang_Object_java_lang_Iterable 36
typedef void (*func_arc_net_Server_sendToAllUDP_java_lang_Object_java_lang_Iterable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_Server_serializeTCP_java_lang_Object_R_java_nio_ByteBuffer 37
typedef jobject (*func_arc_net_Server_serializeTCP_java_lang_Object_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Server_serializeUDP_java_lang_Object_R_java_nio_ByteBuffer 38
typedef jobject (*func_arc_net_Server_serializeUDP_java_lang_Object_R_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Server_dispose 39
typedef void (*func_arc_net_Server_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server_getConnections_R_Array1_arc_net_Connection 40
typedef jobject (*func_arc_net_Server_getConnections_R_Array1_arc_net_Connection)(jcontext ctx, jobject self);

void mark_arc_net_Server(jobject object, jint mark, jint depth);
void clinit_arc_net_Server(jcontext ctx);
void init_arc_net_Server_int_int_arc_net_NetSerializer(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_net_Server_setMulticast_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_arc_net_Server_setDiscoveryHandler_arc_net_ServerDiscoveryHandler(jcontext ctx, jobject self, jobject param0);
void M_arc_net_Server_setConnectFilter_arc_net_Server$ServerConnectFilter(jcontext ctx, jobject self, jobject param0);
jobject M_arc_net_Server_getConnectFilter_R_arc_net_Server$ServerConnectFilter(jcontext ctx, jobject self);
void M_arc_net_Server_bind_int(jcontext ctx, jobject self, jint param0);
void M_arc_net_Server_bind_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_net_Server_bind_java_net_InetSocketAddress_java_net_InetSocketAddress(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_net_Server_update_int(jcontext ctx, jobject self, jint param0);
void M_arc_net_Server_run(jcontext ctx, jobject self);
void M_arc_net_Server_start(jcontext ctx, jobject self);
void M_arc_net_Server_stop(jcontext ctx, jobject self);
void M_arc_net_Server_acceptOperation_java_nio_channels_SocketChannel(jcontext ctx, jobject self, jobject param0);
jint M_arc_net_Server_generateId_R_int(jcontext ctx, jobject self);
jobject M_arc_net_Server_newConnection_R_arc_net_Connection(jcontext ctx, jobject self);
void M_arc_net_Server_addConnection_arc_net_Connection(jcontext ctx, jobject self, jobject param0);
void M_arc_net_Server_removeConnection_arc_net_Connection(jcontext ctx, jobject self, jobject param0);
void M_arc_net_Server_sendToAllTCP_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_arc_net_Server_sendToAllExceptTCP_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_net_Server_sendToAllTCP_java_lang_Object_java_lang_Iterable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_net_Server_sendToAllUDP_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_arc_net_Server_sendToAllExceptUDP_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_net_Server_sendToAllUDP_java_lang_Object_java_lang_Iterable(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_net_Server_serializeTCP_java_lang_Object_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_arc_net_Server_serializeUDP_java_lang_Object_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
void M_arc_net_Server_addListener_arc_net_NetListener(jcontext ctx, jobject self, jobject param0);
void M_arc_net_Server_removeListener_arc_net_NetListener(jcontext ctx, jobject self, jobject param0);
void M_arc_net_Server_close(jcontext ctx, jobject self);
void M_arc_net_Server_dispose(jcontext ctx, jobject self);
jobject M_arc_net_Server_getUpdateThread_R_java_lang_Thread(jcontext ctx, jobject self);
jobject M_arc_net_Server_getConnections_R_Array1_arc_net_Connection(jcontext ctx, jobject self);
jbool SM_arc_net_Server_lambda$generateId$0_Array1_int_arc_net_Connection_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_arc_net_Server_lambda$update$0_arc_net_UdpConnection_java_net_InetSocketAddress_java_nio_ByteBuffer(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_arc_net_Server_lambda$new$0_java_net_InetAddress_arc_net_ServerDiscoveryHandler$ReponseHandler(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
