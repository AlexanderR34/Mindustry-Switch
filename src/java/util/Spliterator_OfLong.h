#ifndef HEADER_java_util_Spliterator$OfLong
#define HEADER_java_util_Spliterator$OfLong

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Spliterator_OfPrimitive.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Spliterator$OfLong {
	java_lang_Object parent;
} java_util_Spliterator$OfLong;

extern Class class_java_util_Spliterator$OfLong;


#define INDEX_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator$OfLong 0
typedef jobject (*func_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator$OfLong)(jcontext ctx, jobject self);
#define INDEX_java_util_Spliterator$OfLong_tryAdvance_java_util_function_LongConsumer_R_boolean 1
typedef jbool (*func_java_util_Spliterator$OfLong_tryAdvance_java_util_function_LongConsumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_LongConsumer 2
typedef void (*func_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_LongConsumer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Spliterator$OfLong_tryAdvance_java_util_function_Consumer_R_boolean 3
typedef jbool (*func_java_util_Spliterator$OfLong_tryAdvance_java_util_function_Consumer_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_Consumer 4
typedef void (*func_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Spliterator$OfLong_forEachRemaining_java_lang_Object 5
typedef void (*func_java_util_Spliterator$OfLong_forEachRemaining_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Spliterator$OfLong_tryAdvance_java_lang_Object_R_boolean 6
typedef jbool (*func_java_util_Spliterator$OfLong_tryAdvance_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator$OfPrimitive 7
typedef jobject (*func_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator$OfPrimitive)(jcontext ctx, jobject self);
#define INDEX_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator 8
typedef jobject (*func_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator)(jcontext ctx, jobject self);

void mark_java_util_Spliterator$OfLong(jobject object, jint mark, jint depth);
void clinit_java_util_Spliterator$OfLong(jcontext ctx);
void M_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_LongConsumer(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Spliterator$OfLong_tryAdvance_java_util_function_Consumer_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_Spliterator$OfLong_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0);
void M_java_util_Spliterator$OfLong_forEachRemaining_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Spliterator$OfLong_tryAdvance_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator$OfPrimitive(jcontext ctx, jobject self);
jobject M_java_util_Spliterator$OfLong_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
