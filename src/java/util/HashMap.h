#ifndef HEADER_java_util_HashMap
#define HEADER_java_util_HashMap

#include "Clearwing.h"
#include "java/util/AbstractMap.h"
#include "java/util/Map.h"
#include "java/lang/Cloneable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_HashMap {
	java_util_AbstractMap parent;
	jint F_elementCount;
	jref F_elementData;
	jint F_modCount;
	jfloat F_loadFactor;
	jint F_threshold;
} java_util_HashMap;

extern Class class_java_util_HashMap;

extern jlong SF_java_util_HashMap_serialVersionUID;
extern jint SF_java_util_HashMap_DEFAULT_SIZE;

#define VTABLE_java_util_HashMap_hashCode_R_int 0
typedef jint (*func_java_util_HashMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_HashMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashMap_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_HashMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_HashMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_toString_R_java_lang_String 4
typedef jobject (*func_java_util_HashMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_finalize 5
typedef void (*func_java_util_HashMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_notify 6
typedef void (*func_java_util_HashMap_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_notifyAll 7
typedef void (*func_java_util_HashMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_wait 8
typedef void (*func_java_util_HashMap_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_wait_long 9
typedef void (*func_java_util_HashMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_HashMap_wait_long_int 10
typedef void (*func_java_util_HashMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_HashMap_clear 11
typedef void (*func_java_util_HashMap_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_containsKey_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_HashMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashMap_containsValue_java_lang_Object_R_boolean 13
typedef jbool (*func_java_util_HashMap_containsValue_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashMap_entrySet_R_java_util_Set 14
typedef jobject (*func_java_util_HashMap_entrySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_get_java_lang_Object_R_java_lang_Object 15
typedef jobject (*func_java_util_HashMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashMap_isEmpty_R_boolean 16
typedef jbool (*func_java_util_HashMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_keySet_R_java_util_Set 17
typedef jobject (*func_java_util_HashMap_keySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object 18
typedef jobject (*func_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_HashMap_putAll_java_util_Map 19
typedef void (*func_java_util_HashMap_putAll_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object 20
typedef jobject (*func_java_util_HashMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object 21
typedef jobject (*func_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashMap_remove_java_lang_Object_java_lang_Object_R_boolean 22
typedef jbool (*func_java_util_HashMap_remove_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_HashMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object 23
typedef jobject (*func_java_util_HashMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_HashMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean 24
typedef jbool (*func_java_util_HashMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_HashMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object 25
typedef jobject (*func_java_util_HashMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_HashMap_forEach_java_util_function_BiConsumer 26
typedef void (*func_java_util_HashMap_forEach_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashMap_replaceAll_java_util_function_BiFunction 27
typedef void (*func_java_util_HashMap_replaceAll_java_util_function_BiFunction)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object 28
typedef jobject (*func_java_util_HashMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_HashMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 29
typedef jobject (*func_java_util_HashMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_HashMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 30
typedef jobject (*func_java_util_HashMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_HashMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 31
typedef jobject (*func_java_util_HashMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_HashMap_size_R_int 32
typedef jint (*func_java_util_HashMap_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_values_R_java_util_Collection 33
typedef jobject (*func_java_util_HashMap_values_R_java_util_Collection)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry 34
typedef jobject (*func_java_util_HashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_HashMap_computeThreshold 35
typedef void (*func_java_util_HashMap_computeThreshold)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry 36
typedef jobject (*func_java_util_HashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry 37
typedef jobject (*func_java_util_HashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_HashMap_findNullKeyEntry_R_java_util_HashMap$Entry 38
typedef jobject (*func_java_util_HashMap_findNullKeyEntry_R_java_util_HashMap$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object 39
typedef jobject (*func_java_util_HashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_HashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry 40
typedef jobject (*func_java_util_HashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_java_util_HashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry 41
typedef jobject (*func_java_util_HashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_HashMap_putAllImpl_java_util_Map 42
typedef void (*func_java_util_HashMap_putAllImpl_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashMap_rehash_int 43
typedef void (*func_java_util_HashMap_rehash_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_HashMap_rehash 44
typedef void (*func_java_util_HashMap_rehash)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap_removeEntry_java_util_HashMap$Entry 45
typedef void (*func_java_util_HashMap_removeEntry_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry 46
typedef jobject (*func_java_util_HashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_HashMap(jobject object, jint mark, jint depth);
void clinit_java_util_HashMap(jcontext ctx);
jobject M_java_util_HashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry(jcontext ctx, jobject self, jint param0);
void init_java_util_HashMap(jcontext ctx, jobject self);
void init_java_util_HashMap_int(jcontext ctx, jobject self, jint param0);
jint SM_java_util_HashMap_calculateCapacity_int_R_int(jcontext ctx, jint param0);
void init_java_util_HashMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_java_util_HashMap_java_util_Map(jcontext ctx, jobject self, jobject param0);
void init_java_util_HashMap_java_util_HashMap(jcontext ctx, jobject self, jobject param0);
void M_java_util_HashMap_clear(jcontext ctx, jobject self);
void M_java_util_HashMap_computeThreshold(jcontext ctx, jobject self);
jbool M_java_util_HashMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_HashMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_HashMap_entrySet_R_java_util_Set(jcontext ctx, jobject self);
jobject M_java_util_HashMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_HashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_HashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_util_HashMap_findNullKeyEntry_R_java_util_HashMap$Entry(jcontext ctx, jobject self);
jbool M_java_util_HashMap_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_HashMap_keySet_R_java_util_Set(jcontext ctx, jobject self);
jobject M_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_HashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_HashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject M_java_util_HashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_util_HashMap_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0);
void M_java_util_HashMap_putAllImpl_java_util_Map(jcontext ctx, jobject self, jobject param0);
void M_java_util_HashMap_rehash_int(jcontext ctx, jobject self, jint param0);
void M_java_util_HashMap_rehash(jcontext ctx, jobject self);
jobject M_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_java_util_HashMap_removeEntry_java_util_HashMap$Entry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_HashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry(jcontext ctx, jobject self, jobject param0);
jint M_java_util_HashMap_size_R_int(jcontext ctx, jobject self);
jobject M_java_util_HashMap_values_R_java_util_Collection(jcontext ctx, jobject self);
jint SM_java_util_HashMap_computeHashCode_java_lang_Object_R_int(jcontext ctx, jobject param0);
jbool SM_java_util_HashMap_areEqualKeys_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1);
jobject M_java_util_HashMap_clone_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
