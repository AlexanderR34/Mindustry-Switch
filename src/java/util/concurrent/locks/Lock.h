#ifndef HEADER_java_util_concurrent_locks_Lock
#define HEADER_java_util_concurrent_locks_Lock

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_locks_Lock {
	java_lang_Object parent;
} java_util_concurrent_locks_Lock;

extern Class class_java_util_concurrent_locks_Lock;


#define INDEX_java_util_concurrent_locks_Lock_lock 0
typedef void (*func_java_util_concurrent_locks_Lock_lock)(jcontext ctx, jobject self);
#define INDEX_java_util_concurrent_locks_Lock_lockInterruptibly 1
typedef void (*func_java_util_concurrent_locks_Lock_lockInterruptibly)(jcontext ctx, jobject self);
#define INDEX_java_util_concurrent_locks_Lock_tryLock_R_boolean 2
typedef jbool (*func_java_util_concurrent_locks_Lock_tryLock_R_boolean)(jcontext ctx, jobject self);
#define INDEX_java_util_concurrent_locks_Lock_tryLock_long_java_util_concurrent_TimeUnit_R_boolean 3
typedef jbool (*func_java_util_concurrent_locks_Lock_tryLock_long_java_util_concurrent_TimeUnit_R_boolean)(jcontext ctx, jobject self, jlong param0, jobject param1);
#define INDEX_java_util_concurrent_locks_Lock_unlock 4
typedef void (*func_java_util_concurrent_locks_Lock_unlock)(jcontext ctx, jobject self);
#define INDEX_java_util_concurrent_locks_Lock_newCondition_R_java_util_concurrent_locks_Condition 5
typedef jobject (*func_java_util_concurrent_locks_Lock_newCondition_R_java_util_concurrent_locks_Condition)(jcontext ctx, jobject self);

void mark_java_util_concurrent_locks_Lock(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_locks_Lock(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
