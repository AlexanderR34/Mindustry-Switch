#ifndef HEADER_java_util_concurrent_Future
#define HEADER_java_util_concurrent_Future

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_Future {
	java_lang_Object parent;
} java_util_concurrent_Future;

extern Class class_java_util_concurrent_Future;


#define INDEX_java_util_concurrent_Future_cancel_boolean_R_boolean 0
typedef jbool (*func_java_util_concurrent_Future_cancel_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_java_util_concurrent_Future_isCancelled_R_boolean 1
typedef jbool (*func_java_util_concurrent_Future_isCancelled_R_boolean)(jcontext ctx, jobject self);
#define INDEX_java_util_concurrent_Future_isDone_R_boolean 2
typedef jbool (*func_java_util_concurrent_Future_isDone_R_boolean)(jcontext ctx, jobject self);
#define INDEX_java_util_concurrent_Future_get_R_java_lang_Object 3
typedef jobject (*func_java_util_concurrent_Future_get_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_concurrent_Future_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object 4
typedef jobject (*func_java_util_concurrent_Future_get_long_java_util_concurrent_TimeUnit_R_java_lang_Object)(jcontext ctx, jobject self, jlong param0, jobject param1);

void mark_java_util_concurrent_Future(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_Future(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
