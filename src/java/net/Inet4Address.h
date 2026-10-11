#ifndef HEADER_java_net_Inet4Address
#define HEADER_java_net_Inet4Address

#include "Clearwing.h"
#include "java/net/InetAddress.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_Inet4Address {
	java_net_InetAddress parent;
} java_net_Inet4Address;

extern Class class_java_net_Inet4Address;

extern jint SF_java_net_Inet4Address_INADDRSZ;
extern jlong SF_java_net_Inet4Address_serialVersionUID;

#define VTABLE_java_net_Inet4Address_hashCode_R_int 0
typedef jint (*func_java_net_Inet4Address_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_Inet4Address_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_Inet4Address_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_Inet4Address_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_Inet4Address_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_toString_R_java_lang_String 4
typedef jobject (*func_java_net_Inet4Address_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_finalize 5
typedef void (*func_java_net_Inet4Address_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_notify 6
typedef void (*func_java_net_Inet4Address_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_notifyAll 7
typedef void (*func_java_net_Inet4Address_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_wait 8
typedef void (*func_java_net_Inet4Address_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_wait_long 9
typedef void (*func_java_net_Inet4Address_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_Inet4Address_wait_long_int 10
typedef void (*func_java_net_Inet4Address_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder 11
typedef jobject (*func_java_net_Inet4Address_holder_R_java_net_InetAddress$InetAddressHolder)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_readResolve_R_java_lang_Object 12
typedef jobject (*func_java_net_Inet4Address_readResolve_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_isMulticastAddress_R_boolean 13
typedef jbool (*func_java_net_Inet4Address_isMulticastAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_isAnyLocalAddress_R_boolean 14
typedef jbool (*func_java_net_Inet4Address_isAnyLocalAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_isLoopbackAddress_R_boolean 15
typedef jbool (*func_java_net_Inet4Address_isLoopbackAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_isLinkLocalAddress_R_boolean 16
typedef jbool (*func_java_net_Inet4Address_isLinkLocalAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_isSiteLocalAddress_R_boolean 17
typedef jbool (*func_java_net_Inet4Address_isSiteLocalAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_isMCGlobal_R_boolean 18
typedef jbool (*func_java_net_Inet4Address_isMCGlobal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_isMCNodeLocal_R_boolean 19
typedef jbool (*func_java_net_Inet4Address_isMCNodeLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_isMCLinkLocal_R_boolean 20
typedef jbool (*func_java_net_Inet4Address_isMCLinkLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_isMCSiteLocal_R_boolean 21
typedef jbool (*func_java_net_Inet4Address_isMCSiteLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_isMCOrgLocal_R_boolean 22
typedef jbool (*func_java_net_Inet4Address_isMCOrgLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_isReachable_int_R_boolean 23
typedef jbool (*func_java_net_Inet4Address_isReachable_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_net_Inet4Address_isReachable_java_net_NetworkInterface_int_int_R_boolean 24
typedef jbool (*func_java_net_Inet4Address_isReachable_java_net_NetworkInterface_int_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_net_Inet4Address_getHostName_R_java_lang_String 25
typedef jobject (*func_java_net_Inet4Address_getHostName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_getHostName_boolean_R_java_lang_String 26
typedef jobject (*func_java_net_Inet4Address_getHostName_boolean_R_java_lang_String)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_net_Inet4Address_getCanonicalHostName_R_java_lang_String 27
typedef jobject (*func_java_net_Inet4Address_getCanonicalHostName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_getAddress_R_Array1_byte 28
typedef jobject (*func_java_net_Inet4Address_getAddress_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_getHostAddress_R_java_lang_String 29
typedef jobject (*func_java_net_Inet4Address_getHostAddress_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet4Address_readObjectNoData_java_io_ObjectInputStream 30
typedef void (*func_java_net_Inet4Address_readObjectNoData_java_io_ObjectInputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_Inet4Address_writeReplace_R_java_lang_Object 31
typedef jobject (*func_java_net_Inet4Address_writeReplace_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_java_net_Inet4Address(jobject object, jint mark, jint depth);
void clinit_java_net_Inet4Address(jcontext ctx);
void init_java_net_Inet4Address(jcontext ctx, jobject self);
void init_java_net_Inet4Address_java_lang_String_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_net_Inet4Address_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_net_Inet4Address_writeReplace_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_java_net_Inet4Address_isMulticastAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet4Address_isAnyLocalAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet4Address_isLoopbackAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet4Address_isLinkLocalAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet4Address_isSiteLocalAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet4Address_isMCGlobal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet4Address_isMCNodeLocal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet4Address_isMCLinkLocal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet4Address_isMCSiteLocal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet4Address_isMCOrgLocal_R_boolean(jcontext ctx, jobject self);
jobject M_java_net_Inet4Address_getAddress_R_Array1_byte(jcontext ctx, jobject self);
jobject M_java_net_Inet4Address_getHostAddress_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_net_Inet4Address_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_net_Inet4Address_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject SM_java_net_Inet4Address_numericToTextFormat_Array1_byte_R_java_lang_String(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
