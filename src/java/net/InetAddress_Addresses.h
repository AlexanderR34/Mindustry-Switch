#ifndef HEADER_java_net_InetAddress$Addresses
#define HEADER_java_net_InetAddress$Addresses

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_InetAddress$Addresses {
	java_lang_Object parent;
} java_net_InetAddress$Addresses;

extern Class class_java_net_InetAddress$Addresses;


#define INDEX_java_net_InetAddress$Addresses_get_R_Array1_java_net_InetAddress 0
typedef jobject (*func_java_net_InetAddress$Addresses_get_R_Array1_java_net_InetAddress)(jcontext ctx, jobject self);

void mark_java_net_InetAddress$Addresses(jobject object, jint mark, jint depth);
void clinit_java_net_InetAddress$Addresses(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
