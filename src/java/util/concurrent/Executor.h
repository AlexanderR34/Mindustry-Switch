#ifndef HEADER_java_util_concurrent_Executor
#define HEADER_java_util_concurrent_Executor

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_Executor {
	java_lang_Object parent;
} java_util_concurrent_Executor;

extern Class class_java_util_concurrent_Executor;


#define INDEX_java_util_concurrent_Executor_execute_java_lang_Runnable 0
typedef void (*func_java_util_concurrent_Executor_execute_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_concurrent_Executor(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_Executor(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
