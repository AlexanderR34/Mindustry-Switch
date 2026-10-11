#ifndef HEADER_java_util_Spliterators$IteratorSpliterator
#define HEADER_java_util_Spliterators$IteratorSpliterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Spliterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Spliterators$IteratorSpliterator {
	java_lang_Object parent;
	jref F_collection;
	jref F_it;
	jint F_characteristics;
	jlong F_est;
	jint F_batch;
} java_util_Spliterators$IteratorSpliterator;

extern Class class_java_util_Spliterators$IteratorSpliterator;

extern jint SF_java_util_Spliterators$IteratorSpliterator_BATCH_UNIT;
extern jint SF_java_util_Spliterators$IteratorSpliterator_MAX_BATCH;

#define VTABLE_java_util_Spliterators$IteratorSpliterator_hashCode_R_int 0
typedef jint (*func_java_util_Spliterators$IteratorSpliterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Spliterators$IteratorSpliterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Spliterators$IteratorSpliterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Spliterators$IteratorSpliterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Spliterators$IteratorSpliterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_finalize 5
typedef void (*func_java_util_Spliterators$IteratorSpliterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_notify 6
typedef void (*func_java_util_Spliterators$IteratorSpliterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_notifyAll 7
typedef void (*func_java_util_Spliterators$IteratorSpliterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_wait 8
typedef void (*func_java_util_Spliterators$IteratorSpliterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_wait_long 9
typedef void (*func_java_util_Spliterators$IteratorSpliterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_wait_long_int 10
typedef void (*func_java_util_Spliterators$IteratorSpliterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_tryAdvance_java_util_function_Consumer_R_boolean 11
typedef jbool (*func_java_util_Spliterators$IteratorSpliterator_tryAdvance_java_util_function_Consumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_forEachRemaining_java_util_function_Consumer 12
typedef void (*func_java_util_Spliterators$IteratorSpliterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_trySplit_R_java_util_Spliterator 13
typedef jobject (*func_java_util_Spliterators$IteratorSpliterator_trySplit_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_estimateSize_R_long 14
typedef jlong (*func_java_util_Spliterators$IteratorSpliterator_estimateSize_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_getExactSizeIfKnown_R_long 15
typedef jlong (*func_java_util_Spliterators$IteratorSpliterator_getExactSizeIfKnown_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_characteristics_R_int 16
typedef jint (*func_java_util_Spliterators$IteratorSpliterator_characteristics_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_hasCharacteristics_int_R_boolean 17
typedef jbool (*func_java_util_Spliterators$IteratorSpliterator_hasCharacteristics_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Spliterators$IteratorSpliterator_getComparator_R_java_util_Comparator 18
typedef jobject (*func_java_util_Spliterators$IteratorSpliterator_getComparator_R_java_util_Comparator)(jcontext ctx, jobject self);

void mark_java_util_Spliterators$IteratorSpliterator(jobject object, jint mark, jint depth);
void clinit_java_util_Spliterators$IteratorSpliterator(jcontext ctx);
void init_java_util_Spliterators$IteratorSpliterator_java_util_Collection_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_java_util_Spliterators$IteratorSpliterator_java_util_Iterator_long_int(jcontext ctx, jobject self, jobject param0, jlong param1, jint param2);
void init_java_util_Spliterators$IteratorSpliterator_java_util_Iterator_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_util_Spliterators$IteratorSpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self);
void M_java_util_Spliterators$IteratorSpliterator_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Spliterators$IteratorSpliterator_tryAdvance_java_util_function_Consumer_R_boolean(jcontext ctx, jobject self, jobject param0);
jlong M_java_util_Spliterators$IteratorSpliterator_estimateSize_R_long(jcontext ctx, jobject self);
jint M_java_util_Spliterators$IteratorSpliterator_characteristics_R_int(jcontext ctx, jobject self);
jobject M_java_util_Spliterators$IteratorSpliterator_getComparator_R_java_util_Comparator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
