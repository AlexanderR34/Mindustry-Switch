#ifndef HEADER_arc_net_NetListener$LagListener
#define HEADER_arc_net_NetListener$LagListener

#include "Clearwing.h"
#include "arc/net/NetListener_QueuedListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_NetListener$LagListener {
	arc_net_NetListener$QueuedListener parent;
	jref F_threadPool;
	jint F_lagMillisMin;
	jint F_lagMillisMax;
	jref F_runnables;
} arc_net_NetListener$LagListener;

extern Class class_arc_net_NetListener$LagListener;


#define VTABLE_arc_net_NetListener$LagListener_hashCode_R_int 0
typedef jint (*func_arc_net_NetListener$LagListener_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_NetListener$LagListener_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_NetListener$LagListener_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_NetListener$LagListener_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_NetListener$LagListener_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_NetListener$LagListener_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_NetListener$LagListener_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_NetListener$LagListener_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_NetListener$LagListener_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_NetListener$LagListener_finalize 5
typedef void (*func_arc_net_NetListener$LagListener_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_NetListener$LagListener_notify 6
typedef void (*func_arc_net_NetListener$LagListener_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_NetListener$LagListener_notifyAll 7
typedef void (*func_arc_net_NetListener$LagListener_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_NetListener$LagListener_wait 8
typedef void (*func_arc_net_NetListener$LagListener_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_NetListener$LagListener_wait_long 9
typedef void (*func_arc_net_NetListener$LagListener_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_NetListener$LagListener_wait_long_int 10
typedef void (*func_arc_net_NetListener$LagListener_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_net_NetListener$LagListener_connected_arc_net_Connection 11
typedef void (*func_arc_net_NetListener$LagListener_connected_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_NetListener$LagListener_disconnected_arc_net_Connection_arc_net_DcReason 12
typedef void (*func_arc_net_NetListener$LagListener_disconnected_arc_net_Connection_arc_net_DcReason)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_NetListener$LagListener_received_arc_net_Connection_java_lang_Object 13
typedef void (*func_arc_net_NetListener$LagListener_received_arc_net_Connection_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_NetListener$LagListener_idle_arc_net_Connection 14
typedef void (*func_arc_net_NetListener$LagListener_idle_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_NetListener$LagListener_queue_java_lang_Runnable 15
typedef void (*func_arc_net_NetListener$LagListener_queue_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_NetListener$LagListener_lambda$idle$0_arc_net_Connection 16
typedef void (*func_arc_net_NetListener$LagListener_lambda$idle$0_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_NetListener$LagListener_lambda$received$0_arc_net_Connection_java_lang_Object 17
typedef void (*func_arc_net_NetListener$LagListener_lambda$received$0_arc_net_Connection_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_NetListener$LagListener_lambda$disconnected$0_arc_net_Connection_arc_net_DcReason 18
typedef void (*func_arc_net_NetListener$LagListener_lambda$disconnected$0_arc_net_Connection_arc_net_DcReason)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_NetListener$LagListener_lambda$connected$0_arc_net_Connection 19
typedef void (*func_arc_net_NetListener$LagListener_lambda$connected$0_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_NetListener$LagListener_lambda$queue$0 20
typedef void (*func_arc_net_NetListener$LagListener_lambda$queue$0)(jcontext ctx, jobject self);

void mark_arc_net_NetListener$LagListener(jobject object, jint mark, jint depth);
void clinit_arc_net_NetListener$LagListener(jcontext ctx);
void init_arc_net_NetListener$LagListener_int_int_arc_net_NetListener(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_arc_net_NetListener$LagListener_queue_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
void M_arc_net_NetListener$LagListener_lambda$queue$0(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
