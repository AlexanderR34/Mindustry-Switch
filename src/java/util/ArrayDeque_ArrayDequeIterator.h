#ifndef HEADER_java_util_ArrayDeque$ArrayDequeIterator
#define HEADER_java_util_ArrayDeque$ArrayDequeIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_ArrayDeque$ArrayDequeIterator {
	java_lang_Object parent;
	jint F_pos;
	jint F_expectedModCount;
	jbool F_canRemove;
	jref F_this$0;
} java_util_ArrayDeque$ArrayDequeIterator;

extern Class class_java_util_ArrayDeque$ArrayDequeIterator;


#define VTABLE_java_util_ArrayDeque$ArrayDequeIterator_hashCode_R_int 0
typedef jint (*func_java_util_ArrayDeque$ArrayDequeIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ArrayDequeIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_ArrayDeque$ArrayDequeIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque$ArrayDequeIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_ArrayDeque$ArrayDequeIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ArrayDequeIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_ArrayDeque$ArrayDequeIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ArrayDequeIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_ArrayDeque$ArrayDequeIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ArrayDequeIterator_finalize 5
typedef void (*func_java_util_ArrayDeque$ArrayDequeIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ArrayDequeIterator_notify 6
typedef void (*func_java_util_ArrayDeque$ArrayDequeIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ArrayDequeIterator_notifyAll 7
typedef void (*func_java_util_ArrayDeque$ArrayDequeIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ArrayDequeIterator_wait 8
typedef void (*func_java_util_ArrayDeque$ArrayDequeIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ArrayDequeIterator_wait_long 9
typedef void (*func_java_util_ArrayDeque$ArrayDequeIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_ArrayDeque$ArrayDequeIterator_wait_long_int 10
typedef void (*func_java_util_ArrayDeque$ArrayDequeIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_ArrayDeque$ArrayDequeIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_ArrayDeque$ArrayDequeIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ArrayDequeIterator_next_R_java_lang_Object 12
typedef jobject (*func_java_util_ArrayDeque$ArrayDequeIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ArrayDequeIterator_remove 13
typedef void (*func_java_util_ArrayDeque$ArrayDequeIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$ArrayDequeIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_java_util_ArrayDeque$ArrayDequeIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque$ArrayDequeIterator_hasNextInternal_R_boolean 15
typedef jbool (*func_java_util_ArrayDeque$ArrayDequeIterator_hasNextInternal_R_boolean)(jcontext ctx, jobject self);

void mark_java_util_ArrayDeque$ArrayDequeIterator(jobject object, jint mark, jint depth);
void clinit_java_util_ArrayDeque$ArrayDequeIterator(jcontext ctx);
void init_java_util_ArrayDeque$ArrayDequeIterator_java_util_ArrayDeque(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_ArrayDeque$ArrayDequeIterator_hasNext_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_ArrayDeque$ArrayDequeIterator_hasNextInternal_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_ArrayDeque$ArrayDequeIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
void M_java_util_ArrayDeque$ArrayDequeIterator_remove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
