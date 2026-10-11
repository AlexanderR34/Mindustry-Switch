#ifndef HEADER_java_util_ArrayDeque$ReverseArrayDequeIterator
#define HEADER_java_util_ArrayDeque$ReverseArrayDequeIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_ArrayDeque$ReverseArrayDequeIterator {
	java_lang_Object parent;
	jint F_pos;
	jint F_expectedModCount;
	jbool F_canRemove;
	jref F_this$0;
} java_util_ArrayDeque$ReverseArrayDequeIterator;

extern Class class_java_util_ArrayDeque$ReverseArrayDequeIterator;


#define VTABLE_java_util_ArrayDeque$ReverseArrayDequeIterator_hashCode_R_int 0
typedef jint (*func_java_util_ArrayDeque$ReverseArrayDequeIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ReverseArrayDequeIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_ArrayDeque$ReverseArrayDequeIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque$ReverseArrayDequeIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_ArrayDeque$ReverseArrayDequeIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ReverseArrayDequeIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_ArrayDeque$ReverseArrayDequeIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ReverseArrayDequeIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_ArrayDeque$ReverseArrayDequeIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ReverseArrayDequeIterator_finalize 5
typedef void (*func_java_util_ArrayDeque$ReverseArrayDequeIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ReverseArrayDequeIterator_notify 6
typedef void (*func_java_util_ArrayDeque$ReverseArrayDequeIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ReverseArrayDequeIterator_notifyAll 7
typedef void (*func_java_util_ArrayDeque$ReverseArrayDequeIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ReverseArrayDequeIterator_wait 8
typedef void (*func_java_util_ArrayDeque$ReverseArrayDequeIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ReverseArrayDequeIterator_wait_long 9
typedef void (*func_java_util_ArrayDeque$ReverseArrayDequeIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_ArrayDeque$ReverseArrayDequeIterator_wait_long_int 10
typedef void (*func_java_util_ArrayDeque$ReverseArrayDequeIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_ArrayDeque$ReverseArrayDequeIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_ArrayDeque$ReverseArrayDequeIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ReverseArrayDequeIterator_next_R_java_lang_Object 12
typedef jobject (*func_java_util_ArrayDeque$ReverseArrayDequeIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ReverseArrayDequeIterator_remove 13
typedef void (*func_java_util_ArrayDeque$ReverseArrayDequeIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ReverseArrayDequeIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_java_util_ArrayDeque$ReverseArrayDequeIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque$ReverseArrayDequeIterator_hasNextInternal_R_boolean 15
typedef jbool (*func_java_util_ArrayDeque$ReverseArrayDequeIterator_hasNextInternal_R_boolean)(jcontext ctx, jobject self);

void mark_java_util_ArrayDeque$ReverseArrayDequeIterator(jobject object, jint mark, jint depth);
void clinit_java_util_ArrayDeque$ReverseArrayDequeIterator(jcontext ctx);
void init_java_util_ArrayDeque$ReverseArrayDequeIterator_java_util_ArrayDeque(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_ArrayDeque$ReverseArrayDequeIterator_hasNext_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_ArrayDeque$ReverseArrayDequeIterator_hasNextInternal_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque$ReverseArrayDequeIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
void M_java_util_ArrayDeque$ReverseArrayDequeIterator_remove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
