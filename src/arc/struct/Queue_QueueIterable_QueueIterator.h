#ifndef HEADER_arc_struct_Queue$QueueIterable$QueueIterator
#define HEADER_arc_struct_Queue$QueueIterable$QueueIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_Queue$QueueIterable$QueueIterator {
	java_lang_Object parent;
	jint F_index;
	jbool F_done;
	jref F_this$0;
} arc_struct_Queue$QueueIterable$QueueIterator;

extern Class class_arc_struct_Queue$QueueIterable$QueueIterator;


#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_hashCode_R_int 0
typedef jint (*func_arc_struct_Queue$QueueIterable$QueueIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_Queue$QueueIterable$QueueIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_Queue$QueueIterable$QueueIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_Queue$QueueIterable$QueueIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_Queue$QueueIterable$QueueIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_finalize 5
typedef void (*func_arc_struct_Queue$QueueIterable$QueueIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_notify 6
typedef void (*func_arc_struct_Queue$QueueIterable$QueueIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_notifyAll 7
typedef void (*func_arc_struct_Queue$QueueIterable$QueueIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_wait 8
typedef void (*func_arc_struct_Queue$QueueIterable$QueueIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_wait_long 9
typedef void (*func_arc_struct_Queue$QueueIterable$QueueIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_wait_long_int 10
typedef void (*func_arc_struct_Queue$QueueIterable$QueueIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_hasNext_R_boolean 11
typedef jbool (*func_arc_struct_Queue$QueueIterable$QueueIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_next_R_java_lang_Object 12
typedef jobject (*func_arc_struct_Queue$QueueIterable$QueueIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_remove 13
typedef void (*func_arc_struct_Queue$QueueIterable$QueueIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_arc_struct_Queue$QueueIterable$QueueIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_iterator_R_java_util_Iterator 15
typedef jobject (*func_arc_struct_Queue$QueueIterable$QueueIterator_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_forEach_java_util_function_Consumer 16
typedef void (*func_arc_struct_Queue$QueueIterable$QueueIterator_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_spliterator_R_java_util_Spliterator 17
typedef jobject (*func_arc_struct_Queue$QueueIterable$QueueIterator_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Queue$QueueIterable$QueueIterator_reset 18
typedef void (*func_arc_struct_Queue$QueueIterable$QueueIterator_reset)(jcontext ctx, jobject self);

void mark_arc_struct_Queue$QueueIterable$QueueIterator(jobject object, jint mark, jint depth);
void clinit_arc_struct_Queue$QueueIterable$QueueIterator(jcontext ctx);
void init_arc_struct_Queue$QueueIterable$QueueIterator_arc_struct_Queue$QueueIterable(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Queue$QueueIterable$QueueIterator_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_arc_struct_Queue$QueueIterable$QueueIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
void M_arc_struct_Queue$QueueIterable$QueueIterator_remove(jcontext ctx, jobject self);
void M_arc_struct_Queue$QueueIterable$QueueIterator_reset(jcontext ctx, jobject self);
jobject M_arc_struct_Queue$QueueIterable$QueueIterator_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
