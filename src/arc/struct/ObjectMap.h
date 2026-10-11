#ifndef HEADER_arc_struct_ObjectMap
#define HEADER_arc_struct_ObjectMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_ObjectMap {
	java_lang_Object parent;
	jint F_size;
	jref F_keyTable;
	jref F_valueTable;
	jfloat F_loadFactor;
	jint F_threshold;
	jint F_shift;
	jint F_mask;
	jref F_entries1;
	jref F_entries2;
	jref F_values1;
	jref F_values2;
	jref F_keys1;
	jref F_keys2;
} arc_struct_ObjectMap;

extern Class class_arc_struct_ObjectMap;

extern jobject SF_arc_struct_ObjectMap_dummy;

#define VTABLE_arc_struct_ObjectMap_hashCode_R_int 0
typedef jint (*func_arc_struct_ObjectMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_ObjectMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_ObjectMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_ObjectMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_ObjectMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_finalize 5
typedef void (*func_arc_struct_ObjectMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_notify 6
typedef void (*func_arc_struct_ObjectMap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_notifyAll 7
typedef void (*func_arc_struct_ObjectMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_wait 8
typedef void (*func_arc_struct_ObjectMap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_wait_long 9
typedef void (*func_arc_struct_ObjectMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_ObjectMap_wait_long_int 10
typedef void (*func_arc_struct_ObjectMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_ObjectMap_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_ObjectMap_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_ObjectMap_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_ObjectMap_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_place_java_lang_Object_R_int 14
typedef jint (*func_arc_struct_ObjectMap_place_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int 15
typedef jint (*func_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object 16
typedef jobject (*func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object 17
typedef jobject (*func_arc_struct_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_ObjectMap_putAll_Array1_java_lang_Object 18
typedef void (*func_arc_struct_ObjectMap_putAll_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap 19
typedef void (*func_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap 20
typedef jobject (*func_arc_struct_ObjectMap_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2 21
typedef void (*func_arc_struct_ObjectMap_each_arc_func_Cons2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap_copy_R_arc_struct_ObjectMap 22
typedef jobject (*func_arc_struct_ObjectMap_copy_R_arc_struct_ObjectMap)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_set_arc_struct_ObjectMap 23
typedef void (*func_arc_struct_ObjectMap_set_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap_putResize_java_lang_Object_java_lang_Object 24
typedef void (*func_arc_struct_ObjectMap_putResize_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object 25
typedef jobject (*func_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object 26
typedef jobject (*func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object 27
typedef jobject (*func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object 28
typedef jobject (*func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object 29
typedef jobject (*func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap_notEmpty_R_boolean 30
typedef jbool (*func_arc_struct_ObjectMap_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_isEmpty_R_boolean 31
typedef jbool (*func_arc_struct_ObjectMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_shrink_int 32
typedef void (*func_arc_struct_ObjectMap_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectMap_clear_int 33
typedef void (*func_arc_struct_ObjectMap_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectMap_clear 34
typedef void (*func_arc_struct_ObjectMap_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean 35
typedef jbool (*func_arc_struct_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean 36
typedef jbool (*func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object 37
typedef jobject (*func_arc_struct_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_ObjectMap_ensureCapacity_int 38
typedef void (*func_arc_struct_ObjectMap_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectMap_resize_int 39
typedef void (*func_arc_struct_ObjectMap_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectMap_toString_java_lang_String_R_java_lang_String 40
typedef jobject (*func_arc_struct_ObjectMap_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String 41
typedef jobject (*func_arc_struct_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries 42
typedef jobject (*func_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries 43
typedef jobject (*func_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values 44
typedef jobject (*func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys 45
typedef jobject (*func_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys)(jcontext ctx, jobject self);

void mark_arc_struct_ObjectMap(jobject object, jint mark, jint depth);
void clinit_arc_struct_ObjectMap(jcontext ctx);
jobject SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(jcontext ctx, jobject param0);
void init_arc_struct_ObjectMap(jcontext ctx, jobject self);
void init_arc_struct_ObjectMap_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_ObjectMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_arc_struct_ObjectMap_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_ObjectMap_place_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_struct_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_struct_ObjectMap_putAll_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectMap_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectMap_each_arc_func_Cons2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectMap_copy_R_arc_struct_ObjectMap(jcontext ctx, jobject self);
void M_arc_struct_ObjectMap_set_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectMap_putResize_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_ObjectMap_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_arc_struct_ObjectMap_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_arc_struct_ObjectMap_shrink_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ObjectMap_clear_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ObjectMap_clear(jcontext ctx, jobject self);
jbool M_arc_struct_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_struct_ObjectMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ObjectMap_resize_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_ObjectMap_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_ObjectMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectMap_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectMap_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
