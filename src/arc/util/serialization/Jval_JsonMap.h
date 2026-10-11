#ifndef HEADER_arc_util_serialization_Jval$JsonMap
#define HEADER_arc_util_serialization_Jval$JsonMap

#include "Clearwing.h"
#include "arc/struct/ArrayMap.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_serialization_Jval$JsonMap {
	arc_struct_ArrayMap parent;
} arc_util_serialization_Jval$JsonMap;

extern Class class_arc_util_serialization_Jval$JsonMap;


#define VTABLE_arc_util_serialization_Jval$JsonMap_hashCode_R_int 0
typedef jint (*func_arc_util_serialization_Jval$JsonMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_serialization_Jval$JsonMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$JsonMap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_finalize 5
typedef void (*func_arc_util_serialization_Jval$JsonMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_notify 6
typedef void (*func_arc_util_serialization_Jval$JsonMap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_notifyAll 7
typedef void (*func_arc_util_serialization_Jval$JsonMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_wait 8
typedef void (*func_arc_util_serialization_Jval$JsonMap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_wait_long 9
typedef void (*func_arc_util_serialization_Jval$JsonMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_serialization_Jval$JsonMap_wait_long_int 10
typedef void (*func_arc_util_serialization_Jval$JsonMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_serialization_Jval$JsonMap_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_forEach_java_util_function_Consumer 12
typedef void (*func_arc_util_serialization_Jval$JsonMap_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$JsonMap_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_put_java_lang_Object_java_lang_Object_R_int 14
typedef jint (*func_arc_util_serialization_Jval$JsonMap_put_java_lang_Object_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_util_serialization_Jval$JsonMap_put_java_lang_Object_java_lang_Object_int_R_int 15
typedef jint (*func_arc_util_serialization_Jval$JsonMap_put_java_lang_Object_java_lang_Object_int_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_arc_util_serialization_Jval$JsonMap_putAll_arc_struct_ArrayMap 16
typedef void (*func_arc_util_serialization_Jval$JsonMap_putAll_arc_struct_ArrayMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$JsonMap_putAll_arc_struct_ArrayMap_int_int 17
typedef void (*func_arc_util_serialization_Jval$JsonMap_putAll_arc_struct_ArrayMap_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_util_serialization_Jval$JsonMap_get_java_lang_Object_R_java_lang_Object 18
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$JsonMap_getKey_java_lang_Object_boolean_R_java_lang_Object 19
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_getKey_java_lang_Object_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_util_serialization_Jval$JsonMap_getKeyAt_int_R_java_lang_Object 20
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_getKeyAt_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_serialization_Jval$JsonMap_getValueAt_int_R_java_lang_Object 21
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_getValueAt_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_serialization_Jval$JsonMap_firstKey_R_java_lang_Object 22
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_firstKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_firstValue_R_java_lang_Object 23
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_firstValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_setKey_int_java_lang_Object 24
typedef void (*func_arc_util_serialization_Jval$JsonMap_setKey_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_util_serialization_Jval$JsonMap_setValue_int_java_lang_Object 25
typedef void (*func_arc_util_serialization_Jval$JsonMap_setValue_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_util_serialization_Jval$JsonMap_insert_int_java_lang_Object_java_lang_Object 26
typedef void (*func_arc_util_serialization_Jval$JsonMap_insert_int_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_arc_util_serialization_Jval$JsonMap_containsKey_java_lang_Object_R_boolean 27
typedef jbool (*func_arc_util_serialization_Jval$JsonMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$JsonMap_containsValue_java_lang_Object_boolean_R_boolean 28
typedef jbool (*func_arc_util_serialization_Jval$JsonMap_containsValue_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_util_serialization_Jval$JsonMap_indexOfKey_java_lang_Object_R_int 29
typedef jint (*func_arc_util_serialization_Jval$JsonMap_indexOfKey_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$JsonMap_indexOfValue_java_lang_Object_boolean_R_int 30
typedef jint (*func_arc_util_serialization_Jval$JsonMap_indexOfValue_java_lang_Object_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_util_serialization_Jval$JsonMap_removeKey_java_lang_Object_R_java_lang_Object 31
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_removeKey_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_serialization_Jval$JsonMap_removeValue_java_lang_Object_boolean_R_boolean 32
typedef jbool (*func_arc_util_serialization_Jval$JsonMap_removeValue_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_util_serialization_Jval$JsonMap_removeIndex_int 33
typedef void (*func_arc_util_serialization_Jval$JsonMap_removeIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_serialization_Jval$JsonMap_isEmpty_R_boolean 34
typedef jbool (*func_arc_util_serialization_Jval$JsonMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_peekKey_R_java_lang_Object 35
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_peekKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_peekValue_R_java_lang_Object 36
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_peekValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_clear_int 37
typedef void (*func_arc_util_serialization_Jval$JsonMap_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_serialization_Jval$JsonMap_clear 38
typedef void (*func_arc_util_serialization_Jval$JsonMap_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_shrink 39
typedef void (*func_arc_util_serialization_Jval$JsonMap_shrink)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_ensureCapacity_int 40
typedef void (*func_arc_util_serialization_Jval$JsonMap_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_serialization_Jval$JsonMap_resize_int 41
typedef void (*func_arc_util_serialization_Jval$JsonMap_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_serialization_Jval$JsonMap_reverse 42
typedef void (*func_arc_util_serialization_Jval$JsonMap_reverse)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_shuffle 43
typedef void (*func_arc_util_serialization_Jval$JsonMap_shuffle)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_truncate_int 44
typedef void (*func_arc_util_serialization_Jval$JsonMap_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_serialization_Jval$JsonMap_entries_R_arc_struct_ArrayMap$Entries 45
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_entries_R_arc_struct_ArrayMap$Entries)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_values_R_arc_struct_ArrayMap$Values 46
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_values_R_arc_struct_ArrayMap$Values)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_keys_R_arc_struct_ArrayMap$Keys 47
typedef jobject (*func_arc_util_serialization_Jval$JsonMap_keys_R_arc_struct_ArrayMap$Keys)(jcontext ctx, jobject self);
#define VTABLE_arc_util_serialization_Jval$JsonMap_putAdd_java_lang_String_arc_util_serialization_Jval 48
typedef void (*func_arc_util_serialization_Jval$JsonMap_putAdd_java_lang_String_arc_util_serialization_Jval)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_util_serialization_Jval$JsonMap(jobject object, jint mark, jint depth);
void clinit_arc_util_serialization_Jval$JsonMap(jcontext ctx);
void init_arc_util_serialization_Jval$JsonMap(jcontext ctx, jobject self);
void M_arc_util_serialization_Jval$JsonMap_putAdd_java_lang_String_arc_util_serialization_Jval(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
