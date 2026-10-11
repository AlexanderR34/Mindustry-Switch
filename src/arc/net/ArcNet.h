#ifndef HEADER_arc_net_ArcNet
#define HEADER_arc_net_ArcNet

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_ArcNet {
	java_lang_Object parent;
} arc_net_ArcNet;

extern Class class_arc_net_ArcNet;

extern jobject SF_arc_net_ArcNet_errorHandler;

#define VTABLE_arc_net_ArcNet_hashCode_R_int 0
typedef jint (*func_arc_net_ArcNet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_ArcNet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_ArcNet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_ArcNet_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_ArcNet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_ArcNet_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_ArcNet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_ArcNet_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_ArcNet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_ArcNet_finalize 5
typedef void (*func_arc_net_ArcNet_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_ArcNet_notify 6
typedef void (*func_arc_net_ArcNet_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_ArcNet_notifyAll 7
typedef void (*func_arc_net_ArcNet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_ArcNet_wait 8
typedef void (*func_arc_net_ArcNet_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_ArcNet_wait_long 9
typedef void (*func_arc_net_ArcNet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_ArcNet_wait_long_int 10
typedef void (*func_arc_net_ArcNet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_net_ArcNet(jobject object, jint mark, jint depth);
void clinit_arc_net_ArcNet(jcontext ctx);
void init_arc_net_ArcNet(jcontext ctx, jobject self);
void SM_arc_net_ArcNet_handleError_java_lang_Throwable(jcontext ctx, jobject param0);
void SM_arc_net_ArcNet_lambda$static$0_java_lang_Throwable(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
