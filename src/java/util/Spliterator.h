#ifndef HEADER_java_util_Spliterator
#define HEADER_java_util_Spliterator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Spliterator {
	java_lang_Object parent;
} java_util_Spliterator;

extern Class class_java_util_Spliterator;

extern jint SF_java_util_Spliterator_ORDERED;
extern jint SF_java_util_Spliterator_DISTINCT;
extern jint SF_java_util_Spliterator_SORTED;
extern jint SF_java_util_Spliterator_SIZED;
extern jint SF_java_util_Spliterator_NONNULL;
extern jint SF_java_util_Spliterator_IMMUTABLE;
extern jint SF_java_util_Spliterator_CONCURRENT;
extern jint SF_java_util_Spliterator_SUBSIZED;

#define INDEX_java_util_Spliterator_tryAdvance_java_util_function_Consumer_R_boolean 0
typedef jbool (*func_java_util_Spliterator_tryAdvance_java_util_function_Consumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Spliterator_forEachRemaining_java_util_function_Consumer 1
typedef void (*func_java_util_Spliterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Spliterator_trySplit_R_java_util_Spliterator 2
typedef jobject (*func_java_util_Spliterator_trySplit_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define INDEX_java_util_Spliterator_estimateSize_R_long 3
typedef jlong (*func_java_util_Spliterator_estimateSize_R_long)(jcontext ctx, jobject self);
#define INDEX_java_util_Spliterator_getExactSizeIfKnown_R_long 4
typedef jlong (*func_java_util_Spliterator_getExactSizeIfKnown_R_long)(jcontext ctx, jobject self);
#define INDEX_java_util_Spliterator_characteristics_R_int 5
typedef jint (*func_java_util_Spliterator_characteristics_R_int)(jcontext ctx, jobject self);
#define INDEX_java_util_Spliterator_hasCharacteristics_int_R_boolean 6
typedef jbool (*func_java_util_Spliterator_hasCharacteristics_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_java_util_Spliterator_getComparator_R_java_util_Comparator 7
typedef jobject (*func_java_util_Spliterator_getComparator_R_java_util_Comparator)(jcontext ctx, jobject self);

void mark_java_util_Spliterator(jobject object, jint mark, jint depth);
void clinit_java_util_Spliterator(jcontext ctx);
void M_java_util_Spliterator_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0);
jlong M_java_util_Spliterator_getExactSizeIfKnown_R_long(jcontext ctx, jobject self);
jbool M_java_util_Spliterator_hasCharacteristics_int_R_boolean(jcontext ctx, jobject self, jint param0);
jobject M_java_util_Spliterator_getComparator_R_java_util_Comparator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
