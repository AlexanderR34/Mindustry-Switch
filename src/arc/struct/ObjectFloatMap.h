#ifndef HEADER_arc_struct_ObjectFloatMap
#define HEADER_arc_struct_ObjectFloatMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_ObjectFloatMap {
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
} arc_struct_ObjectFloatMap;

extern Class class_arc_struct_ObjectFloatMap;


#define VTABLE_arc_struct_ObjectFloatMap_hashCode_R_int 0
typedef jint (*func_arc_struct_ObjectFloatMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_ObjectFloatMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectFloatMap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_ObjectFloatMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_ObjectFloatMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_ObjectFloatMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_finalize 5
typedef void (*func_arc_struct_ObjectFloatMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_notify 6
typedef void (*func_arc_struct_ObjectFloatMap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_notifyAll 7
typedef void (*func_arc_struct_ObjectFloatMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_wait 8
typedef void (*func_arc_struct_ObjectFloatMap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_wait_long 9
typedef void (*func_arc_struct_ObjectFloatMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_ObjectFloatMap_wait_long_int 10
typedef void (*func_arc_struct_ObjectFloatMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_ObjectFloatMap_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_ObjectFloatMap_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_ObjectFloatMap_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectFloatMap_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_ObjectFloatMap_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_putAll_Array1_java_lang_Object_R_arc_struct_ObjectFloatMap 14
typedef jobject (*func_arc_struct_ObjectFloatMap_putAll_Array1_java_lang_Object_R_arc_struct_ObjectFloatMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectFloatMap_place_java_lang_Object_R_int 15
typedef jint (*func_arc_struct_ObjectFloatMap_place_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int 16
typedef jint (*func_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float 17
typedef void (*func_arc_struct_ObjectFloatMap_put_java_lang_Object_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float_float_R_float 18
typedef jfloat (*func_arc_struct_ObjectFloatMap_put_java_lang_Object_float_float_R_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_struct_ObjectFloatMap_putMissing_java_lang_Object_float 19
typedef void (*func_arc_struct_ObjectFloatMap_putMissing_java_lang_Object_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_struct_ObjectFloatMap_putMissing_java_lang_Object_float_float_R_float 20
typedef jfloat (*func_arc_struct_ObjectFloatMap_putMissing_java_lang_Object_float_float_R_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_struct_ObjectFloatMap_putAll_arc_struct_ObjectFloatMap 21
typedef void (*func_arc_struct_ObjectFloatMap_putAll_arc_struct_ObjectFloatMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectFloatMap_copy_R_arc_struct_ObjectFloatMap 22
typedef jobject (*func_arc_struct_ObjectFloatMap_copy_R_arc_struct_ObjectFloatMap)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_set_arc_struct_ObjectFloatMap 23
typedef void (*func_arc_struct_ObjectFloatMap_set_arc_struct_ObjectFloatMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectFloatMap_each_arc_func_Cons 24
typedef void (*func_arc_struct_ObjectFloatMap_each_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectFloatMap_putResize_java_lang_Object_float 25
typedef void (*func_arc_struct_ObjectFloatMap_putResize_java_lang_Object_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float 26
typedef jfloat (*func_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_struct_ObjectFloatMap_increment_java_lang_Object_float_float_R_float 27
typedef jfloat (*func_arc_struct_ObjectFloatMap_increment_java_lang_Object_float_float_R_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_struct_ObjectFloatMap_remove_java_lang_Object_float_R_float 28
typedef jfloat (*func_arc_struct_ObjectFloatMap_remove_java_lang_Object_float_R_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_struct_ObjectFloatMap_notEmpty_R_boolean 29
typedef jbool (*func_arc_struct_ObjectFloatMap_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_isEmpty_R_boolean 30
typedef jbool (*func_arc_struct_ObjectFloatMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_shrink_int 31
typedef void (*func_arc_struct_ObjectFloatMap_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectFloatMap_clear_int 32
typedef void (*func_arc_struct_ObjectFloatMap_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectFloatMap_clear 33
typedef void (*func_arc_struct_ObjectFloatMap_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_containsValue_float_R_boolean 34
typedef jbool (*func_arc_struct_ObjectFloatMap_containsValue_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_struct_ObjectFloatMap_containsValue_float_float_R_boolean 35
typedef jbool (*func_arc_struct_ObjectFloatMap_containsValue_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_struct_ObjectFloatMap_containsKey_java_lang_Object_R_boolean 36
typedef jbool (*func_arc_struct_ObjectFloatMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectFloatMap_findKey_float_R_java_lang_Object 37
typedef jobject (*func_arc_struct_ObjectFloatMap_findKey_float_R_java_lang_Object)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_struct_ObjectFloatMap_findKey_float_float_R_java_lang_Object 38
typedef jobject (*func_arc_struct_ObjectFloatMap_findKey_float_float_R_java_lang_Object)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_struct_ObjectFloatMap_ensureCapacity_int 39
typedef void (*func_arc_struct_ObjectFloatMap_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectFloatMap_resize_int 40
typedef void (*func_arc_struct_ObjectFloatMap_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ObjectFloatMap_toString_java_lang_String_R_java_lang_String 41
typedef jobject (*func_arc_struct_ObjectFloatMap_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ObjectFloatMap_toString_java_lang_String_boolean_R_java_lang_String 42
typedef jobject (*func_arc_struct_ObjectFloatMap_toString_java_lang_String_boolean_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_ObjectFloatMap_iterator_R_arc_struct_ObjectFloatMap$Entries 43
typedef jobject (*func_arc_struct_ObjectFloatMap_iterator_R_arc_struct_ObjectFloatMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_entries_R_arc_struct_ObjectFloatMap$Entries 44
typedef jobject (*func_arc_struct_ObjectFloatMap_entries_R_arc_struct_ObjectFloatMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_values_R_arc_struct_ObjectFloatMap$Values 45
typedef jobject (*func_arc_struct_ObjectFloatMap_values_R_arc_struct_ObjectFloatMap$Values)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ObjectFloatMap_keys_R_arc_struct_ObjectFloatMap$Keys 46
typedef jobject (*func_arc_struct_ObjectFloatMap_keys_R_arc_struct_ObjectFloatMap$Keys)(jcontext ctx, jobject self);

void mark_arc_struct_ObjectFloatMap(jobject object, jint mark, jint depth);
void clinit_arc_struct_ObjectFloatMap(jcontext ctx);
void init_arc_struct_ObjectFloatMap(jcontext ctx, jobject self);
void init_arc_struct_ObjectFloatMap_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_ObjectFloatMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_arc_struct_ObjectFloatMap_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectFloatMap_putAll_Array1_java_lang_Object_R_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_ObjectFloatMap_place_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_ObjectFloatMap_locateKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectFloatMap_put_java_lang_Object_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
jfloat M_arc_struct_ObjectFloatMap_put_java_lang_Object_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_arc_struct_ObjectFloatMap_putMissing_java_lang_Object_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
jfloat M_arc_struct_ObjectFloatMap_putMissing_java_lang_Object_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_arc_struct_ObjectFloatMap_putAll_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectFloatMap_copy_R_arc_struct_ObjectFloatMap(jcontext ctx, jobject self);
void M_arc_struct_ObjectFloatMap_set_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectFloatMap_each_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ObjectFloatMap_putResize_java_lang_Object_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
jfloat M_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
jfloat M_arc_struct_ObjectFloatMap_increment_java_lang_Object_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jfloat M_arc_struct_ObjectFloatMap_remove_java_lang_Object_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_struct_ObjectFloatMap_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_arc_struct_ObjectFloatMap_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_arc_struct_ObjectFloatMap_shrink_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ObjectFloatMap_clear_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ObjectFloatMap_clear(jcontext ctx, jobject self);
jbool M_arc_struct_ObjectFloatMap_containsValue_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_struct_ObjectFloatMap_containsValue_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_arc_struct_ObjectFloatMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectFloatMap_findKey_float_R_java_lang_Object(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_struct_ObjectFloatMap_findKey_float_float_R_java_lang_Object(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_struct_ObjectFloatMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ObjectFloatMap_resize_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_ObjectFloatMap_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_ObjectFloatMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectFloatMap_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ObjectFloatMap_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectFloatMap_toString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_struct_ObjectFloatMap_iterator_R_arc_struct_ObjectFloatMap$Entries(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectFloatMap_entries_R_arc_struct_ObjectFloatMap$Entries(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectFloatMap_values_R_arc_struct_ObjectFloatMap$Values(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectFloatMap_keys_R_arc_struct_ObjectFloatMap$Keys(jcontext ctx, jobject self);
jobject M_arc_struct_ObjectFloatMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
