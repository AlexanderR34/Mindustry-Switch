#ifndef HEADER_java_util_NavigableSet
#define HEADER_java_util_NavigableSet

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/SortedSet.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_NavigableSet {
	java_lang_Object parent;
} java_util_NavigableSet;

extern Class class_java_util_NavigableSet;


#define INDEX_java_util_NavigableSet_pollFirst_R_java_lang_Object 0
typedef jobject (*func_java_util_NavigableSet_pollFirst_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_NavigableSet_pollLast_R_java_lang_Object 1
typedef jobject (*func_java_util_NavigableSet_pollLast_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_NavigableSet_higher_java_lang_Object_R_java_lang_Object 2
typedef jobject (*func_java_util_NavigableSet_higher_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_NavigableSet_ceiling_java_lang_Object_R_java_lang_Object 3
typedef jobject (*func_java_util_NavigableSet_ceiling_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_NavigableSet_lower_java_lang_Object_R_java_lang_Object 4
typedef jobject (*func_java_util_NavigableSet_lower_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_NavigableSet_floor_java_lang_Object_R_java_lang_Object 5
typedef jobject (*func_java_util_NavigableSet_floor_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_NavigableSet_descendingIterator_R_java_util_Iterator 6
typedef jobject (*func_java_util_NavigableSet_descendingIterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define INDEX_java_util_NavigableSet_descendingSet_R_java_util_NavigableSet 7
typedef jobject (*func_java_util_NavigableSet_descendingSet_R_java_util_NavigableSet)(jcontext ctx, jobject self);
#define INDEX_java_util_NavigableSet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet 8
typedef jobject (*func_java_util_NavigableSet_subSet_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableSet)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3);
#define INDEX_java_util_NavigableSet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet 9
typedef jobject (*func_java_util_NavigableSet_headSet_java_lang_Object_boolean_R_java_util_NavigableSet)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define INDEX_java_util_NavigableSet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet 10
typedef jobject (*func_java_util_NavigableSet_tailSet_java_lang_Object_boolean_R_java_util_NavigableSet)(jcontext ctx, jobject self, jobject param0, jbool param1);

void mark_java_util_NavigableSet(jobject object, jint mark, jint depth);
void clinit_java_util_NavigableSet(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
