#ifndef HEADER_arc_net_TcpConnection
#define HEADER_arc_net_TcpConnection

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_TcpConnection {
	java_lang_Object parent;
	jref F_socketChannel;
	jint F_keepAliveMillis;
	jref F_readBuffer;
	jref F_writeBuffer;
	jint F_timeoutMillis;
	jfloat F_idleThreshold;
	jref F_serialization;
	jref F_selectionKey;
	volatile jlong F_lastWriteTime;
	volatile jlong F_lastReadTime;
	jint F_currentObjectLength;
	jref F_writeLock;
} arc_net_TcpConnection;

extern Class class_arc_net_TcpConnection;


#define VTABLE_arc_net_TcpConnection_hashCode_R_int 0
typedef jint (*func_arc_net_TcpConnection_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpConnection_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_TcpConnection_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_TcpConnection_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_TcpConnection_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpConnection_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_TcpConnection_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpConnection_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_TcpConnection_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpConnection_finalize 5
typedef void (*func_arc_net_TcpConnection_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpConnection_notify 6
typedef void (*func_arc_net_TcpConnection_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpConnection_notifyAll 7
typedef void (*func_arc_net_TcpConnection_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpConnection_wait 8
typedef void (*func_arc_net_TcpConnection_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpConnection_wait_long 9
typedef void (*func_arc_net_TcpConnection_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_TcpConnection_wait_long_int 10
typedef void (*func_arc_net_TcpConnection_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_net_TcpConnection_accept_java_nio_channels_Selector_java_nio_channels_SocketChannel_R_java_nio_channels_SelectionKey 11
typedef jobject (*func_arc_net_TcpConnection_accept_java_nio_channels_Selector_java_nio_channels_SocketChannel_R_java_nio_channels_SelectionKey)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_TcpConnection_connect_java_nio_channels_Selector_java_net_SocketAddress_int 12
typedef void (*func_arc_net_TcpConnection_connect_java_nio_channels_Selector_java_net_SocketAddress_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_arc_net_TcpConnection_readObject_R_java_lang_Object 13
typedef jobject (*func_arc_net_TcpConnection_readObject_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpConnection_writeOperation 14
typedef void (*func_arc_net_TcpConnection_writeOperation)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpConnection_writeToSocket_R_boolean 15
typedef jbool (*func_arc_net_TcpConnection_writeToSocket_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpConnection_send_java_lang_Object_R_int 16
typedef jint (*func_arc_net_TcpConnection_send_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_TcpConnection_sendBuffer_java_nio_ByteBuffer_R_int 17
typedef jint (*func_arc_net_TcpConnection_sendBuffer_java_nio_ByteBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_TcpConnection_close 18
typedef void (*func_arc_net_TcpConnection_close)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpConnection_needsKeepAlive_long_R_boolean 19
typedef jbool (*func_arc_net_TcpConnection_needsKeepAlive_long_R_boolean)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_TcpConnection_isTimedOut_long_R_boolean 20
typedef jbool (*func_arc_net_TcpConnection_isTimedOut_long_R_boolean)(jcontext ctx, jobject self, jlong param0);

void mark_arc_net_TcpConnection(jobject object, jint mark, jint depth);
void clinit_arc_net_TcpConnection(jcontext ctx);
void init_arc_net_TcpConnection_arc_net_NetSerializer_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_arc_net_TcpConnection_accept_java_nio_channels_Selector_java_nio_channels_SocketChannel_R_java_nio_channels_SelectionKey(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_net_TcpConnection_connect_java_nio_channels_Selector_java_net_SocketAddress_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jobject M_arc_net_TcpConnection_readObject_R_java_lang_Object(jcontext ctx, jobject self);
void M_arc_net_TcpConnection_writeOperation(jcontext ctx, jobject self);
jbool M_arc_net_TcpConnection_writeToSocket_R_boolean(jcontext ctx, jobject self);
jint M_arc_net_TcpConnection_send_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_net_TcpConnection_sendBuffer_java_nio_ByteBuffer_R_int(jcontext ctx, jobject self, jobject param0);
void M_arc_net_TcpConnection_close(jcontext ctx, jobject self);
jbool M_arc_net_TcpConnection_needsKeepAlive_long_R_boolean(jcontext ctx, jobject self, jlong param0);
jbool M_arc_net_TcpConnection_isTimedOut_long_R_boolean(jcontext ctx, jobject self, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
