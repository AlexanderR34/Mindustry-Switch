#ifndef HEADER_java_net_URLStreamHandler
#define HEADER_java_net_URLStreamHandler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_URLStreamHandler {
	java_lang_Object parent;
} java_net_URLStreamHandler;

extern Class class_java_net_URLStreamHandler;


#define VTABLE_java_net_URLStreamHandler_hashCode_R_int 0
typedef jint (*func_java_net_URLStreamHandler_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLStreamHandler_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_URLStreamHandler_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URLStreamHandler_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_URLStreamHandler_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLStreamHandler_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_URLStreamHandler_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLStreamHandler_toString_R_java_lang_String 4
typedef jobject (*func_java_net_URLStreamHandler_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLStreamHandler_finalize 5
typedef void (*func_java_net_URLStreamHandler_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLStreamHandler_notify 6
typedef void (*func_java_net_URLStreamHandler_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLStreamHandler_notifyAll 7
typedef void (*func_java_net_URLStreamHandler_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLStreamHandler_wait 8
typedef void (*func_java_net_URLStreamHandler_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLStreamHandler_wait_long 9
typedef void (*func_java_net_URLStreamHandler_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_URLStreamHandler_wait_long_int 10
typedef void (*func_java_net_URLStreamHandler_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_net_URLStreamHandler(jobject object, jint mark, jint depth);
void clinit_java_net_URLStreamHandler(jcontext ctx);
void init_java_net_URLStreamHandler(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
