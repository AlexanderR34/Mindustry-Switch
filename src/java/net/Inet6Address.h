#ifndef HEADER_java_net_Inet6Address
#define HEADER_java_net_Inet6Address

#include "Clearwing.h"
#include "java/net/InetAddress.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_Inet6Address {
	java_net_InetAddress parent;
	jref F_holder6;
} java_net_Inet6Address;

extern Class class_java_net_Inet6Address;

extern jint SF_java_net_Inet6Address_INADDRSZ;
extern jlong SF_java_net_Inet6Address_serialVersionUID;
extern jobject SF_java_net_Inet6Address_serialPersistentFields;
extern jint SF_java_net_Inet6Address_INT16SZ;

#define VTABLE_java_net_Inet6Address_hashCode_R_int 0
typedef jint (*func_java_net_Inet6Address_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_Inet6Address_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_Inet6Address_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_Inet6Address_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_Inet6Address_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_toString_R_java_lang_String 4
typedef jobject (*func_java_net_Inet6Address_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_finalize 5
typedef void (*func_java_net_Inet6Address_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_notify 6
typedef void (*func_java_net_Inet6Address_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_notifyAll 7
typedef void (*func_java_net_Inet6Address_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_wait 8
typedef void (*func_java_net_Inet6Address_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_wait_long 9
typedef void (*func_java_net_Inet6Address_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_Inet6Address_wait_long_int 10
typedef void (*func_java_net_Inet6Address_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_Inet6Address_holder_R_java_net_InetAddress$InetAddressHolder 11
typedef jobject (*func_java_net_Inet6Address_holder_R_java_net_InetAddress$InetAddressHolder)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_readResolve_R_java_lang_Object 12
typedef jobject (*func_java_net_Inet6Address_readResolve_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_isMulticastAddress_R_boolean 13
typedef jbool (*func_java_net_Inet6Address_isMulticastAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_isAnyLocalAddress_R_boolean 14
typedef jbool (*func_java_net_Inet6Address_isAnyLocalAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_isLoopbackAddress_R_boolean 15
typedef jbool (*func_java_net_Inet6Address_isLoopbackAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_isLinkLocalAddress_R_boolean 16
typedef jbool (*func_java_net_Inet6Address_isLinkLocalAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_isSiteLocalAddress_R_boolean 17
typedef jbool (*func_java_net_Inet6Address_isSiteLocalAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_isMCGlobal_R_boolean 18
typedef jbool (*func_java_net_Inet6Address_isMCGlobal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_isMCNodeLocal_R_boolean 19
typedef jbool (*func_java_net_Inet6Address_isMCNodeLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_isMCLinkLocal_R_boolean 20
typedef jbool (*func_java_net_Inet6Address_isMCLinkLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_isMCSiteLocal_R_boolean 21
typedef jbool (*func_java_net_Inet6Address_isMCSiteLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_isMCOrgLocal_R_boolean 22
typedef jbool (*func_java_net_Inet6Address_isMCOrgLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_isReachable_int_R_boolean 23
typedef jbool (*func_java_net_Inet6Address_isReachable_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_net_Inet6Address_isReachable_java_net_NetworkInterface_int_int_R_boolean 24
typedef jbool (*func_java_net_Inet6Address_isReachable_java_net_NetworkInterface_int_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_net_Inet6Address_getHostName_R_java_lang_String 25
typedef jobject (*func_java_net_Inet6Address_getHostName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_getHostName_boolean_R_java_lang_String 26
typedef jobject (*func_java_net_Inet6Address_getHostName_boolean_R_java_lang_String)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_net_Inet6Address_getCanonicalHostName_R_java_lang_String 27
typedef jobject (*func_java_net_Inet6Address_getCanonicalHostName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_getAddress_R_Array1_byte 28
typedef jobject (*func_java_net_Inet6Address_getAddress_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_getHostAddress_R_java_lang_String 29
typedef jobject (*func_java_net_Inet6Address_getHostAddress_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_readObjectNoData_java_io_ObjectInputStream 30
typedef void (*func_java_net_Inet6Address_readObjectNoData_java_io_ObjectInputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_Inet6Address_initstr_java_lang_String_Array1_byte_java_lang_String 31
typedef void (*func_java_net_Inet6Address_initstr_java_lang_String_Array1_byte_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_net_Inet6Address_initif_java_lang_String_Array1_byte_java_net_NetworkInterface 32
typedef void (*func_java_net_Inet6Address_initif_java_lang_String_Array1_byte_java_net_NetworkInterface)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_net_Inet6Address_deriveNumericScope_java_lang_String_R_int 33
typedef jint (*func_java_net_Inet6Address_deriveNumericScope_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_Inet6Address_getScopeId_R_int 34
typedef jint (*func_java_net_Inet6Address_getScopeId_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_getScopedInterface_R_java_net_NetworkInterface 35
typedef jobject (*func_java_net_Inet6Address_getScopedInterface_R_java_net_NetworkInterface)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address_isIPv4CompatibleAddress_R_boolean 36
typedef jbool (*func_java_net_Inet6Address_isIPv4CompatibleAddress_R_boolean)(jcontext ctx, jobject self);

void mark_java_net_Inet6Address(jobject object, jint mark, jint depth);
void clinit_java_net_Inet6Address(jcontext ctx);
void init_java_net_Inet6Address(jcontext ctx, jobject self);
void init_java_net_Inet6Address_java_lang_String_Array1_byte_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void init_java_net_Inet6Address_java_lang_String_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_net_Inet6Address_java_lang_String_Array1_byte_java_net_NetworkInterface(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_java_net_Inet6Address_java_lang_String_Array1_byte_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject SM_java_net_Inet6Address_getByAddress_java_lang_String_Array1_byte_java_net_NetworkInterface_R_java_net_Inet6Address(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_java_net_Inet6Address_getByAddress_java_lang_String_Array1_byte_int_R_java_net_Inet6Address(jcontext ctx, jobject param0, jobject param1, jint param2);
void M_java_net_Inet6Address_initstr_java_lang_String_Array1_byte_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_java_net_Inet6Address_initif_java_lang_String_Array1_byte_java_net_NetworkInterface(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jbool SM_java_net_Inet6Address_isDifferentLocalAddressType_Array1_byte_Array1_byte_R_boolean(jcontext ctx, jobject param0, jobject param1);
jint SM_java_net_Inet6Address_deriveNumericScope_Array1_byte_java_net_NetworkInterface_R_int(jcontext ctx, jobject param0, jobject param1);
jint M_java_net_Inet6Address_deriveNumericScope_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_java_net_Inet6Address_isMulticastAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address_isAnyLocalAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address_isLoopbackAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address_isLinkLocalAddress_R_boolean(jcontext ctx, jobject self);
jbool SM_java_net_Inet6Address_isLinkLocalAddress_Array1_byte_R_boolean(jcontext ctx, jobject param0);
jbool M_java_net_Inet6Address_isSiteLocalAddress_R_boolean(jcontext ctx, jobject self);
jbool SM_java_net_Inet6Address_isSiteLocalAddress_Array1_byte_R_boolean(jcontext ctx, jobject param0);
jbool M_java_net_Inet6Address_isMCGlobal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address_isMCNodeLocal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address_isMCLinkLocal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address_isMCSiteLocal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address_isMCOrgLocal_R_boolean(jcontext ctx, jobject self);
jobject M_java_net_Inet6Address_getAddress_R_Array1_byte(jcontext ctx, jobject self);
jint M_java_net_Inet6Address_getScopeId_R_int(jcontext ctx, jobject self);
jobject M_java_net_Inet6Address_getScopedInterface_R_java_net_NetworkInterface(jcontext ctx, jobject self);
jobject M_java_net_Inet6Address_getHostAddress_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_net_Inet6Address_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_net_Inet6Address_isIPv4CompatibleAddress_R_boolean(jcontext ctx, jobject self);
jobject SM_java_net_Inet6Address_numericToTextFormat_Array1_byte_R_java_lang_String(jcontext ctx, jobject param0);
jint SM_java_net_Inet6Address_access$100_Array1_byte_java_net_NetworkInterface_R_int(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
