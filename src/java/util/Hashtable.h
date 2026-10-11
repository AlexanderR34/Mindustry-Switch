#ifndef HEADER_java_util_Hashtable
#define HEADER_java_util_Hashtable

#include "Clearwing.h"
#include "java/util/Dictionary.h"
#include "java/util/Map.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Hashtable {
	java_util_Dictionary parent;
	jint F_elementCount;
	jref F_elementData;
	jfloat F_loadFactor;
	jint F_threshold;
	jint F_firstSlot;
	jint F_lastSlot;
	jint F_modCount;
} java_util_Hashtable;

extern Class class_java_util_Hashtable;

extern jobject SF_java_util_Hashtable_EMPTY_ENUMERATION;
extern jobject SF_java_util_Hashtable_EMPTY_ITERATOR;

#define VTABLE_java_util_Hashtable_hashCode_R_int 0
typedef jint (*func_java_util_Hashtable_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Hashtable_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Hashtable_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Hashtable_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Hashtable_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_finalize 5
typedef void (*func_java_util_Hashtable_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_notify 6
typedef void (*func_java_util_Hashtable_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_notifyAll 7
typedef void (*func_java_util_Hashtable_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_wait 8
typedef void (*func_java_util_Hashtable_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_wait_long 9
typedef void (*func_java_util_Hashtable_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Hashtable_wait_long_int 10
typedef void (*func_java_util_Hashtable_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Hashtable_elements_R_java_util_Enumeration 11
typedef jobject (*func_java_util_Hashtable_elements_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object 12
typedef jobject (*func_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable_isEmpty_R_boolean 13
typedef jbool (*func_java_util_Hashtable_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_keys_R_java_util_Enumeration 14
typedef jobject (*func_java_util_Hashtable_keys_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object 15
typedef jobject (*func_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Hashtable_remove_java_lang_Object_R_java_lang_Object 16
typedef jobject (*func_java_util_Hashtable_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable_size_R_int 17
typedef jint (*func_java_util_Hashtable_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_clear 18
typedef void (*func_java_util_Hashtable_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_containsKey_java_lang_Object_R_boolean 19
typedef jbool (*func_java_util_Hashtable_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable_containsValue_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_Hashtable_containsValue_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable_entrySet_R_java_util_Set 21
typedef jobject (*func_java_util_Hashtable_entrySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_keySet_R_java_util_Set 22
typedef jobject (*func_java_util_Hashtable_keySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_putAll_java_util_Map 23
typedef void (*func_java_util_Hashtable_putAll_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object 24
typedef jobject (*func_java_util_Hashtable_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Hashtable_remove_java_lang_Object_java_lang_Object_R_boolean 25
typedef jbool (*func_java_util_Hashtable_remove_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Hashtable_replace_java_lang_Object_java_lang_Object_R_java_lang_Object 26
typedef jobject (*func_java_util_Hashtable_replace_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Hashtable_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean 27
typedef jbool (*func_java_util_Hashtable_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_Hashtable_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object 28
typedef jobject (*func_java_util_Hashtable_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Hashtable_forEach_java_util_function_BiConsumer 29
typedef void (*func_java_util_Hashtable_forEach_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable_replaceAll_java_util_function_BiFunction 30
typedef void (*func_java_util_Hashtable_replaceAll_java_util_function_BiFunction)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object 31
typedef jobject (*func_java_util_Hashtable_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Hashtable_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 32
typedef jobject (*func_java_util_Hashtable_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Hashtable_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 33
typedef jobject (*func_java_util_Hashtable_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Hashtable_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 34
typedef jobject (*func_java_util_Hashtable_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_Hashtable_values_R_java_util_Collection 35
typedef jobject (*func_java_util_Hashtable_values_R_java_util_Collection)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_newElementArray_int_R_Array1_java_util_Hashtable$Entry 36
typedef jobject (*func_java_util_Hashtable_newElementArray_int_R_Array1_java_util_Hashtable$Entry)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Hashtable_computeMaxSize 37
typedef void (*func_java_util_Hashtable_computeMaxSize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable_contains_java_lang_Object_R_boolean 38
typedef jbool (*func_java_util_Hashtable_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable_getEntry_java_lang_Object_R_java_util_Hashtable$Entry 39
typedef jobject (*func_java_util_Hashtable_getEntry_java_lang_Object_R_java_util_Hashtable$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable_rehash 40
typedef void (*func_java_util_Hashtable_rehash)(jcontext ctx, jobject self);

void mark_java_util_Hashtable(jobject object, jint mark, jint depth);
void clinit_java_util_Hashtable(jcontext ctx);
jobject SM_java_util_Hashtable_newEntry_java_lang_Object_java_lang_Object_int_R_java_util_Hashtable$Entry(jcontext ctx, jobject param0, jobject param1, jint param2);
void init_java_util_Hashtable(jcontext ctx, jobject self);
void init_java_util_Hashtable_int(jcontext ctx, jobject self, jint param0);
void init_java_util_Hashtable_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_java_util_Hashtable_java_util_Map(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Hashtable_newElementArray_int_R_Array1_java_util_Hashtable$Entry(jcontext ctx, jobject self, jint param0);
void M_java_util_Hashtable_clear(jcontext ctx, jobject self);
void M_java_util_Hashtable_computeMaxSize(jcontext ctx, jobject self);
jbool M_java_util_Hashtable_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Hashtable_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Hashtable_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Hashtable_elements_R_java_util_Enumeration(jcontext ctx, jobject self);
jobject M_java_util_Hashtable_entrySet_R_java_util_Set(jcontext ctx, jobject self);
jbool M_java_util_Hashtable_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Hashtable_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Hashtable_getEntry_java_lang_Object_R_java_util_Hashtable$Entry(jcontext ctx, jobject self, jobject param0);
jint M_java_util_Hashtable_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_util_Hashtable_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_Hashtable_keys_R_java_util_Enumeration(jcontext ctx, jobject self);
jobject M_java_util_Hashtable_keySet_R_java_util_Set(jcontext ctx, jobject self);
jobject M_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_Hashtable_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0);
void M_java_util_Hashtable_rehash(jcontext ctx, jobject self);
jobject M_java_util_Hashtable_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jint M_java_util_Hashtable_size_R_int(jcontext ctx, jobject self);
jobject M_java_util_Hashtable_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_util_Hashtable_values_R_java_util_Collection(jcontext ctx, jobject self);
jobject SM_java_util_Hashtable_access$000_R_java_util_Iterator(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
