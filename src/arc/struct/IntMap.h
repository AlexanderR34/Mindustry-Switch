#ifndef HEADER_arc_struct_IntMap
#define HEADER_arc_struct_IntMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_IntMap {
	java_lang_Object parent;
	jint F_size;
	jref F_keyTable;
	jref F_valueTable;
	jref F_zeroValue;
	jbool F_hasZeroValue;
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
} arc_struct_IntMap;

extern Class class_arc_struct_IntMap;


#define VTABLE_arc_struct_IntMap_hashCode_R_int 0
typedef jint (*func_arc_struct_IntMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_IntMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntMap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_IntMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_IntMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_IntMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap_finalize 5
typedef void (*func_arc_struct_IntMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap_notify 6
typedef void (*func_arc_struct_IntMap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap_notifyAll 7
typedef void (*func_arc_struct_IntMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap_wait 8
typedef void (*func_arc_struct_IntMap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap_wait_long 9
typedef void (*func_arc_struct_IntMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_IntMap_wait_long_int 10
typedef void (*func_arc_struct_IntMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_IntMap_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_IntMap_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_IntMap_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntMap_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_IntMap_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap_place_int_R_int 14
typedef jint (*func_arc_struct_IntMap_place_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntMap_locateKey_int_R_int 15
typedef jint (*func_arc_struct_IntMap_locateKey_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object 16
typedef jobject (*func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_struct_IntMap_putMissing_int_java_lang_Object_R_java_lang_Object 17
typedef jobject (*func_arc_struct_IntMap_putMissing_int_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_struct_IntMap_putAll_arc_struct_IntMap 18
typedef void (*func_arc_struct_IntMap_putAll_arc_struct_IntMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntMap_putResize_int_java_lang_Object 19
typedef void (*func_arc_struct_IntMap_putResize_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object 20
typedef jobject (*func_arc_struct_IntMap_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntMap_get_int_java_lang_Object_R_java_lang_Object 21
typedef jobject (*func_arc_struct_IntMap_get_int_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_struct_IntMap_get_int_arc_func_Prov_R_java_lang_Object 22
typedef jobject (*func_arc_struct_IntMap_get_int_arc_func_Prov_R_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_struct_IntMap_remove_int_R_java_lang_Object 23
typedef jobject (*func_arc_struct_IntMap_remove_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntMap_notEmpty_R_boolean 24
typedef jbool (*func_arc_struct_IntMap_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap_isEmpty_R_boolean 25
typedef jbool (*func_arc_struct_IntMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap_shrink_int 26
typedef void (*func_arc_struct_IntMap_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntMap_clear_int 27
typedef void (*func_arc_struct_IntMap_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntMap_clear 28
typedef void (*func_arc_struct_IntMap_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap_containsValue_java_lang_Object_boolean_R_boolean 29
typedef jbool (*func_arc_struct_IntMap_containsValue_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_IntMap_containsKey_int_R_boolean 30
typedef jbool (*func_arc_struct_IntMap_containsKey_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntMap_findKey_java_lang_Object_boolean_int_R_int 31
typedef jint (*func_arc_struct_IntMap_findKey_java_lang_Object_boolean_int_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1, jint param2);
#define VTABLE_arc_struct_IntMap_ensureCapacity_int 32
typedef void (*func_arc_struct_IntMap_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntMap_resize_int 33
typedef void (*func_arc_struct_IntMap_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntMap_equalsIdentity_java_lang_Object_R_boolean 34
typedef jbool (*func_arc_struct_IntMap_equalsIdentity_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntMap_entries_R_arc_struct_IntMap$Entries 35
typedef jobject (*func_arc_struct_IntMap_entries_R_arc_struct_IntMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap_values_R_arc_struct_IntMap$Values 36
typedef jobject (*func_arc_struct_IntMap_values_R_arc_struct_IntMap$Values)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntMap_keys_R_arc_struct_IntMap$Keys 37
typedef jobject (*func_arc_struct_IntMap_keys_R_arc_struct_IntMap$Keys)(jcontext ctx, jobject self);

void mark_arc_struct_IntMap(jobject object, jint mark, jint depth);
void clinit_arc_struct_IntMap(jcontext ctx);
jobject SM_arc_struct_IntMap_of_Array1_java_lang_Object_R_arc_struct_IntMap(jcontext ctx, jobject param0);
void init_arc_struct_IntMap(jcontext ctx, jobject self);
void init_arc_struct_IntMap_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_IntMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_arc_struct_IntMap_arc_struct_IntMap(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_IntMap_place_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntMap_locateKey_int_R_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_arc_struct_IntMap_putMissing_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_struct_IntMap_putAll_arc_struct_IntMap(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_IntMap_putResize_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_arc_struct_IntMap_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_IntMap_get_int_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_arc_struct_IntMap_get_int_arc_func_Prov_R_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_arc_struct_IntMap_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_IntMap_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_arc_struct_IntMap_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_arc_struct_IntMap_shrink_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntMap_clear_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntMap_clear(jcontext ctx, jobject self);
jbool M_arc_struct_IntMap_containsValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_arc_struct_IntMap_containsKey_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntMap_findKey_java_lang_Object_boolean_int_R_int(jcontext ctx, jobject self, jobject param0, jbool param1, jint param2);
void M_arc_struct_IntMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntMap_resize_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntMap_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_IntMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_IntMap_equalsIdentity_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_IntMap_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_IntMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject M_arc_struct_IntMap_entries_R_arc_struct_IntMap$Entries(jcontext ctx, jobject self);
jobject M_arc_struct_IntMap_values_R_arc_struct_IntMap$Values(jcontext ctx, jobject self);
jobject M_arc_struct_IntMap_keys_R_arc_struct_IntMap$Keys(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
