#ifndef HEADER_java_net_InetAddressImplFactory
#define HEADER_java_net_InetAddressImplFactory

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_InetAddressImplFactory {
	java_lang_Object parent;
} java_net_InetAddressImplFactory;

extern Class class_java_net_InetAddressImplFactory;


#define VTABLE_java_net_InetAddressImplFactory_hashCode_R_int 0
typedef jint (*func_java_net_InetAddressImplFactory_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddressImplFactory_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_InetAddressImplFactory_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_InetAddressImplFactory_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_InetAddressImplFactory_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddressImplFactory_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_InetAddressImplFactory_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddressImplFactory_toString_R_java_lang_String 4
typedef jobject (*func_java_net_InetAddressImplFactory_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddressImplFactory_finalize 5
typedef void (*func_java_net_InetAddressImplFactory_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddressImplFactory_notify 6
typedef void (*func_java_net_InetAddressImplFactory_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddressImplFactory_notifyAll 7
typedef void (*func_java_net_InetAddressImplFactory_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddressImplFactory_wait 8
typedef void (*func_java_net_InetAddressImplFactory_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddressImplFactory_wait_long 9
typedef void (*func_java_net_InetAddressImplFactory_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_InetAddressImplFactory_wait_long_int 10
typedef void (*func_java_net_InetAddressImplFactory_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_net_InetAddressImplFactory(jobject object, jint mark, jint depth);
void clinit_java_net_InetAddressImplFactory(jcontext ctx);
void init_java_net_InetAddressImplFactory(jcontext ctx, jobject self);
jobject SM_java_net_InetAddressImplFactory_create_R_java_net_InetAddressImpl(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
