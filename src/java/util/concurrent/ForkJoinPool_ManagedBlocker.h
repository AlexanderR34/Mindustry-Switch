#ifndef HEADER_java_util_concurrent_ForkJoinPool$ManagedBlocker
#define HEADER_java_util_concurrent_ForkJoinPool$ManagedBlocker

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_ForkJoinPool$ManagedBlocker {
	java_lang_Object parent;
} java_util_concurrent_ForkJoinPool$ManagedBlocker;

extern Class class_java_util_concurrent_ForkJoinPool$ManagedBlocker;


#define INDEX_java_util_concurrent_ForkJoinPool$ManagedBlocker_block_R_boolean 0
typedef jbool (*func_java_util_concurrent_ForkJoinPool$ManagedBlocker_block_R_boolean)(jcontext ctx, jobject self);
#define INDEX_java_util_concurrent_ForkJoinPool$ManagedBlocker_isReleasable_R_boolean 1
typedef jbool (*func_java_util_concurrent_ForkJoinPool$ManagedBlocker_isReleasable_R_boolean)(jcontext ctx, jobject self);

void mark_java_util_concurrent_ForkJoinPool$ManagedBlocker(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_ForkJoinPool$ManagedBlocker(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
