#ifndef HEADER_arc_struct_FloatSeq
#define HEADER_arc_struct_FloatSeq

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_FloatSeq {
	java_lang_Object parent;
	jref F_items;
	jint F_size;
	jbool F_ordered;
} arc_struct_FloatSeq;

extern Class class_arc_struct_FloatSeq;


#define VTABLE_arc_struct_FloatSeq_hashCode_R_int 0
typedef jint (*func_arc_struct_FloatSeq_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_FloatSeq_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_FloatSeq_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_FloatSeq_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_FloatSeq_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_FloatSeq_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_finalize 5
typedef void (*func_arc_struct_FloatSeq_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_notify 6
typedef void (*func_arc_struct_FloatSeq_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_notifyAll 7
typedef void (*func_arc_struct_FloatSeq_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_wait 8
typedef void (*func_arc_struct_FloatSeq_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_wait_long 9
typedef void (*func_arc_struct_FloatSeq_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_FloatSeq_wait_long_int 10
typedef void (*func_arc_struct_FloatSeq_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_FloatSeq_toVec2Array_R_arc_struct_Seq 11
typedef jobject (*func_arc_struct_FloatSeq_toVec2Array_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_add_float 12
typedef void (*func_arc_struct_FloatSeq_add_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_struct_FloatSeq_add_float_float 13
typedef void (*func_arc_struct_FloatSeq_add_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_struct_FloatSeq_add_float_float_float 14
typedef void (*func_arc_struct_FloatSeq_add_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_struct_FloatSeq_add_float_float_float_float 15
typedef void (*func_arc_struct_FloatSeq_add_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq 16
typedef void (*func_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq_int_int 17
typedef void (*func_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_FloatSeq_addAll_Array1_float 18
typedef void (*func_arc_struct_FloatSeq_addAll_Array1_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_FloatSeq_addAll_Array1_float_int_int 19
typedef void (*func_arc_struct_FloatSeq_addAll_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_FloatSeq_get_int_R_float 20
typedef jfloat (*func_arc_struct_FloatSeq_get_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_FloatSeq_set_int_float 21
typedef void (*func_arc_struct_FloatSeq_set_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_struct_FloatSeq_incr_int_float 22
typedef void (*func_arc_struct_FloatSeq_incr_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_struct_FloatSeq_mul_int_float 23
typedef void (*func_arc_struct_FloatSeq_mul_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_struct_FloatSeq_insert_int_float 24
typedef void (*func_arc_struct_FloatSeq_insert_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_struct_FloatSeq_swap_int_int 25
typedef void (*func_arc_struct_FloatSeq_swap_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_FloatSeq_contains_float_R_boolean 26
typedef jbool (*func_arc_struct_FloatSeq_contains_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_struct_FloatSeq_indexOf_float_R_int 27
typedef jint (*func_arc_struct_FloatSeq_indexOf_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_struct_FloatSeq_lastIndexOf_float_R_int 28
typedef jint (*func_arc_struct_FloatSeq_lastIndexOf_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_struct_FloatSeq_removeValue_float_R_boolean 29
typedef jbool (*func_arc_struct_FloatSeq_removeValue_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_struct_FloatSeq_removeIndex_int_R_float 30
typedef jfloat (*func_arc_struct_FloatSeq_removeIndex_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_FloatSeq_removeRange_int_int 31
typedef void (*func_arc_struct_FloatSeq_removeRange_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_FloatSeq_removeAll_arc_struct_FloatSeq_R_boolean 32
typedef jbool (*func_arc_struct_FloatSeq_removeAll_arc_struct_FloatSeq_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_FloatSeq_pop_R_float 33
typedef jfloat (*func_arc_struct_FloatSeq_pop_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_peek_R_float 34
typedef jfloat (*func_arc_struct_FloatSeq_peek_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_first_R_float 35
typedef jfloat (*func_arc_struct_FloatSeq_first_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_isEmpty_R_boolean 36
typedef jbool (*func_arc_struct_FloatSeq_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_clear 37
typedef void (*func_arc_struct_FloatSeq_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_sum_R_float 38
typedef jfloat (*func_arc_struct_FloatSeq_sum_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_shrink_R_Array1_float 39
typedef jobject (*func_arc_struct_FloatSeq_shrink_R_Array1_float)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_ensureCapacity_int_R_Array1_float 40
typedef jobject (*func_arc_struct_FloatSeq_ensureCapacity_int_R_Array1_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_FloatSeq_setSize_int_R_Array1_float 41
typedef jobject (*func_arc_struct_FloatSeq_setSize_int_R_Array1_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_FloatSeq_resize_int_R_Array1_float 42
typedef jobject (*func_arc_struct_FloatSeq_resize_int_R_Array1_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_FloatSeq_sort 43
typedef void (*func_arc_struct_FloatSeq_sort)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_reverse 44
typedef void (*func_arc_struct_FloatSeq_reverse)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_shuffle 45
typedef void (*func_arc_struct_FloatSeq_shuffle)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_truncate_int 46
typedef void (*func_arc_struct_FloatSeq_truncate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_FloatSeq_random_R_float 47
typedef jfloat (*func_arc_struct_FloatSeq_random_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_toArray_R_Array1_float 48
typedef jobject (*func_arc_struct_FloatSeq_toArray_R_Array1_float)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_FloatSeq_equals_java_lang_Object_float_R_boolean 49
typedef jbool (*func_arc_struct_FloatSeq_equals_java_lang_Object_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_struct_FloatSeq_toString_java_lang_String_R_java_lang_String 50
typedef jobject (*func_arc_struct_FloatSeq_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_arc_struct_FloatSeq(jobject object, jint mark, jint depth);
void clinit_arc_struct_FloatSeq(jcontext ctx);
void init_arc_struct_FloatSeq(jcontext ctx, jobject self);
void init_arc_struct_FloatSeq_int(jcontext ctx, jobject self, jint param0);
void init_arc_struct_FloatSeq_boolean_int(jcontext ctx, jobject self, jbool param0, jint param1);
void init_arc_struct_FloatSeq_arc_struct_FloatSeq(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_FloatSeq_Array1_float(jcontext ctx, jobject self, jobject param0);
void init_arc_struct_FloatSeq_boolean_Array1_float_int_int(jcontext ctx, jobject self, jbool param0, jobject param1, jint param2, jint param3);
jobject SM_arc_struct_FloatSeq_with_Array1_float_R_arc_struct_FloatSeq(jcontext ctx, jobject param0);
jobject M_arc_struct_FloatSeq_toVec2Array_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_arc_struct_FloatSeq_add_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_struct_FloatSeq_add_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_struct_FloatSeq_add_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void M_arc_struct_FloatSeq_add_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_struct_FloatSeq_addAll_Array1_float(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_FloatSeq_addAll_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jfloat M_arc_struct_FloatSeq_get_int_R_float(jcontext ctx, jobject self, jint param0);
void M_arc_struct_FloatSeq_set_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_arc_struct_FloatSeq_incr_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_arc_struct_FloatSeq_mul_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_arc_struct_FloatSeq_insert_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_arc_struct_FloatSeq_swap_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_struct_FloatSeq_contains_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jint M_arc_struct_FloatSeq_indexOf_float_R_int(jcontext ctx, jobject self, jfloat param0);
jint M_arc_struct_FloatSeq_lastIndexOf_float_R_int(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_struct_FloatSeq_removeValue_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_struct_FloatSeq_removeIndex_int_R_float(jcontext ctx, jobject self, jint param0);
void M_arc_struct_FloatSeq_removeRange_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_struct_FloatSeq_removeAll_arc_struct_FloatSeq_R_boolean(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_struct_FloatSeq_pop_R_float(jcontext ctx, jobject self);
jfloat M_arc_struct_FloatSeq_peek_R_float(jcontext ctx, jobject self);
jfloat M_arc_struct_FloatSeq_first_R_float(jcontext ctx, jobject self);
jbool M_arc_struct_FloatSeq_isEmpty_R_boolean(jcontext ctx, jobject self);
void M_arc_struct_FloatSeq_clear(jcontext ctx, jobject self);
jfloat M_arc_struct_FloatSeq_sum_R_float(jcontext ctx, jobject self);
jobject M_arc_struct_FloatSeq_shrink_R_Array1_float(jcontext ctx, jobject self);
jobject M_arc_struct_FloatSeq_ensureCapacity_int_R_Array1_float(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_FloatSeq_setSize_int_R_Array1_float(jcontext ctx, jobject self, jint param0);
jobject M_arc_struct_FloatSeq_resize_int_R_Array1_float(jcontext ctx, jobject self, jint param0);
void M_arc_struct_FloatSeq_sort(jcontext ctx, jobject self);
void M_arc_struct_FloatSeq_reverse(jcontext ctx, jobject self);
void M_arc_struct_FloatSeq_shuffle(jcontext ctx, jobject self);
void M_arc_struct_FloatSeq_truncate_int(jcontext ctx, jobject self, jint param0);
jfloat M_arc_struct_FloatSeq_random_R_float(jcontext ctx, jobject self);
jobject M_arc_struct_FloatSeq_toArray_R_Array1_float(jcontext ctx, jobject self);
jint M_arc_struct_FloatSeq_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_struct_FloatSeq_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_struct_FloatSeq_equals_java_lang_Object_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_struct_FloatSeq_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_struct_FloatSeq_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
