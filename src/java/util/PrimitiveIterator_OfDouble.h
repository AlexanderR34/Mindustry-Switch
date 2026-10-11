#ifndef HEADER_java_util_PrimitiveIterator$OfDouble
#define HEADER_java_util_PrimitiveIterator$OfDouble

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/PrimitiveIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_PrimitiveIterator$OfDouble {
	java_lang_Object parent;
} java_util_PrimitiveIterator$OfDouble;

extern Class class_java_util_PrimitiveIterator$OfDouble;


#define INDEX_java_util_PrimitiveIterator$OfDouble_nextDouble_R_double 0
typedef jdouble (*func_java_util_PrimitiveIterator$OfDouble_nextDouble_R_double)(jcontext ctx, jobject self);
#define INDEX_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer 1
typedef void (*func_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Double 2
typedef jobject (*func_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Double)(jcontext ctx, jobject self);
#define INDEX_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_Consumer 3
typedef void (*func_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_lang_Object 4
typedef void (*func_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Object 5
typedef jobject (*func_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_java_util_PrimitiveIterator$OfDouble(jobject object, jint mark, jint depth);
void clinit_java_util_PrimitiveIterator$OfDouble(jcontext ctx);
void M_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_DoubleConsumer(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Double(jcontext ctx, jobject self);
void M_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0);
void M_java_util_PrimitiveIterator$OfDouble_forEachRemaining_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_PrimitiveIterator$OfDouble_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
