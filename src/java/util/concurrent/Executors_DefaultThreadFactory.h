#ifndef HEADER_java_util_concurrent_Executors$DefaultThreadFactory
#define HEADER_java_util_concurrent_Executors$DefaultThreadFactory

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ThreadFactory.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_Executors$DefaultThreadFactory {
	java_lang_Object parent;
} java_util_concurrent_Executors$DefaultThreadFactory;

extern Class class_java_util_concurrent_Executors$DefaultThreadFactory;


#define VTABLE_java_util_concurrent_Executors$DefaultThreadFactory_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_Executors$DefaultThreadFactory_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors$DefaultThreadFactory_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_Executors$DefaultThreadFactory_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_Executors$DefaultThreadFactory_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_Executors$DefaultThreadFactory_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors$DefaultThreadFactory_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_Executors$DefaultThreadFactory_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors$DefaultThreadFactory_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_Executors$DefaultThreadFactory_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors$DefaultThreadFactory_finalize 5
typedef void (*func_java_util_concurrent_Executors$DefaultThreadFactory_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors$DefaultThreadFactory_notify 6
typedef void (*func_java_util_concurrent_Executors$DefaultThreadFactory_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors$DefaultThreadFactory_notifyAll 7
typedef void (*func_java_util_concurrent_Executors$DefaultThreadFactory_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors$DefaultThreadFactory_wait 8
typedef void (*func_java_util_concurrent_Executors$DefaultThreadFactory_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors$DefaultThreadFactory_wait_long 9
typedef void (*func_java_util_concurrent_Executors$DefaultThreadFactory_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_Executors$DefaultThreadFactory_wait_long_int 10
typedef void (*func_java_util_concurrent_Executors$DefaultThreadFactory_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_concurrent_Executors$DefaultThreadFactory_newThread_java_lang_Runnable_R_java_lang_Thread 11
typedef jobject (*func_java_util_concurrent_Executors$DefaultThreadFactory_newThread_java_lang_Runnable_R_java_lang_Thread)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_concurrent_Executors$DefaultThreadFactory(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_Executors$DefaultThreadFactory(jcontext ctx);
void init_java_util_concurrent_Executors$DefaultThreadFactory(jcontext ctx, jobject self);
jobject M_java_util_concurrent_Executors$DefaultThreadFactory_newThread_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
