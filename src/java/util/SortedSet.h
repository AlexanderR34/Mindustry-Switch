#ifndef HEADER_java_util_SortedSet
#define HEADER_java_util_SortedSet

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_SortedSet {
	java_lang_Object parent;
} java_util_SortedSet;

extern Class class_java_util_SortedSet;


#define INDEX_java_util_SortedSet_comparator_R_java_util_Comparator 0
typedef jobject (*func_java_util_SortedSet_comparator_R_java_util_Comparator)(jcontext ctx, jobject self);
#define INDEX_java_util_SortedSet_first_R_java_lang_Object 1
typedef jobject (*func_java_util_SortedSet_first_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_SortedSet_headSet_java_lang_Object_R_java_util_SortedSet 2
typedef jobject (*func_java_util_SortedSet_headSet_java_lang_Object_R_java_util_SortedSet)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_SortedSet_last_R_java_lang_Object 3
typedef jobject (*func_java_util_SortedSet_last_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_SortedSet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet 4
typedef jobject (*func_java_util_SortedSet_subSet_java_lang_Object_java_lang_Object_R_java_util_SortedSet)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_util_SortedSet_tailSet_java_lang_Object_R_java_util_SortedSet 5
typedef jobject (*func_java_util_SortedSet_tailSet_java_lang_Object_R_java_util_SortedSet)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_SortedSet(jobject object, jint mark, jint depth);
void clinit_java_util_SortedSet(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
