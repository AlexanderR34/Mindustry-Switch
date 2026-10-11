#ifndef HEADER_java_util_TreeMap
#define HEADER_java_util_TreeMap

#include "Clearwing.h"
#include "java/util/AbstractMap.h"
#include "java/util/NavigableMap.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_TreeMap {
	java_util_AbstractMap parent;
	jint F_size;
	jref F_root;
	jref F_comparator;
	jint F_modCount;
	jref F_entrySet;
	jref F_descendingMap;
	jref F_navigableKeySet;
} java_util_TreeMap;

extern Class class_java_util_TreeMap;

extern jlong SF_java_util_TreeMap_serialVersionUID;

#define VTABLE_java_util_TreeMap_hashCode_R_int 0
typedef jint (*func_java_util_TreeMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_TreeMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_TreeMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_TreeMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_toString_R_java_lang_String 4
typedef jobject (*func_java_util_TreeMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_finalize 5
typedef void (*func_java_util_TreeMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_notify 6
typedef void (*func_java_util_TreeMap_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_notifyAll 7
typedef void (*func_java_util_TreeMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_wait 8
typedef void (*func_java_util_TreeMap_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_wait_long 9
typedef void (*func_java_util_TreeMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_TreeMap_wait_long_int 10
typedef void (*func_java_util_TreeMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_TreeMap_clear 11
typedef void (*func_java_util_TreeMap_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_containsKey_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_TreeMap_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_containsValue_java_lang_Object_R_boolean 13
typedef jbool (*func_java_util_TreeMap_containsValue_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_entrySet_R_java_util_Set 14
typedef jobject (*func_java_util_TreeMap_entrySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_get_java_lang_Object_R_java_lang_Object 15
typedef jobject (*func_java_util_TreeMap_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_isEmpty_R_boolean 16
typedef jbool (*func_java_util_TreeMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_keySet_R_java_util_Set 17
typedef jobject (*func_java_util_TreeMap_keySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object 18
typedef jobject (*func_java_util_TreeMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap_putAll_java_util_Map 19
typedef void (*func_java_util_TreeMap_putAll_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object 20
typedef jobject (*func_java_util_TreeMap_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object 21
typedef jobject (*func_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_remove_java_lang_Object_java_lang_Object_R_boolean 22
typedef jbool (*func_java_util_TreeMap_remove_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object 23
typedef jobject (*func_java_util_TreeMap_replace_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean 24
typedef jbool (*func_java_util_TreeMap_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_TreeMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object 25
typedef jobject (*func_java_util_TreeMap_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap_forEach_java_util_function_BiConsumer 26
typedef void (*func_java_util_TreeMap_forEach_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_replaceAll_java_util_function_BiFunction 27
typedef void (*func_java_util_TreeMap_replaceAll_java_util_function_BiFunction)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object 28
typedef jobject (*func_java_util_TreeMap_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 29
typedef jobject (*func_java_util_TreeMap_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 30
typedef jobject (*func_java_util_TreeMap_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 31
typedef jobject (*func_java_util_TreeMap_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_TreeMap_size_R_int 32
typedef jint (*func_java_util_TreeMap_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_values_R_java_util_Collection 33
typedef jobject (*func_java_util_TreeMap_values_R_java_util_Collection)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_comparator_R_java_util_Comparator 34
typedef jobject (*func_java_util_TreeMap_comparator_R_java_util_Comparator)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_firstKey_R_java_lang_Object 35
typedef jobject (*func_java_util_TreeMap_firstKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_headMap_java_lang_Object_R_java_util_SortedMap 36
typedef jobject (*func_java_util_TreeMap_headMap_java_lang_Object_R_java_util_SortedMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_lastKey_R_java_lang_Object 37
typedef jobject (*func_java_util_TreeMap_lastKey_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap 38
typedef jobject (*func_java_util_TreeMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap_tailMap_java_lang_Object_R_java_util_SortedMap 39
typedef jobject (*func_java_util_TreeMap_tailMap_java_lang_Object_R_java_util_SortedMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_firstEntry_R_java_util_Map$Entry 40
typedef jobject (*func_java_util_TreeMap_firstEntry_R_java_util_Map$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_lastEntry_R_java_util_Map$Entry 41
typedef jobject (*func_java_util_TreeMap_lastEntry_R_java_util_Map$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_pollFirstEntry_R_java_util_Map$Entry 42
typedef jobject (*func_java_util_TreeMap_pollFirstEntry_R_java_util_Map$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_pollLastEntry_R_java_util_Map$Entry 43
typedef jobject (*func_java_util_TreeMap_pollLastEntry_R_java_util_Map$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry 44
typedef jobject (*func_java_util_TreeMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_ceilingKey_java_lang_Object_R_java_lang_Object 45
typedef jobject (*func_java_util_TreeMap_ceilingKey_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_higherEntry_java_lang_Object_R_java_util_Map$Entry 46
typedef jobject (*func_java_util_TreeMap_higherEntry_java_lang_Object_R_java_util_Map$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_higherKey_java_lang_Object_R_java_lang_Object 47
typedef jobject (*func_java_util_TreeMap_higherKey_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_floorEntry_java_lang_Object_R_java_util_Map$Entry 48
typedef jobject (*func_java_util_TreeMap_floorEntry_java_lang_Object_R_java_util_Map$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_floorKey_java_lang_Object_R_java_lang_Object 49
typedef jobject (*func_java_util_TreeMap_floorKey_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry 50
typedef jobject (*func_java_util_TreeMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_lowerKey_java_lang_Object_R_java_lang_Object 51
typedef jobject (*func_java_util_TreeMap_lowerKey_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_navigableKeySet_R_java_util_NavigableSet 52
typedef jobject (*func_java_util_TreeMap_navigableKeySet_R_java_util_NavigableSet)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_descendingMap_R_java_util_NavigableMap 53
typedef jobject (*func_java_util_TreeMap_descendingMap_R_java_util_NavigableMap)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_descendingKeySet_R_java_util_NavigableSet 54
typedef jobject (*func_java_util_TreeMap_descendingKeySet_R_java_util_NavigableSet)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap 55
typedef jobject (*func_java_util_TreeMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3);
#define VTABLE_java_util_TreeMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap 56
typedef jobject (*func_java_util_TreeMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_util_TreeMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap 57
typedef jobject (*func_java_util_TreeMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_util_TreeMap_addToLast_java_util_TreeMap$Node_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node 58
typedef jobject (*func_java_util_TreeMap_addToLast_java_util_TreeMap$Node_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_TreeMap_containsValue_java_util_TreeMap$Entry_java_lang_Object_R_boolean 59
typedef jbool (*func_java_util_TreeMap_containsValue_java_util_TreeMap$Entry_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap_find_java_lang_Object_R_java_util_TreeMap$Entry 60
typedef jobject (*func_java_util_TreeMap_find_java_lang_Object_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry 61
typedef jobject (*func_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry 62
typedef jobject (*func_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry 63
typedef jobject (*func_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry 64
typedef jobject (*func_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry 65
typedef jobject (*func_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry 66
typedef jobject (*func_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry 67
typedef jobject (*func_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_findNode_java_lang_Object_R_java_util_TreeMap$Node 68
typedef jobject (*func_java_util_TreeMap_findNode_java_lang_Object_R_java_util_TreeMap$Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int 69
typedef jint (*func_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_TreeMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object 70
typedef jobject (*func_java_util_TreeMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap_appendFromLeft_java_util_TreeMap$Node_java_lang_Object_java_lang_Object 71
typedef void (*func_java_util_TreeMap_appendFromLeft_java_util_TreeMap$Node_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_TreeMap_attachToLeft_java_util_TreeMap$Node_java_util_TreeMap$Node 72
typedef void (*func_java_util_TreeMap_attachToLeft_java_util_TreeMap$Node_java_util_TreeMap$Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap_appendFromRight_java_util_TreeMap$Node_java_lang_Object_java_lang_Object 73
typedef void (*func_java_util_TreeMap_appendFromRight_java_util_TreeMap$Node_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_TreeMap_attachToRight_java_util_TreeMap$Node_java_util_TreeMap$Node 74
typedef void (*func_java_util_TreeMap_attachToRight_java_util_TreeMap$Node_java_util_TreeMap$Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap_createNode_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node 75
typedef jobject (*func_java_util_TreeMap_createNode_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap_balance_java_util_TreeMap$Node 76
typedef void (*func_java_util_TreeMap_balance_java_util_TreeMap$Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_rightRotate_java_util_TreeMap$Node 77
typedef void (*func_java_util_TreeMap_rightRotate_java_util_TreeMap$Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_leftRotate_java_util_TreeMap$Node 78
typedef void (*func_java_util_TreeMap_leftRotate_java_util_TreeMap$Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_removeLeftmost_java_util_TreeMap$Node_R_java_lang_Object 79
typedef jobject (*func_java_util_TreeMap_removeLeftmost_java_util_TreeMap$Node_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_removeRightmost_java_util_TreeMap$Node_R_java_lang_Object 80
typedef jobject (*func_java_util_TreeMap_removeRightmost_java_util_TreeMap$Node_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_removeMiddleElement_java_util_TreeMap$Node_int_R_java_lang_Object 81
typedef jobject (*func_java_util_TreeMap_removeMiddleElement_java_util_TreeMap$Node_int_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_util_TreeMap_deleteNode_java_util_TreeMap$Node 82
typedef void (*func_java_util_TreeMap_deleteNode_java_util_TreeMap$Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_attachToParentNoFixup_java_util_TreeMap$Node_java_util_TreeMap$Node 83
typedef void (*func_java_util_TreeMap_attachToParentNoFixup_java_util_TreeMap$Node_java_util_TreeMap$Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap_attachToParent_java_util_TreeMap$Node_java_util_TreeMap$Node 84
typedef void (*func_java_util_TreeMap_attachToParent_java_util_TreeMap$Node_java_util_TreeMap$Node)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_TreeMap_attachNullToParent_java_util_TreeMap$Node 85
typedef void (*func_java_util_TreeMap_attachNullToParent_java_util_TreeMap$Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_fixNextChain_java_util_TreeMap$Node 86
typedef void (*func_java_util_TreeMap_fixNextChain_java_util_TreeMap$Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_fixup_java_util_TreeMap$Node 87
typedef void (*func_java_util_TreeMap_fixup_java_util_TreeMap$Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry 88
typedef jobject (*func_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int 89
typedef jint (*func_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_java_util_TreeMap(jobject object, jint mark, jint depth);
void clinit_java_util_TreeMap(jcontext ctx);
void init_java_util_TreeMap(jcontext ctx, jobject self);
void init_java_util_TreeMap_java_util_Comparator(jcontext ctx, jobject self, jobject param0);
void init_java_util_TreeMap_java_util_Map(jcontext ctx, jobject self, jobject param0);
void init_java_util_TreeMap_java_util_SortedMap(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_addToLast_java_util_TreeMap$Node_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_java_util_TreeMap_clear(jcontext ctx, jobject self);
jobject M_java_util_TreeMap_comparator_R_java_util_Comparator(jcontext ctx, jobject self);
jbool M_java_util_TreeMap_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_TreeMap_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_TreeMap_containsValue_java_util_TreeMap$Entry_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_TreeMap_find_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_createEntry_java_util_TreeMap$Node_int_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_util_TreeMap_findSmallestEntry_R_java_util_TreeMap$Entry(jcontext ctx, jobject self);
jobject M_java_util_TreeMap_findBiggestEntry_R_java_util_TreeMap$Entry(jcontext ctx, jobject self);
jobject M_java_util_TreeMap_findCeilingEntry_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_findFloorEntry_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_findLowerEntry_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_findHigherEntry_java_lang_Object_R_java_util_TreeMap$Entry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_firstKey_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_TreeMap_findNode_java_lang_Object_R_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_keySet_R_java_util_Set(jcontext ctx, jobject self);
jobject M_java_util_TreeMap_lastKey_R_java_lang_Object(jcontext ctx, jobject self);
jobject SM_java_util_TreeMap_maximum_java_util_TreeMap$Entry_R_java_util_TreeMap$Entry(jcontext ctx, jobject param0);
jobject SM_java_util_TreeMap_minimum_java_util_TreeMap$Entry_R_java_util_TreeMap$Entry(jcontext ctx, jobject param0);
jobject SM_java_util_TreeMap_predecessor_java_util_TreeMap$Entry_R_java_util_TreeMap$Entry(jcontext ctx, jobject param0);
jobject SM_java_util_TreeMap_successor_java_util_TreeMap$Node_R_java_util_TreeMap$Node(jcontext ctx, jobject param0);
jint M_java_util_TreeMap_cmp_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_java_util_TreeMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_TreeMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_TreeMap_appendFromLeft_java_util_TreeMap$Node_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_java_util_TreeMap_attachToLeft_java_util_TreeMap$Node_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_TreeMap_appendFromRight_java_util_TreeMap$Node_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_java_util_TreeMap_attachToRight_java_util_TreeMap$Node_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_TreeMap_createNode_java_lang_Object_java_lang_Object_R_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_TreeMap_balance_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0);
void M_java_util_TreeMap_rightRotate_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0);
void M_java_util_TreeMap_leftRotate_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0);
void M_java_util_TreeMap_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_removeLeftmost_java_util_TreeMap$Node_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_removeRightmost_java_util_TreeMap$Node_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_removeMiddleElement_java_util_TreeMap$Node_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jint param1);
void M_java_util_TreeMap_deleteNode_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0);
void M_java_util_TreeMap_attachToParentNoFixup_java_util_TreeMap$Node_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_TreeMap_attachToParent_java_util_TreeMap$Node_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_TreeMap_attachNullToParent_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0);
void M_java_util_TreeMap_fixNextChain_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0);
void M_java_util_TreeMap_fixup_java_util_TreeMap$Node(jcontext ctx, jobject self, jobject param0);
jint M_java_util_TreeMap_size_R_int(jcontext ctx, jobject self);
jobject M_java_util_TreeMap_values_R_java_util_Collection(jcontext ctx, jobject self);
jobject M_java_util_TreeMap_firstEntry_R_java_util_Map$Entry(jcontext ctx, jobject self);
jobject M_java_util_TreeMap_lastEntry_R_java_util_Map$Entry(jcontext ctx, jobject self);
jobject M_java_util_TreeMap_pollFirstEntry_R_java_util_Map$Entry(jcontext ctx, jobject self);
jobject M_java_util_TreeMap_pollLastEntry_R_java_util_Map$Entry(jcontext ctx, jobject self);
jobject M_java_util_TreeMap_higherEntry_java_lang_Object_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_higherKey_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_lowerEntry_java_lang_Object_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_lowerKey_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_ceilingEntry_java_lang_Object_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_ceilingKey_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_floorEntry_java_lang_Object_R_java_util_Map$Entry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_floorKey_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_newImmutableEntry_java_util_TreeMap$Entry_R_java_util_AbstractMap$SimpleImmutableEntry(jcontext ctx, jobject self, jobject param0);
jobject SM_java_util_TreeMap_toComparable_java_lang_Object_R_java_lang_Comparable(jcontext ctx, jobject param0);
jint M_java_util_TreeMap_keyCompare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_java_util_TreeMap_minimum_java_util_TreeMap$Node_R_java_util_TreeMap$Node(jcontext ctx, jobject param0);
jobject SM_java_util_TreeMap_maximum_java_util_TreeMap$Node_R_java_util_TreeMap$Node(jcontext ctx, jobject param0);
jobject M_java_util_TreeMap_entrySet_R_java_util_Set(jcontext ctx, jobject self);
jobject M_java_util_TreeMap_navigableKeySet_R_java_util_NavigableSet(jcontext ctx, jobject self);
jobject M_java_util_TreeMap_descendingKeySet_R_java_util_NavigableSet(jcontext ctx, jobject self);
jobject M_java_util_TreeMap_descendingMap_R_java_util_NavigableMap(jcontext ctx, jobject self);
jobject M_java_util_TreeMap_subMap_java_lang_Object_boolean_java_lang_Object_boolean_R_java_util_NavigableMap(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3);
jobject M_java_util_TreeMap_headMap_java_lang_Object_boolean_R_java_util_NavigableMap(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_java_util_TreeMap_tailMap_java_lang_Object_boolean_R_java_util_NavigableMap(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_java_util_TreeMap_subMap_java_lang_Object_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_util_TreeMap_headMap_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap_tailMap_java_lang_Object_R_java_util_SortedMap(jcontext ctx, jobject self, jobject param0);
jobject SM_java_util_TreeMap_access$100_java_lang_Object_R_java_lang_Comparable(jcontext ctx, jobject param0);
jint SM_java_util_TreeMap_access$200_java_util_TreeMap_java_lang_Comparable_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);

#ifdef __cplusplus
}
#endif

#endif
