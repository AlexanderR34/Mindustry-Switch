#ifndef HEADER_java_util_concurrent_locks_Condition
#define HEADER_java_util_concurrent_locks_Condition

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_locks_Condition {
	java_lang_Object parent;
} java_util_concurrent_locks_Condition;

extern Class class_java_util_concurrent_locks_Condition;


#define INDEX_java_util_concurrent_locks_Condition_await 0
typedef void (*func_java_util_concurrent_locks_Condition_await)(jcontext ctx, jobject self);
#define INDEX_java_util_concurrent_locks_Condition_awaitUninterruptibly 1
typedef void (*func_java_util_concurrent_locks_Condition_awaitUninterruptibly)(jcontext ctx, jobject self);
#define INDEX_java_util_concurrent_locks_Condition_awaitNanos_long_R_long 2
typedef jlong (*func_java_util_concurrent_locks_Condition_awaitNanos_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define INDEX_java_util_concurrent_locks_Condition_await_long_java_util_concurrent_TimeUnit_R_boolean 3
typedef jbool (*func_java_util_concurrent_locks_Condition_await_long_java_util_concurrent_TimeUnit_R_boolean)(jcontext ctx, jobject self, jlong param0, jobject param1);
#define INDEX_java_util_concurrent_locks_Condition_awaitUntil_java_util_Date_R_boolean 4
typedef jbool (*func_java_util_concurrent_locks_Condition_awaitUntil_java_util_Date_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_concurrent_locks_Condition_signal 5
typedef void (*func_java_util_concurrent_locks_Condition_signal)(jcontext ctx, jobject self);
#define INDEX_java_util_concurrent_locks_Condition_signalAll 6
typedef void (*func_java_util_concurrent_locks_Condition_signalAll)(jcontext ctx, jobject self);

void mark_java_util_concurrent_locks_Condition(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_locks_Condition(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
