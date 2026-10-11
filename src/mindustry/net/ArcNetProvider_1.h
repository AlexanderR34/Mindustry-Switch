#ifndef HEADER_mindustry_net_ArcNetProvider$1
#define HEADER_mindustry_net_ArcNetProvider$1

#include "Clearwing.h"
#include "arc/net/Client.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_ArcNetProvider$1 {
	arc_net_Client parent;
	jref F_this$0;
} mindustry_net_ArcNetProvider$1;

extern Class class_mindustry_net_ArcNetProvider$1;


#define VTABLE_mindustry_net_ArcNetProvider$1_hashCode_R_int 0
typedef jint (*func_mindustry_net_ArcNetProvider$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_ArcNetProvider$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_ArcNetProvider$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_ArcNetProvider$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_ArcNetProvider$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_finalize 5
typedef void (*func_mindustry_net_ArcNetProvider$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_notify 6
typedef void (*func_mindustry_net_ArcNetProvider$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_notifyAll 7
typedef void (*func_mindustry_net_ArcNetProvider$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_wait 8
typedef void (*func_mindustry_net_ArcNetProvider$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_wait_long 9
typedef void (*func_mindustry_net_ArcNetProvider$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_wait_long_int 10
typedef void (*func_mindustry_net_ArcNetProvider$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_ArcNetProvider$1_initialize_arc_net_NetSerializer_int_int 11
typedef void (*func_mindustry_net_ArcNetProvider$1_initialize_arc_net_NetSerializer_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_mindustry_net_ArcNetProvider$1_getID_R_int 12
typedef jint (*func_mindustry_net_ArcNetProvider$1_getID_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_isConnected_R_boolean 13
typedef jbool (*func_mindustry_net_ArcNetProvider$1_isConnected_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_getLastProtocolError_R_arc_net_ArcNetException 14
typedef jobject (*func_mindustry_net_ArcNetProvider$1_getLastProtocolError_R_arc_net_ArcNetException)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_sendTCP_java_lang_Object_R_int 15
typedef jint (*func_mindustry_net_ArcNetProvider$1_sendTCP_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_sendTCPBuffer_java_nio_ByteBuffer_R_int 16
typedef jint (*func_mindustry_net_ArcNetProvider$1_sendTCPBuffer_java_nio_ByteBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_sendUDP_java_lang_Object_R_int 17
typedef jint (*func_mindustry_net_ArcNetProvider$1_sendUDP_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_sendUDPBuffer_java_nio_ByteBuffer_R_int 18
typedef jint (*func_mindustry_net_ArcNetProvider$1_sendUDPBuffer_java_nio_ByteBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_close_arc_net_DcReason 19
typedef void (*func_mindustry_net_ArcNetProvider$1_close_arc_net_DcReason)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_updateReturnTripTime 20
typedef void (*func_mindustry_net_ArcNetProvider$1_updateReturnTripTime)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_getReturnTripTime_R_int 21
typedef jint (*func_mindustry_net_ArcNetProvider$1_getReturnTripTime_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_setKeepAliveTCP_int 22
typedef void (*func_mindustry_net_ArcNetProvider$1_setKeepAliveTCP_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_setTimeout_int 23
typedef void (*func_mindustry_net_ArcNetProvider$1_setTimeout_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_addListener_arc_net_NetListener 24
typedef void (*func_mindustry_net_ArcNetProvider$1_addListener_arc_net_NetListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_removeListener_arc_net_NetListener 25
typedef void (*func_mindustry_net_ArcNetProvider$1_removeListener_arc_net_NetListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_notifyConnected 26
typedef void (*func_mindustry_net_ArcNetProvider$1_notifyConnected)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_notifyDisconnected_arc_net_DcReason 27
typedef void (*func_mindustry_net_ArcNetProvider$1_notifyDisconnected_arc_net_DcReason)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_notifyIdle 28
typedef void (*func_mindustry_net_ArcNetProvider$1_notifyIdle)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_notifyReceived_java_lang_Object 29
typedef void (*func_mindustry_net_ArcNetProvider$1_notifyReceived_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_getEndPoint_R_arc_net_EndPoint 30
typedef jobject (*func_mindustry_net_ArcNetProvider$1_getEndPoint_R_arc_net_EndPoint)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_getRemoteAddressTCP_R_java_net_InetSocketAddress 31
typedef jobject (*func_mindustry_net_ArcNetProvider$1_getRemoteAddressTCP_R_java_net_InetSocketAddress)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_getRemoteAddressUDP_R_java_net_InetSocketAddress 32
typedef jobject (*func_mindustry_net_ArcNetProvider$1_getRemoteAddressUDP_R_java_net_InetSocketAddress)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_setName_java_lang_String 33
typedef void (*func_mindustry_net_ArcNetProvider$1_setName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_getTcpWriteBufferSize_R_int 34
typedef jint (*func_mindustry_net_ArcNetProvider$1_getTcpWriteBufferSize_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_isIdle_R_boolean 35
typedef jbool (*func_mindustry_net_ArcNetProvider$1_isIdle_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_setIdleThreshold_float 36
typedef void (*func_mindustry_net_ArcNetProvider$1_setIdleThreshold_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_setConnected_boolean 37
typedef void (*func_mindustry_net_ArcNetProvider$1_setConnected_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_getArbitraryData_R_java_lang_Object 38
typedef jobject (*func_mindustry_net_ArcNetProvider$1_getArbitraryData_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_setArbitraryData_java_lang_Object 39
typedef void (*func_mindustry_net_ArcNetProvider$1_setArbitraryData_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_run 40
typedef void (*func_mindustry_net_ArcNetProvider$1_run)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_start 41
typedef void (*func_mindustry_net_ArcNetProvider$1_start)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_stop 42
typedef void (*func_mindustry_net_ArcNetProvider$1_stop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_close 43
typedef void (*func_mindustry_net_ArcNetProvider$1_close)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_update_int 44
typedef void (*func_mindustry_net_ArcNetProvider$1_update_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_getUpdateThread_R_java_lang_Thread 45
typedef jobject (*func_mindustry_net_ArcNetProvider$1_getUpdateThread_R_java_lang_Thread)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_setDiscoveryPacket_arc_func_Prov 46
typedef void (*func_mindustry_net_ArcNetProvider$1_setDiscoveryPacket_arc_func_Prov)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_connect_int_java_lang_String_int 47
typedef void (*func_mindustry_net_ArcNetProvider$1_connect_int_java_lang_String_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_mindustry_net_ArcNetProvider$1_connect_int_java_lang_String_int_int 48
typedef void (*func_mindustry_net_ArcNetProvider$1_connect_int_java_lang_String_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_net_ArcNetProvider$1_connect_int_java_net_InetAddress_int 49
typedef void (*func_mindustry_net_ArcNetProvider$1_connect_int_java_net_InetAddress_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_mindustry_net_ArcNetProvider$1_connect_int_java_net_InetAddress_int_int 50
typedef void (*func_mindustry_net_ArcNetProvider$1_connect_int_java_net_InetAddress_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_net_ArcNetProvider$1_reconnect 51
typedef void (*func_mindustry_net_ArcNetProvider$1_reconnect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_reconnect_int 52
typedef void (*func_mindustry_net_ArcNetProvider$1_reconnect_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_keepAlive 53
typedef void (*func_mindustry_net_ArcNetProvider$1_keepAlive)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_handleNetException_arc_net_ArcNetException 54
typedef void (*func_mindustry_net_ArcNetProvider$1_handleNetException_arc_net_ArcNetException)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_dispose 55
typedef void (*func_mindustry_net_ArcNetProvider$1_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_setKeepAliveUDP_int 56
typedef void (*func_mindustry_net_ArcNetProvider$1_setKeepAliveUDP_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_net_ArcNetProvider$1_getSerialization_R_arc_net_NetSerializer 57
typedef jobject (*func_mindustry_net_ArcNetProvider$1_getSerialization_R_arc_net_NetSerializer)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$1_broadcast_int_java_net_DatagramSocket 58
typedef void (*func_mindustry_net_ArcNetProvider$1_broadcast_int_java_net_DatagramSocket)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_net_ArcNetProvider$1_discoverHosts_int_java_lang_String_int_int_arc_func_Cons_java_lang_Runnable 59
typedef void (*func_mindustry_net_ArcNetProvider$1_discoverHosts_int_java_lang_String_int_int_arc_func_Cons_java_lang_Runnable)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jobject param4, jobject param5);
#define VTABLE_mindustry_net_ArcNetProvider$1_lambda$discoverHosts$1_java_lang_String_int_int_arc_func_Cons_Array1_boolean_java_lang_Runnable_R_java_lang_Object 60
typedef jobject (*func_mindustry_net_ArcNetProvider$1_lambda$discoverHosts$1_java_lang_String_int_int_arc_func_Cons_Array1_boolean_java_lang_Runnable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jobject param4, jobject param5);
#define VTABLE_mindustry_net_ArcNetProvider$1_lambda$discoverHosts$0_int_int_arc_func_Cons_Array1_boolean_java_lang_Runnable_R_java_lang_Object 61
typedef jobject (*func_mindustry_net_ArcNetProvider$1_lambda$discoverHosts$0_int_int_arc_func_Cons_Array1_boolean_java_lang_Runnable_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3, jobject param4);

void mark_mindustry_net_ArcNetProvider$1(jobject object, jint mark, jint depth);
void clinit_mindustry_net_ArcNetProvider$1(jcontext ctx);
void init_mindustry_net_ArcNetProvider$1_mindustry_net_ArcNetProvider_int_int_arc_net_NetSerializer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
void M_mindustry_net_ArcNetProvider$1_handleNetException_arc_net_ArcNetException(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
