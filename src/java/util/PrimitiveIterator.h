#ifndef HEADER_java_util_PrimitiveIterator
#define HEADER_java_util_PrimitiveIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_PrimitiveIterator {
	java_lang_Object parent;
} java_util_PrimitiveIterator;

extern Class class_java_util_PrimitiveIterator;


#define INDEX_java_util_PrimitiveIterator_forEachRemaining_java_lang_Object 0
typedef void (*func_java_util_PrimitiveIterator_forEachRemaining_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_PrimitiveIterator(jobject object, jint mark, jint depth);
void clinit_java_util_PrimitiveIterator(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
