#ifndef HEADER_mindustry_net_ArcNetProvider$ArcConnection
#define HEADER_mindustry_net_ArcNetProvider$ArcConnection

#include "Clearwing.h"
#include "mindustry/net/NetConnection.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_ArcNetProvider$ArcConnection {
	mindustry_net_NetConnection parent;
	jref F_connection;
	jlong F_lastErrorTime;
	jref F_this$0;
} mindustry_net_ArcNetProvider$ArcConnection;

extern Class class_mindustry_net_ArcNetProvider$ArcConnection;


#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_hashCode_R_int 0
typedef jint (*func_mindustry_net_ArcNetProvider$ArcConnection_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_ArcNetProvider$ArcConnection_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_ArcNetProvider$ArcConnection_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_ArcNetProvider$ArcConnection_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_ArcNetProvider$ArcConnection_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_finalize 5
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_notify 6
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_notifyAll 7
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_wait 8
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_wait_long 9
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_wait_long_int 10
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_kick 11
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_kick)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_kick_mindustry_net_Packets$KickReason 12
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_kick_mindustry_net_Packets$KickReason)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_kick_mindustry_net_Packets$KickReason_long 13
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_kick_mindustry_net_Packets$KickReason_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_kick_java_lang_String 14
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_kick_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_kick_java_lang_String_long 15
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_kick_java_lang_String_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_kick_java_lang_String_mindustry_net_Packets$KickReason_long 16
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_kick_java_lang_String_mindustry_net_Packets$KickReason_long)(jcontext ctx, jobject self, jobject param0, jobject param1, jlong param2);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_kickDisconnect 17
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_kickDisconnect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_isConnected_R_boolean 18
typedef jbool (*func_mindustry_net_ArcNetProvider$ArcConnection_isConnected_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream 19
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_sendStreamAsync_mindustry_net_Streamable_java_io_ByteArrayOutputStream)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_sendStream_mindustry_net_Streamable_java_io_ByteArrayOutputStream 20
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_sendStream_mindustry_net_Streamable_java_io_ByteArrayOutputStream)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_sendStream_mindustry_net_Streamable 21
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_sendStream_mindustry_net_Streamable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_blacklist 22
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_blacklist)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_send_java_lang_Object_boolean 23
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_send_java_lang_Object_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_net_ArcNetProvider$ArcConnection_close 24
typedef void (*func_mindustry_net_ArcNetProvider$ArcConnection_close)(jcontext ctx, jobject self);

void mark_mindustry_net_ArcNetProvider$ArcConnection(jobject object, jint mark, jint depth);
void clinit_mindustry_net_ArcNetProvider$ArcConnection(jcontext ctx);
void init_mindustry_net_ArcNetProvider$ArcConnection_mindustry_net_ArcNetProvider_java_lang_String_arc_net_Connection(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jbool M_mindustry_net_ArcNetProvider$ArcConnection_isConnected_R_boolean(jcontext ctx, jobject self);
void M_mindustry_net_ArcNetProvider$ArcConnection_blacklist(jcontext ctx, jobject self);
void M_mindustry_net_ArcNetProvider$ArcConnection_sendStream_mindustry_net_Streamable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_ArcNetProvider$ArcConnection_send_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_net_ArcNetProvider$ArcConnection_close(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
