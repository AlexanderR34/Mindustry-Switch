#ifndef HEADER_java_util_Collections$SingletonMap
#define HEADER_java_util_Collections$SingletonMap

#include "Clearwing.h"
#include "java/util/AbstractMap.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Collections$SingletonMap {
	java_util_AbstractMap parent;
	jref F_k;
	jref F_v;
} java_util_Collections$SingletonMap;

extern Class class_java_util_Collections$SingletonMap;


#define VTABLE_java_util_Collections$SingletonMap_hashCode_R_int 0
typedef jint (*func_java_util_Collections$SingletonMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SingletonMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Collections$SingletonMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SingletonMap_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Collections$SingletonMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SingletonMap_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Collections$SingletonMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SingletonMap_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Collections$SingletonMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SingletonMap_finalize 5
typedef void (*func_java_util_Collections$SingletonMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SingletonMap_notify 6
typedef void (*func_java_util_Collections$SingletonMap_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SingletonMap_notifyAll 7
typedef void (*func_java_util_Collections$SingletonMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SingletonMap_wait 8
typedef void (*func_java_util_Collections$SingletonMap_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SingletonMap_wait_long 9
typedef void (*func_java_util_Collections$SingletonMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Collections$SingletonMap_wait_long_int 10
typedef void (*func_java_util_Collections$SingletonMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Collections$SingletonMap_clear 11
typedef void (*func_java_util_Collections$SingletonMap_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SingletonMap_containsKey_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_Collections$SingletonMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SingletonMap_containsValue_java_lang_Object_R_boolean 13
typedef jbool (*func_java_util_Collections$SingletonMap_containsValue_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SingletonMap_entrySet_R_java_util_Set 14
typedef jobject (*func_java_util_Collections$SingletonMap_entrySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SingletonMap_get_java_lang_Object_R_java_lang_Object 15
typedef jobject (*func_java_util_Collections$SingletonMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SingletonMap_isEmpty_R_boolean 16
typedef jbool (*func_java_util_Collections$SingletonMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SingletonMap_keySet_R_java_util_Set 17
typedef jobject (*func_java_util_Collections$SingletonMap_keySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SingletonMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object 18
typedef jobject (*func_java_util_Collections$SingletonMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Collections$SingletonMap_putAll_java_util_Map 19
typedef void (*func_java_util_Collections$SingletonMap_putAll_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SingletonMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object 20
typedef jobject (*func_java_util_Collections$SingletonMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Collections$SingletonMap_remove_java_lang_Object_R_java_lang_Object 21
typedef jobject (*func_java_util_Collections$SingletonMap_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SingletonMap_remove_java_lang_Object_java_lang_Object_R_boolean 22
typedef jbool (*func_java_util_Collections$SingletonMap_remove_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Collections$SingletonMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object 23
typedef jobject (*func_java_util_Collections$SingletonMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Collections$SingletonMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean 24
typedef jbool (*func_java_util_Collections$SingletonMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_Collections$SingletonMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object 25
typedef jobject (*func_java_util_Collections$SingletonMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Collections$SingletonMap_forEach_java_util_function_BiConsumer 26
typedef void (*func_java_util_Collections$SingletonMap_forEach_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SingletonMap_replaceAll_java_util_function_BiFunction 27
typedef void (*func_java_util_Collections$SingletonMap_replaceAll_java_util_function_BiFunction)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SingletonMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object 28
typedef jobject (*func_java_util_Collections$SingletonMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Collections$SingletonMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 29
typedef jobject (*func_java_util_Collections$SingletonMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Collections$SingletonMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 30
typedef jobject (*func_java_util_Collections$SingletonMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Collections$SingletonMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 31
typedef jobject (*func_java_util_Collections$SingletonMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_Collections$SingletonMap_size_R_int 32
typedef jint (*func_java_util_Collections$SingletonMap_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SingletonMap_values_R_java_util_Collection 33
typedef jobject (*func_java_util_Collections$SingletonMap_values_R_java_util_Collection)(jcontext ctx, jobject self);

void mark_java_util_Collections$SingletonMap(jobject object, jint mark, jint depth);
void clinit_java_util_Collections$SingletonMap(jcontext ctx);
void init_java_util_Collections$SingletonMap_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_util_Collections$SingletonMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Collections$SingletonMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Collections$SingletonMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jint M_java_util_Collections$SingletonMap_size_R_int(jcontext ctx, jobject self);
jobject M_java_util_Collections$SingletonMap_entrySet_R_java_util_Set(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
