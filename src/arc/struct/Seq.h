#ifndef HEADER_arc_struct_Seq
#define HEADER_arc_struct_Seq

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"
#include "arc/util/Eachable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_Seq {
	java_lang_Object parent;
	jref F_items;
	jint F_size;
	jbool F_ordered;
	jref F_iterable;
} arc_struct_Seq;

extern Class class_arc_struct_Seq;

extern jint SF_arc_struct_Seq_iteratorsAllocated;

#define VTABLE_arc_struct_Seq_hashCode_R_int 0
typedef jint (*func_arc_struct_Seq_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_Seq_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_Seq_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_Seq_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_Seq_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_finalize 5
typedef void (*func_arc_struct_Seq_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_notify 6
typedef void (*func_arc_struct_Seq_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_notifyAll 7
typedef void (*func_arc_struct_Seq_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_wait 8
typedef void (*func_arc_struct_Seq_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_wait_long 9
typedef void (*func_arc_struct_Seq_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_Seq_wait_long_int 10
typedef void (*func_arc_struct_Seq_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_Seq_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_Seq_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_Seq_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_each_arc_func_Cons 14
typedef void (*func_arc_struct_Seq_each_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_asMap_arc_func_Func_arc_func_Func_R_arc_struct_ObjectMap 15
typedef jobject (*func_arc_struct_Seq_asMap_arc_func_Func_arc_func_Func_R_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_Seq_groupBy_arc_func_Func_R_arc_struct_ObjectMap 16
typedef jobject (*func_arc_struct_Seq_groupBy_arc_func_Func_R_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_groupByCount_arc_func_Func_R_arc_struct_ObjectIntMap 17
typedef jobject (*func_arc_struct_Seq_groupByCount_arc_func_Func_R_arc_struct_ObjectIntMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_asMap_arc_func_Func_R_arc_struct_ObjectMap 18
typedef jobject (*func_arc_struct_Seq_asMap_arc_func_Func_R_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_asSet_R_arc_struct_ObjectSet 19
typedef jobject (*func_arc_struct_Seq_asSet_R_arc_struct_ObjectSet)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq 20
typedef jobject (*func_arc_struct_Seq_copy_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_list_R_java_util_ArrayList 21
typedef jobject (*func_arc_struct_Seq_list_R_java_util_ArrayList)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_sumf_arc_func_Floatf_R_float 22
typedef jfloat (*func_arc_struct_Seq_sumf_arc_func_Floatf_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_sum_arc_func_Intf_R_int 23
typedef jint (*func_arc_struct_Seq_sum_arc_func_Intf_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons 24
typedef void (*func_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_Seq_replace_arc_func_Func 25
typedef void (*func_arc_struct_Seq_replace_arc_func_Func)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_flatten_R_arc_struct_Seq 26
typedef jobject (*func_arc_struct_Seq_flatten_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_flatMap_arc_func_Func_R_arc_struct_Seq 27
typedef jobject (*func_arc_struct_Seq_flatMap_arc_func_Func_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq 28
typedef jobject (*func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_mapInt_arc_func_Intf_R_arc_struct_IntSeq 29
typedef jobject (*func_arc_struct_Seq_mapInt_arc_func_Intf_R_arc_struct_IntSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq 30
typedef jobject (*func_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_Seq_mapFloat_arc_func_Floatf_R_arc_struct_FloatSeq 31
typedef jobject (*func_arc_struct_Seq_mapFloat_arc_func_Floatf_R_arc_struct_FloatSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_reduce_java_lang_Object_arc_func_Func2_R_java_lang_Object 32
typedef jobject (*func_arc_struct_Seq_reduce_java_lang_Object_arc_func_Func2_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_Seq_allMatch_arc_func_Boolf_R_boolean 33
typedef jbool (*func_arc_struct_Seq_allMatch_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean 34
typedef jbool (*func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_min_java_util_Comparator_R_java_lang_Object 35
typedef jobject (*func_arc_struct_Seq_min_java_util_Comparator_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_max_java_util_Comparator_R_java_lang_Object 36
typedef jobject (*func_arc_struct_Seq_max_java_util_Comparator_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object 37
typedef jobject (*func_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_Seq_min_arc_func_Boolf_java_util_Comparator_R_java_lang_Object 38
typedef jobject (*func_arc_struct_Seq_min_arc_func_Boolf_java_util_Comparator_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object 39
typedef jobject (*func_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_max_arc_func_Floatf_R_java_lang_Object 40
typedef jobject (*func_arc_struct_Seq_max_arc_func_Floatf_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object 41
typedef jobject (*func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_with_arc_func_Cons_R_arc_struct_Seq 42
typedef jobject (*func_arc_struct_Seq_with_arc_func_Cons_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_addUnique_java_lang_Object_R_boolean 43
typedef jbool (*func_arc_struct_Seq_addUnique_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq 44
typedef jobject (*func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_add_java_lang_Object_java_lang_Object_R_arc_struct_Seq 45
typedef jobject (*func_arc_struct_Seq_add_java_lang_Object_java_lang_Object_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq 46
typedef jobject (*func_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq 47
typedef jobject (*func_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq 48
typedef jobject (*func_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_add_Array1_java_lang_Object_R_arc_struct_Seq 49
typedef jobject (*func_arc_struct_Seq_add_Array1_java_lang_Object_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq 50
typedef jobject (*func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq 51
typedef jobject (*func_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq 52
typedef jobject (*func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq 53
typedef jobject (*func_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq 54
typedef jobject (*func_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_set_arc_struct_Seq 55
typedef void (*func_arc_struct_Seq_set_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_set_Array1_java_lang_Object 56
typedef void (*func_arc_struct_Seq_set_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_getFrac_float_R_java_lang_Object 57
typedef jobject (*func_arc_struct_Seq_getFrac_float_R_java_lang_Object)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_struct_Seq_get_int_R_java_lang_Object 58
typedef jobject (*func_arc_struct_Seq_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Seq_set_int_java_lang_Object 59
typedef void (*func_arc_struct_Seq_set_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_struct_Seq_insert_int_java_lang_Object 60
typedef void (*func_arc_struct_Seq_insert_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_struct_Seq_swap_int_int 61
typedef void (*func_arc_struct_Seq_swap_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_Seq_replace_java_lang_Object_java_lang_Object_R_boolean 62
typedef jbool (*func_arc_struct_Seq_replace_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_Seq_containsAll_arc_struct_Seq_R_boolean 63
typedef jbool (*func_arc_struct_Seq_containsAll_arc_struct_Seq_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_containsAll_arc_struct_Seq_boolean_R_boolean 64
typedef jbool (*func_arc_struct_Seq_containsAll_arc_struct_Seq_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean 65
typedef jbool (*func_arc_struct_Seq_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean 66
typedef jbool (*func_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int 67
typedef jint (*func_arc_struct_Seq_indexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int 68
typedef jint (*func_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_Seq_indexOf_arc_func_Boolf_R_int 69
typedef jint (*func_arc_struct_Seq_indexOf_arc_func_Boolf_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_lastIndexOf_java_lang_Object_boolean_R_int 70
typedef jint (*func_arc_struct_Seq_lastIndexOf_java_lang_Object_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean 71
typedef jbool (*func_arc_struct_Seq_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_remove_arc_func_Boolf_R_boolean 72
typedef jbool (*func_arc_struct_Seq_remove_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean 73
typedef jbool (*func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object 74
typedef jobject (*func_arc_struct_Seq_remove_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Seq_removeRange_int_int 75
typedef void (*func_arc_struct_Seq_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq 76
typedef jobject (*func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean 77
typedef jbool (*func_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_removeAll_arc_struct_Seq_boolean_R_boolean 78
typedef jbool (*func_arc_struct_Seq_removeAll_arc_struct_Seq_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_Seq_pop_arc_func_Prov_R_java_lang_Object 79
typedef jobject (*func_arc_struct_Seq_pop_arc_func_Prov_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_pop_R_java_lang_Object 80
typedef jobject (*func_arc_struct_Seq_pop_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_peek_R_java_lang_Object 81
typedef jobject (*func_arc_struct_Seq_peek_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_first_R_java_lang_Object 82
typedef jobject (*func_arc_struct_Seq_first_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_firstOpt_R_java_lang_Object 83
typedef jobject (*func_arc_struct_Seq_firstOpt_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_isEmpty_R_boolean 84
typedef jbool (*func_arc_struct_Seq_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_any_R_boolean 85
typedef jbool (*func_arc_struct_Seq_any_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq 86
typedef jobject (*func_arc_struct_Seq_clear_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_shrink_R_Array1_java_lang_Object 87
typedef jobject (*func_arc_struct_Seq_shrink_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object 88
typedef jobject (*func_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Seq_setSize_int_R_Array1_java_lang_Object 89
typedef jobject (*func_arc_struct_Seq_setSize_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Seq_resize_int_R_Array1_java_lang_Object 90
typedef jobject (*func_arc_struct_Seq_resize_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq 91
typedef jobject (*func_arc_struct_Seq_sort_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq 92
typedef jobject (*func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq 93
typedef jobject (*func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_sortComparing_arc_func_Func_R_arc_struct_Seq 94
typedef jobject (*func_arc_struct_Seq_sortComparing_arc_func_Func_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq 95
typedef jobject (*func_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_Seq_distinct_R_arc_struct_Seq 96
typedef jobject (*func_arc_struct_Seq_distinct_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_as_R_arc_struct_Seq 97
typedef jobject (*func_arc_struct_Seq_as_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq 98
typedef jobject (*func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq 99
typedef jobject (*func_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int 100
typedef jint (*func_arc_struct_Seq_count_arc_func_Boolf_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_selectRanked_java_util_Comparator_int_R_java_lang_Object 101
typedef jobject (*func_arc_struct_Seq_selectRanked_java_util_Comparator_int_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_struct_Seq_selectRankedIndex_java_util_Comparator_int_R_int 102
typedef jint (*func_arc_struct_Seq_selectRankedIndex_java_util_Comparator_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_struct_Seq_reverse_R_arc_struct_Seq 103
typedef jobject (*func_arc_struct_Seq_reverse_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_shuffle_R_arc_struct_Seq 104
typedef jobject (*func_arc_struct_Seq_shuffle_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_truncate_int 105
typedef void (*func_arc_struct_Seq_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_Seq_random_arc_math_Rand_R_java_lang_Object 106
typedef jobject (*func_arc_struct_Seq_random_arc_math_Rand_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_random_R_java_lang_Object 107
typedef jobject (*func_arc_struct_Seq_random_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object 108
typedef jobject (*func_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_toArray_R_Array1_java_lang_Object 109
typedef jobject (*func_arc_struct_Seq_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object 110
typedef jobject (*func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String 111
typedef jobject (*func_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_Seq_toString_java_lang_String_R_java_lang_String 112
typedef jobject (*func_arc_struct_Seq_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Seq_lambda$selectFrom$0_arc_func_Boolf_java_lang_Object 113
typedef void (*func_arc_struct_Seq_lambda$selectFrom$0_arc_func_Boolf_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_struct_Seq(jobject object, jint mark, jint depth);
void clinit_arc_struct_Seq(jcontext ctx);
void init_arc_struct_Seq(jcontext ctx, jobject self);
void init_arc_struct_Seq_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_Seq_boolean(jcontext ctx, jobject self, jbool param0);
void init_arc_struct_Seq_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void init_arc_struct_Seq_boolean_int_java_lang_Class(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2);
void init_arc_struct_Seq_java_lang_Class(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_Seq_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_Seq_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_Seq_boolean_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3);
jobject SM_arc_struct_Seq_withArrays_Array1_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject param0);
jobject SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject param0);
jobject SM_arc_struct_Seq_with_java_lang_Iterable_R_arc_struct_Seq(jcontext ctx, jobject param0);
jobject SM_arc_struct_Seq_map_Array1_java_lang_Object_arc_func_Func_R_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_struct_Seq_select_Array1_java_lang_Object_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1);
jobject M_arc_struct_Seq_asMap_arc_func_Func_arc_func_Func_R_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_struct_Seq_groupBy_arc_func_Func_R_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_groupByCount_arc_func_Func_R_arc_struct_ObjectIntMap(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_asMap_arc_func_Func_R_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_asSet_R_arc_struct_ObjectSet(jcontext ctx, jobject self);
jobject M_arc_struct_Seq_copy_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_struct_Seq_list_R_java_util_ArrayList(jcontext ctx, jobject self);
jfloat M_arc_struct_Seq_sumf_arc_func_Floatf_R_float(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_Seq_sum_arc_func_Intf_R_int(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_Seq_each_arc_func_Boolf_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_struct_Seq_each_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_Seq_replace_arc_func_Func(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_flatten_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_struct_Seq_flatMap_arc_func_Func_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_mapInt_arc_func_Intf_R_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_struct_Seq_mapFloat_arc_func_Floatf_R_arc_struct_FloatSeq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_reduce_java_lang_Object_arc_func_Func2_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_arc_struct_Seq_allMatch_arc_func_Boolf_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Seq_contains_arc_func_Boolf_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_min_java_util_Comparator_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_max_java_util_Comparator_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_struct_Seq_min_arc_func_Boolf_java_util_Comparator_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_max_arc_func_Floatf_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_with_arc_func_Cons_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Seq_addUnique_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_arc_struct_Seq_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_add_Array1_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_Seq_set_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_Seq_set_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_getFrac_float_R_java_lang_Object(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_struct_Seq_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_arc_struct_Seq_set_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_struct_Seq_insert_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_struct_Seq_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_struct_Seq_replace_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_arc_struct_Seq_containsAll_arc_struct_Seq_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Seq_containsAll_arc_struct_Seq_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_arc_struct_Seq_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jint M_arc_struct_Seq_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1);
jint M_arc_struct_Seq_indexOf_arc_func_Boolf_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_Seq_lastIndexOf_java_lang_Object_boolean_R_int(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_arc_struct_Seq_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Seq_remove_arc_func_Boolf_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_struct_Seq_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_arc_struct_Seq_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_Seq_removeAll_arc_struct_Seq_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_struct_Seq_pop_arc_func_Prov_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_pop_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_struct_Seq_peek_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_struct_Seq_first_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_struct_Seq_firstOpt_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_arc_struct_Seq_isEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_arc_struct_Seq_any_R_boolean(jcontext ctx, jobject self);
jobject M_arc_struct_Seq_clear_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_struct_Seq_shrink_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_Seq_setSize_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_Seq_resize_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_Seq_sort_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_sortComparing_arc_func_Func_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_struct_Seq_distinct_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_struct_Seq_as_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_Seq_count_arc_func_Boolf_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_selectRanked_java_util_Comparator_int_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_arc_struct_Seq_selectRankedIndex_java_util_Comparator_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_arc_struct_Seq_reverse_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_struct_Seq_shuffle_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_arc_struct_Seq_truncate_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_Seq_random_arc_math_Rand_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_random_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_struct_Seq_random_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_Seq_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_Seq_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_Seq_toString_java_lang_String_arc_func_Func_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_struct_Seq_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_Seq_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jbool SM_arc_struct_Seq_lambda$retainAll$0_arc_func_Boolf_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1);
void M_arc_struct_Seq_lambda$selectFrom$0_arc_func_Boolf_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_arc_struct_Seq_lambda$asMap$0_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
