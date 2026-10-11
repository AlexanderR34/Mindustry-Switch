#ifndef HEADER_java_util_concurrent_locks_ReadWriteLock
#define HEADER_java_util_concurrent_locks_ReadWriteLock

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_locks_ReadWriteLock {
	java_lang_Object parent;
} java_util_concurrent_locks_ReadWriteLock;

extern Class class_java_util_concurrent_locks_ReadWriteLock;


#define INDEX_java_util_concurrent_locks_ReadWriteLock_readLock_R_java_util_concurrent_locks_Lock 0
typedef jobject (*func_java_util_concurrent_locks_ReadWriteLock_readLock_R_java_util_concurrent_locks_Lock)(jcontext ctx, jobject self);
#define INDEX_java_util_concurrent_locks_ReadWriteLock_writeLock_R_java_util_concurrent_locks_Lock 1
typedef jobject (*func_java_util_concurrent_locks_ReadWriteLock_writeLock_R_java_util_concurrent_locks_Lock)(jcontext ctx, jobject self);

void mark_java_util_concurrent_locks_ReadWriteLock(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_locks_ReadWriteLock(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
