#ifndef HEADER_java_util_concurrent_ThreadFactory
#define HEADER_java_util_concurrent_ThreadFactory

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_ThreadFactory {
	java_lang_Object parent;
} java_util_concurrent_ThreadFactory;

extern Class class_java_util_concurrent_ThreadFactory;


#define INDEX_java_util_concurrent_ThreadFactory_newThread_java_lang_Runnable_R_java_lang_Thread 0
typedef jobject (*func_java_util_concurrent_ThreadFactory_newThread_java_lang_Runnable_R_java_lang_Thread)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_concurrent_ThreadFactory(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_ThreadFactory(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
