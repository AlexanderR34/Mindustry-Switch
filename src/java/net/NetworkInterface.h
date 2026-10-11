#ifndef HEADER_java_net_NetworkInterface
#define HEADER_java_net_NetworkInterface

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_NetworkInterface {
	java_lang_Object parent;
	jref F_name;
	jref F_displayName;
	jint F_index;
	jref F_addrs;
	jref F_bindings;
	jref F_childs;
	jref F_parent;
	jbool F_virtual;
} java_net_NetworkInterface;

extern Class class_java_net_NetworkInterface;

extern jobject SF_java_net_NetworkInterface_defaultInterface;
extern jint SF_java_net_NetworkInterface_defaultIndex;

#define VTABLE_java_net_NetworkInterface_hashCode_R_int 0
typedef jint (*func_java_net_NetworkInterface_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_NetworkInterface_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_NetworkInterface_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_NetworkInterface_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_NetworkInterface_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_toString_R_java_lang_String 4
typedef jobject (*func_java_net_NetworkInterface_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_finalize 5
typedef void (*func_java_net_NetworkInterface_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_notify 6
typedef void (*func_java_net_NetworkInterface_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_notifyAll 7
typedef void (*func_java_net_NetworkInterface_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_wait 8
typedef void (*func_java_net_NetworkInterface_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_wait_long 9
typedef void (*func_java_net_NetworkInterface_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_NetworkInterface_wait_long_int 10
typedef void (*func_java_net_NetworkInterface_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_NetworkInterface_getName_R_java_lang_String 11
typedef jobject (*func_java_net_NetworkInterface_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_getInetAddresses_R_java_util_Enumeration 12
typedef jobject (*func_java_net_NetworkInterface_getInetAddresses_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_getCheckedInetAddresses_R_Array1_java_net_InetAddress 13
typedef jobject (*func_java_net_NetworkInterface_getCheckedInetAddresses_R_Array1_java_net_InetAddress)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_getInterfaceAddresses_R_java_util_List 14
typedef jobject (*func_java_net_NetworkInterface_getInterfaceAddresses_R_java_util_List)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_getSubInterfaces_R_java_util_Enumeration 15
typedef jobject (*func_java_net_NetworkInterface_getSubInterfaces_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_getParent_R_java_net_NetworkInterface 16
typedef jobject (*func_java_net_NetworkInterface_getParent_R_java_net_NetworkInterface)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_getIndex_R_int 17
typedef jint (*func_java_net_NetworkInterface_getIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_getDisplayName_R_java_lang_String 18
typedef jobject (*func_java_net_NetworkInterface_getDisplayName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_isUp_R_boolean 19
typedef jbool (*func_java_net_NetworkInterface_isUp_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_isLoopback_R_boolean 20
typedef jbool (*func_java_net_NetworkInterface_isLoopback_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_isPointToPoint_R_boolean 21
typedef jbool (*func_java_net_NetworkInterface_isPointToPoint_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_supportsMulticast_R_boolean 22
typedef jbool (*func_java_net_NetworkInterface_supportsMulticast_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_getHardwareAddress_R_Array1_byte 23
typedef jobject (*func_java_net_NetworkInterface_getHardwareAddress_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_getMTU_R_int 24
typedef jint (*func_java_net_NetworkInterface_getMTU_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetworkInterface_isVirtual_R_boolean 25
typedef jbool (*func_java_net_NetworkInterface_isVirtual_R_boolean)(jcontext ctx, jobject self);

void mark_java_net_NetworkInterface(jobject object, jint mark, jint depth);
void clinit_java_net_NetworkInterface(jcontext ctx);
void init_java_net_NetworkInterface(jcontext ctx, jobject self);
void init_java_net_NetworkInterface_java_lang_String_int_Array1_java_net_InetAddress(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject M_java_net_NetworkInterface_getName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_NetworkInterface_getInetAddresses_R_java_util_Enumeration(jcontext ctx, jobject self);
jobject M_java_net_NetworkInterface_getCheckedInetAddresses_R_Array1_java_net_InetAddress(jcontext ctx, jobject self);
jobject M_java_net_NetworkInterface_getInterfaceAddresses_R_java_util_List(jcontext ctx, jobject self);
jobject M_java_net_NetworkInterface_getSubInterfaces_R_java_util_Enumeration(jcontext ctx, jobject self);
jobject M_java_net_NetworkInterface_getParent_R_java_net_NetworkInterface(jcontext ctx, jobject self);
jint M_java_net_NetworkInterface_getIndex_R_int(jcontext ctx, jobject self);
jobject M_java_net_NetworkInterface_getDisplayName_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_net_NetworkInterface_getByName_java_lang_String_R_java_net_NetworkInterface(jcontext ctx, jobject param0);
jobject SM_java_net_NetworkInterface_getByIndex_int_R_java_net_NetworkInterface(jcontext ctx, jint param0);
jobject SM_java_net_NetworkInterface_getByInetAddress_java_net_InetAddress_R_java_net_NetworkInterface(jcontext ctx, jobject param0);
jobject SM_java_net_NetworkInterface_getNetworkInterfaces_R_java_util_Enumeration(jcontext ctx);
jobject SM_java_net_NetworkInterface_enumerationFromArray_Array1_java_lang_Object_R_java_util_Enumeration(jcontext ctx, jobject param0);
jbool M_java_net_NetworkInterface_isUp_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_NetworkInterface_isLoopback_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_NetworkInterface_isPointToPoint_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_NetworkInterface_supportsMulticast_R_boolean(jcontext ctx, jobject self);
jobject M_java_net_NetworkInterface_getHardwareAddress_R_Array1_byte(jcontext ctx, jobject self);
jint M_java_net_NetworkInterface_getMTU_R_int(jcontext ctx, jobject self);
jbool M_java_net_NetworkInterface_isVirtual_R_boolean(jcontext ctx, jobject self);
jbool M_java_net_NetworkInterface_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_net_NetworkInterface_hashCode_R_int(jcontext ctx, jobject self);
jobject M_java_net_NetworkInterface_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_net_NetworkInterface_getDefault_R_java_net_NetworkInterface(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
