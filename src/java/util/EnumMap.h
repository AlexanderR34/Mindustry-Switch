#ifndef HEADER_java_util_EnumMap
#define HEADER_java_util_EnumMap

#include "Clearwing.h"
#include "java/util/AbstractMap.h"
#include "java/io/Serializable.h"
#include "java/lang/Cloneable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_EnumMap {
	java_util_AbstractMap parent;
	jref F_keyType;
	jref F_keyUniverse;
	jref F_vals;
	jint F_size;
	jref F_entrySet;
} java_util_EnumMap;

extern Class class_java_util_EnumMap;

extern jobject SF_java_util_EnumMap_NULL;
extern jobject SF_java_util_EnumMap_ZERO_LENGTH_ENUM_ARRAY;
extern jlong SF_java_util_EnumMap_serialVersionUID;

#define VTABLE_java_util_EnumMap_hashCode_R_int 0
typedef jint (*func_java_util_EnumMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_EnumMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_EnumMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_EnumMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap_toString_R_java_lang_String 4
typedef jobject (*func_java_util_EnumMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap_finalize 5
typedef void (*func_java_util_EnumMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap_notify 6
typedef void (*func_java_util_EnumMap_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap_notifyAll 7
typedef void (*func_java_util_EnumMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap_wait 8
typedef void (*func_java_util_EnumMap_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap_wait_long 9
typedef void (*func_java_util_EnumMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_EnumMap_wait_long_int 10
typedef void (*func_java_util_EnumMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_EnumMap_clear 11
typedef void (*func_java_util_EnumMap_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap_containsKey_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_EnumMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap_containsValue_java_lang_Object_R_boolean 13
typedef jbool (*func_java_util_EnumMap_containsValue_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap_entrySet_R_java_util_Set 14
typedef jobject (*func_java_util_EnumMap_entrySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap_get_java_lang_Object_R_java_lang_Object 15
typedef jobject (*func_java_util_EnumMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap_isEmpty_R_boolean 16
typedef jbool (*func_java_util_EnumMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap_keySet_R_java_util_Set 17
typedef jobject (*func_java_util_EnumMap_keySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object 18
typedef jobject (*func_java_util_EnumMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_EnumMap_putAll_java_util_Map 19
typedef void (*func_java_util_EnumMap_putAll_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object 20
typedef jobject (*func_java_util_EnumMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_EnumMap_remove_java_lang_Object_R_java_lang_Object 21
typedef jobject (*func_java_util_EnumMap_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap_remove_java_lang_Object_java_lang_Object_R_boolean 22
typedef jbool (*func_java_util_EnumMap_remove_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_EnumMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object 23
typedef jobject (*func_java_util_EnumMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_EnumMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean 24
typedef jbool (*func_java_util_EnumMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_EnumMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object 25
typedef jobject (*func_java_util_EnumMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_EnumMap_forEach_java_util_function_BiConsumer 26
typedef void (*func_java_util_EnumMap_forEach_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap_replaceAll_java_util_function_BiFunction 27
typedef void (*func_java_util_EnumMap_replaceAll_java_util_function_BiFunction)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object 28
typedef jobject (*func_java_util_EnumMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_EnumMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 29
typedef jobject (*func_java_util_EnumMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_EnumMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 30
typedef jobject (*func_java_util_EnumMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_EnumMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 31
typedef jobject (*func_java_util_EnumMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_EnumMap_size_R_int 32
typedef jint (*func_java_util_EnumMap_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap_values_R_java_util_Collection 33
typedef jobject (*func_java_util_EnumMap_values_R_java_util_Collection)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap_maskNull_java_lang_Object_R_java_lang_Object 34
typedef jobject (*func_java_util_EnumMap_maskNull_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap_unmaskNull_java_lang_Object_R_java_lang_Object 35
typedef jobject (*func_java_util_EnumMap_unmaskNull_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap_containsMapping_java_lang_Object_java_lang_Object_R_boolean 36
typedef jbool (*func_java_util_EnumMap_containsMapping_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_EnumMap_put_java_lang_Enum_java_lang_Object_R_java_lang_Object 37
typedef jobject (*func_java_util_EnumMap_put_java_lang_Enum_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_EnumMap_removeMapping_java_lang_Object_java_lang_Object_R_boolean 38
typedef jbool (*func_java_util_EnumMap_removeMapping_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_EnumMap_isValidKey_java_lang_Object_R_boolean 39
typedef jbool (*func_java_util_EnumMap_isValidKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap_equals_java_util_EnumMap_R_boolean 40
typedef jbool (*func_java_util_EnumMap_equals_java_util_EnumMap_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap_entryHashCode_int_R_int 41
typedef jint (*func_java_util_EnumMap_entryHashCode_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_EnumMap_clone_R_java_util_EnumMap 42
typedef jobject (*func_java_util_EnumMap_clone_R_java_util_EnumMap)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap_typeCheck_java_lang_Enum 43
typedef void (*func_java_util_EnumMap_typeCheck_java_lang_Enum)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_EnumMap(jobject object, jint mark, jint depth);
void clinit_java_util_EnumMap(jcontext ctx);
jobject M_java_util_EnumMap_maskNull_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_EnumMap_unmaskNull_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void init_java_util_EnumMap_java_lang_Class(jcontext ctx, jobject self, jobject param0);
void init_java_util_EnumMap_java_util_EnumMap(jcontext ctx, jobject self, jobject param0);
void init_java_util_EnumMap_java_util_Map(jcontext ctx, jobject self, jobject param0);
jint M_java_util_EnumMap_size_R_int(jcontext ctx, jobject self);
jbool M_java_util_EnumMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_EnumMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_EnumMap_containsMapping_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_EnumMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_EnumMap_put_java_lang_Enum_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_EnumMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_EnumMap_removeMapping_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_util_EnumMap_isValidKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_EnumMap_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0);
void M_java_util_EnumMap_clear(jcontext ctx, jobject self);
jobject M_java_util_EnumMap_keySet_R_java_util_Set(jcontext ctx, jobject self);
jobject M_java_util_EnumMap_values_R_java_util_Collection(jcontext ctx, jobject self);
jobject M_java_util_EnumMap_entrySet_R_java_util_Set(jcontext ctx, jobject self);
jbool M_java_util_EnumMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_EnumMap_equals_java_util_EnumMap_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_EnumMap_hashCode_R_int(jcontext ctx, jobject self);
jint M_java_util_EnumMap_entryHashCode_int_R_int(jcontext ctx, jobject self, jint param0);
jobject M_java_util_EnumMap_clone_R_java_util_EnumMap(jcontext ctx, jobject self);
void M_java_util_EnumMap_typeCheck_java_lang_Enum(jcontext ctx, jobject self, jobject param0);
jobject SM_java_util_EnumMap_getKeyUniverse_java_lang_Class_R_Array1_java_lang_Enum(jcontext ctx, jobject param0);
jobject M_java_util_EnumMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_EnumMap_clone_R_java_lang_Object(jcontext ctx, jobject self);
jint SM_java_util_EnumMap_access$200_java_util_EnumMap_R_int(jcontext ctx, jobject param0);
jobject SM_java_util_EnumMap_access$500_java_util_EnumMap_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_util_EnumMap_access$600_java_util_EnumMap_R_Array1_java_lang_Object(jcontext ctx, jobject param0);
jint SM_java_util_EnumMap_access$210_java_util_EnumMap_R_int(jcontext ctx, jobject param0);
jbool SM_java_util_EnumMap_access$900_java_util_EnumMap_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_java_util_EnumMap_access$1000_java_util_EnumMap_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_java_util_EnumMap_access$1100_java_util_EnumMap_R_Array1_java_lang_Enum(jcontext ctx, jobject param0);
jobject SM_java_util_EnumMap_access$1200_java_util_EnumMap_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jint SM_java_util_EnumMap_access$1600_java_util_EnumMap_int_R_int(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
