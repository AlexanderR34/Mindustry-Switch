#ifndef HEADER_java_util_concurrent_Callable
#define HEADER_java_util_concurrent_Callable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_Callable {
	java_lang_Object parent;
} java_util_concurrent_Callable;

extern Class class_java_util_concurrent_Callable;


#define INDEX_java_util_concurrent_Callable_call_R_java_lang_Object 0
typedef jobject (*func_java_util_concurrent_Callable_call_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_java_util_concurrent_Callable(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_Callable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
