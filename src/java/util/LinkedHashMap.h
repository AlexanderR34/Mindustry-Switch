#ifndef HEADER_java_util_LinkedHashMap
#define HEADER_java_util_LinkedHashMap

#include "Clearwing.h"
#include "java/util/HashMap.h"
#include "java/util/Map.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_LinkedHashMap {
	java_util_HashMap parent;
	jbool F_accessOrder;
	jref F_head;
	jref F_tail;
} java_util_LinkedHashMap;

extern Class class_java_util_LinkedHashMap;

extern jlong SF_java_util_LinkedHashMap_serialVersionUID;

#define VTABLE_java_util_LinkedHashMap_hashCode_R_int 0
typedef jint (*func_java_util_LinkedHashMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_LinkedHashMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedHashMap_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_LinkedHashMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_LinkedHashMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_toString_R_java_lang_String 4
typedef jobject (*func_java_util_LinkedHashMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_finalize 5
typedef void (*func_java_util_LinkedHashMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_notify 6
typedef void (*func_java_util_LinkedHashMap_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_notifyAll 7
typedef void (*func_java_util_LinkedHashMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_wait 8
typedef void (*func_java_util_LinkedHashMap_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_wait_long 9
typedef void (*func_java_util_LinkedHashMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_LinkedHashMap_wait_long_int 10
typedef void (*func_java_util_LinkedHashMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_LinkedHashMap_clear 11
typedef void (*func_java_util_LinkedHashMap_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_containsKey_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_LinkedHashMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedHashMap_containsValue_java_lang_Object_R_boolean 13
typedef jbool (*func_java_util_LinkedHashMap_containsValue_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedHashMap_entrySet_R_java_util_Set 14
typedef jobject (*func_java_util_LinkedHashMap_entrySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object 15
typedef jobject (*func_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedHashMap_isEmpty_R_boolean 16
typedef jbool (*func_java_util_LinkedHashMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_keySet_R_java_util_Set 17
typedef jobject (*func_java_util_LinkedHashMap_keySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object 18
typedef jobject (*func_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_LinkedHashMap_putAll_java_util_Map 19
typedef void (*func_java_util_LinkedHashMap_putAll_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedHashMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object 20
typedef jobject (*func_java_util_LinkedHashMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object 21
typedef jobject (*func_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedHashMap_remove_java_lang_Object_java_lang_Object_R_boolean 22
typedef jbool (*func_java_util_LinkedHashMap_remove_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_LinkedHashMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object 23
typedef jobject (*func_java_util_LinkedHashMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_LinkedHashMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean 24
typedef jbool (*func_java_util_LinkedHashMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_LinkedHashMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object 25
typedef jobject (*func_java_util_LinkedHashMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_LinkedHashMap_forEach_java_util_function_BiConsumer 26
typedef void (*func_java_util_LinkedHashMap_forEach_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedHashMap_replaceAll_java_util_function_BiFunction 27
typedef void (*func_java_util_LinkedHashMap_replaceAll_java_util_function_BiFunction)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedHashMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object 28
typedef jobject (*func_java_util_LinkedHashMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_LinkedHashMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 29
typedef jobject (*func_java_util_LinkedHashMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_LinkedHashMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 30
typedef jobject (*func_java_util_LinkedHashMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_LinkedHashMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 31
typedef jobject (*func_java_util_LinkedHashMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_LinkedHashMap_size_R_int 32
typedef jint (*func_java_util_LinkedHashMap_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_values_R_java_util_Collection 33
typedef jobject (*func_java_util_LinkedHashMap_values_R_java_util_Collection)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry 34
typedef jobject (*func_java_util_LinkedHashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_LinkedHashMap_computeThreshold 35
typedef void (*func_java_util_LinkedHashMap_computeThreshold)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry 36
typedef jobject (*func_java_util_LinkedHashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedHashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry 37
typedef jobject (*func_java_util_LinkedHashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_LinkedHashMap_findNullKeyEntry_R_java_util_HashMap$Entry 38
typedef jobject (*func_java_util_LinkedHashMap_findNullKeyEntry_R_java_util_HashMap$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object 39
typedef jobject (*func_java_util_LinkedHashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_LinkedHashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry 40
typedef jobject (*func_java_util_LinkedHashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_java_util_LinkedHashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry 41
typedef jobject (*func_java_util_LinkedHashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_LinkedHashMap_putAllImpl_java_util_Map 42
typedef void (*func_java_util_LinkedHashMap_putAllImpl_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedHashMap_rehash_int 43
typedef void (*func_java_util_LinkedHashMap_rehash_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_LinkedHashMap_rehash 44
typedef void (*func_java_util_LinkedHashMap_rehash)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap_removeEntry_java_util_HashMap$Entry 45
typedef void (*func_java_util_LinkedHashMap_removeEntry_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedHashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry 46
typedef jobject (*func_java_util_LinkedHashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedHashMap_linkEntry_java_util_LinkedHashMap$LinkedHashMapEntry 47
typedef void (*func_java_util_LinkedHashMap_linkEntry_java_util_LinkedHashMap$LinkedHashMapEntry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedHashMap_removeEldestEntry_java_util_Map$Entry_R_boolean 48
typedef jbool (*func_java_util_LinkedHashMap_removeEldestEntry_java_util_Map$Entry_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_LinkedHashMap(jobject object, jint mark, jint depth);
void clinit_java_util_LinkedHashMap(jcontext ctx);
void init_java_util_LinkedHashMap(jcontext ctx, jobject self);
void init_java_util_LinkedHashMap_int(jcontext ctx, jobject self, jint param0);
void init_java_util_LinkedHashMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_java_util_LinkedHashMap_int_float_boolean(jcontext ctx, jobject self, jint param0, jfloat param1, jbool param2);
void init_java_util_LinkedHashMap_java_util_Map(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_LinkedHashMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_LinkedHashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry(jcontext ctx, jobject self, jint param0);
jobject M_java_util_LinkedHashMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_LinkedHashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject M_java_util_LinkedHashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_util_LinkedHashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_LinkedHashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_LinkedHashMap_linkEntry_java_util_LinkedHashMap$LinkedHashMapEntry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_LinkedHashMap_entrySet_R_java_util_Set(jcontext ctx, jobject self);
jobject M_java_util_LinkedHashMap_keySet_R_java_util_Set(jcontext ctx, jobject self);
jobject M_java_util_LinkedHashMap_values_R_java_util_Collection(jcontext ctx, jobject self);
jobject M_java_util_LinkedHashMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_LinkedHashMap_removeEldestEntry_java_util_Map$Entry_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_LinkedHashMap_clear(jcontext ctx, jobject self);
jobject SM_java_util_LinkedHashMap_access$000_java_util_LinkedHashMap_R_java_util_LinkedHashMap$LinkedHashMapEntry(jcontext ctx, jobject param0);
jobject SM_java_util_LinkedHashMap_access$102_java_util_LinkedHashMap_java_util_LinkedHashMap$LinkedHashMapEntry_R_java_util_LinkedHashMap$LinkedHashMapEntry(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_util_LinkedHashMap_access$002_java_util_LinkedHashMap_java_util_LinkedHashMap$LinkedHashMapEntry_R_java_util_LinkedHashMap$LinkedHashMapEntry(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
