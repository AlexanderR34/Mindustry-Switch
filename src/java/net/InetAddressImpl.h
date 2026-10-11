#ifndef HEADER_java_net_InetAddressImpl
#define HEADER_java_net_InetAddressImpl

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_InetAddressImpl {
	java_lang_Object parent;
} java_net_InetAddressImpl;

extern Class class_java_net_InetAddressImpl;


#define INDEX_java_net_InetAddressImpl_getLocalHostName_R_java_lang_String 0
typedef jobject (*func_java_net_InetAddressImpl_getLocalHostName_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_java_net_InetAddressImpl_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress 1
typedef jobject (*func_java_net_InetAddressImpl_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_net_InetAddressImpl_getHostByAddr_Array1_byte_R_java_lang_String 2
typedef jobject (*func_java_net_InetAddressImpl_getHostByAddr_Array1_byte_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_net_InetAddressImpl_anyLocalAddress_R_java_net_InetAddress 3
typedef jobject (*func_java_net_InetAddressImpl_anyLocalAddress_R_java_net_InetAddress)(jcontext ctx, jobject self);
#define INDEX_java_net_InetAddressImpl_loopbackAddress_R_java_net_InetAddress 4
typedef jobject (*func_java_net_InetAddressImpl_loopbackAddress_R_java_net_InetAddress)(jcontext ctx, jobject self);
#define INDEX_java_net_InetAddressImpl_isReachable_java_net_InetAddress_int_java_net_NetworkInterface_int_R_boolean 5
typedef jbool (*func_java_net_InetAddressImpl_isReachable_java_net_InetAddress_int_java_net_NetworkInterface_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3);

void mark_java_net_InetAddressImpl(jobject object, jint mark, jint depth);
void clinit_java_net_InetAddressImpl(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
