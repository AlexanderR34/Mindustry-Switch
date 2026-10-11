#ifndef HEADER_java_util_Spliterators$EmptySpliterator$OfInt
#define HEADER_java_util_Spliterators$EmptySpliterator$OfInt

#include "Clearwing.h"
#include "java/util/Spliterators_EmptySpliterator.h"
#include "java/util/Spliterator_OfInt.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Spliterators$EmptySpliterator$OfInt {
	java_util_Spliterators$EmptySpliterator parent;
} java_util_Spliterators$EmptySpliterator$OfInt;

extern Class class_java_util_Spliterators$EmptySpliterator$OfInt;


#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_hashCode_R_int 0
typedef jint (*func_java_util_Spliterators$EmptySpliterator$OfInt_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Spliterators$EmptySpliterator$OfInt_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfInt_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfInt_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfInt_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_finalize 5
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfInt_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_notify 6
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfInt_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_notifyAll 7
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfInt_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_wait 8
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfInt_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_wait_long 9
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfInt_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_wait_long_int 10
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfInt_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_trySplit_R_java_util_Spliterator 11
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfInt_trySplit_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_tryAdvance_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_Spliterators$EmptySpliterator$OfInt_tryAdvance_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_forEachRemaining_java_lang_Object 13
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfInt_forEachRemaining_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_estimateSize_R_long 14
typedef jlong (*func_java_util_Spliterators$EmptySpliterator$OfInt_estimateSize_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_characteristics_R_int 15
typedef jint (*func_java_util_Spliterators$EmptySpliterator$OfInt_characteristics_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_tryAdvance_java_util_function_Consumer_R_boolean 16
typedef jbool (*func_java_util_Spliterators$EmptySpliterator$OfInt_tryAdvance_java_util_function_Consumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_forEachRemaining_java_util_function_Consumer 17
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfInt_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_getExactSizeIfKnown_R_long 18
typedef jlong (*func_java_util_Spliterators$EmptySpliterator$OfInt_getExactSizeIfKnown_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_hasCharacteristics_int_R_boolean 19
typedef jbool (*func_java_util_Spliterators$EmptySpliterator$OfInt_hasCharacteristics_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_getComparator_R_java_util_Comparator 20
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfInt_getComparator_R_java_util_Comparator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_trySplit_R_java_util_Spliterator$OfPrimitive 21
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfInt_trySplit_R_java_util_Spliterator$OfPrimitive)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_trySplit_R_java_util_Spliterator$OfInt 22
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfInt_trySplit_R_java_util_Spliterator$OfInt)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_tryAdvance_java_util_function_IntConsumer_R_boolean 23
typedef jbool (*func_java_util_Spliterators$EmptySpliterator$OfInt_tryAdvance_java_util_function_IntConsumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfInt_forEachRemaining_java_util_function_IntConsumer 24
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfInt_forEachRemaining_java_util_function_IntConsumer)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Spliterators$EmptySpliterator$OfInt(jobject object, jint mark, jint depth);
void clinit_java_util_Spliterators$EmptySpliterator$OfInt(jcontext ctx);
void init_java_util_Spliterators$EmptySpliterator$OfInt(jcontext ctx, jobject self);
void M_java_util_Spliterators$EmptySpliterator$OfInt_forEachRemaining_java_util_function_IntConsumer(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Spliterators$EmptySpliterator$OfInt_tryAdvance_java_util_function_IntConsumer_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Spliterators$EmptySpliterator$OfInt_trySplit_R_java_util_Spliterator$OfInt(jcontext ctx, jobject self);
jobject M_java_util_Spliterators$EmptySpliterator$OfInt_trySplit_R_java_util_Spliterator$OfPrimitive(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
