#ifndef HEADER_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory
#define HEADER_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory {
	java_lang_Object parent;
} java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory;

extern Class class_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory;


#define INDEX_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory_newThread_java_util_concurrent_ForkJoinPool_R_java_util_concurrent_ForkJoinWorkerThread 0
typedef jobject (*func_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory_newThread_java_util_concurrent_ForkJoinPool_R_java_util_concurrent_ForkJoinWorkerThread)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_ForkJoinPool$ForkJoinWorkerThreadFactory(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
