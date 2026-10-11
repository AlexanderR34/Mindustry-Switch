#ifndef HEADER_java_util_WeakHashMap
#define HEADER_java_util_WeakHashMap

#include "Clearwing.h"
#include "java/util/AbstractMap.h"
#include "java/util/Map.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_WeakHashMap {
	java_util_AbstractMap parent;
	jref F_table;
	jint F_size;
	jint F_threshold;
	jfloat F_loadFactor;
	jint F_modCount;
	jref F_entrySet;
} java_util_WeakHashMap;

extern Class class_java_util_WeakHashMap;

extern jint SF_java_util_WeakHashMap_DEFAULT_INITIAL_CAPACITY;
extern jint SF_java_util_WeakHashMap_MAXIMUM_CAPACITY;
extern jfloat SF_java_util_WeakHashMap_DEFAULT_LOAD_FACTOR;
extern jobject SF_java_util_WeakHashMap_NULL_KEY;

#define VTABLE_java_util_WeakHashMap_hashCode_R_int 0
typedef jint (*func_java_util_WeakHashMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_WeakHashMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_WeakHashMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_WeakHashMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap_toString_R_java_lang_String 4
typedef jobject (*func_java_util_WeakHashMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap_finalize 5
typedef void (*func_java_util_WeakHashMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap_notify 6
typedef void (*func_java_util_WeakHashMap_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap_notifyAll 7
typedef void (*func_java_util_WeakHashMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap_wait 8
typedef void (*func_java_util_WeakHashMap_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap_wait_long 9
typedef void (*func_java_util_WeakHashMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_WeakHashMap_wait_long_int 10
typedef void (*func_java_util_WeakHashMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_WeakHashMap_clear 11
typedef void (*func_java_util_WeakHashMap_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap_containsKey_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_WeakHashMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap_containsValue_java_lang_Object_R_boolean 13
typedef jbool (*func_java_util_WeakHashMap_containsValue_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap_entrySet_R_java_util_Set 14
typedef jobject (*func_java_util_WeakHashMap_entrySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap_get_java_lang_Object_R_java_lang_Object 15
typedef jobject (*func_java_util_WeakHashMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap_isEmpty_R_boolean 16
typedef jbool (*func_java_util_WeakHashMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap_keySet_R_java_util_Set 17
typedef jobject (*func_java_util_WeakHashMap_keySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object 18
typedef jobject (*func_java_util_WeakHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_WeakHashMap_putAll_java_util_Map 19
typedef void (*func_java_util_WeakHashMap_putAll_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object 20
typedef jobject (*func_java_util_WeakHashMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_WeakHashMap_remove_java_lang_Object_R_java_lang_Object 21
typedef jobject (*func_java_util_WeakHashMap_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap_remove_java_lang_Object_java_lang_Object_R_boolean 22
typedef jbool (*func_java_util_WeakHashMap_remove_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_WeakHashMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object 23
typedef jobject (*func_java_util_WeakHashMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_WeakHashMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean 24
typedef jbool (*func_java_util_WeakHashMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_WeakHashMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object 25
typedef jobject (*func_java_util_WeakHashMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_WeakHashMap_forEach_java_util_function_BiConsumer 26
typedef void (*func_java_util_WeakHashMap_forEach_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap_replaceAll_java_util_function_BiFunction 27
typedef void (*func_java_util_WeakHashMap_replaceAll_java_util_function_BiFunction)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object 28
typedef jobject (*func_java_util_WeakHashMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_WeakHashMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 29
typedef jobject (*func_java_util_WeakHashMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_WeakHashMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 30
typedef jobject (*func_java_util_WeakHashMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_WeakHashMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 31
typedef jobject (*func_java_util_WeakHashMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_WeakHashMap_size_R_int 32
typedef jint (*func_java_util_WeakHashMap_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap_values_R_java_util_Collection 33
typedef jobject (*func_java_util_WeakHashMap_values_R_java_util_Collection)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap_newTable_int_R_Array1_java_util_WeakHashMap$Entry 34
typedef jobject (*func_java_util_WeakHashMap_newTable_int_R_Array1_java_util_WeakHashMap$Entry)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_WeakHashMap_hash_java_lang_Object_R_int 35
typedef jint (*func_java_util_WeakHashMap_hash_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap_expungeStaleEntries 36
typedef void (*func_java_util_WeakHashMap_expungeStaleEntries)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry 37
typedef jobject (*func_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap_getEntry_java_lang_Object_R_java_util_WeakHashMap$Entry 38
typedef jobject (*func_java_util_WeakHashMap_getEntry_java_lang_Object_R_java_util_WeakHashMap$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap_resize_int 39
typedef void (*func_java_util_WeakHashMap_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_WeakHashMap_transfer_Array1_java_util_WeakHashMap$Entry_Array1_java_util_WeakHashMap$Entry 40
typedef void (*func_java_util_WeakHashMap_transfer_Array1_java_util_WeakHashMap$Entry_Array1_java_util_WeakHashMap$Entry)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_WeakHashMap_removeMapping_java_lang_Object_R_boolean 41
typedef jbool (*func_java_util_WeakHashMap_removeMapping_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap_containsNullValue_R_boolean 42
typedef jbool (*func_java_util_WeakHashMap_containsNullValue_R_boolean)(jcontext ctx, jobject self);

void mark_java_util_WeakHashMap(jobject object, jint mark, jint depth);
void clinit_java_util_WeakHashMap(jcontext ctx);
jobject M_java_util_WeakHashMap_newTable_int_R_Array1_java_util_WeakHashMap$Entry(jcontext ctx, jobject self, jint param0);
void init_java_util_WeakHashMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_java_util_WeakHashMap_int(jcontext ctx, jobject self, jint param0);
void init_java_util_WeakHashMap(jcontext ctx, jobject self);
void init_java_util_WeakHashMap_java_util_Map(jcontext ctx, jobject self, jobject param0);
jobject SM_java_util_WeakHashMap_maskNull_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0);
jobject SM_java_util_WeakHashMap_unmaskNull_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0);
jbool SM_java_util_WeakHashMap_eq_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1);
jint M_java_util_WeakHashMap_hash_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint SM_java_util_WeakHashMap_indexFor_int_int_R_int(jcontext ctx, jint param0, jint param1);
void M_java_util_WeakHashMap_expungeStaleEntries(jcontext ctx, jobject self);
jobject M_java_util_WeakHashMap_getTable_R_Array1_java_util_WeakHashMap$Entry(jcontext ctx, jobject self);
jint M_java_util_WeakHashMap_size_R_int(jcontext ctx, jobject self);
jbool M_java_util_WeakHashMap_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_WeakHashMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_WeakHashMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_WeakHashMap_getEntry_java_lang_Object_R_java_util_WeakHashMap$Entry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_WeakHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_WeakHashMap_resize_int(jcontext ctx, jobject self, jint param0);
void M_java_util_WeakHashMap_transfer_Array1_java_util_WeakHashMap$Entry_Array1_java_util_WeakHashMap$Entry(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_WeakHashMap_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_WeakHashMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_WeakHashMap_removeMapping_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_WeakHashMap_clear(jcontext ctx, jobject self);
jbool M_java_util_WeakHashMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_WeakHashMap_containsNullValue_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_WeakHashMap_keySet_R_java_util_Set(jcontext ctx, jobject self);
jobject M_java_util_WeakHashMap_values_R_java_util_Collection(jcontext ctx, jobject self);
jobject M_java_util_WeakHashMap_entrySet_R_java_util_Set(jcontext ctx, jobject self);
void M_java_util_WeakHashMap_forEach_java_util_function_BiConsumer(jcontext ctx, jobject self, jobject param0);
void M_java_util_WeakHashMap_replaceAll_java_util_function_BiFunction(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
