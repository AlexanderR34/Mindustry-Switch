#ifndef HEADER_java_util_concurrent_ConcurrentMap
#define HEADER_java_util_concurrent_ConcurrentMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Map.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_ConcurrentMap {
	java_lang_Object parent;
} java_util_concurrent_ConcurrentMap;

extern Class class_java_util_concurrent_ConcurrentMap;


#define INDEX_java_util_concurrent_ConcurrentMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object 0
typedef jobject (*func_java_util_concurrent_ConcurrentMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_util_concurrent_ConcurrentMap_remove_java_lang_Object_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_ConcurrentMap_remove_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_util_concurrent_ConcurrentMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_ConcurrentMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_util_concurrent_ConcurrentMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean 3
typedef jbool (*func_java_util_concurrent_ConcurrentMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_java_util_concurrent_ConcurrentMap(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_ConcurrentMap(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
