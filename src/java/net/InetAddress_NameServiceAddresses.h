#ifndef HEADER_java_net_InetAddress$NameServiceAddresses
#define HEADER_java_net_InetAddress$NameServiceAddresses

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/net/InetAddress_Addresses.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_InetAddress$NameServiceAddresses {
	java_lang_Object parent;
	jref F_host;
	jref F_reqAddr;
} java_net_InetAddress$NameServiceAddresses;

extern Class class_java_net_InetAddress$NameServiceAddresses;


#define VTABLE_java_net_InetAddress$NameServiceAddresses_hashCode_R_int 0
typedef jint (*func_java_net_InetAddress$NameServiceAddresses_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$NameServiceAddresses_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_InetAddress$NameServiceAddresses_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_InetAddress$NameServiceAddresses_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_InetAddress$NameServiceAddresses_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$NameServiceAddresses_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_InetAddress$NameServiceAddresses_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$NameServiceAddresses_toString_R_java_lang_String 4
typedef jobject (*func_java_net_InetAddress$NameServiceAddresses_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$NameServiceAddresses_finalize 5
typedef void (*func_java_net_InetAddress$NameServiceAddresses_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$NameServiceAddresses_notify 6
typedef void (*func_java_net_InetAddress$NameServiceAddresses_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$NameServiceAddresses_notifyAll 7
typedef void (*func_java_net_InetAddress$NameServiceAddresses_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$NameServiceAddresses_wait 8
typedef void (*func_java_net_InetAddress$NameServiceAddresses_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$NameServiceAddresses_wait_long 9
typedef void (*func_java_net_InetAddress$NameServiceAddresses_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_InetAddress$NameServiceAddresses_wait_long_int 10
typedef void (*func_java_net_InetAddress$NameServiceAddresses_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_InetAddress$NameServiceAddresses_get_R_Array1_java_net_InetAddress 11
typedef jobject (*func_java_net_InetAddress$NameServiceAddresses_get_R_Array1_java_net_InetAddress)(jcontext ctx, jobject self);

void mark_java_net_InetAddress$NameServiceAddresses(jobject object, jint mark, jint depth);
void clinit_java_net_InetAddress$NameServiceAddresses(jcontext ctx);
void init_java_net_InetAddress$NameServiceAddresses_java_lang_String_java_net_InetAddress(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_net_InetAddress$NameServiceAddresses_get_R_Array1_java_net_InetAddress(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
