#ifndef HEADER_arc_util_Structs
#define HEADER_arc_util_Structs

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Structs {
	java_lang_Object parent;
} arc_util_Structs;

extern Class class_arc_util_Structs;


#define VTABLE_arc_util_Structs_hashCode_R_int 0
typedef jint (*func_arc_util_Structs_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Structs_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Structs_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Structs_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Structs_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Structs_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Structs_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Structs_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Structs_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Structs_finalize 5
typedef void (*func_arc_util_Structs_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Structs_notify 6
typedef void (*func_arc_util_Structs_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Structs_notifyAll 7
typedef void (*func_arc_util_Structs_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Structs_wait 8
typedef void (*func_arc_util_Structs_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Structs_wait_long 9
typedef void (*func_arc_util_Structs_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Structs_wait_long_int 10
typedef void (*func_arc_util_Structs_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_Structs(jobject object, jint mark, jint depth);
void clinit_arc_util_Structs(jcontext ctx);
void init_arc_util_Structs(jcontext ctx, jobject self);
jbool SM_arc_util_Structs_eq_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Structs_arr_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject param0);
void SM_arc_util_Structs_filter_java_lang_Iterable_arc_func_Boolf(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_Structs_filter_java_util_Iterator_arc_func_Boolf(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Structs_random_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0);
jobject SM_arc_util_Structs_random_arc_math_Rand_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jint SM_arc_util_Structs_count_Array1_java_lang_Object_arc_func_Boolf_R_int(jcontext ctx, jobject param0, jobject param1);
jbool SM_arc_util_Structs_contains_Array1_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Structs_find_Array1_java_lang_Object_arc_func_Boolf_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jint SM_arc_util_Structs_indexOf_java_lang_Iterable_arc_func_Boolf_R_int(jcontext ctx, jobject param0, jobject param1);
jint SM_arc_util_Structs_indexOf_Array1_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1);
jint SM_arc_util_Structs_indexOf_Array1_java_lang_Object_arc_func_Boolf_R_int(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Structs_remove_Array1_java_lang_Object_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Structs_remove_Array1_java_lang_Object_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1);
jobject SM_arc_util_Structs_add_Array1_java_lang_Object_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_Structs_swap_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_arc_util_Structs_filter_java_lang_Class_Array1_java_lang_Object_arc_func_Boolf_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_arc_util_Structs_comps_java_util_Comparator_java_util_Comparator_R_java_util_Comparator(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Structs_comparing_arc_func_Func_java_util_Comparator_R_java_util_Comparator(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Structs_comparing_arc_func_Func_R_java_util_Comparator(jcontext ctx, jobject param0);
jobject SM_arc_util_Structs_comparingFloat_arc_func_Floatf_R_java_util_Comparator(jcontext ctx, jobject param0);
jobject SM_arc_util_Structs_comparingInt_arc_func_Intf_R_java_util_Comparator(jcontext ctx, jobject param0);
jobject SM_arc_util_Structs_comparingLong_arc_func_Longf_R_java_util_Comparator(jcontext ctx, jobject param0);
jobject SM_arc_util_Structs_comparingBool_arc_func_Boolf_R_java_util_Comparator(jcontext ctx, jobject param0);
void SM_arc_util_Structs_each_arc_func_Cons_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_Structs_forEach_java_lang_Iterable_arc_func_Cons(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Structs_findMin_Array1_java_lang_Object_java_util_Comparator_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Structs_findMin_Array1_java_lang_Object_arc_func_Floatf_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Structs_findMin_java_lang_Iterable_java_util_Comparator_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Structs_findMin_java_lang_Iterable_arc_func_Boolf_java_util_Comparator_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_arc_util_Structs_inBounds_int_int_Array2_java_lang_Object_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2);
jbool SM_arc_util_Structs_inBounds_int_int_Array2_int_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2);
jbool SM_arc_util_Structs_inBounds_int_int_Array2_float_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2);
jbool SM_arc_util_Structs_inBounds_int_int_Array2_boolean_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2);
jbool SM_arc_util_Structs_inBounds_int_int_int_Array3_java_lang_Object_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jobject param3);
jbool SM_arc_util_Structs_inBounds_int_int_int_Array3_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jobject param3);
jbool SM_arc_util_Structs_inBounds_int_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4);
jbool SM_arc_util_Structs_inBounds_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jint SM_arc_util_Structs_lambda$comparingBool$0_arc_func_Boolf_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
jint SM_arc_util_Structs_lambda$comparingLong$0_arc_func_Longf_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
jint SM_arc_util_Structs_lambda$comparingInt$0_arc_func_Intf_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
jint SM_arc_util_Structs_lambda$comparingFloat$0_arc_func_Floatf_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
jint SM_arc_util_Structs_lambda$comparing$1_arc_func_Func_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
jint SM_arc_util_Structs_lambda$comparing$0_java_util_Comparator_arc_func_Func_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jint SM_arc_util_Structs_lambda$comps$0_java_util_Comparator_java_util_Comparator_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);

#ifdef __cplusplus
}
#endif

#endif
