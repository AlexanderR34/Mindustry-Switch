#ifndef HEADER_java_net_Inet6Address$Inet6AddressHolder
#define HEADER_java_net_Inet6Address$Inet6AddressHolder

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_Inet6Address$Inet6AddressHolder {
	java_lang_Object parent;
	jref F_ipaddress;
	jint F_scope_id;
	jbool F_scope_id_set;
	jref F_scope_ifname;
	jbool F_scope_ifname_set;
	jref F_this$0;
} java_net_Inet6Address$Inet6AddressHolder;

extern Class class_java_net_Inet6Address$Inet6AddressHolder;


#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_hashCode_R_int 0
typedef jint (*func_java_net_Inet6Address$Inet6AddressHolder_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_Inet6Address$Inet6AddressHolder_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_Inet6Address$Inet6AddressHolder_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_Inet6Address$Inet6AddressHolder_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_toString_R_java_lang_String 4
typedef jobject (*func_java_net_Inet6Address$Inet6AddressHolder_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_finalize 5
typedef void (*func_java_net_Inet6Address$Inet6AddressHolder_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_notify 6
typedef void (*func_java_net_Inet6Address$Inet6AddressHolder_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_notifyAll 7
typedef void (*func_java_net_Inet6Address$Inet6AddressHolder_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_wait 8
typedef void (*func_java_net_Inet6Address$Inet6AddressHolder_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_wait_long 9
typedef void (*func_java_net_Inet6Address$Inet6AddressHolder_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_wait_long_int 10
typedef void (*func_java_net_Inet6Address$Inet6AddressHolder_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_setAddr_Array1_byte 11
typedef void (*func_java_net_Inet6Address$Inet6AddressHolder_setAddr_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_int 12
typedef void (*func_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_java_net_NetworkInterface 13
typedef void (*func_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_java_net_NetworkInterface)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_getHostAddress_R_java_lang_String 14
typedef jobject (*func_java_net_Inet6Address$Inet6AddressHolder_getHostAddress_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_isIPv4CompatibleAddress_R_boolean 15
typedef jbool (*func_java_net_Inet6Address$Inet6AddressHolder_isIPv4CompatibleAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMulticastAddress_R_boolean 16
typedef jbool (*func_java_net_Inet6Address$Inet6AddressHolder_isMulticastAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_isAnyLocalAddress_R_boolean 17
typedef jbool (*func_java_net_Inet6Address$Inet6AddressHolder_isAnyLocalAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_isLoopbackAddress_R_boolean 18
typedef jbool (*func_java_net_Inet6Address$Inet6AddressHolder_isLoopbackAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_isLinkLocalAddress_R_boolean 19
typedef jbool (*func_java_net_Inet6Address$Inet6AddressHolder_isLinkLocalAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_isSiteLocalAddress_R_boolean 20
typedef jbool (*func_java_net_Inet6Address$Inet6AddressHolder_isSiteLocalAddress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMCGlobal_R_boolean 21
typedef jbool (*func_java_net_Inet6Address$Inet6AddressHolder_isMCGlobal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMCNodeLocal_R_boolean 22
typedef jbool (*func_java_net_Inet6Address$Inet6AddressHolder_isMCNodeLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMCLinkLocal_R_boolean 23
typedef jbool (*func_java_net_Inet6Address$Inet6AddressHolder_isMCLinkLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMCSiteLocal_R_boolean 24
typedef jbool (*func_java_net_Inet6Address$Inet6AddressHolder_isMCSiteLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_Inet6Address$Inet6AddressHolder_isMCOrgLocal_R_boolean 25
typedef jbool (*func_java_net_Inet6Address$Inet6AddressHolder_isMCOrgLocal_R_boolean)(jcontext ctx, jobject self);

void mark_java_net_Inet6Address$Inet6AddressHolder(jobject object, jint mark, jint depth);
void clinit_java_net_Inet6Address$Inet6AddressHolder(jcontext ctx);
void init_java_net_Inet6Address$Inet6AddressHolder_java_net_Inet6Address(jcontext ctx, jobject self, jobject param0);
void init_java_net_Inet6Address$Inet6AddressHolder_java_net_Inet6Address_Array1_byte_int_boolean_java_net_NetworkInterface_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3, jobject param4, jbool param5);
void M_java_net_Inet6Address$Inet6AddressHolder_setAddr_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_java_net_Inet6Address$Inet6AddressHolder_init_Array1_byte_java_net_NetworkInterface(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_net_Inet6Address$Inet6AddressHolder_getHostAddress_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address$Inet6AddressHolder_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_net_Inet6Address$Inet6AddressHolder_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address$Inet6AddressHolder_isIPv4CompatibleAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address$Inet6AddressHolder_isMulticastAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address$Inet6AddressHolder_isAnyLocalAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address$Inet6AddressHolder_isLoopbackAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address$Inet6AddressHolder_isLinkLocalAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address$Inet6AddressHolder_isSiteLocalAddress_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address$Inet6AddressHolder_isMCGlobal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address$Inet6AddressHolder_isMCNodeLocal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address$Inet6AddressHolder_isMCLinkLocal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address$Inet6AddressHolder_isMCSiteLocal_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_Inet6Address$Inet6AddressHolder_isMCOrgLocal_R_boolean(jcontext ctx, jobject self);
void init_java_net_Inet6Address$Inet6AddressHolder_java_net_Inet6Address_java_net_Inet6Address$1(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
