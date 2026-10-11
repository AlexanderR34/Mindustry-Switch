#ifndef HEADER_java_util_Collections$EmptyMap
#define HEADER_java_util_Collections$EmptyMap

#include "Clearwing.h"
#include "java/util/AbstractMap.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Collections$EmptyMap {
	java_util_AbstractMap parent;
} java_util_Collections$EmptyMap;

extern Class class_java_util_Collections$EmptyMap;

extern jlong SF_java_util_Collections$EmptyMap_serialVersionUID;

#define VTABLE_java_util_Collections$EmptyMap_hashCode_R_int 0
typedef jint (*func_java_util_Collections$EmptyMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$EmptyMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Collections$EmptyMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$EmptyMap_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Collections$EmptyMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$EmptyMap_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Collections$EmptyMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$EmptyMap_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Collections$EmptyMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$EmptyMap_finalize 5
typedef void (*func_java_util_Collections$EmptyMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$EmptyMap_notify 6
typedef void (*func_java_util_Collections$EmptyMap_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$EmptyMap_notifyAll 7
typedef void (*func_java_util_Collections$EmptyMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$EmptyMap_wait 8
typedef void (*func_java_util_Collections$EmptyMap_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$EmptyMap_wait_long 9
typedef void (*func_java_util_Collections$EmptyMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Collections$EmptyMap_wait_long_int 10
typedef void (*func_java_util_Collections$EmptyMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Collections$EmptyMap_clear 11
typedef void (*func_java_util_Collections$EmptyMap_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$EmptyMap_containsKey_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_Collections$EmptyMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$EmptyMap_containsValue_java_lang_Object_R_boolean 13
typedef jbool (*func_java_util_Collections$EmptyMap_containsValue_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$EmptyMap_entrySet_R_java_util_Set 14
typedef jobject (*func_java_util_Collections$EmptyMap_entrySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$EmptyMap_get_java_lang_Object_R_java_lang_Object 15
typedef jobject (*func_java_util_Collections$EmptyMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$EmptyMap_isEmpty_R_boolean 16
typedef jbool (*func_java_util_Collections$EmptyMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$EmptyMap_keySet_R_java_util_Set 17
typedef jobject (*func_java_util_Collections$EmptyMap_keySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$EmptyMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object 18
typedef jobject (*func_java_util_Collections$EmptyMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Collections$EmptyMap_putAll_java_util_Map 19
typedef void (*func_java_util_Collections$EmptyMap_putAll_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$EmptyMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object 20
typedef jobject (*func_java_util_Collections$EmptyMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Collections$EmptyMap_remove_java_lang_Object_R_java_lang_Object 21
typedef jobject (*func_java_util_Collections$EmptyMap_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$EmptyMap_remove_java_lang_Object_java_lang_Object_R_boolean 22
typedef jbool (*func_java_util_Collections$EmptyMap_remove_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Collections$EmptyMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object 23
typedef jobject (*func_java_util_Collections$EmptyMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Collections$EmptyMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean 24
typedef jbool (*func_java_util_Collections$EmptyMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_Collections$EmptyMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object 25
typedef jobject (*func_java_util_Collections$EmptyMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Collections$EmptyMap_forEach_java_util_function_BiConsumer 26
typedef void (*func_java_util_Collections$EmptyMap_forEach_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$EmptyMap_replaceAll_java_util_function_BiFunction 27
typedef void (*func_java_util_Collections$EmptyMap_replaceAll_java_util_function_BiFunction)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$EmptyMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object 28
typedef jobject (*func_java_util_Collections$EmptyMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Collections$EmptyMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 29
typedef jobject (*func_java_util_Collections$EmptyMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Collections$EmptyMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 30
typedef jobject (*func_java_util_Collections$EmptyMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Collections$EmptyMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 31
typedef jobject (*func_java_util_Collections$EmptyMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_Collections$EmptyMap_size_R_int 32
typedef jint (*func_java_util_Collections$EmptyMap_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$EmptyMap_values_R_java_util_Collection 33
typedef jobject (*func_java_util_Collections$EmptyMap_values_R_java_util_Collection)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$EmptyMap_readResolve_R_java_lang_Object 34
typedef jobject (*func_java_util_Collections$EmptyMap_readResolve_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_java_util_Collections$EmptyMap(jobject object, jint mark, jint depth);
void clinit_java_util_Collections$EmptyMap(jcontext ctx);
void init_java_util_Collections$EmptyMap(jcontext ctx, jobject self);
jbool M_java_util_Collections$EmptyMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Collections$EmptyMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Collections$EmptyMap_entrySet_R_java_util_Set(jcontext ctx, jobject self);
jobject M_java_util_Collections$EmptyMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Collections$EmptyMap_keySet_R_java_util_Set(jcontext ctx, jobject self);
jobject M_java_util_Collections$EmptyMap_values_R_java_util_Collection(jcontext ctx, jobject self);
jobject M_java_util_Collections$EmptyMap_readResolve_R_java_lang_Object(jcontext ctx, jobject self);
void init_java_util_Collections$EmptyMap_java_util_Collections$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
