#ifndef HEADER_arc_struct_ArrayMap
#define HEADER_arc_struct_ArrayMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_ArrayMap {
	java_lang_Object parent;
	jref F_keys;
	jref F_values;
	jint F_size;
	jbool F_ordered;
	jref F_entries1;
	jref F_entries2;
	jref F_valuesIter1;
	jref F_valuesIter2;
	jref F_keysIter1;
	jref F_keysIter2;
} arc_struct_ArrayMap;

extern Class class_arc_struct_ArrayMap;


#define VTABLE_arc_struct_ArrayMap_hashCode_R_int 0
typedef jint (*func_arc_struct_ArrayMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_ArrayMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ArrayMap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_ArrayMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_ArrayMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_ArrayMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_finalize 5
typedef void (*func_arc_struct_ArrayMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_notify 6
typedef void (*func_arc_struct_ArrayMap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_notifyAll 7
typedef void (*func_arc_struct_ArrayMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_wait 8
typedef void (*func_arc_struct_ArrayMap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_wait_long 9
typedef void (*func_arc_struct_ArrayMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_ArrayMap_wait_long_int 10
typedef void (*func_arc_struct_ArrayMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_ArrayMap_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_ArrayMap_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_ArrayMap_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ArrayMap_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_ArrayMap_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_R_int 14
typedef jint (*func_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_int_R_int 15
typedef jint (*func_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap 16
typedef void (*func_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap_int_int 17
typedef void (*func_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_ArrayMap_get_java_lang_Object_R_java_lang_Object 18
typedef jobject (*func_arc_struct_ArrayMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ArrayMap_getKey_java_lang_Object_boolean_R_java_lang_Object 19
typedef jobject (*func_arc_struct_ArrayMap_getKey_java_lang_Object_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_ArrayMap_getKeyAt_int_R_java_lang_Object 20
typedef jobject (*func_arc_struct_ArrayMap_getKeyAt_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ArrayMap_getValueAt_int_R_java_lang_Object 21
typedef jobject (*func_arc_struct_ArrayMap_getValueAt_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ArrayMap_firstKey_R_java_lang_Object 22
typedef jobject (*func_arc_struct_ArrayMap_firstKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_firstValue_R_java_lang_Object 23
typedef jobject (*func_arc_struct_ArrayMap_firstValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_setKey_int_java_lang_Object 24
typedef void (*func_arc_struct_ArrayMap_setKey_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_struct_ArrayMap_setValue_int_java_lang_Object 25
typedef void (*func_arc_struct_ArrayMap_setValue_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_struct_ArrayMap_insert_int_java_lang_Object_java_lang_Object 26
typedef void (*func_arc_struct_ArrayMap_insert_int_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_arc_struct_ArrayMap_containsKey_java_lang_Object_R_boolean 27
typedef jbool (*func_arc_struct_ArrayMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ArrayMap_containsValue_java_lang_Object_boolean_R_boolean 28
typedef jbool (*func_arc_struct_ArrayMap_containsValue_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_ArrayMap_indexOfKey_java_lang_Object_R_int 29
typedef jint (*func_arc_struct_ArrayMap_indexOfKey_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ArrayMap_indexOfValue_java_lang_Object_boolean_R_int 30
typedef jint (*func_arc_struct_ArrayMap_indexOfValue_java_lang_Object_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_ArrayMap_removeKey_java_lang_Object_R_java_lang_Object 31
typedef jobject (*func_arc_struct_ArrayMap_removeKey_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ArrayMap_removeValue_java_lang_Object_boolean_R_boolean 32
typedef jbool (*func_arc_struct_ArrayMap_removeValue_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_ArrayMap_removeIndex_int 33
typedef void (*func_arc_struct_ArrayMap_removeIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ArrayMap_isEmpty_R_boolean 34
typedef jbool (*func_arc_struct_ArrayMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_peekKey_R_java_lang_Object 35
typedef jobject (*func_arc_struct_ArrayMap_peekKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_peekValue_R_java_lang_Object 36
typedef jobject (*func_arc_struct_ArrayMap_peekValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_clear_int 37
typedef void (*func_arc_struct_ArrayMap_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ArrayMap_clear 38
typedef void (*func_arc_struct_ArrayMap_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_shrink 39
typedef void (*func_arc_struct_ArrayMap_shrink)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_ensureCapacity_int 40
typedef void (*func_arc_struct_ArrayMap_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ArrayMap_resize_int 41
typedef void (*func_arc_struct_ArrayMap_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ArrayMap_reverse 42
typedef void (*func_arc_struct_ArrayMap_reverse)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_shuffle 43
typedef void (*func_arc_struct_ArrayMap_shuffle)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_truncate_int 44
typedef void (*func_arc_struct_ArrayMap_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ArrayMap_entries_R_arc_struct_ArrayMap$Entries 45
typedef jobject (*func_arc_struct_ArrayMap_entries_R_arc_struct_ArrayMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_values_R_arc_struct_ArrayMap$Values 46
typedef jobject (*func_arc_struct_ArrayMap_values_R_arc_struct_ArrayMap$Values)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ArrayMap_keys_R_arc_struct_ArrayMap$Keys 47
typedef jobject (*func_arc_struct_ArrayMap_keys_R_arc_struct_ArrayMap$Keys)(jcontext ctx, jobject self);

void mark_arc_struct_ArrayMap(jobject object, jint mark, jint depth);
void clinit_arc_struct_ArrayMap(jcontext ctx);
void init_arc_struct_ArrayMap(jcontext ctx, jobject self);
void init_arc_struct_ArrayMap_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_ArrayMap_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void init_arc_struct_ArrayMap_boolean_int_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2, jobject param3);
void init_arc_struct_ArrayMap_java_lang_Class_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_arc_struct_ArrayMap_arc_struct_ArrayMap(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1);
jint M_arc_struct_ArrayMap_put_java_lang_Object_java_lang_Object_int_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void M_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_ArrayMap_putAll_arc_struct_ArrayMap_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_arc_struct_ArrayMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ArrayMap_getKey_java_lang_Object_boolean_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_struct_ArrayMap_getKeyAt_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_ArrayMap_getValueAt_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_ArrayMap_firstKey_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_struct_ArrayMap_firstValue_R_java_lang_Object(jcontext ctx, jobject self);
void M_arc_struct_ArrayMap_setKey_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_struct_ArrayMap_setValue_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_struct_ArrayMap_insert_int_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
jbool M_arc_struct_ArrayMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_ArrayMap_containsValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jint M_arc_struct_ArrayMap_indexOfKey_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_ArrayMap_indexOfValue_java_lang_Object_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_struct_ArrayMap_removeKey_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_ArrayMap_removeValue_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_struct_ArrayMap_removeIndex_int(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_ArrayMap_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_arc_struct_ArrayMap_peekKey_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_struct_ArrayMap_peekValue_R_java_lang_Object(jcontext ctx, jobject self);
void M_arc_struct_ArrayMap_clear_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ArrayMap_clear(jcontext ctx, jobject self);
void M_arc_struct_ArrayMap_shrink(jcontext ctx, jobject self);
void M_arc_struct_ArrayMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ArrayMap_resize_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ArrayMap_reverse(jcontext ctx, jobject self);
void M_arc_struct_ArrayMap_shuffle(jcontext ctx, jobject self);
void M_arc_struct_ArrayMap_truncate_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_ArrayMap_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_ArrayMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_ArrayMap_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_ArrayMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject M_arc_struct_ArrayMap_entries_R_arc_struct_ArrayMap$Entries(jcontext ctx, jobject self);
jobject M_arc_struct_ArrayMap_values_R_arc_struct_ArrayMap$Values(jcontext ctx, jobject self);
jobject M_arc_struct_ArrayMap_keys_R_arc_struct_ArrayMap$Keys(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
