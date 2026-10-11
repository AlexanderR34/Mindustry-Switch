#ifndef HEADER_java_util_Spliterators$ArraySpliterator
#define HEADER_java_util_Spliterators$ArraySpliterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Spliterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Spliterators$ArraySpliterator {
	java_lang_Object parent;
	jref F_array;
	jint F_index;
	jint F_fence;
	jint F_characteristics;
} java_util_Spliterators$ArraySpliterator;

extern Class class_java_util_Spliterators$ArraySpliterator;


#define VTABLE_java_util_Spliterators$ArraySpliterator_hashCode_R_int 0
typedef jint (*func_java_util_Spliterators$ArraySpliterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$ArraySpliterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Spliterators$ArraySpliterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$ArraySpliterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Spliterators$ArraySpliterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$ArraySpliterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Spliterators$ArraySpliterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$ArraySpliterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Spliterators$ArraySpliterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$ArraySpliterator_finalize 5
typedef void (*func_java_util_Spliterators$ArraySpliterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$ArraySpliterator_notify 6
typedef void (*func_java_util_Spliterators$ArraySpliterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$ArraySpliterator_notifyAll 7
typedef void (*func_java_util_Spliterators$ArraySpliterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$ArraySpliterator_wait 8
typedef void (*func_java_util_Spliterators$ArraySpliterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$ArraySpliterator_wait_long 9
typedef void (*func_java_util_Spliterators$ArraySpliterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Spliterators$ArraySpliterator_wait_long_int 10
typedef void (*func_java_util_Spliterators$ArraySpliterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Spliterators$ArraySpliterator_tryAdvance_java_util_function_Consumer_R_boolean 11
typedef jbool (*func_java_util_Spliterators$ArraySpliterator_tryAdvance_java_util_function_Consumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$ArraySpliterator_forEachRemaining_java_util_function_Consumer 12
typedef void (*func_java_util_Spliterators$ArraySpliterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$ArraySpliterator_trySplit_R_java_util_Spliterator 13
typedef jobject (*func_java_util_Spliterators$ArraySpliterator_trySplit_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$ArraySpliterator_estimateSize_R_long 14
typedef jlong (*func_java_util_Spliterators$ArraySpliterator_estimateSize_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$ArraySpliterator_getExactSizeIfKnown_R_long 15
typedef jlong (*func_java_util_Spliterators$ArraySpliterator_getExactSizeIfKnown_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$ArraySpliterator_characteristics_R_int 16
typedef jint (*func_java_util_Spliterators$ArraySpliterator_characteristics_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$ArraySpliterator_hasCharacteristics_int_R_boolean 17
typedef jbool (*func_java_util_Spliterators$ArraySpliterator_hasCharacteristics_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Spliterators$ArraySpliterator_getComparator_R_java_util_Comparator 18
typedef jobject (*func_java_util_Spliterators$ArraySpliterator_getComparator_R_java_util_Comparator)(jcontext ctx, jobject self);

void mark_java_util_Spliterators$ArraySpliterator(jobject object, jint mark, jint depth);
void clinit_java_util_Spliterators$ArraySpliterator(jcontext ctx);
void init_java_util_Spliterators$ArraySpliterator_Array1_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_java_util_Spliterators$ArraySpliterator_Array1_java_lang_Object_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
jobject M_java_util_Spliterators$ArraySpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self);
void M_java_util_Spliterators$ArraySpliterator_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Spliterators$ArraySpliterator_tryAdvance_java_util_function_Consumer_R_boolean(jcontext ctx, jobject self, jobject param0);
jlong M_java_util_Spliterators$ArraySpliterator_estimateSize_R_long(jcontext ctx, jobject self);
jint M_java_util_Spliterators$ArraySpliterator_characteristics_R_int(jcontext ctx, jobject self);
jobject M_java_util_Spliterators$ArraySpliterator_getComparator_R_java_util_Comparator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
