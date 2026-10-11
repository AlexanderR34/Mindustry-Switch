#ifndef HEADER_arc_struct_TimSort
#define HEADER_arc_struct_TimSort

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_struct_TimSort {
	java_lang_Object parent;
	jref F_runBase;
	jref F_runLen;
	jref F_a;
	jref F_c;
	jint F_minGallop;
	jref F_tmp;
	jint F_tmpCount;
	jint F_stackSize;
} arc_struct_TimSort;

extern Class class_arc_struct_TimSort;

extern jint SF_arc_struct_TimSort_MIN_MERGE;
extern jint SF_arc_struct_TimSort_MIN_GALLOP;
extern jint SF_arc_struct_TimSort_INITIAL_TMP_STORAGE_LENGTH;
extern jbool SF_arc_struct_TimSort_DEBUG;

#define VTABLE_arc_struct_TimSort_hashCode_R_int 0
typedef jint (*func_arc_struct_TimSort_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_TimSort_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_struct_TimSort_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_struct_TimSort_clone_R_java_lang_Object 2
typedef jobject (*func_arc_struct_TimSort_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_TimSort_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_struct_TimSort_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_TimSort_toString_R_java_lang_String 4
typedef jobject (*func_arc_struct_TimSort_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_TimSort_finalize 5
typedef void (*func_arc_struct_TimSort_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_TimSort_notify 6
typedef void (*func_arc_struct_TimSort_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_TimSort_notifyAll 7
typedef void (*func_arc_struct_TimSort_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_TimSort_wait 8
typedef void (*func_arc_struct_TimSort_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_TimSort_wait_long 9
typedef void (*func_arc_struct_TimSort_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_struct_TimSort_wait_long_int 10
typedef void (*func_arc_struct_TimSort_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_struct_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int 11
typedef void (*func_arc_struct_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_arc_struct_TimSort_pushRun_int_int 12
typedef void (*func_arc_struct_TimSort_pushRun_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_struct_TimSort_mergeCollapse 13
typedef void (*func_arc_struct_TimSort_mergeCollapse)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_TimSort_mergeForceCollapse 14
typedef void (*func_arc_struct_TimSort_mergeForceCollapse)(jcontext ctx, jobject self);
#define VTABLE_arc_struct_TimSort_mergeAt_int 15
typedef void (*func_arc_struct_TimSort_mergeAt_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_struct_TimSort_mergeLo_int_int_int_int 16
typedef void (*func_arc_struct_TimSort_mergeLo_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_struct_TimSort_mergeHi_int_int_int_int 17
typedef void (*func_arc_struct_TimSort_mergeHi_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_struct_TimSort_ensureCapacity_int_R_Array1_java_lang_Object 18
typedef jobject (*func_arc_struct_TimSort_ensureCapacity_int_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jint param0);

void mark_arc_struct_TimSort(jobject object, jint mark, jint depth);
void clinit_arc_struct_TimSort(jcontext ctx);
void init_arc_struct_TimSort(jcontext ctx, jobject self);
void init_arc_struct_TimSort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_arc_struct_TimSort_sort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject param0, jobject param1);
void SM_arc_struct_TimSort_sort_Array1_java_lang_Object_int_int_java_util_Comparator(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
void SM_arc_struct_TimSort_binarySort_Array1_java_lang_Object_int_int_int_java_util_Comparator(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4);
jint SM_arc_struct_TimSort_countRunAndMakeAscending_Array1_java_lang_Object_int_int_java_util_Comparator_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
void SM_arc_struct_TimSort_reverseRange_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_arc_struct_TimSort_minRunLength_int_R_int(jcontext ctx, jint param0);
jint SM_arc_struct_TimSort_gallopLeft_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5);
jint SM_arc_struct_TimSort_gallopRight_java_lang_Object_Array1_java_lang_Object_int_int_int_java_util_Comparator_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5);
void SM_arc_struct_TimSort_rangeCheck_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
void M_arc_struct_TimSort_doSort_Array1_java_lang_Object_java_util_Comparator_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_arc_struct_TimSort_pushRun_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_struct_TimSort_mergeCollapse(jcontext ctx, jobject self);
void M_arc_struct_TimSort_mergeForceCollapse(jcontext ctx, jobject self);
void M_arc_struct_TimSort_mergeAt_int(jcontext ctx, jobject self, jint param0);
void M_arc_struct_TimSort_mergeLo_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_struct_TimSort_mergeHi_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject M_arc_struct_TimSort_ensureCapacity_int_R_Array1_java_lang_Object(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
