#ifndef HEADER_java_util_PrimitiveIterator$OfInt
#define HEADER_java_util_PrimitiveIterator$OfInt

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/PrimitiveIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_PrimitiveIterator$OfInt {
	java_lang_Object parent;
} java_util_PrimitiveIterator$OfInt;

extern Class class_java_util_PrimitiveIterator$OfInt;


#define INDEX_java_util_PrimitiveIterator$OfInt_nextInt_R_int 0
typedef jint (*func_java_util_PrimitiveIterator$OfInt_nextInt_R_int)(jcontext ctx, jobject self);
#define INDEX_java_util_PrimitiveIterator$OfInt_forEachRemaining_java_util_function_IntConsumer 1
typedef void (*func_java_util_PrimitiveIterator$OfInt_forEachRemaining_java_util_function_IntConsumer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_PrimitiveIterator$OfInt_next_R_java_lang_Integer 2
typedef jobject (*func_java_util_PrimitiveIterator$OfInt_next_R_java_lang_Integer)(jcontext ctx, jobject self);
#define INDEX_java_util_PrimitiveIterator$OfInt_forEachRemaining_java_util_function_Consumer 3
typedef void (*func_java_util_PrimitiveIterator$OfInt_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_PrimitiveIterator$OfInt_forEachRemaining_java_lang_Object 4
typedef void (*func_java_util_PrimitiveIterator$OfInt_forEachRemaining_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_PrimitiveIterator$OfInt_next_R_java_lang_Object 5
typedef jobject (*func_java_util_PrimitiveIterator$OfInt_next_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_java_util_PrimitiveIterator$OfInt(jobject object, jint mark, jint depth);
void clinit_java_util_PrimitiveIterator$OfInt(jcontext ctx);
void M_java_util_PrimitiveIterator$OfInt_forEachRemaining_java_util_function_IntConsumer(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_PrimitiveIterator$OfInt_next_R_java_lang_Integer(jcontext ctx, jobject self);
void M_java_util_PrimitiveIterator$OfInt_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0);
void M_java_util_PrimitiveIterator$OfInt_forEachRemaining_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_PrimitiveIterator$OfInt_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
