#ifndef HEADER_mindustry_type_MapLocales
#define HEADER_mindustry_type_MapLocales

#include "Clearwing.h"
#include "arc/struct/ObjectMap.h"
#include "arc/util/serialization/Json_JsonSerializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_MapLocales {
	arc_struct_ObjectMap parent;
} mindustry_type_MapLocales;

extern Class class_mindustry_type_MapLocales;


#define VTABLE_mindustry_type_MapLocales_hashCode_R_int 0
typedef jint (*func_mindustry_type_MapLocales_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_MapLocales_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_MapLocales_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_MapLocales_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_MapLocales_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_MapLocales_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_finalize 5
typedef void (*func_mindustry_type_MapLocales_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_notify 6
typedef void (*func_mindustry_type_MapLocales_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_notifyAll 7
typedef void (*func_mindustry_type_MapLocales_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_wait 8
typedef void (*func_mindustry_type_MapLocales_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_wait_long 9
typedef void (*func_mindustry_type_MapLocales_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_MapLocales_wait_long_int 10
typedef void (*func_mindustry_type_MapLocales_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_MapLocales_iterator_R_java_util_Iterator 11
typedef jobject (*func_mindustry_type_MapLocales_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_forEach_java_util_function_Consumer 12
typedef void (*func_mindustry_type_MapLocales_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_MapLocales_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_mindustry_type_MapLocales_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_place_java_lang_Object_R_int 14
typedef jint (*func_mindustry_type_MapLocales_place_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_MapLocales_locateKey_java_lang_Object_R_int 15
typedef jint (*func_mindustry_type_MapLocales_locateKey_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_MapLocales_put_java_lang_Object_java_lang_Object_R_java_lang_Object 16
typedef jobject (*func_mindustry_type_MapLocales_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_MapLocales_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object 17
typedef jobject (*func_mindustry_type_MapLocales_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_MapLocales_putAll_Array1_java_lang_Object 18
typedef void (*func_mindustry_type_MapLocales_putAll_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_MapLocales_putAll_arc_struct_ObjectMap 19
typedef void (*func_mindustry_type_MapLocales_putAll_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_MapLocales_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap 20
typedef jobject (*func_mindustry_type_MapLocales_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_MapLocales_each_arc_func_Cons2 21
typedef void (*func_mindustry_type_MapLocales_each_arc_func_Cons2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_MapLocales_copy_R_arc_struct_ObjectMap 22
typedef jobject (*func_mindustry_type_MapLocales_copy_R_arc_struct_ObjectMap)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_set_arc_struct_ObjectMap 23
typedef void (*func_mindustry_type_MapLocales_set_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_MapLocales_putResize_java_lang_Object_java_lang_Object 24
typedef void (*func_mindustry_type_MapLocales_putResize_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_MapLocales_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object 25
typedef jobject (*func_mindustry_type_MapLocales_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_MapLocales_get_java_lang_Object_arc_func_Prov_R_java_lang_Object 26
typedef jobject (*func_mindustry_type_MapLocales_get_java_lang_Object_arc_func_Prov_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object 27
typedef jobject (*func_mindustry_type_MapLocales_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_MapLocales_get_java_lang_Object_java_lang_Object_R_java_lang_Object 28
typedef jobject (*func_mindustry_type_MapLocales_get_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_MapLocales_remove_java_lang_Object_R_java_lang_Object 29
typedef jobject (*func_mindustry_type_MapLocales_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_MapLocales_notEmpty_R_boolean 30
typedef jbool (*func_mindustry_type_MapLocales_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_isEmpty_R_boolean 31
typedef jbool (*func_mindustry_type_MapLocales_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_shrink_int 32
typedef void (*func_mindustry_type_MapLocales_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_type_MapLocales_clear_int 33
typedef void (*func_mindustry_type_MapLocales_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_type_MapLocales_clear 34
typedef void (*func_mindustry_type_MapLocales_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_containsValue_java_lang_Object_boolean_R_boolean 35
typedef jbool (*func_mindustry_type_MapLocales_containsValue_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_type_MapLocales_containsKey_java_lang_Object_R_boolean 36
typedef jbool (*func_mindustry_type_MapLocales_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_MapLocales_findKey_java_lang_Object_boolean_R_java_lang_Object 37
typedef jobject (*func_mindustry_type_MapLocales_findKey_java_lang_Object_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_type_MapLocales_ensureCapacity_int 38
typedef void (*func_mindustry_type_MapLocales_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_type_MapLocales_resize_int 39
typedef void (*func_mindustry_type_MapLocales_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_type_MapLocales_toString_java_lang_String_R_java_lang_String 40
typedef jobject (*func_mindustry_type_MapLocales_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_MapLocales_toString_java_lang_String_boolean_R_java_lang_String 41
typedef jobject (*func_mindustry_type_MapLocales_toString_java_lang_String_boolean_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_type_MapLocales_iterator_R_arc_struct_ObjectMap$Entries 42
typedef jobject (*func_mindustry_type_MapLocales_iterator_R_arc_struct_ObjectMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_entries_R_arc_struct_ObjectMap$Entries 43
typedef jobject (*func_mindustry_type_MapLocales_entries_R_arc_struct_ObjectMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_values_R_arc_struct_ObjectMap$Values 44
typedef jobject (*func_mindustry_type_MapLocales_values_R_arc_struct_ObjectMap$Values)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_keys_R_arc_struct_ObjectMap$Keys 45
typedef jobject (*func_mindustry_type_MapLocales_keys_R_arc_struct_ObjectMap$Keys)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_write_arc_util_serialization_Json 46
typedef void (*func_mindustry_type_MapLocales_write_arc_util_serialization_Json)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_MapLocales_read_arc_util_serialization_Json_arc_util_serialization_JsonValue 47
typedef void (*func_mindustry_type_MapLocales_read_arc_util_serialization_Json_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_MapLocales_copy_R_mindustry_type_MapLocales 48
typedef jobject (*func_mindustry_type_MapLocales_copy_R_mindustry_type_MapLocales)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String 49
typedef jobject (*func_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_MapLocales_getProperty_java_lang_String_java_lang_String_R_java_lang_String 50
typedef jobject (*func_mindustry_type_MapLocales_getProperty_java_lang_String_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean 51
typedef jbool (*func_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean 52
typedef jbool (*func_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_MapLocales_getFormatted_java_lang_String_Array1_java_lang_Object_R_java_lang_String 53
typedef jobject (*func_mindustry_type_MapLocales_getFormatted_java_lang_String_Array1_java_lang_Object_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_type_MapLocales(jobject object, jint mark, jint depth);
void clinit_mindustry_type_MapLocales(jcontext ctx);
void init_mindustry_type_MapLocales(jcontext ctx, jobject self);
void M_mindustry_type_MapLocales_write_arc_util_serialization_Json(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_MapLocales_read_arc_util_serialization_Json_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_type_MapLocales_copy_R_mindustry_type_MapLocales(jcontext ctx, jobject self);
jobject M_mindustry_type_MapLocales_getProperty_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_MapLocales_getProperty_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_type_MapLocales_containsProperty_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_MapLocales_containsProperty_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_type_MapLocales_getFormatted_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_mindustry_type_MapLocales_currentLocale_R_java_lang_String(jcontext ctx);
jobject M_mindustry_type_MapLocales_copy_R_arc_struct_ObjectMap(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
