#ifndef HEADER_arc_struct_ObjectSet$ObjectSetIterator
#define HEADER_arc_struct_ObjectSet$ObjectSetIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_ObjectSet$ObjectSetIterator {
	java_lang_Object parent;
	jbool F_hasNext;
	jref F_set;
	jint F_nextIndex;
	jint F_currentIndex;
	jbool F_valid;
} arc_struct_ObjectSet$ObjectSetIterator;

extern Class class_arc_struct_ObjectSet$ObjectSetIterator;


#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_hashCode_R_int 0
typedef jint (*func_arc_struct_ObjectSet$ObjectSetIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_ObjectSet$ObjectSetIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_ObjectSet$ObjectSetIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_ObjectSet$ObjectSetIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_ObjectSet$ObjectSetIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_finalize 5
typedef void (*func_arc_struct_ObjectSet$ObjectSetIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_notify 6
typedef void (*func_arc_struct_ObjectSet$ObjectSetIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_notifyAll 7
typedef void (*func_arc_struct_ObjectSet$ObjectSetIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_wait 8
typedef void (*func_arc_struct_ObjectSet$ObjectSetIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_wait_long 9
typedef void (*func_arc_struct_ObjectSet$ObjectSetIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_wait_long_int 10
typedef void (*func_arc_struct_ObjectSet$ObjectSetIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_ObjectSet$ObjectSetIterator_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_ObjectSet$ObjectSetIterator_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_ObjectSet$ObjectSetIterator_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_hasNext_R_boolean 14
typedef jbool (*func_arc_struct_ObjectSet$ObjectSetIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_next_R_java_lang_Object 15
typedef jobject (*func_arc_struct_ObjectSet$ObjectSetIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_remove 16
typedef void (*func_arc_struct_ObjectSet$ObjectSetIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_forEachRemaining_java_util_function_Consumer 17
typedef void (*func_arc_struct_ObjectSet$ObjectSetIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_reset 18
typedef void (*func_arc_struct_ObjectSet$ObjectSetIterator_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_findNextIndex 19
typedef void (*func_arc_struct_ObjectSet$ObjectSetIterator_findNextIndex)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_iterator_R_arc_struct_ObjectSet$ObjectSetIterator 20
typedef jobject (*func_arc_struct_ObjectSet$ObjectSetIterator_iterator_R_arc_struct_ObjectSet$ObjectSetIterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_toSeq_arc_struct_Seq_R_arc_struct_Seq 21
typedef jobject (*func_arc_struct_ObjectSet$ObjectSetIterator_toSeq_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectSet$ObjectSetIterator_toSeq_R_arc_struct_Seq 22
typedef jobject (*func_arc_struct_ObjectSet$ObjectSetIterator_toSeq_R_arc_struct_Seq)(jcontext ctx, jobject self);

void mark_arc_struct_ObjectSet$ObjectSetIterator(jobject object, jint mark, jint depth);
void clinit_arc_struct_ObjectSet$ObjectSetIterator(jcontext ctx);
void init_arc_struct_ObjectSet$ObjectSetIterator_arc_struct_ObjectSet(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectSet$ObjectSetIterator_reset(jcontext ctx, jobject self);
void M_arc_struct_ObjectSet$ObjectSetIterator_findNextIndex(jcontext ctx, jobject self);
void M_arc_struct_ObjectSet$ObjectSetIterator_remove(jcontext ctx, jobject self);
jbool M_arc_struct_ObjectSet$ObjectSetIterator_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectSet$ObjectSetIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectSet$ObjectSetIterator_iterator_R_arc_struct_ObjectSet$ObjectSetIterator(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectSet$ObjectSetIterator_toSeq_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectSet$ObjectSetIterator_toSeq_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectSet$ObjectSetIterator_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
