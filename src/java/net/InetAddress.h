#ifndef HEADER_java_net_InetAddress
#define HEADER_java_net_InetAddress

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_InetAddress {
	java_lang_Object parent;
	jref F_holder;
	jref F_canonicalHostName;
} java_net_InetAddress;

extern Class class_java_net_InetAddress;

extern jint SF_java_net_InetAddress_PREFER_IPV4_VALUE;
extern jint SF_java_net_InetAddress_PREFER_IPV6_VALUE;
extern jint SF_java_net_InetAddress_PREFER_SYSTEM_VALUE;
extern jint SF_java_net_InetAddress_IPv4;
extern jint SF_java_net_InetAddress_IPv6;
extern jint SF_java_net_InetAddress_preferIPv6Address;
extern jobject SF_java_net_InetAddress_nameService;
extern jlong SF_java_net_InetAddress_serialVersionUID;
extern jobject SF_java_net_InetAddress_cache;
extern jobject SF_java_net_InetAddress_expirySet;
extern jobject SF_java_net_InetAddress_impl;
extern volatile jobject SF_java_net_InetAddress_cachedLocalHost;
extern jobject SF_java_net_InetAddress_serialPersistentFields;

#define VTABLE_java_net_InetAddress_hashCode_R_int 0
typedef jint (*func_java_net_InetAddress_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_InetAddress_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_InetAddress_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_InetAddress_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_InetAddress_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_toString_R_java_lang_String 4
typedef jobject (*func_java_net_InetAddress_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_finalize 5
typedef void (*func_java_net_InetAddress_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_notify 6
typedef void (*func_java_net_InetAddress_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_notifyAll 7
typedef void (*func_java_net_InetAddress_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_wait 8
typedef void (*func_java_net_InetAddress_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_wait_long 9
typedef void (*func_java_net_InetAddress_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_InetAddress_wait_long_int 10
typedef void (*func_java_net_InetAddress_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder 11
typedef jobject (*func_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_readResolve_R_java_lang_Object 12
typedef jobject (*func_java_net_InetAddress_readResolve_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_isMulticastAddress_R_boolean 13
typedef jbool (*func_java_net_InetAddress_isMulticastAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_isAnyLocalAddress_R_boolean 14
typedef jbool (*func_java_net_InetAddress_isAnyLocalAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_isLoopbackAddress_R_boolean 15
typedef jbool (*func_java_net_InetAddress_isLoopbackAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_isLinkLocalAddress_R_boolean 16
typedef jbool (*func_java_net_InetAddress_isLinkLocalAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_isSiteLocalAddress_R_boolean 17
typedef jbool (*func_java_net_InetAddress_isSiteLocalAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_isMCGlobal_R_boolean 18
typedef jbool (*func_java_net_InetAddress_isMCGlobal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_isMCNodeLocal_R_boolean 19
typedef jbool (*func_java_net_InetAddress_isMCNodeLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_isMCLinkLocal_R_boolean 20
typedef jbool (*func_java_net_InetAddress_isMCLinkLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_isMCSiteLocal_R_boolean 21
typedef jbool (*func_java_net_InetAddress_isMCSiteLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_isMCOrgLocal_R_boolean 22
typedef jbool (*func_java_net_InetAddress_isMCOrgLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_isReachable_int_R_boolean 23
typedef jbool (*func_java_net_InetAddress_isReachable_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_net_InetAddress_isReachable_java_net_NetworkInterface_int_int_R_boolean 24
typedef jbool (*func_java_net_InetAddress_isReachable_java_net_NetworkInterface_int_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_net_InetAddress_getHostName_R_java_lang_String 25
typedef jobject (*func_java_net_InetAddress_getHostName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_getHostName_boolean_R_java_lang_String 26
typedef jobject (*func_java_net_InetAddress_getHostName_boolean_R_java_lang_String)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_net_InetAddress_getCanonicalHostName_R_java_lang_String 27
typedef jobject (*func_java_net_InetAddress_getCanonicalHostName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_getAddress_R_Array1_byte 28
typedef jobject (*func_java_net_InetAddress_getAddress_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_getHostAddress_R_java_lang_String 29
typedef jobject (*func_java_net_InetAddress_getHostAddress_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress_readObjectNoData_java_io_ObjectInputStream 30
typedef void (*func_java_net_InetAddress_readObjectNoData_java_io_ObjectInputStream)(jcontext ctx, jobject self, jobject param0);

void mark_java_net_InetAddress(jobject object, jint mark, jint depth);
void clinit_java_net_InetAddress(jcontext ctx);
jobject M_java_net_InetAddress_holder_R_java_net_InetAddress$InetAddressHolder(jcontext ctx, jobject self);
void init_java_net_InetAddress(jcontext ctx, jobject self);
jobject M_java_net_InetAddress_readResolve_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_java_net_InetAddress_isMulticastAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_InetAddress_isAnyLocalAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_InetAddress_isLoopbackAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_InetAddress_isLinkLocalAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_InetAddress_isSiteLocalAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_InetAddress_isMCGlobal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_InetAddress_isMCNodeLocal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_InetAddress_isMCLinkLocal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_InetAddress_isMCSiteLocal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_InetAddress_isMCOrgLocal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_InetAddress_isReachable_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_java_net_InetAddress_isReachable_java_net_NetworkInterface_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_net_InetAddress_getHostName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_InetAddress_getHostName_boolean_R_java_lang_String(jcontext ctx, jobject self, jbool param0);
jobject M_java_net_InetAddress_getCanonicalHostName_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_net_InetAddress_getHostFromNameService_java_net_InetAddress_boolean_R_java_lang_String(jcontext ctx, jobject param0, jbool param1);
jobject M_java_net_InetAddress_getAddress_R_Array1_byte(jcontext ctx, jobject self);
jobject M_java_net_InetAddress_getHostAddress_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_net_InetAddress_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_net_InetAddress_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_net_InetAddress_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_net_InetAddress_createNameService_R_java_net_InetAddress$NameService(jcontext ctx);
jobject SM_java_net_InetAddress_getByAddress_java_lang_String_Array1_byte_R_java_net_InetAddress(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_net_InetAddress_getByName_java_lang_String_R_java_net_InetAddress(jcontext ctx, jobject param0);
jobject SM_java_net_InetAddress_getByName_java_lang_String_java_net_InetAddress_R_java_net_InetAddress(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_net_InetAddress_getAllByName_java_lang_String_R_Array1_java_net_InetAddress(jcontext ctx, jobject param0);
jobject SM_java_net_InetAddress_getAllByName_java_lang_String_java_net_InetAddress_R_Array1_java_net_InetAddress(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_net_InetAddress_getLoopbackAddress_R_java_net_InetAddress(jcontext ctx);
jint SM_java_net_InetAddress_checkNumericZone_java_lang_String_R_int(jcontext ctx, jobject param0);
jobject SM_java_net_InetAddress_getAllByName0_java_lang_String_R_Array1_java_net_InetAddress(jcontext ctx, jobject param0);
jobject SM_java_net_InetAddress_getAllByName0_java_lang_String_boolean_R_Array1_java_net_InetAddress(jcontext ctx, jobject param0, jbool param1);
jobject SM_java_net_InetAddress_getAllByName0_java_lang_String_java_net_InetAddress_boolean_boolean_R_Array1_java_net_InetAddress(jcontext ctx, jobject param0, jobject param1, jbool param2, jbool param3);
jobject SM_java_net_InetAddress_getAddressesFromNameService_java_lang_String_java_net_InetAddress_R_Array1_java_net_InetAddress(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_net_InetAddress_getByAddress_Array1_byte_R_java_net_InetAddress(jcontext ctx, jobject param0);
jobject SM_java_net_InetAddress_getLocalHost_R_java_net_InetAddress(jcontext ctx);
jobject SM_java_net_InetAddress_anyLocalAddress_R_java_net_InetAddress(jcontext ctx);
jobject SM_java_net_InetAddress_loadImpl_java_lang_String_R_java_net_InetAddressImpl(jcontext ctx, jobject param0);
void M_java_net_InetAddress_readObjectNoData_java_io_ObjectInputStream(jcontext ctx, jobject self, jobject param0);
jobject SM_java_net_InetAddress_access$000_R_java_util_concurrent_ConcurrentMap(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
