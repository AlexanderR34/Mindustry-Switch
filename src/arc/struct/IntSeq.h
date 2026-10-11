#ifndef HEADER_arc_struct_IntSeq
#define HEADER_arc_struct_IntSeq

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_IntSeq {
	java_lang_Object parent;
	jref F_items;
	jint F_size;
	jbool F_ordered;
} arc_struct_IntSeq;

extern Class class_arc_struct_IntSeq;


#define VTABLE_arc_struct_IntSeq_hashCode_R_int 0
typedef jint (*func_arc_struct_IntSeq_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_IntSeq_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntSeq_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_IntSeq_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_IntSeq_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_IntSeq_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_finalize 5
typedef void (*func_arc_struct_IntSeq_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_notify 6
typedef void (*func_arc_struct_IntSeq_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_notifyAll 7
typedef void (*func_arc_struct_IntSeq_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_wait 8
typedef void (*func_arc_struct_IntSeq_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_wait_long 9
typedef void (*func_arc_struct_IntSeq_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_IntSeq_wait_long_int 10
typedef void (*func_arc_struct_IntSeq_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_IntSeq_mode_R_int 11
typedef jint (*func_arc_struct_IntSeq_mode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_each_arc_func_Intc 12
typedef void (*func_arc_struct_IntSeq_each_arc_func_Intc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntSeq_count_int_R_int 13
typedef jint (*func_arc_struct_IntSeq_count_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSeq_sum_R_int 14
typedef jint (*func_arc_struct_IntSeq_sum_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_chunked_int_arc_func_Cons 15
typedef void (*func_arc_struct_IntSeq_chunked_int_arc_func_Cons)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_struct_IntSeq_addUnique_int_R_boolean 16
typedef jbool (*func_arc_struct_IntSeq_addUnique_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSeq_add_int 17
typedef void (*func_arc_struct_IntSeq_add_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSeq_add_int_int 18
typedef void (*func_arc_struct_IntSeq_add_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_IntSeq_add_int_int_int 19
typedef void (*func_arc_struct_IntSeq_add_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_struct_IntSeq_add_int_int_int_int 20
typedef void (*func_arc_struct_IntSeq_add_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_struct_IntSeq_addAll_arc_struct_IntSeq 21
typedef void (*func_arc_struct_IntSeq_addAll_arc_struct_IntSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntSeq_addAll_arc_struct_IntSeq_int_int 22
typedef void (*func_arc_struct_IntSeq_addAll_arc_struct_IntSeq_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_IntSeq_addAll_Array1_int 23
typedef void (*func_arc_struct_IntSeq_addAll_Array1_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntSeq_addAll_Array1_int_int_int 24
typedef void (*func_arc_struct_IntSeq_addAll_Array1_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_IntSeq_get_int_R_int 25
typedef jint (*func_arc_struct_IntSeq_get_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSeq_set_int_int 26
typedef void (*func_arc_struct_IntSeq_set_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_IntSeq_incr_int_int 27
typedef void (*func_arc_struct_IntSeq_incr_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_IntSeq_mul_int_int 28
typedef void (*func_arc_struct_IntSeq_mul_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_IntSeq_insert_int_int 29
typedef void (*func_arc_struct_IntSeq_insert_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_IntSeq_swap_int_int 30
typedef void (*func_arc_struct_IntSeq_swap_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_IntSeq_contains_int_R_boolean 31
typedef jbool (*func_arc_struct_IntSeq_contains_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSeq_indexOf_int_R_int 32
typedef jint (*func_arc_struct_IntSeq_indexOf_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSeq_lastIndexOf_int_R_int 33
typedef jint (*func_arc_struct_IntSeq_lastIndexOf_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean 34
typedef jbool (*func_arc_struct_IntSeq_removeValue_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSeq_removeIndex_int_R_int 35
typedef jint (*func_arc_struct_IntSeq_removeIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSeq_removeRange_int_int 36
typedef void (*func_arc_struct_IntSeq_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_IntSeq_removeAll_arc_struct_IntSeq_R_boolean 37
typedef jbool (*func_arc_struct_IntSeq_removeAll_arc_struct_IntSeq_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntSeq_pop_R_int 38
typedef jint (*func_arc_struct_IntSeq_pop_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_peek_R_int 39
typedef jint (*func_arc_struct_IntSeq_peek_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_first_R_int 40
typedef jint (*func_arc_struct_IntSeq_first_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_isEmpty_R_boolean 41
typedef jbool (*func_arc_struct_IntSeq_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_clear 42
typedef void (*func_arc_struct_IntSeq_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_shrink_R_Array1_int 43
typedef jobject (*func_arc_struct_IntSeq_shrink_R_Array1_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_ensureCapacity_int_R_Array1_int 44
typedef jobject (*func_arc_struct_IntSeq_ensureCapacity_int_R_Array1_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSeq_setSize_int_R_Array1_int 45
typedef jobject (*func_arc_struct_IntSeq_setSize_int_R_Array1_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSeq_resize_int_R_Array1_int 46
typedef jobject (*func_arc_struct_IntSeq_resize_int_R_Array1_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSeq_sort 47
typedef void (*func_arc_struct_IntSeq_sort)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_reverse 48
typedef void (*func_arc_struct_IntSeq_reverse)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_shuffle 49
typedef void (*func_arc_struct_IntSeq_shuffle)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_shuffle_arc_math_Rand 50
typedef void (*func_arc_struct_IntSeq_shuffle_arc_math_Rand)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_IntSeq_truncate_int 51
typedef void (*func_arc_struct_IntSeq_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_IntSeq_random_R_int 52
typedef jint (*func_arc_struct_IntSeq_random_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_toArray_R_Array1_int 53
typedef jobject (*func_arc_struct_IntSeq_toArray_R_Array1_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_IntSeq_toString_java_lang_String_R_java_lang_String 54
typedef jobject (*func_arc_struct_IntSeq_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_arc_struct_IntSeq(jobject object, jint mark, jint depth);
void clinit_arc_struct_IntSeq(jcontext ctx);
jobject SM_arc_struct_IntSeq_range_int_int_R_arc_struct_IntSeq(jcontext ctx, jint param0, jint param1);
void init_arc_struct_IntSeq(jcontext ctx, jobject self);
void init_arc_struct_IntSeq_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_IntSeq_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void init_arc_struct_IntSeq_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_IntSeq_Array1_int(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_IntSeq_boolean_Array1_int_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3);
jobject SM_arc_struct_IntSeq_with_Array1_int_R_arc_struct_IntSeq(jcontext ctx, jobject param0);
jint M_arc_struct_IntSeq_mode_R_int(jcontext ctx, jobject self);
void M_arc_struct_IntSeq_each_arc_func_Intc(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_IntSeq_count_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntSeq_sum_R_int(jcontext ctx, jobject self);
void M_arc_struct_IntSeq_chunked_int_arc_func_Cons(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_arc_struct_IntSeq_addUnique_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntSeq_add_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntSeq_add_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_struct_IntSeq_add_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
void M_arc_struct_IntSeq_add_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_struct_IntSeq_addAll_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_IntSeq_addAll_arc_struct_IntSeq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_struct_IntSeq_addAll_Array1_int(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_IntSeq_addAll_Array1_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_arc_struct_IntSeq_get_int_R_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntSeq_set_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_struct_IntSeq_incr_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_struct_IntSeq_mul_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_struct_IntSeq_insert_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_struct_IntSeq_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_struct_IntSeq_contains_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntSeq_indexOf_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntSeq_lastIndexOf_int_R_int(jcontext ctx, jobject self, jint param0);
jbool M_arc_struct_IntSeq_removeValue_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntSeq_removeIndex_int_R_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntSeq_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_struct_IntSeq_removeAll_arc_struct_IntSeq_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_arc_struct_IntSeq_pop_R_int(jcontext ctx, jobject self);
jint M_arc_struct_IntSeq_peek_R_int(jcontext ctx, jobject self);
jint M_arc_struct_IntSeq_first_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_IntSeq_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_arc_struct_IntSeq_clear(jcontext ctx, jobject self);
jobject M_arc_struct_IntSeq_shrink_R_Array1_int(jcontext ctx, jobject self);
jobject M_arc_struct_IntSeq_ensureCapacity_int_R_Array1_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_IntSeq_setSize_int_R_Array1_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_IntSeq_resize_int_R_Array1_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_IntSeq_sort(jcontext ctx, jobject self);
void M_arc_struct_IntSeq_reverse(jcontext ctx, jobject self);
void M_arc_struct_IntSeq_shuffle(jcontext ctx, jobject self);
void M_arc_struct_IntSeq_shuffle_arc_math_Rand(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_IntSeq_truncate_int(jcontext ctx, jobject self, jint param0);
jint M_arc_struct_IntSeq_random_R_int(jcontext ctx, jobject self);
jobject M_arc_struct_IntSeq_toArray_R_Array1_int(jcontext ctx, jobject self);
jint M_arc_struct_IntSeq_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_IntSeq_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_struct_IntSeq_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_IntSeq_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
