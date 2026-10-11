#ifndef HEADER_arc_util_Threads
#define HEADER_arc_util_Threads

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Threads {
	java_lang_Object parent;
} arc_util_Threads;

extern Class class_arc_util_Threads;


#define VTABLE_arc_util_Threads_hashCode_R_int 0
typedef jint (*func_arc_util_Threads_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Threads_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Threads_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Threads_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Threads_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Threads_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Threads_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Threads_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Threads_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Threads_finalize 5
typedef void (*func_arc_util_Threads_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Threads_notify 6
typedef void (*func_arc_util_Threads_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Threads_notifyAll 7
typedef void (*func_arc_util_Threads_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Threads_wait 8
typedef void (*func_arc_util_Threads_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Threads_wait_long 9
typedef void (*func_arc_util_Threads_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Threads_wait_long_int 10
typedef void (*func_arc_util_Threads_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_Threads(jobject object, jint mark, jint depth);
void clinit_arc_util_Threads(jcontext ctx);
void init_arc_util_Threads(jcontext ctx, jobject self);
jobject SM_arc_util_Threads_local_arc_func_Prov_R_java_lang_ThreadLocal(jcontext ctx, jobject param0);
jobject SM_arc_util_Threads_await_java_util_concurrent_Future_R_java_lang_Object(jcontext ctx, jobject param0);
void SM_arc_util_Threads_awaitAll_arc_struct_Seq(jcontext ctx, jobject param0);
jobject SM_arc_util_Threads_executor_java_lang_String_int_R_java_util_concurrent_ExecutorService(jcontext ctx, jobject param0, jint param1);
jobject SM_arc_util_Threads_executor_int_R_java_util_concurrent_ExecutorService(jcontext ctx, jint param0);
jobject SM_arc_util_Threads_executor_java_lang_String_R_java_util_concurrent_ExecutorService(jcontext ctx, jobject param0);
jobject SM_arc_util_Threads_executor_R_java_util_concurrent_ExecutorService(jcontext ctx);
jobject SM_arc_util_Threads_unboundedExecutor_java_lang_String_int_R_java_util_concurrent_ExecutorService(jcontext ctx, jobject param0, jint param1);
jobject SM_arc_util_Threads_unboundedExecutor_java_lang_String_R_java_util_concurrent_ExecutorService(jcontext ctx, jobject param0);
jobject SM_arc_util_Threads_unboundedExecutor_R_java_util_concurrent_ExecutorService(jcontext ctx);
jobject SM_arc_util_Threads_boundedExecutor_java_lang_String_int_R_java_util_concurrent_ExecutorService(jcontext ctx, jobject param0, jint param1);
void SM_arc_util_Threads_await_java_util_concurrent_ExecutorService(jcontext ctx, jobject param0);
void SM_arc_util_Threads_sleep_long(jcontext ctx, jlong param0);
void SM_arc_util_Threads_sleep_long_int(jcontext ctx, jlong param0, jint param1);
void SM_arc_util_Threads_throwAppException_java_lang_Throwable(jcontext ctx, jobject param0);
jobject SM_arc_util_Threads_thread_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0);
jobject SM_arc_util_Threads_thread_java_lang_String_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Threads_daemon_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0);
jobject SM_arc_util_Threads_daemon_java_lang_String_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Threads_newThread_java_lang_Runnable_java_lang_String_boolean_R_java_lang_Thread(jcontext ctx, jobject param0, jobject param1, jbool param2);
void SM_arc_util_Threads_lambda$newThread$0_java_lang_Thread_java_lang_Throwable(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_Threads_lambda$throwAppException$0_java_lang_Throwable(jcontext ctx, jobject param0);
jobject SM_arc_util_Threads_lambda$boundedExecutor$0_java_lang_String_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Threads_lambda$unboundedExecutor$0_java_lang_String_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Threads_lambda$executor$1_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0);
jobject SM_arc_util_Threads_lambda$executor$0_java_lang_String_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
