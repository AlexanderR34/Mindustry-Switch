#ifndef HEADER_arc_struct_SnapshotSeq
#define HEADER_arc_struct_SnapshotSeq

#include "Clearwing.h"
#include "arc/struct/Seq.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_SnapshotSeq {
	arc_struct_Seq parent;
	jref F_snapshot;
	jref F_recycled;
	jint F_snapshots;
} arc_struct_SnapshotSeq;

extern Class class_arc_struct_SnapshotSeq;


#define VTABLE_arc_struct_SnapshotSeq_hashCode_R_int 0
typedef jint (*func_arc_struct_SnapshotSeq_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_SnapshotSeq_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_SnapshotSeq_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_SnapshotSeq_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_SnapshotSeq_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_finalize 5
typedef void (*func_arc_struct_SnapshotSeq_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_notify 6
typedef void (*func_arc_struct_SnapshotSeq_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_notifyAll 7
typedef void (*func_arc_struct_SnapshotSeq_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_wait 8
typedef void (*func_arc_struct_SnapshotSeq_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_wait_long 9
typedef void (*func_arc_struct_SnapshotSeq_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_SnapshotSeq_wait_long_int 10
typedef void (*func_arc_struct_SnapshotSeq_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_SnapshotSeq_iterator_R_java_util_Iterator 11
typedef jobject (*func_arc_struct_SnapshotSeq_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_forEach_java_util_function_Consumer 12
typedef void (*func_arc_struct_SnapshotSeq_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_arc_struct_SnapshotSeq_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_each_arc_func_Cons 14
typedef void (*func_arc_struct_SnapshotSeq_each_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_asMap_arc_func_Func_arc_func_Func_R_arc_struct_ObjectMap 15
typedef jobject (*func_arc_struct_SnapshotSeq_asMap_arc_func_Func_arc_func_Func_R_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_SnapshotSeq_groupBy_arc_func_Func_R_arc_struct_ObjectMap 16
typedef jobject (*func_arc_struct_SnapshotSeq_groupBy_arc_func_Func_R_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_groupByCount_arc_func_Func_R_arc_struct_ObjectIntMap 17
typedef jobject (*func_arc_struct_SnapshotSeq_groupByCount_arc_func_Func_R_arc_struct_ObjectIntMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_asMap_arc_func_Func_R_arc_struct_ObjectMap 18
typedef jobject (*func_arc_struct_SnapshotSeq_asMap_arc_func_Func_R_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_asSet_R_arc_struct_ObjectSet 19
typedef jobject (*func_arc_struct_SnapshotSeq_asSet_R_arc_struct_ObjectSet)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_copy_R_arc_struct_Seq 20
typedef jobject (*func_arc_struct_SnapshotSeq_copy_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_list_R_java_util_ArrayList 21
typedef jobject (*func_arc_struct_SnapshotSeq_list_R_java_util_ArrayList)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_sumf_arc_func_Floatf_R_float 22
typedef jfloat (*func_arc_struct_SnapshotSeq_sumf_arc_func_Floatf_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_sum_arc_func_Intf_R_int 23
typedef jint (*func_arc_struct_SnapshotSeq_sum_arc_func_Intf_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_each_arc_func_Boolf_arc_func_Cons 24
typedef void (*func_arc_struct_SnapshotSeq_each_arc_func_Boolf_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_SnapshotSeq_replace_arc_func_Func 25
typedef void (*func_arc_struct_SnapshotSeq_replace_arc_func_Func)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_flatten_R_arc_struct_Seq 26
typedef jobject (*func_arc_struct_SnapshotSeq_flatten_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_flatMap_arc_func_Func_R_arc_struct_Seq 27
typedef jobject (*func_arc_struct_SnapshotSeq_flatMap_arc_func_Func_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_map_arc_func_Func_R_arc_struct_Seq 28
typedef jobject (*func_arc_struct_SnapshotSeq_map_arc_func_Func_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_mapInt_arc_func_Intf_R_arc_struct_IntSeq 29
typedef jobject (*func_arc_struct_SnapshotSeq_mapInt_arc_func_Intf_R_arc_struct_IntSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq 30
typedef jobject (*func_arc_struct_SnapshotSeq_mapInt_arc_func_Intf_arc_func_Boolf_R_arc_struct_IntSeq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_SnapshotSeq_mapFloat_arc_func_Floatf_R_arc_struct_FloatSeq 31
typedef jobject (*func_arc_struct_SnapshotSeq_mapFloat_arc_func_Floatf_R_arc_struct_FloatSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_reduce_java_lang_Object_arc_func_Func2_R_java_lang_Object 32
typedef jobject (*func_arc_struct_SnapshotSeq_reduce_java_lang_Object_arc_func_Func2_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_SnapshotSeq_allMatch_arc_func_Boolf_R_boolean 33
typedef jbool (*func_arc_struct_SnapshotSeq_allMatch_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_contains_arc_func_Boolf_R_boolean 34
typedef jbool (*func_arc_struct_SnapshotSeq_contains_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_min_java_util_Comparator_R_java_lang_Object 35
typedef jobject (*func_arc_struct_SnapshotSeq_min_java_util_Comparator_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_max_java_util_Comparator_R_java_lang_Object 36
typedef jobject (*func_arc_struct_SnapshotSeq_max_java_util_Comparator_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object 37
typedef jobject (*func_arc_struct_SnapshotSeq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_SnapshotSeq_min_arc_func_Boolf_java_util_Comparator_R_java_lang_Object 38
typedef jobject (*func_arc_struct_SnapshotSeq_min_arc_func_Boolf_java_util_Comparator_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_SnapshotSeq_min_arc_func_Floatf_R_java_lang_Object 39
typedef jobject (*func_arc_struct_SnapshotSeq_min_arc_func_Floatf_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_max_arc_func_Floatf_R_java_lang_Object 40
typedef jobject (*func_arc_struct_SnapshotSeq_max_arc_func_Floatf_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_find_arc_func_Boolf_R_java_lang_Object 41
typedef jobject (*func_arc_struct_SnapshotSeq_find_arc_func_Boolf_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_with_arc_func_Cons_R_arc_struct_Seq 42
typedef jobject (*func_arc_struct_SnapshotSeq_with_arc_func_Cons_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_addUnique_java_lang_Object_R_boolean 43
typedef jbool (*func_arc_struct_SnapshotSeq_addUnique_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_add_java_lang_Object_R_arc_struct_Seq 44
typedef jobject (*func_arc_struct_SnapshotSeq_add_java_lang_Object_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_add_java_lang_Object_java_lang_Object_R_arc_struct_Seq 45
typedef jobject (*func_arc_struct_SnapshotSeq_add_java_lang_Object_java_lang_Object_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_SnapshotSeq_add_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq 46
typedef jobject (*func_arc_struct_SnapshotSeq_add_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_struct_SnapshotSeq_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq 47
typedef jobject (*func_arc_struct_SnapshotSeq_add_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_arc_struct_SnapshotSeq_add_arc_struct_Seq_R_arc_struct_Seq 48
typedef jobject (*func_arc_struct_SnapshotSeq_add_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_add_Array1_java_lang_Object_R_arc_struct_Seq 49
typedef jobject (*func_arc_struct_SnapshotSeq_add_Array1_java_lang_Object_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_addAll_arc_struct_Seq_R_arc_struct_Seq 50
typedef jobject (*func_arc_struct_SnapshotSeq_addAll_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq 51
typedef jobject (*func_arc_struct_SnapshotSeq_addAll_arc_struct_Seq_int_int_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_SnapshotSeq_addAll_Array1_java_lang_Object_R_arc_struct_Seq 52
typedef jobject (*func_arc_struct_SnapshotSeq_addAll_Array1_java_lang_Object_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq 53
typedef jobject (*func_arc_struct_SnapshotSeq_addAll_Array1_java_lang_Object_int_int_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_SnapshotSeq_addAll_java_lang_Iterable_R_arc_struct_Seq 54
typedef jobject (*func_arc_struct_SnapshotSeq_addAll_java_lang_Iterable_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_set_arc_struct_Seq 55
typedef void (*func_arc_struct_SnapshotSeq_set_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_set_Array1_java_lang_Object 56
typedef void (*func_arc_struct_SnapshotSeq_set_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_getFrac_float_R_java_lang_Object 57
typedef jobject (*func_arc_struct_SnapshotSeq_getFrac_float_R_java_lang_Object)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_struct_SnapshotSeq_get_int_R_java_lang_Object 58
typedef jobject (*func_arc_struct_SnapshotSeq_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_SnapshotSeq_set_int_java_lang_Object 59
typedef void (*func_arc_struct_SnapshotSeq_set_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_struct_SnapshotSeq_insert_int_java_lang_Object 60
typedef void (*func_arc_struct_SnapshotSeq_insert_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_struct_SnapshotSeq_swap_int_int 61
typedef void (*func_arc_struct_SnapshotSeq_swap_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_SnapshotSeq_replace_java_lang_Object_java_lang_Object_R_boolean 62
typedef jbool (*func_arc_struct_SnapshotSeq_replace_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_SnapshotSeq_containsAll_arc_struct_Seq_R_boolean 63
typedef jbool (*func_arc_struct_SnapshotSeq_containsAll_arc_struct_Seq_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_containsAll_arc_struct_Seq_boolean_R_boolean 64
typedef jbool (*func_arc_struct_SnapshotSeq_containsAll_arc_struct_Seq_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_SnapshotSeq_contains_java_lang_Object_R_boolean 65
typedef jbool (*func_arc_struct_SnapshotSeq_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_contains_java_lang_Object_boolean_R_boolean 66
typedef jbool (*func_arc_struct_SnapshotSeq_contains_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_SnapshotSeq_indexOf_java_lang_Object_R_int 67
typedef jint (*func_arc_struct_SnapshotSeq_indexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_indexOf_java_lang_Object_boolean_R_int 68
typedef jint (*func_arc_struct_SnapshotSeq_indexOf_java_lang_Object_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_SnapshotSeq_indexOf_arc_func_Boolf_R_int 69
typedef jint (*func_arc_struct_SnapshotSeq_indexOf_arc_func_Boolf_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_lastIndexOf_java_lang_Object_boolean_R_int 70
typedef jint (*func_arc_struct_SnapshotSeq_lastIndexOf_java_lang_Object_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_SnapshotSeq_remove_java_lang_Object_R_boolean 71
typedef jbool (*func_arc_struct_SnapshotSeq_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_remove_arc_func_Boolf_R_boolean 72
typedef jbool (*func_arc_struct_SnapshotSeq_remove_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean 73
typedef jbool (*func_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_SnapshotSeq_remove_int_R_java_lang_Object 74
typedef jobject (*func_arc_struct_SnapshotSeq_remove_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_SnapshotSeq_removeRange_int_int 75
typedef void (*func_arc_struct_SnapshotSeq_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_SnapshotSeq_removeAll_arc_func_Boolf_R_arc_struct_Seq 76
typedef jobject (*func_arc_struct_SnapshotSeq_removeAll_arc_func_Boolf_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_removeAll_arc_struct_Seq_R_boolean 77
typedef jbool (*func_arc_struct_SnapshotSeq_removeAll_arc_struct_Seq_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_removeAll_arc_struct_Seq_boolean_R_boolean 78
typedef jbool (*func_arc_struct_SnapshotSeq_removeAll_arc_struct_Seq_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_struct_SnapshotSeq_pop_arc_func_Prov_R_java_lang_Object 79
typedef jobject (*func_arc_struct_SnapshotSeq_pop_arc_func_Prov_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_pop_R_java_lang_Object 80
typedef jobject (*func_arc_struct_SnapshotSeq_pop_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_peek_R_java_lang_Object 81
typedef jobject (*func_arc_struct_SnapshotSeq_peek_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_first_R_java_lang_Object 82
typedef jobject (*func_arc_struct_SnapshotSeq_first_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_firstOpt_R_java_lang_Object 83
typedef jobject (*func_arc_struct_SnapshotSeq_firstOpt_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_isEmpty_R_boolean 84
typedef jbool (*func_arc_struct_SnapshotSeq_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_any_R_boolean 85
typedef jbool (*func_arc_struct_SnapshotSeq_any_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_clear_R_arc_struct_Seq 86
typedef jobject (*func_arc_struct_SnapshotSeq_clear_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_shrink_R_Array1_java_lang_Object 87
typedef jobject (*func_arc_struct_SnapshotSeq_shrink_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_ensureCapacity_int_R_Array1_java_lang_Object 88
typedef jobject (*func_arc_struct_SnapshotSeq_ensureCapacity_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_SnapshotSeq_setSize_int_R_Array1_java_lang_Object 89
typedef jobject (*func_arc_struct_SnapshotSeq_setSize_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_SnapshotSeq_resize_int_R_Array1_java_lang_Object 90
typedef jobject (*func_arc_struct_SnapshotSeq_resize_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_SnapshotSeq_sort_R_arc_struct_Seq 91
typedef jobject (*func_arc_struct_SnapshotSeq_sort_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_sort_java_util_Comparator_R_arc_struct_Seq 92
typedef jobject (*func_arc_struct_SnapshotSeq_sort_java_util_Comparator_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_sort_arc_func_Floatf_R_arc_struct_Seq 93
typedef jobject (*func_arc_struct_SnapshotSeq_sort_arc_func_Floatf_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_sortComparing_arc_func_Func_R_arc_struct_Seq 94
typedef jobject (*func_arc_struct_SnapshotSeq_sortComparing_arc_func_Func_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq 95
typedef jobject (*func_arc_struct_SnapshotSeq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_SnapshotSeq_distinct_R_arc_struct_Seq 96
typedef jobject (*func_arc_struct_SnapshotSeq_distinct_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_as_R_arc_struct_Seq 97
typedef jobject (*func_arc_struct_SnapshotSeq_as_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_select_arc_func_Boolf_R_arc_struct_Seq 98
typedef jobject (*func_arc_struct_SnapshotSeq_select_arc_func_Boolf_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_retainAll_arc_func_Boolf_R_arc_struct_Seq 99
typedef jobject (*func_arc_struct_SnapshotSeq_retainAll_arc_func_Boolf_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_count_arc_func_Boolf_R_int 100
typedef jint (*func_arc_struct_SnapshotSeq_count_arc_func_Boolf_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_selectRanked_java_util_Comparator_int_R_java_lang_Object 101
typedef jobject (*func_arc_struct_SnapshotSeq_selectRanked_java_util_Comparator_int_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_struct_SnapshotSeq_selectRankedIndex_java_util_Comparator_int_R_int 102
typedef jint (*func_arc_struct_SnapshotSeq_selectRankedIndex_java_util_Comparator_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_struct_SnapshotSeq_reverse_R_arc_struct_Seq 103
typedef jobject (*func_arc_struct_SnapshotSeq_reverse_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_shuffle_R_arc_struct_Seq 104
typedef jobject (*func_arc_struct_SnapshotSeq_shuffle_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_truncate_int 105
typedef void (*func_arc_struct_SnapshotSeq_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_SnapshotSeq_random_arc_math_Rand_R_java_lang_Object 106
typedef jobject (*func_arc_struct_SnapshotSeq_random_arc_math_Rand_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_random_R_java_lang_Object 107
typedef jobject (*func_arc_struct_SnapshotSeq_random_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_random_java_lang_Object_R_java_lang_Object 108
typedef jobject (*func_arc_struct_SnapshotSeq_random_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_toArray_R_Array1_java_lang_Object 109
typedef jobject (*func_arc_struct_SnapshotSeq_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_toArray_java_lang_Class_R_Array1_java_lang_Object 110
typedef jobject (*func_arc_struct_SnapshotSeq_toArray_java_lang_Class_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_toString_java_lang_String_arc_func_Func_R_java_lang_String 111
typedef jobject (*func_arc_struct_SnapshotSeq_toString_java_lang_String_arc_func_Func_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_SnapshotSeq_toString_java_lang_String_R_java_lang_String 112
typedef jobject (*func_arc_struct_SnapshotSeq_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_SnapshotSeq_lambda$selectFrom$0_arc_func_Boolf_java_lang_Object 113
typedef void (*func_arc_struct_SnapshotSeq_lambda$selectFrom$0_arc_func_Boolf_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object 114
typedef jobject (*func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_end 115
typedef void (*func_arc_struct_SnapshotSeq_end)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_SnapshotSeq_modified 116
typedef void (*func_arc_struct_SnapshotSeq_modified)(jcontext ctx, jobject self);

void mark_arc_struct_SnapshotSeq(jobject object, jint mark, jint depth);
void clinit_arc_struct_SnapshotSeq(jcontext ctx);
void init_arc_struct_SnapshotSeq(jcontext ctx, jobject self);
void init_arc_struct_SnapshotSeq_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_SnapshotSeq_boolean_int_java_lang_Class(jcontext ctx, jobject self, jbool param0, jint param1, jobject param2);
void init_arc_struct_SnapshotSeq_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void init_arc_struct_SnapshotSeq_boolean_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3);
void init_arc_struct_SnapshotSeq_java_lang_Class(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_SnapshotSeq_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_SnapshotSeq_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject SM_arc_struct_SnapshotSeq_with_Array1_java_lang_Object_R_arc_struct_SnapshotSeq(jcontext ctx, jobject param0);
jobject M_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object(jcontext ctx, jobject self);
void M_arc_struct_SnapshotSeq_end(jcontext ctx, jobject self);
void M_arc_struct_SnapshotSeq_modified(jcontext ctx, jobject self);
void M_arc_struct_SnapshotSeq_set_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_struct_SnapshotSeq_insert_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_struct_SnapshotSeq_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_struct_SnapshotSeq_remove_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_arc_struct_SnapshotSeq_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_struct_SnapshotSeq_removeAll_arc_struct_Seq_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_struct_SnapshotSeq_pop_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_arc_struct_SnapshotSeq_clear_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_struct_SnapshotSeq_sort_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_struct_SnapshotSeq_sort_java_util_Comparator_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_SnapshotSeq_reverse_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_struct_SnapshotSeq_shuffle_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_arc_struct_SnapshotSeq_truncate_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_SnapshotSeq_setSize_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
