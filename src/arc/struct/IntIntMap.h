#ifndef HEADER_arc_struct_IntIntMap
#define HEADER_arc_struct_IntIntMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_IntIntMap {
	java_lang_Object parent;
	jint F_size;
	jref F_keyTable;
	jref F_valueTable;
	jint F_zeroValue;
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
} arc_struct_IntIntMap;

extern Class class_arc_struct_IntIntMap;


#define VTABLE_arc_struct_IntIntMap_hashCode_R_int 0
typedef jint (*func_arc_struct_IntIntMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_IntIntMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntIntMap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_IntIntMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_IntIntMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_IntIntMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap_finalize 5
typedef void (*func_arc_struct_IntIntMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap_notify 6
typedef void (*func_arc_struct_IntIntMap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap_notifyAll 7
typedef void (*func_arc_struct_IntIntMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap_wait 8
typedef void (*func_arc_struct_IntIntMap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap_wait_long 9
typedef void (*func_arc_struct_IntIntMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_IntIntMap_wait_long_int 10
typedef void (*func_arc_struct_IntIntMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_IntIntMap_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_IntIntMap_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_IntIntMap_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntIntMap_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_IntIntMap_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap_place_int_R_int 14
typedef jint (*func_arc_struct_IntIntMap_place_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntIntMap_locateKey_int_R_int 15
typedef jint (*func_arc_struct_IntIntMap_locateKey_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntIntMap_put_int_int 16
typedef void (*func_arc_struct_IntIntMap_put_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_IntIntMap_put_int_int_int_R_int 17
typedef jint (*func_arc_struct_IntIntMap_put_int_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_struct_IntIntMap_putMissing_int_int_R_int 18
typedef jint (*func_arc_struct_IntIntMap_putMissing_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_IntIntMap_putMissing_int_int_int_R_int 19
typedef jint (*func_arc_struct_IntIntMap_putMissing_int_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_struct_IntIntMap_putAll_arc_struct_IntIntMap 20
typedef void (*func_arc_struct_IntIntMap_putAll_arc_struct_IntIntMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntIntMap_putResize_int_int 21
typedef void (*func_arc_struct_IntIntMap_putResize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_IntIntMap_get_int_R_int 22
typedef jint (*func_arc_struct_IntIntMap_get_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntIntMap_get_int_int_R_int 23
typedef jint (*func_arc_struct_IntIntMap_get_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_IntIntMap_increment_int_R_int 24
typedef jint (*func_arc_struct_IntIntMap_increment_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntIntMap_increment_int_int_R_int 25
typedef jint (*func_arc_struct_IntIntMap_increment_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_IntIntMap_increment_int_int_int_R_int 26
typedef jint (*func_arc_struct_IntIntMap_increment_int_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_struct_IntIntMap_remove_int_R_int 27
typedef jint (*func_arc_struct_IntIntMap_remove_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntIntMap_remove_int_int_R_int 28
typedef jint (*func_arc_struct_IntIntMap_remove_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_IntIntMap_notEmpty_R_boolean 29
typedef jbool (*func_arc_struct_IntIntMap_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap_isEmpty_R_boolean 30
typedef jbool (*func_arc_struct_IntIntMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap_shrink_int 31
typedef void (*func_arc_struct_IntIntMap_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntIntMap_clear_int 32
typedef void (*func_arc_struct_IntIntMap_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntIntMap_clear 33
typedef void (*func_arc_struct_IntIntMap_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap_containsValue_int_R_boolean 34
typedef jbool (*func_arc_struct_IntIntMap_containsValue_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntIntMap_containsKey_int_R_boolean 35
typedef jbool (*func_arc_struct_IntIntMap_containsKey_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntIntMap_findKey_int_int_R_int 36
typedef jint (*func_arc_struct_IntIntMap_findKey_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_IntIntMap_ensureCapacity_int 37
typedef void (*func_arc_struct_IntIntMap_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntIntMap_resize_int 38
typedef void (*func_arc_struct_IntIntMap_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntIntMap_entries_R_arc_struct_IntIntMap$Entries 39
typedef jobject (*func_arc_struct_IntIntMap_entries_R_arc_struct_IntIntMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap_values_R_arc_struct_IntIntMap$Values 40
typedef jobject (*func_arc_struct_IntIntMap_values_R_arc_struct_IntIntMap$Values)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntIntMap_keys_R_arc_struct_IntIntMap$Keys 41
typedef jobject (*func_arc_struct_IntIntMap_keys_R_arc_struct_IntIntMap$Keys)(jcontext ctx, jobject self);

void mark_arc_struct_IntIntMap(jobject object, jint mark, jint depth);
void clinit_arc_struct_IntIntMap(jcontext ctx);
jobject SM_arc_struct_IntIntMap_of_Array1_int_R_arc_struct_IntIntMap(jcontext ctx, jobject param0);
void init_arc_struct_IntIntMap(jcontext ctx, jobject self);
void init_arc_struct_IntIntMap_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_IntIntMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_arc_struct_IntIntMap_arc_struct_IntIntMap(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_IntIntMap_place_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntIntMap_locateKey_int_R_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntIntMap_put_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_arc_struct_IntIntMap_put_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jint M_arc_struct_IntIntMap_putMissing_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_arc_struct_IntIntMap_putMissing_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_struct_IntIntMap_putAll_arc_struct_IntIntMap(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_IntIntMap_putResize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_arc_struct_IntIntMap_get_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntIntMap_get_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_arc_struct_IntIntMap_increment_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntIntMap_increment_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jint M_arc_struct_IntIntMap_increment_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jint M_arc_struct_IntIntMap_remove_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntIntMap_remove_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_struct_IntIntMap_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_arc_struct_IntIntMap_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_arc_struct_IntIntMap_shrink_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntIntMap_clear_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntIntMap_clear(jcontext ctx, jobject self);
jbool M_arc_struct_IntIntMap_containsValue_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_IntIntMap_containsKey_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntIntMap_findKey_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_struct_IntIntMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntIntMap_resize_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntIntMap_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_IntIntMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_IntIntMap_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_IntIntMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject M_arc_struct_IntIntMap_entries_R_arc_struct_IntIntMap$Entries(jcontext ctx, jobject self);
jobject M_arc_struct_IntIntMap_values_R_arc_struct_IntIntMap$Values(jcontext ctx, jobject self);
jobject M_arc_struct_IntIntMap_keys_R_arc_struct_IntIntMap$Keys(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
