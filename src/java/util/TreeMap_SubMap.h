#ifndef HEADER_java_util_TreeMap$SubMap
#define HEADER_java_util_TreeMap$SubMap

#include "Clearwing.h"
#include "java/util/AbstractMap.h"
#include "java/util/SortedMap.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_TreeMap$SubMap {
	java_util_AbstractMap parent;
	jref F_backingMap;
	jbool F_hasStart;
	jbool F_hasEnd;
	jref F_startKey;
	jref F_endKey;
	jref F_entrySet;
	jint F_firstKeyModCount;
	jint F_lastKeyModCount;
	jref F_firstKeyNode;
	jint F_firstKeyIndex;
	jref F_lastKeyNode;
	jint F_lastKeyIndex;
} java_util_TreeMap$SubMap;

extern Class class_java_util_TreeMap$SubMap;


#define VTABLE_java_util_TreeMap$SubMap_hashCode_R_int 0
typedef jint (*func_java_util_TreeMap$SubMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_TreeMap$SubMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$SubMap_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_TreeMap$SubMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_TreeMap$SubMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_toString_R_java_lang_String 4
typedef jobject (*func_java_util_TreeMap$SubMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_finalize 5
typedef void (*func_java_util_TreeMap$SubMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_notify 6
typedef void (*func_java_util_TreeMap$SubMap_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_notifyAll 7
typedef void (*func_java_util_TreeMap$SubMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_wait 8
typedef void (*func_java_util_TreeMap$SubMap_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_wait_long 9
typedef void (*func_java_util_TreeMap$SubMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_TreeMap$SubMap_wait_long_int 10
typedef void (*func_java_util_TreeMap$SubMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_TreeMap$SubMap_clear 11
typedef void (*func_java_util_TreeMap$SubMap_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_containsKey_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_TreeMap$SubMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$SubMap_containsValue_java_lang_Object_R_boolean 13
typedef jbool (*func_java_util_TreeMap$SubMap_containsValue_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$SubMap_entrySet_R_java_util_Set 14
typedef jobject (*func_java_util_TreeMap$SubMap_entrySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_get_java_lang_Object_R_java_lang_Object 15
typedef jobject (*func_java_util_TreeMap$SubMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$SubMap_isEmpty_R_boolean 16
typedef jbool (*func_java_util_TreeMap$SubMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_keySet_R_java_util_Set 17
typedef jobject (*func_java_util_TreeMap$SubMap_keySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object 18
typedef jobject (*func_java_util_TreeMap$SubMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap$SubMap_putAll_java_util_Map 19
typedef void (*func_java_util_TreeMap$SubMap_putAll_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$SubMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object 20
typedef jobject (*func_java_util_TreeMap$SubMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap$SubMap_remove_java_lang_Object_R_java_lang_Object 21
typedef jobject (*func_java_util_TreeMap$SubMap_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$SubMap_remove_java_lang_Object_java_lang_Object_R_boolean 22
typedef jbool (*func_java_util_TreeMap$SubMap_remove_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap$SubMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object 23
typedef jobject (*func_java_util_TreeMap$SubMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap$SubMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean 24
typedef jbool (*func_java_util_TreeMap$SubMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_TreeMap$SubMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object 25
typedef jobject (*func_java_util_TreeMap$SubMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap$SubMap_forEach_java_util_function_BiConsumer 26
typedef void (*func_java_util_TreeMap$SubMap_forEach_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$SubMap_replaceAll_java_util_function_BiFunction 27
typedef void (*func_java_util_TreeMap$SubMap_replaceAll_java_util_function_BiFunction)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$SubMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object 28
typedef jobject (*func_java_util_TreeMap$SubMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap$SubMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 29
typedef jobject (*func_java_util_TreeMap$SubMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap$SubMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 30
typedef jobject (*func_java_util_TreeMap$SubMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap$SubMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 31
typedef jobject (*func_java_util_TreeMap$SubMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_TreeMap$SubMap_size_R_int 32
typedef jint (*func_java_util_TreeMap$SubMap_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_values_R_java_util_Collection 33
typedef jobject (*func_java_util_TreeMap$SubMap_values_R_java_util_Collection)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_comparator_R_java_util_Comparator 34
typedef jobject (*func_java_util_TreeMap$SubMap_comparator_R_java_util_Comparator)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_firstKey_R_java_lang_Object 35
typedef jobject (*func_java_util_TreeMap$SubMap_firstKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_headMap_java_lang_Object_R_java_util_SortedMap 36
typedef jobject (*func_java_util_TreeMap$SubMap_headMap_java_lang_Object_R_java_util_SortedMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$SubMap_lastKey_R_java_lang_Object 37
typedef jobject (*func_java_util_TreeMap$SubMap_lastKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap 38
typedef jobject (*func_java_util_TreeMap$SubMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap$SubMap_tailMap_java_lang_Object_R_java_util_SortedMap 39
typedef jobject (*func_java_util_TreeMap$SubMap_tailMap_java_lang_Object_R_java_util_SortedMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$SubMap_checkRange_java_lang_Object 40
typedef void (*func_java_util_TreeMap$SubMap_checkRange_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$SubMap_isInRange_java_lang_Object_R_boolean 41
typedef jbool (*func_java_util_TreeMap$SubMap_isInRange_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$SubMap_checkUpperBound_java_lang_Object_R_boolean 42
typedef jbool (*func_java_util_TreeMap$SubMap_checkUpperBound_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$SubMap_checkLowerBound_java_lang_Object_R_boolean 43
typedef jbool (*func_java_util_TreeMap$SubMap_checkLowerBound_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$SubMap_setFirstKey 44
typedef void (*func_java_util_TreeMap$SubMap_setFirstKey)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$SubMap_setLastKey 45
typedef void (*func_java_util_TreeMap$SubMap_setLastKey)(jcontext ctx, jobject self);

void mark_java_util_TreeMap$SubMap(jobject object, jint mark, jint depth);
void clinit_java_util_TreeMap$SubMap(jcontext ctx);
void init_java_util_TreeMap$SubMap_java_lang_Object_java_util_TreeMap(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_util_TreeMap$SubMap_java_lang_Object_java_util_TreeMap_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_java_util_TreeMap$SubMap_java_lang_Object_boolean_java_util_TreeMap_java_lang_Object_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jobject param3, jbool param4);
void init_java_util_TreeMap$SubMap_java_util_TreeMap_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_TreeMap$SubMap_checkRange_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_TreeMap$SubMap_isInRange_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_TreeMap$SubMap_checkUpperBound_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_TreeMap$SubMap_checkLowerBound_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap$SubMap_comparator_R_java_util_Comparator(jcontext ctx, jobject self);
jbool M_java_util_TreeMap$SubMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_TreeMap$SubMap_clear(jcontext ctx, jobject self);
jbool M_java_util_TreeMap$SubMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap$SubMap_entrySet_R_java_util_Set(jcontext ctx, jobject self);
void M_java_util_TreeMap$SubMap_setFirstKey(jcontext ctx, jobject self);
jobject M_java_util_TreeMap$SubMap_firstKey_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_TreeMap$SubMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap$SubMap_headMap_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_TreeMap$SubMap_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_TreeMap$SubMap_keySet_R_java_util_Set(jcontext ctx, jobject self);
void M_java_util_TreeMap$SubMap_setLastKey(jcontext ctx, jobject self);
jobject M_java_util_TreeMap$SubMap_lastKey_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_TreeMap$SubMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_TreeMap$SubMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap$SubMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_TreeMap$SubMap_tailMap_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap$SubMap_values_R_java_util_Collection(jcontext ctx, jobject self);
jint M_java_util_TreeMap$SubMap_size_R_int(jcontext ctx, jobject self);
void SM_java_util_TreeMap$SubMap_access$300_java_util_TreeMap$SubMap(jcontext ctx, jobject param0);
jobject SM_java_util_TreeMap$SubMap_access$400_java_util_TreeMap$SubMap_R_java_util_TreeMap(jcontext ctx, jobject param0);
void SM_java_util_TreeMap$SubMap_access$500_java_util_TreeMap$SubMap(jcontext ctx, jobject param0);
jbool SM_java_util_TreeMap$SubMap_access$600_java_util_TreeMap$SubMap_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
