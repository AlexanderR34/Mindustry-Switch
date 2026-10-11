#ifndef HEADER_java_util_Queue
#define HEADER_java_util_Queue

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Collection.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Queue {
	java_lang_Object parent;
} java_util_Queue;

extern Class class_java_util_Queue;


#define INDEX_java_util_Queue_offer_java_lang_Object_R_boolean 0
typedef jbool (*func_java_util_Queue_offer_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Queue_poll_R_java_lang_Object 1
typedef jobject (*func_java_util_Queue_poll_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_Queue_remove_R_java_lang_Object 2
typedef jobject (*func_java_util_Queue_remove_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_Queue_peek_R_java_lang_Object 3
typedef jobject (*func_java_util_Queue_peek_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_Queue_element_R_java_lang_Object 4
typedef jobject (*func_java_util_Queue_element_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_java_util_Queue(jobject object, jint mark, jint depth);
void clinit_java_util_Queue(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
