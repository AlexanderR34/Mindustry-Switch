#ifndef HEADER_rhino_Sorting
#define HEADER_rhino_Sorting

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Sorting {
	java_lang_Object parent;
} rhino_Sorting;

extern Class class_rhino_Sorting;

extern jint SF_rhino_Sorting_SMALLSORT;
extern jobject SF_rhino_Sorting_sorting;

#define VTABLE_rhino_Sorting_hashCode_R_int 0
typedef jint (*func_rhino_Sorting_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Sorting_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Sorting_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Sorting_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Sorting_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Sorting_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Sorting_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Sorting_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Sorting_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Sorting_finalize 5
typedef void (*func_rhino_Sorting_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Sorting_notify 6
typedef void (*func_rhino_Sorting_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Sorting_notifyAll 7
typedef void (*func_rhino_Sorting_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Sorting_wait 8
typedef void (*func_rhino_Sorting_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Sorting_wait_long 9
typedef void (*func_rhino_Sorting_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Sorting_wait_long_int 10
typedef void (*func_rhino_Sorting_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_Sorting_insertionSort_Array1_java_lang_Object_java_util_Comparator 11
typedef void (*func_rhino_Sorting_insertionSort_Array1_java_lang_Object_java_util_Comparator)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Sorting_insertionSort_Array1_java_lang_Object_int_int_java_util_Comparator 12
typedef void (*func_rhino_Sorting_insertionSort_Array1_java_lang_Object_int_int_java_util_Comparator)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
#define VTABLE_rhino_Sorting_hybridSort_Array1_java_lang_Object_java_util_Comparator 13
typedef void (*func_rhino_Sorting_hybridSort_Array1_java_lang_Object_java_util_Comparator)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Sorting_hybridSort_Array1_java_lang_Object_int_int_java_util_Comparator_int 14
typedef void (*func_rhino_Sorting_hybridSort_Array1_java_lang_Object_int_int_java_util_Comparator_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4);
#define VTABLE_rhino_Sorting_partition_Array1_java_lang_Object_int_int_java_util_Comparator_R_int 15
typedef jint (*func_rhino_Sorting_partition_Array1_java_lang_Object_int_int_java_util_Comparator_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
#define VTABLE_rhino_Sorting_swap_Array1_java_lang_Object_int_int 16
typedef void (*func_rhino_Sorting_swap_Array1_java_lang_Object_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_rhino_Sorting_log2_int_R_int 17
typedef jint (*func_rhino_Sorting_log2_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_Sorting_median_Array1_java_lang_Object_int_int_java_util_Comparator_R_int 18
typedef jint (*func_rhino_Sorting_median_Array1_java_lang_Object_int_int_java_util_Comparator_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);

void mark_rhino_Sorting(jobject object, jint mark, jint depth);
void clinit_rhino_Sorting(jcontext ctx);
void init_rhino_Sorting(jcontext ctx, jobject self);
jobject SM_rhino_Sorting_get_R_rhino_Sorting(jcontext ctx);
void M_rhino_Sorting_insertionSort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_Sorting_insertionSort_Array1_java_lang_Object_int_int_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
void M_rhino_Sorting_hybridSort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_Sorting_hybridSort_Array1_java_lang_Object_int_int_java_util_Comparator_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4);
jint M_rhino_Sorting_partition_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
void M_rhino_Sorting_swap_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_rhino_Sorting_log2_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_rhino_Sorting_median_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);

#ifdef __cplusplus
}
#endif

#endif
