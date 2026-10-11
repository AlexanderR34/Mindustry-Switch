#ifndef HEADER_java_util_concurrent_Delayed
#define HEADER_java_util_concurrent_Delayed

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_Delayed {
	java_lang_Object parent;
} java_util_concurrent_Delayed;

extern Class class_java_util_concurrent_Delayed;


#define INDEX_java_util_concurrent_Delayed_getDelay_java_util_concurrent_TimeUnit_R_long 0
typedef jlong (*func_java_util_concurrent_Delayed_getDelay_java_util_concurrent_TimeUnit_R_long)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_concurrent_Delayed(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_Delayed(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
