#ifndef HEADER_java_util_NavigableMap
#define HEADER_java_util_NavigableMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/SortedMap.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_NavigableMap {
	java_lang_Object parent;
} java_util_NavigableMap;

extern Class class_java_util_NavigableMap;


#define INDEX_java_util_NavigableMap_firstEntry_R_java_util_Map$Entry 0
typedef jobject (*func_java_util_NavigableMap_firstEntry_R_java_util_Map$Entry)(jcontext ctx, jobject self);
#define INDEX_java_util_NavigableMap_lastEntry_R_java_util_Map$Entry 1
typedef jobject (*func_java_util_NavigableMap_lastEntry_R_java_util_Map$Entry)(jcontext ctx, jobject self);
#define INDEX_java_util_NavigableMap_pollFirstEntry_R_java_util_Map$Entry 2
typedef jobject (*func_java_util_NavigableMap_pollFirstEntry_R_java_util_Map$Entry)(jcontext ctx, jobject self);
#define INDEX_java_util_NavigableMap_pollLastEntry_R_java_util_Map$Entry 3
typedef jobject (*func_java_util_NavigableMap_pollLastEntry_R_java_util_Map$Entry)(jcontext ctx, jobject self);
#define INDEX_java_util_NavigableMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry 4
typedef jobject (*func_java_util_NavigableMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_NavigableMap_ceilingKey_java_lang_Object_R_java_lang_Object 5
typedef jobject (*func_java_util_NavigableMap_ceilingKey_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_NavigableMap_higherEntry_java_lang_Object_R_java_util_Map$Entry 6
typedef jobject (*func_java_util_NavigableMap_higherEntry_java_lang_Object_R_java_util_Map$Entry)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_NavigableMap_higherKey_java_lang_Object_R_java_lang_Object 7
typedef jobject (*func_java_util_NavigableMap_higherKey_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_NavigableMap_floorEntry_java_lang_Object_R_java_util_Map$Entry 8
typedef jobject (*func_java_util_NavigableMap_floorEntry_java_lang_Object_R_java_util_Map$Entry)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_NavigableMap_floorKey_java_lang_Object_R_java_lang_Object 9
typedef jobject (*func_java_util_NavigableMap_floorKey_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_NavigableMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry 10
typedef jobject (*func_java_util_NavigableMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_NavigableMap_lowerKey_java_lang_Object_R_java_lang_Object 11
typedef jobject (*func_java_util_NavigableMap_lowerKey_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_NavigableMap_navigableKeySet_R_java_util_NavigableSet 12
typedef jobject (*func_java_util_NavigableMap_navigableKeySet_R_java_util_NavigableSet)(jcontext ctx, jobject self);
#define INDEX_java_util_NavigableMap_descendingMap_R_java_util_NavigableMap 13
typedef jobject (*func_java_util_NavigableMap_descendingMap_R_java_util_NavigableMap)(jcontext ctx, jobject self);
#define INDEX_java_util_NavigableMap_descendingKeySet_R_java_util_NavigableSet 14
typedef jobject (*func_java_util_NavigableMap_descendingKeySet_R_java_util_NavigableSet)(jcontext ctx, jobject self);
#define INDEX_java_util_NavigableMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap 15
typedef jobject (*func_java_util_NavigableMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3);
#define INDEX_java_util_NavigableMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap 16
typedef jobject (*func_java_util_NavigableMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define INDEX_java_util_NavigableMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap 17
typedef jobject (*func_java_util_NavigableMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap)(jcontext ctx, jobject self, jobject param0, jbool param1);

void mark_java_util_NavigableMap(jobject object, jint mark, jint depth);
void clinit_java_util_NavigableMap(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
