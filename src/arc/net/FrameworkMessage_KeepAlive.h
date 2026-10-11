#ifndef HEADER_arc_net_FrameworkMessage$KeepAlive
#define HEADER_arc_net_FrameworkMessage$KeepAlive

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/net/FrameworkMessage.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_FrameworkMessage$KeepAlive {
	java_lang_Object parent;
} arc_net_FrameworkMessage$KeepAlive;

extern Class class_arc_net_FrameworkMessage$KeepAlive;


#define VTABLE_arc_net_FrameworkMessage$KeepAlive_hashCode_R_int 0
typedef jint (*func_arc_net_FrameworkMessage$KeepAlive_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_FrameworkMessage$KeepAlive_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_FrameworkMessage$KeepAlive_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_FrameworkMessage$KeepAlive_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_FrameworkMessage$KeepAlive_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_FrameworkMessage$KeepAlive_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_FrameworkMessage$KeepAlive_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_FrameworkMessage$KeepAlive_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_FrameworkMessage$KeepAlive_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_FrameworkMessage$KeepAlive_finalize 5
typedef void (*func_arc_net_FrameworkMessage$KeepAlive_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_FrameworkMessage$KeepAlive_notify 6
typedef void (*func_arc_net_FrameworkMessage$KeepAlive_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_FrameworkMessage$KeepAlive_notifyAll 7
typedef void (*func_arc_net_FrameworkMessage$KeepAlive_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_FrameworkMessage$KeepAlive_wait 8
typedef void (*func_arc_net_FrameworkMessage$KeepAlive_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_FrameworkMessage$KeepAlive_wait_long 9
typedef void (*func_arc_net_FrameworkMessage$KeepAlive_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_FrameworkMessage$KeepAlive_wait_long_int 10
typedef void (*func_arc_net_FrameworkMessage$KeepAlive_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_net_FrameworkMessage$KeepAlive(jobject object, jint mark, jint depth);
void clinit_arc_net_FrameworkMessage$KeepAlive(jcontext ctx);
void init_arc_net_FrameworkMessage$KeepAlive(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
