#ifndef HEADER_java_util_Spliterators$LongArraySpliterator
#define HEADER_java_util_Spliterators$LongArraySpliterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Spliterator_OfLong.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Spliterators$LongArraySpliterator {
	java_lang_Object parent;
	jref F_array;
	jint F_index;
	jint F_fence;
	jint F_characteristics;
} java_util_Spliterators$LongArraySpliterator;

extern Class class_java_util_Spliterators$LongArraySpliterator;


#define VTABLE_java_util_Spliterators$LongArraySpliterator_hashCode_R_int 0
typedef jint (*func_java_util_Spliterators$LongArraySpliterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Spliterators$LongArraySpliterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Spliterators$LongArraySpliterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Spliterators$LongArraySpliterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Spliterators$LongArraySpliterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_finalize 5
typedef void (*func_java_util_Spliterators$LongArraySpliterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_notify 6
typedef void (*func_java_util_Spliterators$LongArraySpliterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_notifyAll 7
typedef void (*func_java_util_Spliterators$LongArraySpliterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_wait 8
typedef void (*func_java_util_Spliterators$LongArraySpliterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_wait_long 9
typedef void (*func_java_util_Spliterators$LongArraySpliterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_wait_long_int 10
typedef void (*func_java_util_Spliterators$LongArraySpliterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_util_function_Consumer_R_boolean 11
typedef jbool (*func_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_util_function_Consumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_util_function_Consumer 12
typedef void (*func_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator 13
typedef jobject (*func_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_estimateSize_R_long 14
typedef jlong (*func_java_util_Spliterators$LongArraySpliterator_estimateSize_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_getExactSizeIfKnown_R_long 15
typedef jlong (*func_java_util_Spliterators$LongArraySpliterator_getExactSizeIfKnown_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_characteristics_R_int 16
typedef jint (*func_java_util_Spliterators$LongArraySpliterator_characteristics_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_hasCharacteristics_int_R_boolean 17
typedef jbool (*func_java_util_Spliterators$LongArraySpliterator_hasCharacteristics_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_getComparator_R_java_util_Comparator 18
typedef jobject (*func_java_util_Spliterators$LongArraySpliterator_getComparator_R_java_util_Comparator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfPrimitive 19
typedef jobject (*func_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfPrimitive)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_lang_Object 21
typedef void (*func_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfLong 22
typedef jobject (*func_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfLong)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_util_function_LongConsumer_R_boolean 23
typedef jbool (*func_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_util_function_LongConsumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_util_function_LongConsumer 24
typedef void (*func_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_util_function_LongConsumer)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Spliterators$LongArraySpliterator(jobject object, jint mark, jint depth);
void clinit_java_util_Spliterators$LongArraySpliterator(jcontext ctx);
void init_java_util_Spliterators$LongArraySpliterator_Array1_long_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_java_util_Spliterators$LongArraySpliterator_Array1_long_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
jobject M_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfLong(jcontext ctx, jobject self);
void M_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_util_function_LongConsumer(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_util_function_LongConsumer_R_boolean(jcontext ctx, jobject self, jobject param0);
jlong M_java_util_Spliterators$LongArraySpliterator_estimateSize_R_long(jcontext ctx, jobject self);
jint M_java_util_Spliterators$LongArraySpliterator_characteristics_R_int(jcontext ctx, jobject self);
jobject M_java_util_Spliterators$LongArraySpliterator_getComparator_R_java_util_Comparator(jcontext ctx, jobject self);
void M_java_util_Spliterators$LongArraySpliterator_forEachRemaining_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Spliterators$LongArraySpliterator_tryAdvance_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator$OfPrimitive(jcontext ctx, jobject self);
jobject M_java_util_Spliterators$LongArraySpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
