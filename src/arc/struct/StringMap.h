#ifndef HEADER_arc_struct_StringMap
#define HEADER_arc_struct_StringMap

#include "Clearwing.h"
#include "arc/struct/ObjectMap.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_StringMap {
	arc_struct_ObjectMap parent;
} arc_struct_StringMap;

extern Class class_arc_struct_StringMap;


#define VTABLE_arc_struct_StringMap_hashCode_R_int 0
typedef jint (*func_arc_struct_StringMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_StringMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_StringMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_StringMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_StringMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_finalize 5
typedef void (*func_arc_struct_StringMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_notify 6
typedef void (*func_arc_struct_StringMap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_notifyAll 7
typedef void (*func_arc_struct_StringMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_wait 8
typedef void (*func_arc_struct_StringMap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_wait_long 9
typedef void (*func_arc_struct_StringMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_StringMap_wait_long_int 10
typedef void (*func_arc_struct_StringMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_StringMap_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_StringMap_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_StringMap_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_StringMap_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_place_java_lang_Object_R_int 14
typedef jint (*func_arc_struct_StringMap_place_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_locateKey_java_lang_Object_R_int 15
typedef jint (*func_arc_struct_StringMap_locateKey_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object 16
typedef jobject (*func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_StringMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object 17
typedef jobject (*func_arc_struct_StringMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_StringMap_putAll_Array1_java_lang_Object 18
typedef void (*func_arc_struct_StringMap_putAll_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_putAll_arc_struct_ObjectMap 19
typedef void (*func_arc_struct_StringMap_putAll_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap 20
typedef jobject (*func_arc_struct_StringMap_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_each_arc_func_Cons2 21
typedef void (*func_arc_struct_StringMap_each_arc_func_Cons2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_copy_R_arc_struct_ObjectMap 22
typedef jobject (*func_arc_struct_StringMap_copy_R_arc_struct_ObjectMap)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_set_arc_struct_ObjectMap 23
typedef void (*func_arc_struct_StringMap_set_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_putResize_java_lang_Object_java_lang_Object 24
typedef void (*func_arc_struct_StringMap_putResize_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_StringMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object 25
typedef jobject (*func_arc_struct_StringMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_StringMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object 26
typedef jobject (*func_arc_struct_StringMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object 27
typedef jobject (*func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object 28
typedef jobject (*func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object 29
typedef jobject (*func_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_notEmpty_R_boolean 30
typedef jbool (*func_arc_struct_StringMap_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_isEmpty_R_boolean 31
typedef jbool (*func_arc_struct_StringMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_shrink_int 32
typedef void (*func_arc_struct_StringMap_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_StringMap_clear_int 33
typedef void (*func_arc_struct_StringMap_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_StringMap_clear 34
typedef void (*func_arc_struct_StringMap_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_containsValue_java_lang_Object_boolean_R_boolean 35
typedef jbool (*func_arc_struct_StringMap_containsValue_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean 36
typedef jbool (*func_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_findKey_java_lang_Object_boolean_R_java_lang_Object 37
typedef jobject (*func_arc_struct_StringMap_findKey_java_lang_Object_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_StringMap_ensureCapacity_int 38
typedef void (*func_arc_struct_StringMap_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_StringMap_resize_int 39
typedef void (*func_arc_struct_StringMap_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_StringMap_toString_java_lang_String_R_java_lang_String 40
typedef jobject (*func_arc_struct_StringMap_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_toString_java_lang_String_boolean_R_java_lang_String 41
typedef jobject (*func_arc_struct_StringMap_toString_java_lang_String_boolean_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_StringMap_iterator_R_arc_struct_ObjectMap$Entries 42
typedef jobject (*func_arc_struct_StringMap_iterator_R_arc_struct_ObjectMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_entries_R_arc_struct_ObjectMap$Entries 43
typedef jobject (*func_arc_struct_StringMap_entries_R_arc_struct_ObjectMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_values_R_arc_struct_ObjectMap$Values 44
typedef jobject (*func_arc_struct_StringMap_values_R_arc_struct_ObjectMap$Values)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_keys_R_arc_struct_ObjectMap$Keys 45
typedef jobject (*func_arc_struct_StringMap_keys_R_arc_struct_ObjectMap$Keys)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_StringMap_getBool_java_lang_String_R_boolean 46
typedef jbool (*func_arc_struct_StringMap_getBool_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_getInt_java_lang_String_R_int 47
typedef jint (*func_arc_struct_StringMap_getInt_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_getFloat_java_lang_String_R_float 48
typedef jfloat (*func_arc_struct_StringMap_getFloat_java_lang_String_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_getLong_java_lang_String_R_long 49
typedef jlong (*func_arc_struct_StringMap_getLong_java_lang_String_R_long)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_StringMap_getInt_java_lang_String_int_R_int 50
typedef jint (*func_arc_struct_StringMap_getInt_java_lang_String_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_struct_StringMap_getFloat_java_lang_String_float_R_float 51
typedef jfloat (*func_arc_struct_StringMap_getFloat_java_lang_String_float_R_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_struct_StringMap_getLong_java_lang_String_long_R_long 52
typedef jlong (*func_arc_struct_StringMap_getLong_java_lang_String_long_R_long)(jcontext ctx, jobject self, jobject param0, jlong param1);

void mark_arc_struct_StringMap(jobject object, jint mark, jint depth);
void clinit_arc_struct_StringMap(jcontext ctx);
jobject SM_arc_struct_StringMap_of_Array1_java_lang_Object_R_arc_struct_StringMap(jcontext ctx, jobject param0);
void init_arc_struct_StringMap(jcontext ctx, jobject self);
void init_arc_struct_StringMap_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_StringMap_getBool_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_StringMap_getInt_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_struct_StringMap_getFloat_java_lang_String_R_float(jcontext ctx, jobject self, jobject param0);
jlong M_arc_struct_StringMap_getLong_java_lang_String_R_long(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_StringMap_getInt_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jfloat M_arc_struct_StringMap_getFloat_java_lang_String_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
jlong M_arc_struct_StringMap_getLong_java_lang_String_long_R_long(jcontext ctx, jobject self, jobject param0, jlong param1);

#ifdef __cplusplus
}
#endif

#endif
