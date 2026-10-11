#ifndef HEADER_java_net_DefaultInterface
#define HEADER_java_net_DefaultInterface

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_DefaultInterface {
	java_lang_Object parent;
} java_net_DefaultInterface;

extern Class class_java_net_DefaultInterface;


#define VTABLE_java_net_DefaultInterface_hashCode_R_int 0
typedef jint (*func_java_net_DefaultInterface_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_DefaultInterface_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_DefaultInterface_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_DefaultInterface_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_DefaultInterface_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_DefaultInterface_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_DefaultInterface_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_DefaultInterface_toString_R_java_lang_String 4
typedef jobject (*func_java_net_DefaultInterface_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_DefaultInterface_finalize 5
typedef void (*func_java_net_DefaultInterface_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_DefaultInterface_notify 6
typedef void (*func_java_net_DefaultInterface_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_DefaultInterface_notifyAll 7
typedef void (*func_java_net_DefaultInterface_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_DefaultInterface_wait 8
typedef void (*func_java_net_DefaultInterface_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_DefaultInterface_wait_long 9
typedef void (*func_java_net_DefaultInterface_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_DefaultInterface_wait_long_int 10
typedef void (*func_java_net_DefaultInterface_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_net_DefaultInterface(jobject object, jint mark, jint depth);
void clinit_java_net_DefaultInterface(jcontext ctx);
void init_java_net_DefaultInterface(jcontext ctx, jobject self);
jobject SM_java_net_DefaultInterface_getDefault_R_java_net_NetworkInterface(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
