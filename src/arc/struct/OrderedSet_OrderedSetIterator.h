#ifndef HEADER_arc_struct_OrderedSet$OrderedSetIterator
#define HEADER_arc_struct_OrderedSet$OrderedSetIterator

#include "Clearwing.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_OrderedSet$OrderedSetIterator {
	arc_struct_ObjectSet$ObjectSetIterator parent;
	jref F_items;
} arc_struct_OrderedSet$OrderedSetIterator;

extern Class class_arc_struct_OrderedSet$OrderedSetIterator;


#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_hashCode_R_int 0
typedef jint (*func_arc_struct_OrderedSet$OrderedSetIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_OrderedSet$OrderedSetIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_OrderedSet$OrderedSetIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_OrderedSet$OrderedSetIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_OrderedSet$OrderedSetIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_finalize 5
typedef void (*func_arc_struct_OrderedSet$OrderedSetIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_notify 6
typedef void (*func_arc_struct_OrderedSet$OrderedSetIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_notifyAll 7
typedef void (*func_arc_struct_OrderedSet$OrderedSetIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_wait 8
typedef void (*func_arc_struct_OrderedSet$OrderedSetIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_wait_long 9
typedef void (*func_arc_struct_OrderedSet$OrderedSetIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_wait_long_int 10
typedef void (*func_arc_struct_OrderedSet$OrderedSetIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_OrderedSet$OrderedSetIterator_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_OrderedSet$OrderedSetIterator_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_OrderedSet$OrderedSetIterator_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_hasNext_R_boolean 14
typedef jbool (*func_arc_struct_OrderedSet$OrderedSetIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_next_R_java_lang_Object 15
typedef jobject (*func_arc_struct_OrderedSet$OrderedSetIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_remove 16
typedef void (*func_arc_struct_OrderedSet$OrderedSetIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_forEachRemaining_java_util_function_Consumer 17
typedef void (*func_arc_struct_OrderedSet$OrderedSetIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_reset 18
typedef void (*func_arc_struct_OrderedSet$OrderedSetIterator_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_findNextIndex 19
typedef void (*func_arc_struct_OrderedSet$OrderedSetIterator_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_iterator_R_arc_struct_ObjectSet$ObjectSetIterator 20
typedef jobject (*func_arc_struct_OrderedSet$OrderedSetIterator_iterator_R_arc_struct_ObjectSet$ObjectSetIterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_toSeq_arc_struct_Seq_R_arc_struct_Seq 21
typedef jobject (*func_arc_struct_OrderedSet$OrderedSetIterator_toSeq_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedSet$OrderedSetIterator_toSeq_R_arc_struct_Seq 22
typedef jobject (*func_arc_struct_OrderedSet$OrderedSetIterator_toSeq_R_arc_struct_Seq)(jcontext ctx, jobject self);

void mark_arc_struct_OrderedSet$OrderedSetIterator(jobject object, jint mark, jint depth);
void clinit_arc_struct_OrderedSet$OrderedSetIterator(jcontext ctx);
void init_arc_struct_OrderedSet$OrderedSetIterator_arc_struct_OrderedSet(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_OrderedSet$OrderedSetIterator_reset(jcontext ctx, jobject self);
jobject M_arc_struct_OrderedSet$OrderedSetIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
void M_arc_struct_OrderedSet$OrderedSetIterator_remove(jcontext ctx, jobject self);
jobject M_arc_struct_OrderedSet$OrderedSetIterator_toSeq_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_OrderedSet$OrderedSetIterator_toSeq_R_arc_struct_Seq(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
