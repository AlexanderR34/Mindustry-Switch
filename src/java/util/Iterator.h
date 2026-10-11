#ifndef HEADER_java_util_Iterator
#define HEADER_java_util_Iterator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Iterator {
	java_lang_Object parent;
} java_util_Iterator;

extern Class class_java_util_Iterator;


#define INDEX_java_util_Iterator_hasNext_R_boolean 0
typedef jbool (*func_java_util_Iterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define INDEX_java_util_Iterator_next_R_java_lang_Object 1
typedef jobject (*func_java_util_Iterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_Iterator_remove 2
typedef void (*func_java_util_Iterator_remove)(jcontext ctx, jobject self);
#define INDEX_java_util_Iterator_forEachRemaining_java_util_function_Consumer 3
typedef void (*func_java_util_Iterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Iterator(jobject object, jint mark, jint depth);
void clinit_java_util_Iterator(jcontext ctx);
void M_java_util_Iterator_remove(jcontext ctx, jobject self);
void M_java_util_Iterator_forEachRemaining_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
