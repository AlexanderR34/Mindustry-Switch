#ifndef HEADER_java_util_SortedMap
#define HEADER_java_util_SortedMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Map.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_SortedMap {
	java_lang_Object parent;
} java_util_SortedMap;

extern Class class_java_util_SortedMap;


#define INDEX_java_util_SortedMap_comparator_R_java_util_Comparator 0
typedef jobject (*func_java_util_SortedMap_comparator_R_java_util_Comparator)(jcontext ctx, jobject self);
#define INDEX_java_util_SortedMap_firstKey_R_java_lang_Object 1
typedef jobject (*func_java_util_SortedMap_firstKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_SortedMap_headMap_java_lang_Object_R_java_util_SortedMap 2
typedef jobject (*func_java_util_SortedMap_headMap_java_lang_Object_R_java_util_SortedMap)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_SortedMap_lastKey_R_java_lang_Object 3
typedef jobject (*func_java_util_SortedMap_lastKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_SortedMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap 4
typedef jobject (*func_java_util_SortedMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_util_SortedMap_tailMap_java_lang_Object_R_java_util_SortedMap 5
typedef jobject (*func_java_util_SortedMap_tailMap_java_lang_Object_R_java_util_SortedMap)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_SortedMap(jobject object, jint mark, jint depth);
void clinit_java_util_SortedMap(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
