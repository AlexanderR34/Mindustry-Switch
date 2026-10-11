#ifndef HEADER_arc_net_Connection
#define HEADER_arc_net_Connection

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_Connection {
	java_lang_Object parent;
	jint F_id;
	jref F_name;
	jref F_endPoint;
	jref F_tcp;
	jref F_udp;
	jref F_udpRemoteAddress;
	jref F_listeners;
	jref F_listenerLock;
	jint F_lastPingID;
	jlong F_lastPingSendTime;
	jint F_returnTripTime;
	volatile jbool F_isConnected;
	volatile jref F_lastProtocolError;
	jref F_arbitraryData;
} arc_net_Connection;

extern Class class_arc_net_Connection;


#define VTABLE_arc_net_Connection_hashCode_R_int 0
typedef jint (*func_arc_net_Connection_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_Connection_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Connection_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_Connection_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_Connection_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_Connection_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_finalize 5
typedef void (*func_arc_net_Connection_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_notify 6
typedef void (*func_arc_net_Connection_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_notifyAll 7
typedef void (*func_arc_net_Connection_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_wait 8
typedef void (*func_arc_net_Connection_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_wait_long 9
typedef void (*func_arc_net_Connection_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_Connection_wait_long_int 10
typedef void (*func_arc_net_Connection_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_net_Connection_initialize_arc_net_NetSerializer_int_int 11
typedef void (*func_arc_net_Connection_initialize_arc_net_NetSerializer_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_net_Connection_getID_R_int 12
typedef jint (*func_arc_net_Connection_getID_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_isConnected_R_boolean 13
typedef jbool (*func_arc_net_Connection_isConnected_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_getLastProtocolError_R_arc_net_ArcNetException 14
typedef jobject (*func_arc_net_Connection_getLastProtocolError_R_arc_net_ArcNetException)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_sendTCP_java_lang_Object_R_int 15
typedef jint (*func_arc_net_Connection_sendTCP_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Connection_sendTCPBuffer_java_nio_ByteBuffer_R_int 16
typedef jint (*func_arc_net_Connection_sendTCPBuffer_java_nio_ByteBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Connection_sendUDP_java_lang_Object_R_int 17
typedef jint (*func_arc_net_Connection_sendUDP_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Connection_sendUDPBuffer_java_nio_ByteBuffer_R_int 18
typedef jint (*func_arc_net_Connection_sendUDPBuffer_java_nio_ByteBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Connection_close_arc_net_DcReason 19
typedef void (*func_arc_net_Connection_close_arc_net_DcReason)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Connection_updateReturnTripTime 20
typedef void (*func_arc_net_Connection_updateReturnTripTime)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_getReturnTripTime_R_int 21
typedef jint (*func_arc_net_Connection_getReturnTripTime_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_setKeepAliveTCP_int 22
typedef void (*func_arc_net_Connection_setKeepAliveTCP_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_net_Connection_setTimeout_int 23
typedef void (*func_arc_net_Connection_setTimeout_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_net_Connection_addListener_arc_net_NetListener 24
typedef void (*func_arc_net_Connection_addListener_arc_net_NetListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Connection_removeListener_arc_net_NetListener 25
typedef void (*func_arc_net_Connection_removeListener_arc_net_NetListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Connection_notifyConnected 26
typedef void (*func_arc_net_Connection_notifyConnected)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_notifyDisconnected_arc_net_DcReason 27
typedef void (*func_arc_net_Connection_notifyDisconnected_arc_net_DcReason)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Connection_notifyIdle 28
typedef void (*func_arc_net_Connection_notifyIdle)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_notifyReceived_java_lang_Object 29
typedef void (*func_arc_net_Connection_notifyReceived_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Connection_getEndPoint_R_arc_net_EndPoint 30
typedef jobject (*func_arc_net_Connection_getEndPoint_R_arc_net_EndPoint)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_getRemoteAddressTCP_R_java_net_InetSocketAddress 31
typedef jobject (*func_arc_net_Connection_getRemoteAddressTCP_R_java_net_InetSocketAddress)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_getRemoteAddressUDP_R_java_net_InetSocketAddress 32
typedef jobject (*func_arc_net_Connection_getRemoteAddressUDP_R_java_net_InetSocketAddress)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_setName_java_lang_String 33
typedef void (*func_arc_net_Connection_setName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Connection_getTcpWriteBufferSize_R_int 34
typedef jint (*func_arc_net_Connection_getTcpWriteBufferSize_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_isIdle_R_boolean 35
typedef jbool (*func_arc_net_Connection_isIdle_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_setIdleThreshold_float 36
typedef void (*func_arc_net_Connection_setIdleThreshold_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_net_Connection_setConnected_boolean 37
typedef void (*func_arc_net_Connection_setConnected_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_net_Connection_getArbitraryData_R_java_lang_Object 38
typedef jobject (*func_arc_net_Connection_getArbitraryData_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Connection_setArbitraryData_java_lang_Object 39
typedef void (*func_arc_net_Connection_setArbitraryData_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_arc_net_Connection(jobject object, jint mark, jint depth);
void clinit_arc_net_Connection(jcontext ctx);
void init_arc_net_Connection(jcontext ctx, jobject self);
void M_arc_net_Connection_initialize_arc_net_NetSerializer_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_arc_net_Connection_getID_R_int(jcontext ctx, jobject self);
jbool M_arc_net_Connection_isConnected_R_boolean(jcontext ctx, jobject self);
jobject M_arc_net_Connection_getLastProtocolError_R_arc_net_ArcNetException(jcontext ctx, jobject self);
jint M_arc_net_Connection_sendTCP_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_net_Connection_sendTCPBuffer_java_nio_ByteBuffer_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_net_Connection_sendUDP_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_net_Connection_sendUDPBuffer_java_nio_ByteBuffer_R_int(jcontext ctx, jobject self, jobject param0);
void M_arc_net_Connection_close_arc_net_DcReason(jcontext ctx, jobject self, jobject param0);
void M_arc_net_Connection_updateReturnTripTime(jcontext ctx, jobject self);
jint M_arc_net_Connection_getReturnTripTime_R_int(jcontext ctx, jobject self);
void M_arc_net_Connection_setKeepAliveTCP_int(jcontext ctx, jobject self, jint param0);
void M_arc_net_Connection_setTimeout_int(jcontext ctx, jobject self, jint param0);
void M_arc_net_Connection_addListener_arc_net_NetListener(jcontext ctx, jobject self, jobject param0);
void M_arc_net_Connection_removeListener_arc_net_NetListener(jcontext ctx, jobject self, jobject param0);
void M_arc_net_Connection_notifyConnected(jcontext ctx, jobject self);
void M_arc_net_Connection_notifyDisconnected_arc_net_DcReason(jcontext ctx, jobject self, jobject param0);
void M_arc_net_Connection_notifyIdle(jcontext ctx, jobject self);
void M_arc_net_Connection_notifyReceived_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_net_Connection_getEndPoint_R_arc_net_EndPoint(jcontext ctx, jobject self);
jobject M_arc_net_Connection_getRemoteAddressTCP_R_java_net_InetSocketAddress(jcontext ctx, jobject self);
jobject M_arc_net_Connection_getRemoteAddressUDP_R_java_net_InetSocketAddress(jcontext ctx, jobject self);
void M_arc_net_Connection_setName_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_arc_net_Connection_getTcpWriteBufferSize_R_int(jcontext ctx, jobject self);
jbool M_arc_net_Connection_isIdle_R_boolean(jcontext ctx, jobject self);
void M_arc_net_Connection_setIdleThreshold_float(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_net_Connection_toString_R_java_lang_String(jcontext ctx, jobject self);
void M_arc_net_Connection_setConnected_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_arc_net_Connection_getArbitraryData_R_java_lang_Object(jcontext ctx, jobject self);
void M_arc_net_Connection_setArbitraryData_java_lang_Object(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
