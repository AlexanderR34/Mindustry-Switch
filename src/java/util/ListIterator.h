#ifndef HEADER_java_util_ListIterator
#define HEADER_java_util_ListIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_ListIterator {
	java_lang_Object parent;
} java_util_ListIterator;

extern Class class_java_util_ListIterator;


#define INDEX_java_util_ListIterator_add_java_lang_Object 0
typedef void (*func_java_util_ListIterator_add_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_ListIterator_hasNext_R_boolean 1
typedef jbool (*func_java_util_ListIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define INDEX_java_util_ListIterator_hasPrevious_R_boolean 2
typedef jbool (*func_java_util_ListIterator_hasPrevious_R_boolean)(jcontext ctx, jobject self);
#define INDEX_java_util_ListIterator_next_R_java_lang_Object 3
typedef jobject (*func_java_util_ListIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_ListIterator_nextIndex_R_int 4
typedef jint (*func_java_util_ListIterator_nextIndex_R_int)(jcontext ctx, jobject self);
#define INDEX_java_util_ListIterator_previous_R_java_lang_Object 5
typedef jobject (*func_java_util_ListIterator_previous_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_ListIterator_previousIndex_R_int 6
typedef jint (*func_java_util_ListIterator_previousIndex_R_int)(jcontext ctx, jobject self);
#define INDEX_java_util_ListIterator_remove 7
typedef void (*func_java_util_ListIterator_remove)(jcontext ctx, jobject self);
#define INDEX_java_util_ListIterator_set_java_lang_Object 8
typedef void (*func_java_util_ListIterator_set_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_ListIterator(jobject object, jint mark, jint depth);
void clinit_java_util_ListIterator(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
