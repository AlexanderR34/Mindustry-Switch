#ifndef HEADER_java_util_Spliterator$OfPrimitive
#define HEADER_java_util_Spliterator$OfPrimitive

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Spliterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Spliterator$OfPrimitive {
	java_lang_Object parent;
} java_util_Spliterator$OfPrimitive;

extern Class class_java_util_Spliterator$OfPrimitive;


#define INDEX_java_util_Spliterator$OfPrimitive_trySplit_R_java_util_Spliterator$OfPrimitive 0
typedef jobject (*func_java_util_Spliterator$OfPrimitive_trySplit_R_java_util_Spliterator$OfPrimitive)(jcontext ctx, jobject self);
#define INDEX_java_util_Spliterator$OfPrimitive_tryAdvance_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Spliterator$OfPrimitive_tryAdvance_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Spliterator$OfPrimitive_forEachRemaining_java_lang_Object 2
typedef void (*func_java_util_Spliterator$OfPrimitive_forEachRemaining_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Spliterator$OfPrimitive_trySplit_R_java_util_Spliterator 3
typedef jobject (*func_java_util_Spliterator$OfPrimitive_trySplit_R_java_util_Spliterator)(jcontext ctx, jobject self);

void mark_java_util_Spliterator$OfPrimitive(jobject object, jint mark, jint depth);
void clinit_java_util_Spliterator$OfPrimitive(jcontext ctx);
void M_java_util_Spliterator$OfPrimitive_forEachRemaining_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Spliterator$OfPrimitive_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
