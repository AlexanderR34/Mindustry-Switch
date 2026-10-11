#ifndef HEADER_java_util_concurrent_RunnableScheduledFuture
#define HEADER_java_util_concurrent_RunnableScheduledFuture

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/RunnableFuture.h"
#include "java/util/concurrent/ScheduledFuture.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_RunnableScheduledFuture {
	java_lang_Object parent;
} java_util_concurrent_RunnableScheduledFuture;

extern Class class_java_util_concurrent_RunnableScheduledFuture;


#define INDEX_java_util_concurrent_RunnableScheduledFuture_isPeriodic_R_boolean 0
typedef jbool (*func_java_util_concurrent_RunnableScheduledFuture_isPeriodic_R_boolean)(jcontext ctx, jobject self);

void mark_java_util_concurrent_RunnableScheduledFuture(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_RunnableScheduledFuture(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
