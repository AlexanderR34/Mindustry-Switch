#ifndef HEADER_arc_struct_Sort
#define HEADER_arc_struct_Sort

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_Sort {
	java_lang_Object parent;
	jref F_timSort;
	jref F_comparableTimSort;
} arc_struct_Sort;

extern Class class_arc_struct_Sort;

extern jobject SF_arc_struct_Sort_instance;

#define VTABLE_arc_struct_Sort_hashCode_R_int 0
typedef jint (*func_arc_struct_Sort_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Sort_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_Sort_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Sort_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_Sort_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Sort_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_Sort_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Sort_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_Sort_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Sort_finalize 5
typedef void (*func_arc_struct_Sort_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Sort_notify 6
typedef void (*func_arc_struct_Sort_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Sort_notifyAll 7
typedef void (*func_arc_struct_Sort_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Sort_wait 8
typedef void (*func_arc_struct_Sort_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_Sort_wait_long 9
typedef void (*func_arc_struct_Sort_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_Sort_wait_long_int 10
typedef void (*func_arc_struct_Sort_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_Sort_sort_arc_struct_Seq 11
typedef void (*func_arc_struct_Sort_sort_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Sort_sort_Array1_java_lang_Object 12
typedef void (*func_arc_struct_Sort_sort_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_Sort_sort_Array1_java_lang_Object_int_int 13
typedef void (*func_arc_struct_Sort_sort_Array1_java_lang_Object_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_Sort_sort_arc_struct_Seq_java_util_Comparator 14
typedef void (*func_arc_struct_Sort_sort_arc_struct_Seq_java_util_Comparator)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator 15
typedef void (*func_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int 16
typedef void (*func_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);

void mark_arc_struct_Sort(jobject object, jint mark, jint depth);
void clinit_arc_struct_Sort(jcontext ctx);
void init_arc_struct_Sort(jcontext ctx, jobject self);
jobject SM_arc_struct_Sort_instance_R_arc_struct_Sort(jcontext ctx);
void M_arc_struct_Sort_sort_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_Sort_sort_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_arc_struct_Sort_sort_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_struct_Sort_sort_arc_struct_Seq_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_struct_Sort_sort_Array1_java_lang_Object_java_util_Comparator_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
