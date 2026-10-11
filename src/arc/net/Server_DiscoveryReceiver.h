#ifndef HEADER_arc_net_Server$DiscoveryReceiver
#define HEADER_arc_net_Server$DiscoveryReceiver

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_Server$DiscoveryReceiver {
	java_lang_Object parent;
	jref F_socket;
	jref F_multicastThread;
	jint F_multicastPort;
	jref F_this$0;
} arc_net_Server$DiscoveryReceiver;

extern Class class_arc_net_Server$DiscoveryReceiver;


#define VTABLE_arc_net_Server$DiscoveryReceiver_hashCode_R_int 0
typedef jint (*func_arc_net_Server$DiscoveryReceiver_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server$DiscoveryReceiver_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_Server$DiscoveryReceiver_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_Server$DiscoveryReceiver_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_Server$DiscoveryReceiver_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server$DiscoveryReceiver_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_Server$DiscoveryReceiver_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server$DiscoveryReceiver_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_Server$DiscoveryReceiver_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server$DiscoveryReceiver_finalize 5
typedef void (*func_arc_net_Server$DiscoveryReceiver_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server$DiscoveryReceiver_notify 6
typedef void (*func_arc_net_Server$DiscoveryReceiver_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server$DiscoveryReceiver_notifyAll 7
typedef void (*func_arc_net_Server$DiscoveryReceiver_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server$DiscoveryReceiver_wait 8
typedef void (*func_arc_net_Server$DiscoveryReceiver_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server$DiscoveryReceiver_wait_long 9
typedef void (*func_arc_net_Server$DiscoveryReceiver_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_Server$DiscoveryReceiver_wait_long_int 10
typedef void (*func_arc_net_Server$DiscoveryReceiver_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_net_Server$DiscoveryReceiver_close 11
typedef void (*func_arc_net_Server$DiscoveryReceiver_close)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server$DiscoveryReceiver_start 12
typedef void (*func_arc_net_Server$DiscoveryReceiver_start)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server$DiscoveryReceiver_lambda$start$0 13
typedef void (*func_arc_net_Server$DiscoveryReceiver_lambda$start$0)(jcontext ctx, jobject self);
#define VTABLE_arc_net_Server$DiscoveryReceiver_lambda$start$1_java_net_DatagramPacket_java_nio_ByteBuffer 14
typedef void (*func_arc_net_Server$DiscoveryReceiver_lambda$start$1_java_net_DatagramPacket_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_net_Server$DiscoveryReceiver(jobject object, jint mark, jint depth);
void clinit_arc_net_Server$DiscoveryReceiver(jcontext ctx);
void init_arc_net_Server$DiscoveryReceiver_arc_net_Server_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_arc_net_Server$DiscoveryReceiver_close(jcontext ctx, jobject self);
void M_arc_net_Server$DiscoveryReceiver_start(jcontext ctx, jobject self);
void M_arc_net_Server$DiscoveryReceiver_lambda$start$0(jcontext ctx, jobject self);
void M_arc_net_Server$DiscoveryReceiver_lambda$start$1_java_net_DatagramPacket_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
