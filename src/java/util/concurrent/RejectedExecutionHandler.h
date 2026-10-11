#ifndef HEADER_java_util_concurrent_RejectedExecutionHandler
#define HEADER_java_util_concurrent_RejectedExecutionHandler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_RejectedExecutionHandler {
	java_lang_Object parent;
} java_util_concurrent_RejectedExecutionHandler;

extern Class class_java_util_concurrent_RejectedExecutionHandler;


#define INDEX_java_util_concurrent_RejectedExecutionHandler_rejectedExecution_java_lang_Runnable_java_util_concurrent_ThreadPoolExecutor 0
typedef void (*func_java_util_concurrent_RejectedExecutionHandler_rejectedExecution_java_lang_Runnable_java_util_concurrent_ThreadPoolExecutor)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_java_util_concurrent_RejectedExecutionHandler(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_RejectedExecutionHandler(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
