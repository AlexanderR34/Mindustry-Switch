#ifndef HEADER_arc_struct_IntFloatMap
#define HEADER_arc_struct_IntFloatMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_IntFloatMap {
	java_lang_Object parent;
	jint F_size;
	jref F_keyTable;
	jref F_valueTable;
	jfloat F_zeroValue;
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
} arc_struct_IntFloatMap;

extern Class class_arc_struct_IntFloatMap;


#define VTABLE_arc_struct_IntFloatMap_hashCode_R_int 0
typedef jint (*func_arc_struct_IntFloatMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_IntFloatMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntFloatMap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_IntFloatMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_IntFloatMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_IntFloatMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap_finalize 5
typedef void (*func_arc_struct_IntFloatMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap_notify 6
typedef void (*func_arc_struct_IntFloatMap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap_notifyAll 7
typedef void (*func_arc_struct_IntFloatMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap_wait 8
typedef void (*func_arc_struct_IntFloatMap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap_wait_long 9
typedef void (*func_arc_struct_IntFloatMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_IntFloatMap_wait_long_int 10
typedef void (*func_arc_struct_IntFloatMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_IntFloatMap_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_IntFloatMap_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_IntFloatMap_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntFloatMap_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_IntFloatMap_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap_place_int_R_int 14
typedef jint (*func_arc_struct_IntFloatMap_place_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntFloatMap_locateKey_int_R_int 15
typedef jint (*func_arc_struct_IntFloatMap_locateKey_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntFloatMap_put_int_float 16
typedef void (*func_arc_struct_IntFloatMap_put_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_struct_IntFloatMap_put_int_float_float_R_float 17
typedef jfloat (*func_arc_struct_IntFloatMap_put_int_float_float_R_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
#define VTABLE_arc_struct_IntFloatMap_putMissing_int_float 18
typedef void (*func_arc_struct_IntFloatMap_putMissing_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_struct_IntFloatMap_putMissing_int_float_float_R_float 19
typedef jfloat (*func_arc_struct_IntFloatMap_putMissing_int_float_float_R_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
#define VTABLE_arc_struct_IntFloatMap_putAll_arc_struct_IntFloatMap 20
typedef void (*func_arc_struct_IntFloatMap_putAll_arc_struct_IntFloatMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntFloatMap_putResize_int_float 21
typedef void (*func_arc_struct_IntFloatMap_putResize_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_struct_IntFloatMap_get_int_R_float 22
typedef jfloat (*func_arc_struct_IntFloatMap_get_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntFloatMap_get_int_float_R_float 23
typedef jfloat (*func_arc_struct_IntFloatMap_get_int_float_R_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_struct_IntFloatMap_increment_int_R_float 24
typedef jfloat (*func_arc_struct_IntFloatMap_increment_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntFloatMap_increment_int_float_R_float 25
typedef jfloat (*func_arc_struct_IntFloatMap_increment_int_float_R_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_struct_IntFloatMap_increment_int_float_float_R_float 26
typedef jfloat (*func_arc_struct_IntFloatMap_increment_int_float_float_R_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
#define VTABLE_arc_struct_IntFloatMap_remove_int_float_R_float 27
typedef jfloat (*func_arc_struct_IntFloatMap_remove_int_float_R_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_struct_IntFloatMap_notEmpty_R_boolean 28
typedef jbool (*func_arc_struct_IntFloatMap_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap_isEmpty_R_boolean 29
typedef jbool (*func_arc_struct_IntFloatMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap_shrink_int 30
typedef void (*func_arc_struct_IntFloatMap_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntFloatMap_clear_int 31
typedef void (*func_arc_struct_IntFloatMap_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntFloatMap_clear 32
typedef void (*func_arc_struct_IntFloatMap_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap_containsValue_float_R_boolean 33
typedef jbool (*func_arc_struct_IntFloatMap_containsValue_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_struct_IntFloatMap_containsValue_float_float_R_boolean 34
typedef jbool (*func_arc_struct_IntFloatMap_containsValue_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_struct_IntFloatMap_containsKey_int_R_boolean 35
typedef jbool (*func_arc_struct_IntFloatMap_containsKey_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntFloatMap_findKey_float_int_R_int 36
typedef jint (*func_arc_struct_IntFloatMap_findKey_float_int_R_int)(jcontext ctx, jobject self, jfloat param0, jint param1);
#define VTABLE_arc_struct_IntFloatMap_findKey_float_float_int_R_int 37
typedef jint (*func_arc_struct_IntFloatMap_findKey_float_float_int_R_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_arc_struct_IntFloatMap_ensureCapacity_int 38
typedef void (*func_arc_struct_IntFloatMap_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntFloatMap_resize_int 39
typedef void (*func_arc_struct_IntFloatMap_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntFloatMap_entries_R_arc_struct_IntFloatMap$Entries 40
typedef jobject (*func_arc_struct_IntFloatMap_entries_R_arc_struct_IntFloatMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap_values_R_arc_struct_IntFloatMap$Values 41
typedef jobject (*func_arc_struct_IntFloatMap_values_R_arc_struct_IntFloatMap$Values)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntFloatMap_keys_R_arc_struct_IntFloatMap$Keys 42
typedef jobject (*func_arc_struct_IntFloatMap_keys_R_arc_struct_IntFloatMap$Keys)(jcontext ctx, jobject self);

void mark_arc_struct_IntFloatMap(jobject object, jint mark, jint depth);
void clinit_arc_struct_IntFloatMap(jcontext ctx);
void init_arc_struct_IntFloatMap(jcontext ctx, jobject self);
void init_arc_struct_IntFloatMap_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_IntFloatMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_arc_struct_IntFloatMap_arc_struct_IntFloatMap(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_IntFloatMap_place_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntFloatMap_locateKey_int_R_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntFloatMap_put_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
jfloat M_arc_struct_IntFloatMap_put_int_float_float_R_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
void M_arc_struct_IntFloatMap_putMissing_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
jfloat M_arc_struct_IntFloatMap_putMissing_int_float_float_R_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
void M_arc_struct_IntFloatMap_putAll_arc_struct_IntFloatMap(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_IntFloatMap_putResize_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
jfloat M_arc_struct_IntFloatMap_get_int_R_float(jcontext ctx, jobject self, jint param0);
jfloat M_arc_struct_IntFloatMap_get_int_float_R_float(jcontext ctx, jobject self, jint param0, jfloat param1);
jfloat M_arc_struct_IntFloatMap_increment_int_R_float(jcontext ctx, jobject self, jint param0);
jfloat M_arc_struct_IntFloatMap_increment_int_float_R_float(jcontext ctx, jobject self, jint param0, jfloat param1);
jfloat M_arc_struct_IntFloatMap_increment_int_float_float_R_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2);
jfloat M_arc_struct_IntFloatMap_remove_int_float_R_float(jcontext ctx, jobject self, jint param0, jfloat param1);
jbool M_arc_struct_IntFloatMap_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_arc_struct_IntFloatMap_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_arc_struct_IntFloatMap_shrink_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntFloatMap_clear_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntFloatMap_clear(jcontext ctx, jobject self);
jbool M_arc_struct_IntFloatMap_containsValue_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_struct_IntFloatMap_containsValue_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_arc_struct_IntFloatMap_containsKey_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntFloatMap_findKey_float_int_R_int(jcontext ctx, jobject self, jfloat param0, jint param1);
jint M_arc_struct_IntFloatMap_findKey_float_float_int_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
void M_arc_struct_IntFloatMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntFloatMap_resize_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntFloatMap_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_IntFloatMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_IntFloatMap_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_IntFloatMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject M_arc_struct_IntFloatMap_entries_R_arc_struct_IntFloatMap$Entries(jcontext ctx, jobject self);
jobject M_arc_struct_IntFloatMap_values_R_arc_struct_IntFloatMap$Values(jcontext ctx, jobject self);
jobject M_arc_struct_IntFloatMap_keys_R_arc_struct_IntFloatMap$Keys(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
