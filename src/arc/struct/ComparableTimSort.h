#ifndef HEADER_arc_struct_ComparableTimSort
#define HEADER_arc_struct_ComparableTimSort

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_ComparableTimSort {
	java_lang_Object parent;
	jref F_runBase;
	jref F_runLen;
	jref F_a;
	jint F_minGallop;
	jref F_tmp;
	jint F_tmpCount;
	jint F_stackSize;
} arc_struct_ComparableTimSort;

extern Class class_arc_struct_ComparableTimSort;

extern jint SF_arc_struct_ComparableTimSort_MIN_MERGE;
extern jint SF_arc_struct_ComparableTimSort_MIN_GALLOP;
extern jint SF_arc_struct_ComparableTimSort_INITIAL_TMP_STORAGE_LENGTH;
extern jbool SF_arc_struct_ComparableTimSort_DEBUG;

#define VTABLE_arc_struct_ComparableTimSort_hashCode_R_int 0
typedef jint (*func_arc_struct_ComparableTimSort_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ComparableTimSort_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_ComparableTimSort_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_ComparableTimSort_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_ComparableTimSort_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ComparableTimSort_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_ComparableTimSort_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ComparableTimSort_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_ComparableTimSort_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ComparableTimSort_finalize 5
typedef void (*func_arc_struct_ComparableTimSort_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ComparableTimSort_notify 6
typedef void (*func_arc_struct_ComparableTimSort_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ComparableTimSort_notifyAll 7
typedef void (*func_arc_struct_ComparableTimSort_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ComparableTimSort_wait 8
typedef void (*func_arc_struct_ComparableTimSort_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ComparableTimSort_wait_long 9
typedef void (*func_arc_struct_ComparableTimSort_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_ComparableTimSort_wait_long_int 10
typedef void (*func_arc_struct_ComparableTimSort_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_ComparableTimSort_doSort_Array1_java_lang_Object_int_int 11
typedef void (*func_arc_struct_ComparableTimSort_doSort_Array1_java_lang_Object_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_struct_ComparableTimSort_pushRun_int_int 12
typedef void (*func_arc_struct_ComparableTimSort_pushRun_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_ComparableTimSort_mergeCollapse 13
typedef void (*func_arc_struct_ComparableTimSort_mergeCollapse)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ComparableTimSort_mergeForceCollapse 14
typedef void (*func_arc_struct_ComparableTimSort_mergeForceCollapse)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_ComparableTimSort_mergeAt_int 15
typedef void (*func_arc_struct_ComparableTimSort_mergeAt_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_ComparableTimSort_mergeLo_int_int_int_int 16
typedef void (*func_arc_struct_ComparableTimSort_mergeLo_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_struct_ComparableTimSort_mergeHi_int_int_int_int 17
typedef void (*func_arc_struct_ComparableTimSort_mergeHi_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_struct_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object 18
typedef jobject (*func_arc_struct_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);

void mark_arc_struct_ComparableTimSort(jobject object, jint mark, jint depth);
void clinit_arc_struct_ComparableTimSort(jcontext ctx);
void init_arc_struct_ComparableTimSort(jcontext ctx, jobject self);
void init_arc_struct_ComparableTimSort_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void SM_arc_struct_ComparableTimSort_sort_Array1_java_lang_Object(jcontext ctx, jobject param0);
void SM_arc_struct_ComparableTimSort_sort_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_arc_struct_ComparableTimSort_binarySort_Array1_java_lang_Object_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jint SM_arc_struct_ComparableTimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_arc_struct_ComparableTimSort_reverseRange_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_arc_struct_ComparableTimSort_minRunLength_int_R_int(jcontext ctx, jint param0);
jint SM_arc_struct_ComparableTimSort_gallopLeft_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4);
jint SM_arc_struct_ComparableTimSort_gallopRight_java_lang_Comparable_Array1_java_lang_Object_int_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4);
void SM_arc_struct_ComparableTimSort_rangeCheck_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
void M_arc_struct_ComparableTimSort_doSort_Array1_java_lang_Object_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_struct_ComparableTimSort_pushRun_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_struct_ComparableTimSort_mergeCollapse(jcontext ctx, jobject self);
void M_arc_struct_ComparableTimSort_mergeForceCollapse(jcontext ctx, jobject self);
void M_arc_struct_ComparableTimSort_mergeAt_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_ComparableTimSort_mergeLo_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_struct_ComparableTimSort_mergeHi_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject M_arc_struct_ComparableTimSort_ensureCapacity_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
