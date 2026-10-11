#ifndef HEADER_java_util_Spliterators$EmptySpliterator$OfDouble
#define HEADER_java_util_Spliterators$EmptySpliterator$OfDouble

#include "Clearwing.h"
#include "java/util/Spliterators_EmptySpliterator.h"
#include "java/util/Spliterator_OfDouble.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Spliterators$EmptySpliterator$OfDouble {
	java_util_Spliterators$EmptySpliterator parent;
} java_util_Spliterators$EmptySpliterator$OfDouble;

extern Class class_java_util_Spliterators$EmptySpliterator$OfDouble;


#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_hashCode_R_int 0
typedef jint (*func_java_util_Spliterators$EmptySpliterator$OfDouble_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Spliterators$EmptySpliterator$OfDouble_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfDouble_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfDouble_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfDouble_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_finalize 5
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfDouble_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_notify 6
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfDouble_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_notifyAll 7
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfDouble_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_wait 8
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfDouble_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_wait_long 9
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfDouble_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_wait_long_int 10
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfDouble_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_trySplit_R_java_util_Spliterator 11
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfDouble_trySplit_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_tryAdvance_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_Spliterators$EmptySpliterator$OfDouble_tryAdvance_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_forEachRemaining_java_lang_Object 13
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfDouble_forEachRemaining_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_estimateSize_R_long 14
typedef jlong (*func_java_util_Spliterators$EmptySpliterator$OfDouble_estimateSize_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_characteristics_R_int 15
typedef jint (*func_java_util_Spliterators$EmptySpliterator$OfDouble_characteristics_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_tryAdvance_java_util_function_Consumer_R_boolean 16
typedef jbool (*func_java_util_Spliterators$EmptySpliterator$OfDouble_tryAdvance_java_util_function_Consumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_forEachRemaining_java_util_function_Consumer 17
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfDouble_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_getExactSizeIfKnown_R_long 18
typedef jlong (*func_java_util_Spliterators$EmptySpliterator$OfDouble_getExactSizeIfKnown_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_hasCharacteristics_int_R_boolean 19
typedef jbool (*func_java_util_Spliterators$EmptySpliterator$OfDouble_hasCharacteristics_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_getComparator_R_java_util_Comparator 20
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfDouble_getComparator_R_java_util_Comparator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_trySplit_R_java_util_Spliterator$OfPrimitive 21
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfDouble_trySplit_R_java_util_Spliterator$OfPrimitive)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_trySplit_R_java_util_Spliterator$OfDouble 22
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfDouble_trySplit_R_java_util_Spliterator$OfDouble)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_tryAdvance_java_util_function_DoubleConsumer_R_boolean 23
typedef jbool (*func_java_util_Spliterators$EmptySpliterator$OfDouble_tryAdvance_java_util_function_DoubleConsumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer 24
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Spliterators$EmptySpliterator$OfDouble(jobject object, jint mark, jint depth);
void clinit_java_util_Spliterators$EmptySpliterator$OfDouble(jcontext ctx);
void init_java_util_Spliterators$EmptySpliterator$OfDouble(jcontext ctx, jobject self);
void M_java_util_Spliterators$EmptySpliterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Spliterators$EmptySpliterator$OfDouble_tryAdvance_java_util_function_DoubleConsumer_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Spliterators$EmptySpliterator$OfDouble_trySplit_R_java_util_Spliterator$OfDouble(jcontext ctx, jobject self);
jobject M_java_util_Spliterators$EmptySpliterator$OfDouble_trySplit_R_java_util_Spliterator$OfPrimitive(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
