#ifndef HEADER_java_lang_reflect_Proxy
#define HEADER_java_lang_reflect_Proxy

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_reflect_Proxy {
	java_lang_Object parent;
	jref F_h;
	jref F_methods;
} java_lang_reflect_Proxy;

extern Class class_java_lang_reflect_Proxy;


#define VTABLE_java_lang_reflect_Proxy_hashCode_R_int 0
typedef jint (*func_java_lang_reflect_Proxy_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Proxy_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_reflect_Proxy_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_reflect_Proxy_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_reflect_Proxy_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Proxy_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_reflect_Proxy_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Proxy_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_reflect_Proxy_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Proxy_finalize 5
typedef void (*func_java_lang_reflect_Proxy_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Proxy_notify 6
typedef void (*func_java_lang_reflect_Proxy_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Proxy_notifyAll 7
typedef void (*func_java_lang_reflect_Proxy_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Proxy_wait 8
typedef void (*func_java_lang_reflect_Proxy_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_reflect_Proxy_wait_long 9
typedef void (*func_java_lang_reflect_Proxy_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_reflect_Proxy_wait_long_int 10
typedef void (*func_java_lang_reflect_Proxy_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_lang_reflect_Proxy(jobject object, jint mark, jint depth);
void clinit_java_lang_reflect_Proxy(jcontext ctx);
void init_java_lang_reflect_Proxy_java_lang_reflect_InvocationHandler(jcontext ctx, jobject self, jobject param0);
jobject SM_java_lang_reflect_Proxy_getProxyClass_java_lang_ClassLoader_Array1_java_lang_Class_R_java_lang_Class(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_lang_reflect_Proxy_newProxyInstance_java_lang_ClassLoader_Array1_java_lang_Class_java_lang_reflect_InvocationHandler_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_java_lang_reflect_Proxy_isProxyClass_java_lang_Class_R_boolean(jcontext ctx, jobject param0);
jobject SM_java_lang_reflect_Proxy_getInvocationHandler_java_lang_Object_R_java_lang_reflect_InvocationHandler(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
