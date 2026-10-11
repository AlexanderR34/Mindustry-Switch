#ifndef HEADER_arc_struct_LongMap
#define HEADER_arc_struct_LongMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_LongMap {
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
} arc_struct_LongMap;

extern Class class_arc_struct_LongMap;


#define VTABLE_arc_struct_LongMap_hashCode_R_int 0
typedef jint (*func_arc_struct_LongMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_LongMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_LongMap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_LongMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongMap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_LongMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongMap_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_LongMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongMap_finalize 5
typedef void (*func_arc_struct_LongMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongMap_notify 6
typedef void (*func_arc_struct_LongMap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongMap_notifyAll 7
typedef void (*func_arc_struct_LongMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongMap_wait 8
typedef void (*func_arc_struct_LongMap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongMap_wait_long 9
typedef void (*func_arc_struct_LongMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_LongMap_wait_long_int 10
typedef void (*func_arc_struct_LongMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_LongMap_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_LongMap_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongMap_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_LongMap_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_LongMap_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_LongMap_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongMap_place_long_R_int 14
typedef jint (*func_arc_struct_LongMap_place_long_R_int)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_LongMap_locateKey_long_R_int 15
typedef jint (*func_arc_struct_LongMap_locateKey_long_R_int)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_LongMap_put_long_java_lang_Object_R_java_lang_Object 16
typedef jobject (*func_arc_struct_LongMap_put_long_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jlong param0, jobject param1);
#define VTABLE_arc_struct_LongMap_putMissing_long_java_lang_Object_R_java_lang_Object 17
typedef jobject (*func_arc_struct_LongMap_putMissing_long_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jlong param0, jobject param1);
#define VTABLE_arc_struct_LongMap_putAll_arc_struct_LongMap 18
typedef void (*func_arc_struct_LongMap_putAll_arc_struct_LongMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_LongMap_putResize_long_java_lang_Object 19
typedef void (*func_arc_struct_LongMap_putResize_long_java_lang_Object)(jcontext ctx, jobject self, jlong param0, jobject param1);
#define VTABLE_arc_struct_LongMap_get_long_R_java_lang_Object 20
typedef jobject (*func_arc_struct_LongMap_get_long_R_java_lang_Object)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_LongMap_get_long_java_lang_Object_R_java_lang_Object 21
typedef jobject (*func_arc_struct_LongMap_get_long_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jlong param0, jobject param1);
#define VTABLE_arc_struct_LongMap_remove_long_R_java_lang_Object 22
typedef jobject (*func_arc_struct_LongMap_remove_long_R_java_lang_Object)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_LongMap_notEmpty_R_boolean 23
typedef jbool (*func_arc_struct_LongMap_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongMap_isEmpty_R_boolean 24
typedef jbool (*func_arc_struct_LongMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongMap_shrink_int 25
typedef void (*func_arc_struct_LongMap_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_LongMap_clear_int 26
typedef void (*func_arc_struct_LongMap_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_LongMap_clear 27
typedef void (*func_arc_struct_LongMap_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongMap_eachValue_arc_func_Cons 28
typedef void (*func_arc_struct_LongMap_eachValue_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_LongMap_containsValue_java_lang_Object_boolean_R_boolean 29
typedef jbool (*func_arc_struct_LongMap_containsValue_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_LongMap_containsKey_long_R_boolean 30
typedef jbool (*func_arc_struct_LongMap_containsKey_long_R_boolean)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_LongMap_findKey_java_lang_Object_boolean_long_R_long 31
typedef jlong (*func_arc_struct_LongMap_findKey_java_lang_Object_boolean_long_R_long)(jcontext ctx, jobject self, jobject param0, jbool param1, jlong param2);
#define VTABLE_arc_struct_LongMap_ensureCapacity_int 32
typedef void (*func_arc_struct_LongMap_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_LongMap_resize_int 33
typedef void (*func_arc_struct_LongMap_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_LongMap_equalsIdentity_java_lang_Object_R_boolean 34
typedef jbool (*func_arc_struct_LongMap_equalsIdentity_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_LongMap_entries_R_arc_struct_LongMap$Entries 35
typedef jobject (*func_arc_struct_LongMap_entries_R_arc_struct_LongMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongMap_values_R_arc_struct_LongMap$Values 36
typedef jobject (*func_arc_struct_LongMap_values_R_arc_struct_LongMap$Values)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_LongMap_keys_R_arc_struct_LongMap$Keys 37
typedef jobject (*func_arc_struct_LongMap_keys_R_arc_struct_LongMap$Keys)(jcontext ctx, jobject self);

void mark_arc_struct_LongMap(jobject object, jint mark, jint depth);
void clinit_arc_struct_LongMap(jcontext ctx);
void init_arc_struct_LongMap(jcontext ctx, jobject self);
void init_arc_struct_LongMap_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_LongMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_arc_struct_LongMap_arc_struct_LongMap(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_LongMap_place_long_R_int(jcontext ctx, jobject self, jlong param0);
jint M_arc_struct_LongMap_locateKey_long_R_int(jcontext ctx, jobject self, jlong param0);
jobject M_arc_struct_LongMap_put_long_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jlong param0, jobject param1);
jobject M_arc_struct_LongMap_putMissing_long_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jlong param0, jobject param1);
void M_arc_struct_LongMap_putAll_arc_struct_LongMap(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_LongMap_putResize_long_java_lang_Object(jcontext ctx, jobject self, jlong param0, jobject param1);
jobject M_arc_struct_LongMap_get_long_R_java_lang_Object(jcontext ctx, jobject self, jlong param0);
jobject M_arc_struct_LongMap_get_long_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jlong param0, jobject param1);
jobject M_arc_struct_LongMap_remove_long_R_java_lang_Object(jcontext ctx, jobject self, jlong param0);
jbool M_arc_struct_LongMap_notEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_arc_struct_LongMap_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_arc_struct_LongMap_shrink_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_LongMap_clear_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_LongMap_clear(jcontext ctx, jobject self);
void M_arc_struct_LongMap_eachValue_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_LongMap_containsValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_arc_struct_LongMap_containsKey_long_R_boolean(jcontext ctx, jobject self, jlong param0);
jlong M_arc_struct_LongMap_findKey_java_lang_Object_boolean_long_R_long(jcontext ctx, jobject self, jobject param0, jbool param1, jlong param2);
void M_arc_struct_LongMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_LongMap_resize_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_LongMap_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_LongMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_LongMap_equalsIdentity_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_LongMap_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_LongMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject M_arc_struct_LongMap_entries_R_arc_struct_LongMap$Entries(jcontext ctx, jobject self);
jobject M_arc_struct_LongMap_values_R_arc_struct_LongMap$Values(jcontext ctx, jobject self);
jobject M_arc_struct_LongMap_keys_R_arc_struct_LongMap$Keys(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
