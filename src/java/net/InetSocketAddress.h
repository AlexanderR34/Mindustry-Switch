#ifndef HEADER_java_net_InetSocketAddress
#define HEADER_java_net_InetSocketAddress

#include "Clearwing.h"
#include "java/net/SocketAddress.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_InetSocketAddress {
	java_net_SocketAddress parent;
	jref F_holder;
} java_net_InetSocketAddress;

extern Class class_java_net_InetSocketAddress;

extern jlong SF_java_net_InetSocketAddress_serialVersionUID;
extern jobject SF_java_net_InetSocketAddress_serialPersistentFields;

#define VTABLE_java_net_InetSocketAddress_hashCode_R_int 0
typedef jint (*func_java_net_InetSocketAddress_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetSocketAddress_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_InetSocketAddress_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_InetSocketAddress_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_InetSocketAddress_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetSocketAddress_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_InetSocketAddress_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetSocketAddress_toString_R_java_lang_String 4
typedef jobject (*func_java_net_InetSocketAddress_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetSocketAddress_finalize 5
typedef void (*func_java_net_InetSocketAddress_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetSocketAddress_notify 6
typedef void (*func_java_net_InetSocketAddress_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetSocketAddress_notifyAll 7
typedef void (*func_java_net_InetSocketAddress_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetSocketAddress_wait 8
typedef void (*func_java_net_InetSocketAddress_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetSocketAddress_wait_long 9
typedef void (*func_java_net_InetSocketAddress_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_InetSocketAddress_wait_long_int 10
typedef void (*func_java_net_InetSocketAddress_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_InetSocketAddress_readObjectNoData 11
typedef void (*func_java_net_InetSocketAddress_readObjectNoData)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetSocketAddress_getPort_R_int 12
typedef jint (*func_java_net_InetSocketAddress_getPort_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetSocketAddress_getAddress_R_java_net_InetAddress 13
typedef jobject (*func_java_net_InetSocketAddress_getAddress_R_java_net_InetAddress)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetSocketAddress_getHostName_R_java_lang_String 14
typedef jobject (*func_java_net_InetSocketAddress_getHostName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetSocketAddress_getHostString_R_java_lang_String 15
typedef jobject (*func_java_net_InetSocketAddress_getHostString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetSocketAddress_isUnresolved_R_boolean 16
typedef jbool (*func_java_net_InetSocketAddress_isUnresolved_R_boolean)(jcontext ctx, jobject self);

void mark_java_net_InetSocketAddress(jobject object, jint mark, jint depth);
void clinit_java_net_InetSocketAddress(jcontext ctx);
jint SM_java_net_InetSocketAddress_checkPort_int_R_int(jcontext ctx, jint param0);
jobject SM_java_net_InetSocketAddress_checkHost_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
void init_java_net_InetSocketAddress_int(jcontext ctx, jobject self, jint param0);
void init_java_net_InetSocketAddress_java_net_InetAddress_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_java_net_InetSocketAddress_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_java_net_InetSocketAddress_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1);
jobject SM_java_net_InetSocketAddress_createUnresolved_java_lang_String_int_R_java_net_InetSocketAddress(jcontext ctx, jobject param0, jint param1);
void M_java_net_InetSocketAddress_readObjectNoData(jcontext ctx, jobject self);
jint M_java_net_InetSocketAddress_getPort_R_int(jcontext ctx, jobject self);
jobject M_java_net_InetSocketAddress_getAddress_R_java_net_InetAddress(jcontext ctx, jobject self);
jobject M_java_net_InetSocketAddress_getHostName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_InetSocketAddress_getHostString_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_net_InetSocketAddress_isUnresolved_R_boolean(jcontext ctx, jobject self);
jobject M_java_net_InetSocketAddress_toString_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_net_InetSocketAddress_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_net_InetSocketAddress_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
