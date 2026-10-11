#ifndef HEADER_java_net_InterfaceAddress
#define HEADER_java_net_InterfaceAddress

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_InterfaceAddress {
	java_lang_Object parent;
	jref F_address;
	jref F_broadcast;
	jshort F_maskLength;
} java_net_InterfaceAddress;

extern Class class_java_net_InterfaceAddress;


#define VTABLE_java_net_InterfaceAddress_hashCode_R_int 0
typedef jint (*func_java_net_InterfaceAddress_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_InterfaceAddress_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_InterfaceAddress_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_InterfaceAddress_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_InterfaceAddress_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_InterfaceAddress_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_InterfaceAddress_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_InterfaceAddress_toString_R_java_lang_String 4
typedef jobject (*func_java_net_InterfaceAddress_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_InterfaceAddress_finalize 5
typedef void (*func_java_net_InterfaceAddress_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_InterfaceAddress_notify 6
typedef void (*func_java_net_InterfaceAddress_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_InterfaceAddress_notifyAll 7
typedef void (*func_java_net_InterfaceAddress_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_InterfaceAddress_wait 8
typedef void (*func_java_net_InterfaceAddress_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_InterfaceAddress_wait_long 9
typedef void (*func_java_net_InterfaceAddress_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_InterfaceAddress_wait_long_int 10
typedef void (*func_java_net_InterfaceAddress_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_InterfaceAddress_getAddress_R_java_net_InetAddress 11
typedef jobject (*func_java_net_InterfaceAddress_getAddress_R_java_net_InetAddress)(jcontext ctx, jobject self);
#define VTABLE_java_net_InterfaceAddress_getBroadcast_R_java_net_InetAddress 12
typedef jobject (*func_java_net_InterfaceAddress_getBroadcast_R_java_net_InetAddress)(jcontext ctx, jobject self);
#define VTABLE_java_net_InterfaceAddress_getNetworkPrefixLength_R_short 13
typedef jshort (*func_java_net_InterfaceAddress_getNetworkPrefixLength_R_short)(jcontext ctx, jobject self);

void mark_java_net_InterfaceAddress(jobject object, jint mark, jint depth);
void clinit_java_net_InterfaceAddress(jcontext ctx);
void init_java_net_InterfaceAddress(jcontext ctx, jobject self);
jobject M_java_net_InterfaceAddress_getAddress_R_java_net_InetAddress(jcontext ctx, jobject self);
jobject M_java_net_InterfaceAddress_getBroadcast_R_java_net_InetAddress(jcontext ctx, jobject self);
jshort M_java_net_InterfaceAddress_getNetworkPrefixLength_R_short(jcontext ctx, jobject self);
jbool M_java_net_InterfaceAddress_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_net_InterfaceAddress_hashCode_R_int(jcontext ctx, jobject self);
jobject M_java_net_InterfaceAddress_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
