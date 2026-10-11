#ifndef HEADER_arc_struct_ObjectIntMap
#define HEADER_arc_struct_ObjectIntMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_ObjectIntMap {
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
} arc_struct_ObjectIntMap;

extern Class class_arc_struct_ObjectIntMap;


#define VTABLE_arc_struct_ObjectIntMap_hashCode_R_int 0
typedef jint (*func_arc_struct_ObjectIntMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_ObjectIntMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectIntMap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_ObjectIntMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_ObjectIntMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_ObjectIntMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_finalize 5
typedef void (*func_arc_struct_ObjectIntMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_notify 6
typedef void (*func_arc_struct_ObjectIntMap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_notifyAll 7
typedef void (*func_arc_struct_ObjectIntMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_wait 8
typedef void (*func_arc_struct_ObjectIntMap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_wait_long 9
typedef void (*func_arc_struct_ObjectIntMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_ObjectIntMap_wait_long_int 10
typedef void (*func_arc_struct_ObjectIntMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_ObjectIntMap_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_ObjectIntMap_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_ObjectIntMap_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectIntMap_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_ObjectIntMap_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_place_java_lang_Object_R_int 14
typedef jint (*func_arc_struct_ObjectIntMap_place_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int 15
typedef jint (*func_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int 16
typedef void (*func_arc_struct_ObjectIntMap_put_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int_int_R_int 17
typedef jint (*func_arc_struct_ObjectIntMap_put_java_lang_Object_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_ObjectIntMap_putMissing_java_lang_Object_int 18
typedef void (*func_arc_struct_ObjectIntMap_putMissing_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_struct_ObjectIntMap_putMissing_java_lang_Object_int_int_R_int 19
typedef jint (*func_arc_struct_ObjectIntMap_putMissing_java_lang_Object_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_ObjectIntMap_putAll_arc_struct_ObjectIntMap 20
typedef void (*func_arc_struct_ObjectIntMap_putAll_arc_struct_ObjectIntMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectIntMap_putAll_Array1_java_lang_Object 21
typedef void (*func_arc_struct_ObjectIntMap_putAll_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectIntMap_copy_R_arc_struct_ObjectIntMap 22
typedef jobject (*func_arc_struct_ObjectIntMap_copy_R_arc_struct_ObjectIntMap)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_set_arc_struct_ObjectIntMap 23
typedef void (*func_arc_struct_ObjectIntMap_set_arc_struct_ObjectIntMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectIntMap_putResize_java_lang_Object_int 24
typedef void (*func_arc_struct_ObjectIntMap_putResize_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_R_int 25
typedef jint (*func_arc_struct_ObjectIntMap_get_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int 26
typedef jint (*func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int 27
typedef jint (*func_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_int_R_int 28
typedef jint (*func_arc_struct_ObjectIntMap_increment_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_struct_ObjectIntMap_increment_java_lang_Object_int_int_R_int 29
typedef jint (*func_arc_struct_ObjectIntMap_increment_java_lang_Object_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_ObjectIntMap_remove_java_lang_Object_R_int 30
typedef jint (*func_arc_struct_ObjectIntMap_remove_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectIntMap_remove_java_lang_Object_int_R_int 31
typedef jint (*func_arc_struct_ObjectIntMap_remove_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_struct_ObjectIntMap_notEmpty_R_boolean 32
typedef jbool (*func_arc_struct_ObjectIntMap_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_isEmpty_R_boolean 33
typedef jbool (*func_arc_struct_ObjectIntMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_shrink_int 34
typedef void (*func_arc_struct_ObjectIntMap_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectIntMap_clear_int 35
typedef void (*func_arc_struct_ObjectIntMap_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectIntMap_clear 36
typedef void (*func_arc_struct_ObjectIntMap_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_containsValue_int_R_boolean 37
typedef jbool (*func_arc_struct_ObjectIntMap_containsValue_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean 38
typedef jbool (*func_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectIntMap_findKey_int_R_java_lang_Object 39
typedef jobject (*func_arc_struct_ObjectIntMap_findKey_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectIntMap_ensureCapacity_int 40
typedef void (*func_arc_struct_ObjectIntMap_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectIntMap_resize_int 41
typedef void (*func_arc_struct_ObjectIntMap_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectIntMap_toString_java_lang_String_R_java_lang_String 42
typedef jobject (*func_arc_struct_ObjectIntMap_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectIntMap_toString_java_lang_String_boolean_R_java_lang_String 43
typedef jobject (*func_arc_struct_ObjectIntMap_toString_java_lang_String_boolean_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_ObjectIntMap_iterator_R_arc_struct_ObjectIntMap$Entries 44
typedef jobject (*func_arc_struct_ObjectIntMap_iterator_R_arc_struct_ObjectIntMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_entries_R_arc_struct_ObjectIntMap$Entries 45
typedef jobject (*func_arc_struct_ObjectIntMap_entries_R_arc_struct_ObjectIntMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_values_R_arc_struct_ObjectIntMap$Values 46
typedef jobject (*func_arc_struct_ObjectIntMap_values_R_arc_struct_ObjectIntMap$Values)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectIntMap_keys_R_arc_struct_ObjectIntMap$Keys 47
typedef jobject (*func_arc_struct_ObjectIntMap_keys_R_arc_struct_ObjectIntMap$Keys)(jcontext ctx, jobject self);

void mark_arc_struct_ObjectIntMap(jobject object, jint mark, jint depth);
void clinit_arc_struct_ObjectIntMap(jcontext ctx);
void init_arc_struct_ObjectIntMap(jcontext ctx, jobject self);
void init_arc_struct_ObjectIntMap_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_ObjectIntMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_arc_struct_ObjectIntMap_arc_struct_ObjectIntMap(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_ObjectIntMap_place_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_ObjectIntMap_locateKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectIntMap_put_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_arc_struct_ObjectIntMap_put_java_lang_Object_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_struct_ObjectIntMap_putMissing_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_arc_struct_ObjectIntMap_putMissing_java_lang_Object_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_struct_ObjectIntMap_putAll_arc_struct_ObjectIntMap(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectIntMap_putAll_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectIntMap_copy_R_arc_struct_ObjectIntMap(jcontext ctx, jobject self);
void M_arc_struct_ObjectIntMap_set_arc_struct_ObjectIntMap(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectIntMap_putResize_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_arc_struct_ObjectIntMap_get_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_arc_struct_ObjectIntMap_increment_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_ObjectIntMap_increment_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_arc_struct_ObjectIntMap_increment_java_lang_Object_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_arc_struct_ObjectIntMap_remove_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_ObjectIntMap_remove_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jbool M_arc_struct_ObjectIntMap_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_arc_struct_ObjectIntMap_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_arc_struct_ObjectIntMap_shrink_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ObjectIntMap_clear_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ObjectIntMap_clear(jcontext ctx, jobject self);
jbool M_arc_struct_ObjectIntMap_containsValue_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectIntMap_findKey_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ObjectIntMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ObjectIntMap_resize_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_ObjectIntMap_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_ObjectIntMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectIntMap_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectIntMap_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectIntMap_toString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_struct_ObjectIntMap_iterator_R_arc_struct_ObjectIntMap$Entries(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectIntMap_entries_R_arc_struct_ObjectIntMap$Entries(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectIntMap_values_R_arc_struct_ObjectIntMap$Values(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectIntMap_keys_R_arc_struct_ObjectIntMap$Keys(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectIntMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
