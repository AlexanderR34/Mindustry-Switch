#ifndef HEADER_java_util_concurrent_RunnableFuture
#define HEADER_java_util_concurrent_RunnableFuture

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Runnable.h"
#include "java/util/concurrent/Future.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_RunnableFuture {
	java_lang_Object parent;
} java_util_concurrent_RunnableFuture;

extern Class class_java_util_concurrent_RunnableFuture;


#define INDEX_java_util_concurrent_RunnableFuture_run 0
typedef void (*func_java_util_concurrent_RunnableFuture_run)(jcontext ctx, jobject self);

void mark_java_util_concurrent_RunnableFuture(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_RunnableFuture(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
