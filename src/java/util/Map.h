#ifndef HEADER_java_util_Map
#define HEADER_java_util_Map

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Map {
	java_lang_Object parent;
} java_util_Map;

extern Class class_java_util_Map;


#define INDEX_java_util_Map_clear 0
typedef void (*func_java_util_Map_clear)(jcontext ctx, jobject self);
#define INDEX_java_util_Map_containsKey_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Map_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Map_containsValue_java_lang_Object_R_boolean 2
typedef jbool (*func_java_util_Map_containsValue_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Map_entrySet_R_java_util_Set 3
typedef jobject (*func_java_util_Map_entrySet_R_java_util_Set)(jcontext ctx, jobject self);
#define INDEX_java_util_Map_equals_java_lang_Object_R_boolean 4
typedef jbool (*func_java_util_Map_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object 5
typedef jobject (*func_java_util_Map_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Map_hashCode_R_int 6
typedef jint (*func_java_util_Map_hashCode_R_int)(jcontext ctx, jobject self);
#define INDEX_java_util_Map_isEmpty_R_boolean 7
typedef jbool (*func_java_util_Map_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define INDEX_java_util_Map_keySet_R_java_util_Set 8
typedef jobject (*func_java_util_Map_keySet_R_java_util_Set)(jcontext ctx, jobject self);
#define INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object 9
typedef jobject (*func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_util_Map_putAll_java_util_Map 10
typedef void (*func_java_util_Map_putAll_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object 11
typedef jobject (*func_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object 12
typedef jobject (*func_java_util_Map_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean 13
typedef jbool (*func_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object 14
typedef jobject (*func_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean 15
typedef jbool (*func_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define INDEX_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object 16
typedef jobject (*func_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_util_Map_forEach_java_util_function_BiConsumer 17
typedef void (*func_java_util_Map_forEach_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Map_replaceAll_java_util_function_BiFunction 18
typedef void (*func_java_util_Map_replaceAll_java_util_function_BiFunction)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object 19
typedef jobject (*func_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 20
typedef jobject (*func_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 21
typedef jobject (*func_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 22
typedef jobject (*func_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define INDEX_java_util_Map_size_R_int 23
typedef jint (*func_java_util_Map_size_R_int)(jcontext ctx, jobject self);
#define INDEX_java_util_Map_values_R_java_util_Collection 24
typedef jobject (*func_java_util_Map_values_R_java_util_Collection)(jcontext ctx, jobject self);

void mark_java_util_Map(jobject object, jint mark, jint depth);
void clinit_java_util_Map(jcontext ctx);
jobject M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_Map_forEach_java_util_function_BiConsumer(jcontext ctx, jobject self, jobject param0);
void M_java_util_Map_replaceAll_java_util_function_BiFunction(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
