#ifndef HEADER_arc_net_NetListener$ThreadedListener
#define HEADER_arc_net_NetListener$ThreadedListener

#include "Clearwing.h"
#include "arc/net/NetListener_QueuedListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_NetListener$ThreadedListener {
	arc_net_NetListener$QueuedListener parent;
	jref F_threadPool;
} arc_net_NetListener$ThreadedListener;

extern Class class_arc_net_NetListener$ThreadedListener;


#define VTABLE_arc_net_NetListener$ThreadedListener_hashCode_R_int 0
typedef jint (*func_arc_net_NetListener$ThreadedListener_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_NetListener$ThreadedListener_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_NetListener$ThreadedListener_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_NetListener$ThreadedListener_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_NetListener$ThreadedListener_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_NetListener$ThreadedListener_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_NetListener$ThreadedListener_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_NetListener$ThreadedListener_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_NetListener$ThreadedListener_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_NetListener$ThreadedListener_finalize 5
typedef void (*func_arc_net_NetListener$ThreadedListener_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_NetListener$ThreadedListener_notify 6
typedef void (*func_arc_net_NetListener$ThreadedListener_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_NetListener$ThreadedListener_notifyAll 7
typedef void (*func_arc_net_NetListener$ThreadedListener_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_NetListener$ThreadedListener_wait 8
typedef void (*func_arc_net_NetListener$ThreadedListener_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_NetListener$ThreadedListener_wait_long 9
typedef void (*func_arc_net_NetListener$ThreadedListener_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_NetListener$ThreadedListener_wait_long_int 10
typedef void (*func_arc_net_NetListener$ThreadedListener_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_net_NetListener$ThreadedListener_connected_arc_net_Connection 11
typedef void (*func_arc_net_NetListener$ThreadedListener_connected_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_NetListener$ThreadedListener_disconnected_arc_net_Connection_arc_net_DcReason 12
typedef void (*func_arc_net_NetListener$ThreadedListener_disconnected_arc_net_Connection_arc_net_DcReason)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_NetListener$ThreadedListener_received_arc_net_Connection_java_lang_Object 13
typedef void (*func_arc_net_NetListener$ThreadedListener_received_arc_net_Connection_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_NetListener$ThreadedListener_idle_arc_net_Connection 14
typedef void (*func_arc_net_NetListener$ThreadedListener_idle_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_NetListener$ThreadedListener_queue_java_lang_Runnable 15
typedef void (*func_arc_net_NetListener$ThreadedListener_queue_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_NetListener$ThreadedListener_lambda$idle$0_arc_net_Connection 16
typedef void (*func_arc_net_NetListener$ThreadedListener_lambda$idle$0_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_NetListener$ThreadedListener_lambda$received$0_arc_net_Connection_java_lang_Object 17
typedef void (*func_arc_net_NetListener$ThreadedListener_lambda$received$0_arc_net_Connection_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_NetListener$ThreadedListener_lambda$disconnected$0_arc_net_Connection_arc_net_DcReason 18
typedef void (*func_arc_net_NetListener$ThreadedListener_lambda$disconnected$0_arc_net_Connection_arc_net_DcReason)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_NetListener$ThreadedListener_lambda$connected$0_arc_net_Connection 19
typedef void (*func_arc_net_NetListener$ThreadedListener_lambda$connected$0_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);

void mark_arc_net_NetListener$ThreadedListener(jobject object, jint mark, jint depth);
void clinit_arc_net_NetListener$ThreadedListener(jcontext ctx);
void init_arc_net_NetListener$ThreadedListener_arc_net_NetListener(jcontext ctx, jobject self, jobject param0);
void init_arc_net_NetListener$ThreadedListener_arc_net_NetListener_java_util_concurrent_ExecutorService(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_net_NetListener$ThreadedListener_queue_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
