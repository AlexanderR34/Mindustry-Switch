#ifndef HEADER_java_util_IdentityHashMap
#define HEADER_java_util_IdentityHashMap

#include "Clearwing.h"
#include "java/util/AbstractMap.h"
#include "java/util/Map.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_IdentityHashMap {
	java_util_AbstractMap parent;
	jref F_elementData;
	jint F_size;
	jint F_threshold;
	jint F_modCount;
} java_util_IdentityHashMap;

extern Class class_java_util_IdentityHashMap;

extern jint SF_java_util_IdentityHashMap_DEFAULT_MAX_SIZE;
extern jint SF_java_util_IdentityHashMap_loadFactor;
extern jobject SF_java_util_IdentityHashMap_NULL_OBJECT;

#define VTABLE_java_util_IdentityHashMap_hashCode_R_int 0
typedef jint (*func_java_util_IdentityHashMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_IdentityHashMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_IdentityHashMap_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_IdentityHashMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_IdentityHashMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_toString_R_java_lang_String 4
typedef jobject (*func_java_util_IdentityHashMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_finalize 5
typedef void (*func_java_util_IdentityHashMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_notify 6
typedef void (*func_java_util_IdentityHashMap_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_notifyAll 7
typedef void (*func_java_util_IdentityHashMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_wait 8
typedef void (*func_java_util_IdentityHashMap_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_wait_long 9
typedef void (*func_java_util_IdentityHashMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_IdentityHashMap_wait_long_int 10
typedef void (*func_java_util_IdentityHashMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_IdentityHashMap_clear 11
typedef void (*func_java_util_IdentityHashMap_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_containsKey_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_IdentityHashMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_IdentityHashMap_containsValue_java_lang_Object_R_boolean 13
typedef jbool (*func_java_util_IdentityHashMap_containsValue_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_IdentityHashMap_entrySet_R_java_util_Set 14
typedef jobject (*func_java_util_IdentityHashMap_entrySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_get_java_lang_Object_R_java_lang_Object 15
typedef jobject (*func_java_util_IdentityHashMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_IdentityHashMap_isEmpty_R_boolean 16
typedef jbool (*func_java_util_IdentityHashMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_keySet_R_java_util_Set 17
typedef jobject (*func_java_util_IdentityHashMap_keySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object 18
typedef jobject (*func_java_util_IdentityHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_IdentityHashMap_putAll_java_util_Map 19
typedef void (*func_java_util_IdentityHashMap_putAll_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_IdentityHashMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object 20
typedef jobject (*func_java_util_IdentityHashMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_IdentityHashMap_remove_java_lang_Object_R_java_lang_Object 21
typedef jobject (*func_java_util_IdentityHashMap_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_IdentityHashMap_remove_java_lang_Object_java_lang_Object_R_boolean 22
typedef jbool (*func_java_util_IdentityHashMap_remove_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_IdentityHashMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object 23
typedef jobject (*func_java_util_IdentityHashMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_IdentityHashMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean 24
typedef jbool (*func_java_util_IdentityHashMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_IdentityHashMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object 25
typedef jobject (*func_java_util_IdentityHashMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_IdentityHashMap_forEach_java_util_function_BiConsumer 26
typedef void (*func_java_util_IdentityHashMap_forEach_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_IdentityHashMap_replaceAll_java_util_function_BiFunction 27
typedef void (*func_java_util_IdentityHashMap_replaceAll_java_util_function_BiFunction)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_IdentityHashMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object 28
typedef jobject (*func_java_util_IdentityHashMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_IdentityHashMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 29
typedef jobject (*func_java_util_IdentityHashMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_IdentityHashMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 30
typedef jobject (*func_java_util_IdentityHashMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_IdentityHashMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 31
typedef jobject (*func_java_util_IdentityHashMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_IdentityHashMap_size_R_int 32
typedef jint (*func_java_util_IdentityHashMap_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_values_R_java_util_Collection 33
typedef jobject (*func_java_util_IdentityHashMap_values_R_java_util_Collection)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_getThreshold_int_R_int 34
typedef jint (*func_java_util_IdentityHashMap_getThreshold_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_IdentityHashMap_computeElementArraySize_R_int 35
typedef jint (*func_java_util_IdentityHashMap_computeElementArraySize_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_newElementArray_int_R_Array1_java_lang_Object 36
typedef jobject (*func_java_util_IdentityHashMap_newElementArray_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_IdentityHashMap_massageValue_java_lang_Object_R_java_lang_Object 37
typedef jobject (*func_java_util_IdentityHashMap_massageValue_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_IdentityHashMap_getEntry_java_lang_Object_R_java_util_IdentityHashMap$IdentityHashMapEntry 38
typedef jobject (*func_java_util_IdentityHashMap_getEntry_java_lang_Object_R_java_util_IdentityHashMap$IdentityHashMapEntry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_IdentityHashMap_getEntry_int_R_java_util_IdentityHashMap$IdentityHashMapEntry 39
typedef jobject (*func_java_util_IdentityHashMap_getEntry_int_R_java_util_IdentityHashMap$IdentityHashMapEntry)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_IdentityHashMap_findIndex_java_lang_Object_Array1_java_lang_Object_R_int 40
typedef jint (*func_java_util_IdentityHashMap_findIndex_java_lang_Object_Array1_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_IdentityHashMap_getModuloHash_java_lang_Object_int_R_int 41
typedef jint (*func_java_util_IdentityHashMap_getModuloHash_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_IdentityHashMap_rehash 42
typedef void (*func_java_util_IdentityHashMap_rehash)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_computeMaxSize 43
typedef void (*func_java_util_IdentityHashMap_computeMaxSize)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap_putAllImpl_java_util_Map 44
typedef void (*func_java_util_IdentityHashMap_putAllImpl_java_util_Map)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_IdentityHashMap(jobject object, jint mark, jint depth);
void clinit_java_util_IdentityHashMap(jcontext ctx);
void init_java_util_IdentityHashMap(jcontext ctx, jobject self);
void init_java_util_IdentityHashMap_int(jcontext ctx, jobject self, jint param0);
jint M_java_util_IdentityHashMap_getThreshold_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_util_IdentityHashMap_computeElementArraySize_R_int(jcontext ctx, jobject self);
jobject M_java_util_IdentityHashMap_newElementArray_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0);
void init_java_util_IdentityHashMap_java_util_Map(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_IdentityHashMap_massageValue_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_java_util_IdentityHashMap_clear(jcontext ctx, jobject self);
jbool M_java_util_IdentityHashMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_IdentityHashMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_IdentityHashMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_IdentityHashMap_getEntry_java_lang_Object_R_java_util_IdentityHashMap$IdentityHashMapEntry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_IdentityHashMap_getEntry_int_R_java_util_IdentityHashMap$IdentityHashMapEntry(jcontext ctx, jobject self, jint param0);
jint M_java_util_IdentityHashMap_findIndex_java_lang_Object_Array1_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1);
jint M_java_util_IdentityHashMap_getModuloHash_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_util_IdentityHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_IdentityHashMap_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0);
void M_java_util_IdentityHashMap_rehash(jcontext ctx, jobject self);
void M_java_util_IdentityHashMap_computeMaxSize(jcontext ctx, jobject self);
jobject M_java_util_IdentityHashMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_IdentityHashMap_entrySet_R_java_util_Set(jcontext ctx, jobject self);
jobject M_java_util_IdentityHashMap_keySet_R_java_util_Set(jcontext ctx, jobject self);
jobject M_java_util_IdentityHashMap_values_R_java_util_Collection(jcontext ctx, jobject self);
jbool M_java_util_IdentityHashMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_IdentityHashMap_isEmpty_R_boolean(jcontext ctx, jobject self);
jint M_java_util_IdentityHashMap_size_R_int(jcontext ctx, jobject self);
void M_java_util_IdentityHashMap_putAllImpl_java_util_Map(jcontext ctx, jobject self, jobject param0);
jobject SM_java_util_IdentityHashMap_access$000_java_util_IdentityHashMap_int_R_java_util_IdentityHashMap$IdentityHashMapEntry(jcontext ctx, jobject param0, jint param1);
jobject SM_java_util_IdentityHashMap_access$100_java_util_IdentityHashMap_java_lang_Object_R_java_util_IdentityHashMap$IdentityHashMapEntry(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
