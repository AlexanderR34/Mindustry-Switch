#ifndef HEADER_java_util_concurrent_BlockingQueue
#define HEADER_java_util_concurrent_BlockingQueue

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Queue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_BlockingQueue {
	java_lang_Object parent;
} java_util_concurrent_BlockingQueue;

extern Class class_java_util_concurrent_BlockingQueue;


#define INDEX_java_util_concurrent_BlockingQueue_add_java_lang_Object_R_boolean 0
typedef jbool (*func_java_util_concurrent_BlockingQueue_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_concurrent_BlockingQueue_offer_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_BlockingQueue_offer_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_concurrent_BlockingQueue_put_java_lang_Object 2
typedef void (*func_java_util_concurrent_BlockingQueue_put_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_concurrent_BlockingQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean 3
typedef jbool (*func_java_util_concurrent_BlockingQueue_offer_java_lang_Object_long_java_util_concurrent_TimeUnit_R_boolean)(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2);
#define INDEX_java_util_concurrent_BlockingQueue_take_R_java_lang_Object 4
typedef jobject (*func_java_util_concurrent_BlockingQueue_take_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_concurrent_BlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object 5
typedef jobject (*func_java_util_concurrent_BlockingQueue_poll_long_java_util_concurrent_TimeUnit_R_java_lang_Object)(jcontext ctx, jobject self, jlong param0, jobject param1);
#define INDEX_java_util_concurrent_BlockingQueue_remainingCapacity_R_int 6
typedef jint (*func_java_util_concurrent_BlockingQueue_remainingCapacity_R_int)(jcontext ctx, jobject self);
#define INDEX_java_util_concurrent_BlockingQueue_remove_java_lang_Object_R_boolean 7
typedef jbool (*func_java_util_concurrent_BlockingQueue_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_concurrent_BlockingQueue_contains_java_lang_Object_R_boolean 8
typedef jbool (*func_java_util_concurrent_BlockingQueue_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_concurrent_BlockingQueue_drainTo_java_util_Collection_R_int 9
typedef jint (*func_java_util_concurrent_BlockingQueue_drainTo_java_util_Collection_R_int)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_concurrent_BlockingQueue_drainTo_java_util_Collection_int_R_int 10
typedef jint (*func_java_util_concurrent_BlockingQueue_drainTo_java_util_Collection_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_java_util_concurrent_BlockingQueue(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_BlockingQueue(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
