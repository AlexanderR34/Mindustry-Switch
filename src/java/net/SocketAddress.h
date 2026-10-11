#ifndef HEADER_java_net_SocketAddress
#define HEADER_java_net_SocketAddress

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_SocketAddress {
	java_lang_Object parent;
} java_net_SocketAddress;

extern Class class_java_net_SocketAddress;

extern jlong SF_java_net_SocketAddress_serialVersionUID;

#define VTABLE_java_net_SocketAddress_hashCode_R_int 0
typedef jint (*func_java_net_SocketAddress_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_SocketAddress_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_SocketAddress_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_SocketAddress_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_SocketAddress_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_SocketAddress_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_SocketAddress_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_SocketAddress_toString_R_java_lang_String 4
typedef jobject (*func_java_net_SocketAddress_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_SocketAddress_finalize 5
typedef void (*func_java_net_SocketAddress_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_SocketAddress_notify 6
typedef void (*func_java_net_SocketAddress_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_SocketAddress_notifyAll 7
typedef void (*func_java_net_SocketAddress_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_SocketAddress_wait 8
typedef void (*func_java_net_SocketAddress_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_SocketAddress_wait_long 9
typedef void (*func_java_net_SocketAddress_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_SocketAddress_wait_long_int 10
typedef void (*func_java_net_SocketAddress_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_net_SocketAddress(jobject object, jint mark, jint depth);
void clinit_java_net_SocketAddress(jcontext ctx);
void init_java_net_SocketAddress(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
