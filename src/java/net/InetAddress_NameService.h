#ifndef HEADER_java_net_InetAddress$NameService
#define HEADER_java_net_InetAddress$NameService

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_InetAddress$NameService {
	java_lang_Object parent;
} java_net_InetAddress$NameService;

extern Class class_java_net_InetAddress$NameService;


#define INDEX_java_net_InetAddress$NameService_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress 0
typedef jobject (*func_java_net_InetAddress$NameService_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_net_InetAddress$NameService_getHostByAddr_Array1_byte_R_java_lang_String 1
typedef jobject (*func_java_net_InetAddress$NameService_getHostByAddr_Array1_byte_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_java_net_InetAddress$NameService(jobject object, jint mark, jint depth);
void clinit_java_net_InetAddress$NameService(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
