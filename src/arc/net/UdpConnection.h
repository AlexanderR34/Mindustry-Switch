#ifndef HEADER_arc_net_UdpConnection
#define HEADER_arc_net_UdpConnection

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_UdpConnection {
	java_lang_Object parent;
	jref F_connectedAddress;
	jref F_datagramChannel;
	jint F_keepAliveMillis;
	jref F_readBuffer;
	jref F_writeBuffer;
	jref F_serialization;
	jref F_selectionKey;
	jref F_writeLock;
	jlong F_lastCommunicationTime;
} arc_net_UdpConnection;

extern Class class_arc_net_UdpConnection;


#define VTABLE_arc_net_UdpConnection_hashCode_R_int 0
typedef jint (*func_arc_net_UdpConnection_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_UdpConnection_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_UdpConnection_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_UdpConnection_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_UdpConnection_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_UdpConnection_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_UdpConnection_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_UdpConnection_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_UdpConnection_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_UdpConnection_finalize 5
typedef void (*func_arc_net_UdpConnection_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_UdpConnection_notify 6
typedef void (*func_arc_net_UdpConnection_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_UdpConnection_notifyAll 7
typedef void (*func_arc_net_UdpConnection_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_UdpConnection_wait 8
typedef void (*func_arc_net_UdpConnection_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_UdpConnection_wait_long 9
typedef void (*func_arc_net_UdpConnection_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_UdpConnection_wait_long_int 10
typedef void (*func_arc_net_UdpConnection_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_net_UdpConnection_bind_java_nio_channels_Selector_java_net_InetSocketAddress 11
typedef void (*func_arc_net_UdpConnection_bind_java_nio_channels_Selector_java_net_InetSocketAddress)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_UdpConnection_connect_java_nio_channels_Selector_java_net_InetSocketAddress 12
typedef void (*func_arc_net_UdpConnection_connect_java_nio_channels_Selector_java_net_InetSocketAddress)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_UdpConnection_readFromAddress_R_java_net_InetSocketAddress 13
typedef jobject (*func_arc_net_UdpConnection_readFromAddress_R_java_net_InetSocketAddress)(jcontext ctx, jobject self);
#define VTABLE_arc_net_UdpConnection_readObject_R_java_lang_Object 14
typedef jobject (*func_arc_net_UdpConnection_readObject_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_UdpConnection_send_java_lang_Object_java_net_SocketAddress_R_int 15
typedef jint (*func_arc_net_UdpConnection_send_java_lang_Object_java_net_SocketAddress_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_UdpConnection_sendBuffer_java_nio_ByteBuffer_java_net_SocketAddress_R_int 16
typedef jint (*func_arc_net_UdpConnection_sendBuffer_java_nio_ByteBuffer_java_net_SocketAddress_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_UdpConnection_close 17
typedef void (*func_arc_net_UdpConnection_close)(jcontext ctx, jobject self);
#define VTABLE_arc_net_UdpConnection_needsKeepAlive_long_R_boolean 18
typedef jbool (*func_arc_net_UdpConnection_needsKeepAlive_long_R_boolean)(jcontext ctx, jobject self, jlong param0);

void mark_arc_net_UdpConnection(jobject object, jint mark, jint depth);
void clinit_arc_net_UdpConnection(jcontext ctx);
void init_arc_net_UdpConnection_arc_net_NetSerializer_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_arc_net_UdpConnection_bind_java_nio_channels_Selector_java_net_InetSocketAddress(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_net_UdpConnection_connect_java_nio_channels_Selector_java_net_InetSocketAddress(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_net_UdpConnection_readFromAddress_R_java_net_InetSocketAddress(jcontext ctx, jobject self);
jobject M_arc_net_UdpConnection_readObject_R_java_lang_Object(jcontext ctx, jobject self);
jint M_arc_net_UdpConnection_send_java_lang_Object_java_net_SocketAddress_R_int(jcontext ctx, jobject self, jobject param0, jobject param1);
jint M_arc_net_UdpConnection_sendBuffer_java_nio_ByteBuffer_java_net_SocketAddress_R_int(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_net_UdpConnection_close(jcontext ctx, jobject self);
jbool M_arc_net_UdpConnection_needsKeepAlive_long_R_boolean(jcontext ctx, jobject self, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
