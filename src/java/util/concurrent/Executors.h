#ifndef HEADER_java_util_concurrent_Executors
#define HEADER_java_util_concurrent_Executors

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_Executors {
	java_lang_Object parent;
} java_util_concurrent_Executors;

extern Class class_java_util_concurrent_Executors;


#define VTABLE_java_util_concurrent_Executors_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_Executors_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_Executors_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_Executors_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_Executors_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_Executors_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_Executors_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors_finalize 5
typedef void (*func_java_util_concurrent_Executors_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors_notify 6
typedef void (*func_java_util_concurrent_Executors_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors_notifyAll 7
typedef void (*func_java_util_concurrent_Executors_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors_wait 8
typedef void (*func_java_util_concurrent_Executors_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_Executors_wait_long 9
typedef void (*func_java_util_concurrent_Executors_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_Executors_wait_long_int 10
typedef void (*func_java_util_concurrent_Executors_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_util_concurrent_Executors(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_Executors(jcontext ctx);
void init_java_util_concurrent_Executors(jcontext ctx, jobject self);
jobject SM_java_util_concurrent_Executors_newFixedThreadPool_int_java_util_concurrent_ThreadFactory_R_java_util_concurrent_ExecutorService(jcontext ctx, jint param0, jobject param1);
jobject SM_java_util_concurrent_Executors_newSingleThreadExecutor_java_util_concurrent_ThreadFactory_R_java_util_concurrent_ExecutorService(jcontext ctx, jobject param0);
jobject SM_java_util_concurrent_Executors_defaultThreadFactory_R_java_util_concurrent_ThreadFactory(jcontext ctx);
jobject SM_java_util_concurrent_Executors_callable_java_lang_Runnable_java_lang_Object_R_java_util_concurrent_Callable(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
