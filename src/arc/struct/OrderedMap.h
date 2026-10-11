#ifndef HEADER_arc_struct_OrderedMap
#define HEADER_arc_struct_OrderedMap

#include "Clearwing.h"
#include "arc/struct/ObjectMap.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_OrderedMap {
	arc_struct_ObjectMap parent;
	jref F_keys;
} arc_struct_OrderedMap;

extern Class class_arc_struct_OrderedMap;


#define VTABLE_arc_struct_OrderedMap_hashCode_R_int 0
typedef jint (*func_arc_struct_OrderedMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_OrderedMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedMap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_OrderedMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_OrderedMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_OrderedMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_finalize 5
typedef void (*func_arc_struct_OrderedMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_notify 6
typedef void (*func_arc_struct_OrderedMap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_notifyAll 7
typedef void (*func_arc_struct_OrderedMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_wait 8
typedef void (*func_arc_struct_OrderedMap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_wait_long 9
typedef void (*func_arc_struct_OrderedMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_OrderedMap_wait_long_int 10
typedef void (*func_arc_struct_OrderedMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_OrderedMap_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_OrderedMap_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_OrderedMap_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedMap_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_OrderedMap_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_place_java_lang_Object_R_int 14
typedef jint (*func_arc_struct_OrderedMap_place_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedMap_locateKey_java_lang_Object_R_int 15
typedef jint (*func_arc_struct_OrderedMap_locateKey_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object 16
typedef jobject (*func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_OrderedMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object 17
typedef jobject (*func_arc_struct_OrderedMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_OrderedMap_putAll_Array1_java_lang_Object 18
typedef void (*func_arc_struct_OrderedMap_putAll_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedMap_putAll_arc_struct_ObjectMap 19
typedef void (*func_arc_struct_OrderedMap_putAll_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedMap_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap 20
typedef jobject (*func_arc_struct_OrderedMap_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedMap_each_arc_func_Cons2 21
typedef void (*func_arc_struct_OrderedMap_each_arc_func_Cons2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedMap_copy_R_arc_struct_ObjectMap 22
typedef jobject (*func_arc_struct_OrderedMap_copy_R_arc_struct_ObjectMap)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_set_arc_struct_ObjectMap 23
typedef void (*func_arc_struct_OrderedMap_set_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedMap_putResize_java_lang_Object_java_lang_Object 24
typedef void (*func_arc_struct_OrderedMap_putResize_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_OrderedMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object 25
typedef jobject (*func_arc_struct_OrderedMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_OrderedMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object 26
typedef jobject (*func_arc_struct_OrderedMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object 27
typedef jobject (*func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object 28
typedef jobject (*func_arc_struct_OrderedMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_OrderedMap_remove_java_lang_Object_R_java_lang_Object 29
typedef jobject (*func_arc_struct_OrderedMap_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedMap_notEmpty_R_boolean 30
typedef jbool (*func_arc_struct_OrderedMap_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_isEmpty_R_boolean 31
typedef jbool (*func_arc_struct_OrderedMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_shrink_int 32
typedef void (*func_arc_struct_OrderedMap_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_OrderedMap_clear_int 33
typedef void (*func_arc_struct_OrderedMap_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_OrderedMap_clear 34
typedef void (*func_arc_struct_OrderedMap_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_containsValue_java_lang_Object_boolean_R_boolean 35
typedef jbool (*func_arc_struct_OrderedMap_containsValue_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean 36
typedef jbool (*func_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedMap_findKey_java_lang_Object_boolean_R_java_lang_Object 37
typedef jobject (*func_arc_struct_OrderedMap_findKey_java_lang_Object_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_OrderedMap_ensureCapacity_int 38
typedef void (*func_arc_struct_OrderedMap_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_OrderedMap_resize_int 39
typedef void (*func_arc_struct_OrderedMap_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_OrderedMap_toString_java_lang_String_R_java_lang_String 40
typedef jobject (*func_arc_struct_OrderedMap_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedMap_toString_java_lang_String_boolean_R_java_lang_String 41
typedef jobject (*func_arc_struct_OrderedMap_toString_java_lang_String_boolean_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_OrderedMap_iterator_R_arc_struct_ObjectMap$Entries 42
typedef jobject (*func_arc_struct_OrderedMap_iterator_R_arc_struct_ObjectMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_entries_R_arc_struct_ObjectMap$Entries 43
typedef jobject (*func_arc_struct_OrderedMap_entries_R_arc_struct_ObjectMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values 44
typedef jobject (*func_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_keys_R_arc_struct_ObjectMap$Keys 45
typedef jobject (*func_arc_struct_OrderedMap_keys_R_arc_struct_ObjectMap$Keys)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_OrderedMap_putAll_arc_struct_OrderedMap 46
typedef void (*func_arc_struct_OrderedMap_putAll_arc_struct_OrderedMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_OrderedMap_removeIndex_int_R_java_lang_Object 47
typedef jobject (*func_arc_struct_OrderedMap_removeIndex_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_OrderedMap_alter_java_lang_Object_java_lang_Object_R_boolean 48
typedef jbool (*func_arc_struct_OrderedMap_alter_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_OrderedMap_alterIndex_int_java_lang_Object_R_boolean 49
typedef jbool (*func_arc_struct_OrderedMap_alterIndex_int_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq 50
typedef jobject (*func_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq)(jcontext ctx, jobject self);

void mark_arc_struct_OrderedMap(jobject object, jint mark, jint depth);
void clinit_arc_struct_OrderedMap(jcontext ctx);
jobject SM_arc_struct_OrderedMap_of_Array1_java_lang_Object_R_arc_struct_OrderedMap(jcontext ctx, jobject param0);
void init_arc_struct_OrderedMap(jcontext ctx, jobject self);
void init_arc_struct_OrderedMap_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_OrderedMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_arc_struct_OrderedMap_arc_struct_OrderedMap(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_struct_OrderedMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_struct_OrderedMap_putAll_arc_struct_OrderedMap(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_OrderedMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_OrderedMap_removeIndex_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_OrderedMap_alter_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_arc_struct_OrderedMap_alterIndex_int_java_lang_Object_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_struct_OrderedMap_clear_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_OrderedMap_clear(jcontext ctx, jobject self);
jobject M_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_struct_OrderedMap_iterator_R_arc_struct_ObjectMap$Entries(jcontext ctx, jobject self);
jobject M_arc_struct_OrderedMap_entries_R_arc_struct_ObjectMap$Entries(jcontext ctx, jobject self);
jobject M_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values(jcontext ctx, jobject self);
jobject M_arc_struct_OrderedMap_keys_R_arc_struct_ObjectMap$Keys(jcontext ctx, jobject self);
jobject M_arc_struct_OrderedMap_toString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_struct_OrderedMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
