#ifndef HEADER_arc_net_TcpIdleSender
#define HEADER_arc_net_TcpIdleSender

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/net/NetListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_TcpIdleSender {
	java_lang_Object parent;
	jbool F_started;
} arc_net_TcpIdleSender;

extern Class class_arc_net_TcpIdleSender;


#define VTABLE_arc_net_TcpIdleSender_hashCode_R_int 0
typedef jint (*func_arc_net_TcpIdleSender_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpIdleSender_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_TcpIdleSender_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_TcpIdleSender_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_TcpIdleSender_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpIdleSender_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_TcpIdleSender_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpIdleSender_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_TcpIdleSender_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpIdleSender_finalize 5
typedef void (*func_arc_net_TcpIdleSender_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpIdleSender_notify 6
typedef void (*func_arc_net_TcpIdleSender_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpIdleSender_notifyAll 7
typedef void (*func_arc_net_TcpIdleSender_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpIdleSender_wait 8
typedef void (*func_arc_net_TcpIdleSender_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpIdleSender_wait_long 9
typedef void (*func_arc_net_TcpIdleSender_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_TcpIdleSender_wait_long_int 10
typedef void (*func_arc_net_TcpIdleSender_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_net_TcpIdleSender_connected_arc_net_Connection 11
typedef void (*func_arc_net_TcpIdleSender_connected_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_TcpIdleSender_disconnected_arc_net_Connection_arc_net_DcReason 12
typedef void (*func_arc_net_TcpIdleSender_disconnected_arc_net_Connection_arc_net_DcReason)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_TcpIdleSender_received_arc_net_Connection_java_lang_Object 13
typedef void (*func_arc_net_TcpIdleSender_received_arc_net_Connection_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_TcpIdleSender_idle_arc_net_Connection 14
typedef void (*func_arc_net_TcpIdleSender_idle_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_TcpIdleSender_start 15
typedef void (*func_arc_net_TcpIdleSender_start)(jcontext ctx, jobject self);
#define VTABLE_arc_net_TcpIdleSender_next_R_java_lang_Object 16
typedef jobject (*func_arc_net_TcpIdleSender_next_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_arc_net_TcpIdleSender(jobject object, jint mark, jint depth);
void clinit_arc_net_TcpIdleSender(jcontext ctx);
void init_arc_net_TcpIdleSender(jcontext ctx, jobject self);
void M_arc_net_TcpIdleSender_idle_arc_net_Connection(jcontext ctx, jobject self, jobject param0);
void M_arc_net_TcpIdleSender_start(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
