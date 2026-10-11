#ifndef HEADER_java_lang_Iterable
#define HEADER_java_lang_Iterable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Iterable {
	java_lang_Object parent;
} java_lang_Iterable;

extern Class class_java_lang_Iterable;


#define INDEX_java_lang_Iterable_iterator_R_java_util_Iterator 0
typedef jobject (*func_java_lang_Iterable_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define INDEX_java_lang_Iterable_forEach_java_util_function_Consumer 1
typedef void (*func_java_lang_Iterable_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_lang_Iterable_spliterator_R_java_util_Spliterator 2
typedef jobject (*func_java_lang_Iterable_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);

void mark_java_lang_Iterable(jobject object, jint mark, jint depth);
void clinit_java_lang_Iterable(jcontext ctx);
void M_java_lang_Iterable_forEach_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_Iterable_spliterator_R_java_util_Spliterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
