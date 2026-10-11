#ifndef HEADER_java_net_InetAddress$PlatformNameService
#define HEADER_java_net_InetAddress$PlatformNameService

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/net/InetAddress_NameService.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_InetAddress$PlatformNameService {
	java_lang_Object parent;
} java_net_InetAddress$PlatformNameService;

extern Class class_java_net_InetAddress$PlatformNameService;


#define VTABLE_java_net_InetAddress$PlatformNameService_hashCode_R_int 0
typedef jint (*func_java_net_InetAddress$PlatformNameService_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$PlatformNameService_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_InetAddress$PlatformNameService_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_InetAddress$PlatformNameService_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_InetAddress$PlatformNameService_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$PlatformNameService_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_InetAddress$PlatformNameService_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$PlatformNameService_toString_R_java_lang_String 4
typedef jobject (*func_java_net_InetAddress$PlatformNameService_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$PlatformNameService_finalize 5
typedef void (*func_java_net_InetAddress$PlatformNameService_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$PlatformNameService_notify 6
typedef void (*func_java_net_InetAddress$PlatformNameService_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$PlatformNameService_notifyAll 7
typedef void (*func_java_net_InetAddress$PlatformNameService_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$PlatformNameService_wait 8
typedef void (*func_java_net_InetAddress$PlatformNameService_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_InetAddress$PlatformNameService_wait_long 9
typedef void (*func_java_net_InetAddress$PlatformNameService_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_InetAddress$PlatformNameService_wait_long_int 10
typedef void (*func_java_net_InetAddress$PlatformNameService_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_InetAddress$PlatformNameService_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress 11
typedef jobject (*func_java_net_InetAddress$PlatformNameService_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_InetAddress$PlatformNameService_getHostByAddr_Array1_byte_R_java_lang_String 12
typedef jobject (*func_java_net_InetAddress$PlatformNameService_getHostByAddr_Array1_byte_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_java_net_InetAddress$PlatformNameService(jobject object, jint mark, jint depth);
void clinit_java_net_InetAddress$PlatformNameService(jcontext ctx);
void init_java_net_InetAddress$PlatformNameService(jcontext ctx, jobject self);
jobject M_java_net_InetAddress$PlatformNameService_lookupAllHostAddr_java_lang_String_R_Array1_java_net_InetAddress(jcontext ctx, jobject self, jobject param0);
jobject M_java_net_InetAddress$PlatformNameService_getHostByAddr_Array1_byte_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_net_InetAddress$PlatformNameService_java_net_InetAddress$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
