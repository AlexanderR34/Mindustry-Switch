#ifndef HEADER_java_util_Deque
#define HEADER_java_util_Deque

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Queue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Deque {
	java_lang_Object parent;
} java_util_Deque;

extern Class class_java_util_Deque;


#define INDEX_java_util_Deque_addFirst_java_lang_Object 0
typedef void (*func_java_util_Deque_addFirst_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Deque_addLast_java_lang_Object 1
typedef void (*func_java_util_Deque_addLast_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Deque_offerFirst_java_lang_Object_R_boolean 2
typedef jbool (*func_java_util_Deque_offerFirst_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Deque_offerLast_java_lang_Object_R_boolean 3
typedef jbool (*func_java_util_Deque_offerLast_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Deque_removeFirst_R_java_lang_Object 4
typedef jobject (*func_java_util_Deque_removeFirst_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_Deque_removeLast_R_java_lang_Object 5
typedef jobject (*func_java_util_Deque_removeLast_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_Deque_pollFirst_R_java_lang_Object 6
typedef jobject (*func_java_util_Deque_pollFirst_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_Deque_pollLast_R_java_lang_Object 7
typedef jobject (*func_java_util_Deque_pollLast_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_Deque_getFirst_R_java_lang_Object 8
typedef jobject (*func_java_util_Deque_getFirst_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_Deque_getLast_R_java_lang_Object 9
typedef jobject (*func_java_util_Deque_getLast_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_Deque_peekFirst_R_java_lang_Object 10
typedef jobject (*func_java_util_Deque_peekFirst_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_Deque_peekLast_R_java_lang_Object 11
typedef jobject (*func_java_util_Deque_peekLast_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_Deque_removeFirstOccurrence_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_Deque_removeFirstOccurrence_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Deque_removeLastOccurrence_java_lang_Object_R_boolean 13
typedef jbool (*func_java_util_Deque_removeLastOccurrence_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Deque_push_java_lang_Object 14
typedef void (*func_java_util_Deque_push_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Deque_pop_R_java_lang_Object 15
typedef jobject (*func_java_util_Deque_pop_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_Deque_descendingIterator_R_java_util_Iterator 16
typedef jobject (*func_java_util_Deque_descendingIterator_R_java_util_Iterator)(jcontext ctx, jobject self);

void mark_java_util_Deque(jobject object, jint mark, jint depth);
void clinit_java_util_Deque(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
