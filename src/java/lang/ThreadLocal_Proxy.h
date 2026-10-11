#ifndef HEADER_java_lang_ThreadLocal$Proxy
#define HEADER_java_lang_ThreadLocal$Proxy

#include "Clearwing.h"
#include "java/lang/ThreadLocal.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_ThreadLocal$Proxy {
	java_lang_ThreadLocal parent;
	jref F_supplier;
} java_lang_ThreadLocal$Proxy;

extern Class class_java_lang_ThreadLocal$Proxy;


#define VTABLE_java_lang_ThreadLocal$Proxy_hashCode_R_int 0
typedef jint (*func_java_lang_ThreadLocal$Proxy_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal$Proxy_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_ThreadLocal$Proxy_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ThreadLocal$Proxy_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_ThreadLocal$Proxy_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal$Proxy_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_ThreadLocal$Proxy_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal$Proxy_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_ThreadLocal$Proxy_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal$Proxy_finalize 5
typedef void (*func_java_lang_ThreadLocal$Proxy_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal$Proxy_notify 6
typedef void (*func_java_lang_ThreadLocal$Proxy_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal$Proxy_notifyAll 7
typedef void (*func_java_lang_ThreadLocal$Proxy_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal$Proxy_wait 8
typedef void (*func_java_lang_ThreadLocal$Proxy_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal$Proxy_wait_long 9
typedef void (*func_java_lang_ThreadLocal$Proxy_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_ThreadLocal$Proxy_wait_long_int 10
typedef void (*func_java_lang_ThreadLocal$Proxy_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_ThreadLocal$Proxy_initialValue_R_java_lang_Object 11
typedef jobject (*func_java_lang_ThreadLocal$Proxy_initialValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal$Proxy_get_R_java_lang_Object 12
typedef jobject (*func_java_lang_ThreadLocal$Proxy_get_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal$Proxy_set_java_lang_Object 13
typedef void (*func_java_lang_ThreadLocal$Proxy_set_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ThreadLocal$Proxy_remove 14
typedef void (*func_java_lang_ThreadLocal$Proxy_remove)(jcontext ctx, jobject self);

void mark_java_lang_ThreadLocal$Proxy(jobject object, jint mark, jint depth);
void clinit_java_lang_ThreadLocal$Proxy(jcontext ctx);
void init_java_lang_ThreadLocal$Proxy_java_util_function_Supplier(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_ThreadLocal$Proxy_initialValue_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
