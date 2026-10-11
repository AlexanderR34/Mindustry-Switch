#ifndef HEADER_java_util_AbstractMap
#define HEADER_java_util_AbstractMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Map.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_AbstractMap {
	java_lang_Object parent;
	jref F_keySet;
	jref F_values;
} java_util_AbstractMap;

extern Class class_java_util_AbstractMap;


#define VTABLE_java_util_AbstractMap_hashCode_R_int 0
typedef jint (*func_java_util_AbstractMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_AbstractMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_AbstractMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_AbstractMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap_toString_R_java_lang_String 4
typedef jobject (*func_java_util_AbstractMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap_finalize 5
typedef void (*func_java_util_AbstractMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap_notify 6
typedef void (*func_java_util_AbstractMap_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap_notifyAll 7
typedef void (*func_java_util_AbstractMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap_wait 8
typedef void (*func_java_util_AbstractMap_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap_wait_long 9
typedef void (*func_java_util_AbstractMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_AbstractMap_wait_long_int 10
typedef void (*func_java_util_AbstractMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_AbstractMap_clear 11
typedef void (*func_java_util_AbstractMap_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap_containsKey_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_AbstractMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap_containsValue_java_lang_Object_R_boolean 13
typedef jbool (*func_java_util_AbstractMap_containsValue_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap_entrySet_R_java_util_Set 14
typedef jobject (*func_java_util_AbstractMap_entrySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap_get_java_lang_Object_R_java_lang_Object 15
typedef jobject (*func_java_util_AbstractMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap_isEmpty_R_boolean 16
typedef jbool (*func_java_util_AbstractMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap_keySet_R_java_util_Set 17
typedef jobject (*func_java_util_AbstractMap_keySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object 18
typedef jobject (*func_java_util_AbstractMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_AbstractMap_putAll_java_util_Map 19
typedef void (*func_java_util_AbstractMap_putAll_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object 20
typedef jobject (*func_java_util_AbstractMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_AbstractMap_remove_java_lang_Object_R_java_lang_Object 21
typedef jobject (*func_java_util_AbstractMap_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap_remove_java_lang_Object_java_lang_Object_R_boolean 22
typedef jbool (*func_java_util_AbstractMap_remove_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_AbstractMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object 23
typedef jobject (*func_java_util_AbstractMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_AbstractMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean 24
typedef jbool (*func_java_util_AbstractMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_AbstractMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object 25
typedef jobject (*func_java_util_AbstractMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_AbstractMap_forEach_java_util_function_BiConsumer 26
typedef void (*func_java_util_AbstractMap_forEach_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap_replaceAll_java_util_function_BiFunction 27
typedef void (*func_java_util_AbstractMap_replaceAll_java_util_function_BiFunction)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object 28
typedef jobject (*func_java_util_AbstractMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_AbstractMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 29
typedef jobject (*func_java_util_AbstractMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_AbstractMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 30
typedef jobject (*func_java_util_AbstractMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_AbstractMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 31
typedef jobject (*func_java_util_AbstractMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_AbstractMap_size_R_int 32
typedef jint (*func_java_util_AbstractMap_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap_values_R_java_util_Collection 33
typedef jobject (*func_java_util_AbstractMap_values_R_java_util_Collection)(jcontext ctx, jobject self);

void mark_java_util_AbstractMap(jobject object, jint mark, jint depth);
void clinit_java_util_AbstractMap(jcontext ctx);
void init_java_util_AbstractMap(jcontext ctx, jobject self);
void M_java_util_AbstractMap_clear(jcontext ctx, jobject self);
jbool M_java_util_AbstractMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_AbstractMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_AbstractMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_AbstractMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jint M_java_util_AbstractMap_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_util_AbstractMap_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_AbstractMap_keySet_R_java_util_Set(jcontext ctx, jobject self);
jobject M_java_util_AbstractMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_AbstractMap_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_AbstractMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jint M_java_util_AbstractMap_size_R_int(jcontext ctx, jobject self);
jobject M_java_util_AbstractMap_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_util_AbstractMap_values_R_java_util_Collection(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
