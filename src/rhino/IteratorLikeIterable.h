#ifndef HEADER_rhino_IteratorLikeIterable
#define HEADER_rhino_IteratorLikeIterable

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"
#include "java/io/Closeable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_IteratorLikeIterable {
	java_lang_Object parent;
	jref F_cx;
	jref F_scope;
	jref F_next;
	jref F_returnFunc;
	jref F_iterator;
	jbool F_closed;
} rhino_IteratorLikeIterable;

extern Class class_rhino_IteratorLikeIterable;


#define VTABLE_rhino_IteratorLikeIterable_hashCode_R_int 0
typedef jint (*func_rhino_IteratorLikeIterable_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_IteratorLikeIterable_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_IteratorLikeIterable_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IteratorLikeIterable_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_IteratorLikeIterable_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_IteratorLikeIterable_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_IteratorLikeIterable_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_IteratorLikeIterable_toString_R_java_lang_String 4
typedef jobject (*func_rhino_IteratorLikeIterable_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_IteratorLikeIterable_finalize 5
typedef void (*func_rhino_IteratorLikeIterable_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_IteratorLikeIterable_notify 6
typedef void (*func_rhino_IteratorLikeIterable_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_IteratorLikeIterable_notifyAll 7
typedef void (*func_rhino_IteratorLikeIterable_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_IteratorLikeIterable_wait 8
typedef void (*func_rhino_IteratorLikeIterable_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_IteratorLikeIterable_wait_long 9
typedef void (*func_rhino_IteratorLikeIterable_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_IteratorLikeIterable_wait_long_int 10
typedef void (*func_rhino_IteratorLikeIterable_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_IteratorLikeIterable_iterator_R_java_util_Iterator 11
typedef jobject (*func_rhino_IteratorLikeIterable_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_IteratorLikeIterable_forEach_java_util_function_Consumer 12
typedef void (*func_rhino_IteratorLikeIterable_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_IteratorLikeIterable_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_rhino_IteratorLikeIterable_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_IteratorLikeIterable_close 14
typedef void (*func_rhino_IteratorLikeIterable_close)(jcontext ctx, jobject self);
#define VTABLE_rhino_IteratorLikeIterable_iterator_R_rhino_IteratorLikeIterable$Itr 15
typedef jobject (*func_rhino_IteratorLikeIterable_iterator_R_rhino_IteratorLikeIterable$Itr)(jcontext ctx, jobject self);

void mark_rhino_IteratorLikeIterable(jobject object, jint mark, jint depth);
void clinit_rhino_IteratorLikeIterable(jcontext ctx);
void init_rhino_IteratorLikeIterable_rhino_Context_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_rhino_IteratorLikeIterable_close(jcontext ctx, jobject self);
jobject M_rhino_IteratorLikeIterable_iterator_R_rhino_IteratorLikeIterable$Itr(jcontext ctx, jobject self);
jobject M_rhino_IteratorLikeIterable_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject SM_rhino_IteratorLikeIterable_access$000_rhino_IteratorLikeIterable_R_rhino_Context(jcontext ctx, jobject param0);
jobject SM_rhino_IteratorLikeIterable_access$100_rhino_IteratorLikeIterable_R_rhino_Scriptable(jcontext ctx, jobject param0);
jobject SM_rhino_IteratorLikeIterable_access$200_rhino_IteratorLikeIterable_R_rhino_Scriptable(jcontext ctx, jobject param0);
jobject SM_rhino_IteratorLikeIterable_access$300_rhino_IteratorLikeIterable_R_rhino_Callable(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
