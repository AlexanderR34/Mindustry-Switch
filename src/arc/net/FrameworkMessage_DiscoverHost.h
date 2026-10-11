#ifndef HEADER_arc_net_FrameworkMessage$DiscoverHost
#define HEADER_arc_net_FrameworkMessage$DiscoverHost

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/net/FrameworkMessage.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_FrameworkMessage$DiscoverHost {
	java_lang_Object parent;
} arc_net_FrameworkMessage$DiscoverHost;

extern Class class_arc_net_FrameworkMessage$DiscoverHost;


#define VTABLE_arc_net_FrameworkMessage$DiscoverHost_hashCode_R_int 0
typedef jint (*func_arc_net_FrameworkMessage$DiscoverHost_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_FrameworkMessage$DiscoverHost_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_FrameworkMessage$DiscoverHost_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_FrameworkMessage$DiscoverHost_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_FrameworkMessage$DiscoverHost_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_FrameworkMessage$DiscoverHost_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_FrameworkMessage$DiscoverHost_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_FrameworkMessage$DiscoverHost_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_FrameworkMessage$DiscoverHost_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_FrameworkMessage$DiscoverHost_finalize 5
typedef void (*func_arc_net_FrameworkMessage$DiscoverHost_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_FrameworkMessage$DiscoverHost_notify 6
typedef void (*func_arc_net_FrameworkMessage$DiscoverHost_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_FrameworkMessage$DiscoverHost_notifyAll 7
typedef void (*func_arc_net_FrameworkMessage$DiscoverHost_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_FrameworkMessage$DiscoverHost_wait 8
typedef void (*func_arc_net_FrameworkMessage$DiscoverHost_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_FrameworkMessage$DiscoverHost_wait_long 9
typedef void (*func_arc_net_FrameworkMessage$DiscoverHost_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_FrameworkMessage$DiscoverHost_wait_long_int 10
typedef void (*func_arc_net_FrameworkMessage$DiscoverHost_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_net_FrameworkMessage$DiscoverHost(jobject object, jint mark, jint depth);
void clinit_arc_net_FrameworkMessage$DiscoverHost(jcontext ctx);
void init_arc_net_FrameworkMessage$DiscoverHost(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
