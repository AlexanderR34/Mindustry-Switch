#ifndef HEADER_java_util_concurrent_ScheduledFuture
#define HEADER_java_util_concurrent_ScheduledFuture

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/Delayed.h"
#include "java/util/concurrent/Future.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_ScheduledFuture {
	java_lang_Object parent;
} java_util_concurrent_ScheduledFuture;

extern Class class_java_util_concurrent_ScheduledFuture;



void mark_java_util_concurrent_ScheduledFuture(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_ScheduledFuture(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
