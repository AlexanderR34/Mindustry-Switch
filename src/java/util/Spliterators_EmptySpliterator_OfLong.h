#ifndef HEADER_java_util_Spliterators$EmptySpliterator$OfLong
#define HEADER_java_util_Spliterators$EmptySpliterator$OfLong

#include "Clearwing.h"
#include "java/util/Spliterators_EmptySpliterator.h"
#include "java/util/Spliterator_OfLong.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Spliterators$EmptySpliterator$OfLong {
	java_util_Spliterators$EmptySpliterator parent;
} java_util_Spliterators$EmptySpliterator$OfLong;

extern Class class_java_util_Spliterators$EmptySpliterator$OfLong;


#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_hashCode_R_int 0
typedef jint (*func_java_util_Spliterators$EmptySpliterator$OfLong_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Spliterators$EmptySpliterator$OfLong_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfLong_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfLong_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfLong_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_finalize 5
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfLong_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_notify 6
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfLong_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_notifyAll 7
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfLong_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_wait 8
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfLong_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_wait_long 9
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfLong_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_wait_long_int 10
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfLong_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_trySplit_R_java_util_Spliterator 11
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfLong_trySplit_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_tryAdvance_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_Spliterators$EmptySpliterator$OfLong_tryAdvance_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_forEachRemaining_java_lang_Object 13
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfLong_forEachRemaining_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_estimateSize_R_long 14
typedef jlong (*func_java_util_Spliterators$EmptySpliterator$OfLong_estimateSize_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_characteristics_R_int 15
typedef jint (*func_java_util_Spliterators$EmptySpliterator$OfLong_characteristics_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_tryAdvance_java_util_function_Consumer_R_boolean 16
typedef jbool (*func_java_util_Spliterators$EmptySpliterator$OfLong_tryAdvance_java_util_function_Consumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_forEachRemaining_java_util_function_Consumer 17
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfLong_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_getExactSizeIfKnown_R_long 18
typedef jlong (*func_java_util_Spliterators$EmptySpliterator$OfLong_getExactSizeIfKnown_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_hasCharacteristics_int_R_boolean 19
typedef jbool (*func_java_util_Spliterators$EmptySpliterator$OfLong_hasCharacteristics_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_getComparator_R_java_util_Comparator 20
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfLong_getComparator_R_java_util_Comparator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_trySplit_R_java_util_Spliterator$OfPrimitive 21
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfLong_trySplit_R_java_util_Spliterator$OfPrimitive)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_trySplit_R_java_util_Spliterator$OfLong 22
typedef jobject (*func_java_util_Spliterators$EmptySpliterator$OfLong_trySplit_R_java_util_Spliterator$OfLong)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_tryAdvance_java_util_function_LongConsumer_R_boolean 23
typedef jbool (*func_java_util_Spliterators$EmptySpliterator$OfLong_tryAdvance_java_util_function_LongConsumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator$OfLong_forEachRemaining_java_util_function_LongConsumer 24
typedef void (*func_java_util_Spliterators$EmptySpliterator$OfLong_forEachRemaining_java_util_function_LongConsumer)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Spliterators$EmptySpliterator$OfLong(jobject object, jint mark, jint depth);
void clinit_java_util_Spliterators$EmptySpliterator$OfLong(jcontext ctx);
void init_java_util_Spliterators$EmptySpliterator$OfLong(jcontext ctx, jobject self);
void M_java_util_Spliterators$EmptySpliterator$OfLong_forEachRemaining_java_util_function_LongConsumer(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Spliterators$EmptySpliterator$OfLong_tryAdvance_java_util_function_LongConsumer_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Spliterators$EmptySpliterator$OfLong_trySplit_R_java_util_Spliterator$OfLong(jcontext ctx, jobject self);
jobject M_java_util_Spliterators$EmptySpliterator$OfLong_trySplit_R_java_util_Spliterator$OfPrimitive(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
