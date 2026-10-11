#ifndef HEADER_java_net_ContentHandler
#define HEADER_java_net_ContentHandler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_ContentHandler {
	java_lang_Object parent;
} java_net_ContentHandler;

extern Class class_java_net_ContentHandler;


#define VTABLE_java_net_ContentHandler_hashCode_R_int 0
typedef jint (*func_java_net_ContentHandler_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_ContentHandler_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_ContentHandler_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_ContentHandler_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_ContentHandler_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_ContentHandler_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_ContentHandler_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_ContentHandler_toString_R_java_lang_String 4
typedef jobject (*func_java_net_ContentHandler_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_ContentHandler_finalize 5
typedef void (*func_java_net_ContentHandler_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_ContentHandler_notify 6
typedef void (*func_java_net_ContentHandler_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_ContentHandler_notifyAll 7
typedef void (*func_java_net_ContentHandler_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_ContentHandler_wait 8
typedef void (*func_java_net_ContentHandler_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_ContentHandler_wait_long 9
typedef void (*func_java_net_ContentHandler_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_ContentHandler_wait_long_int 10
typedef void (*func_java_net_ContentHandler_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_ContentHandler_getContent_java_net_URLConnection_R_java_lang_Object 11
typedef jobject (*func_java_net_ContentHandler_getContent_java_net_URLConnection_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_ContentHandler_getContent_java_net_URLConnection_Array1_java_lang_Class_R_java_lang_Object 12
typedef jobject (*func_java_net_ContentHandler_getContent_java_net_URLConnection_Array1_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_java_net_ContentHandler(jobject object, jint mark, jint depth);
void clinit_java_net_ContentHandler(jcontext ctx);
void init_java_net_ContentHandler(jcontext ctx, jobject self);
jobject M_java_net_ContentHandler_getContent_java_net_URLConnection_Array1_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
