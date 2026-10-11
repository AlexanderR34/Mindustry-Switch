#ifndef HEADER_arc_math_WindowedMean
#define HEADER_arc_math_WindowedMean

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_WindowedMean {
	java_lang_Object parent;
	jref F_values;
	jint F_addedValues;
	jint F_lastValue;
	jfloat F_mean;
	jbool F_dirty;
} arc_math_WindowedMean;

extern Class class_arc_math_WindowedMean;


#define VTABLE_arc_math_WindowedMean_hashCode_R_int 0
typedef jint (*func_arc_math_WindowedMean_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_WindowedMean_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_WindowedMean_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_WindowedMean_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_WindowedMean_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_WindowedMean_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_finalize 5
typedef void (*func_arc_math_WindowedMean_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_notify 6
typedef void (*func_arc_math_WindowedMean_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_notifyAll 7
typedef void (*func_arc_math_WindowedMean_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_wait 8
typedef void (*func_arc_math_WindowedMean_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_wait_long 9
typedef void (*func_arc_math_WindowedMean_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_WindowedMean_wait_long_int 10
typedef void (*func_arc_math_WindowedMean_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_WindowedMean_reset 11
typedef void (*func_arc_math_WindowedMean_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_get_int_R_float 12
typedef jfloat (*func_arc_math_WindowedMean_get_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_math_WindowedMean_hasEnoughData_R_boolean 13
typedef jbool (*func_arc_math_WindowedMean_hasEnoughData_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_clear 14
typedef void (*func_arc_math_WindowedMean_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_fill_float 15
typedef void (*func_arc_math_WindowedMean_fill_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_WindowedMean_add_float 16
typedef void (*func_arc_math_WindowedMean_add_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_WindowedMean_mean_R_float 17
typedef jfloat (*func_arc_math_WindowedMean_mean_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_rawMean_R_float 18
typedef jfloat (*func_arc_math_WindowedMean_rawMean_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_oldest_R_float 19
typedef jfloat (*func_arc_math_WindowedMean_oldest_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_latest_R_float 20
typedef jfloat (*func_arc_math_WindowedMean_latest_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_standardDeviation_R_float 21
typedef jfloat (*func_arc_math_WindowedMean_standardDeviation_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_lowest_R_float 22
typedef jfloat (*func_arc_math_WindowedMean_lowest_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_highest_R_float 23
typedef jfloat (*func_arc_math_WindowedMean_highest_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_getCount_R_int 24
typedef jint (*func_arc_math_WindowedMean_getCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_getWindowSize_R_int 25
typedef jint (*func_arc_math_WindowedMean_getWindowSize_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_WindowedMean_getWindowValues_R_Array1_float 26
typedef jobject (*func_arc_math_WindowedMean_getWindowValues_R_Array1_float)(jcontext ctx, jobject self);

void mark_arc_math_WindowedMean(jobject object, jint mark, jint depth);
void clinit_arc_math_WindowedMean(jcontext ctx);
void init_arc_math_WindowedMean_int(jcontext ctx, jobject self, jint param0);
void M_arc_math_WindowedMean_reset(jcontext ctx, jobject self);
jfloat M_arc_math_WindowedMean_get_int_R_float(jcontext ctx, jobject self, jint param0);
jbool M_arc_math_WindowedMean_hasEnoughData_R_boolean(jcontext ctx, jobject self);
void M_arc_math_WindowedMean_clear(jcontext ctx, jobject self);
void M_arc_math_WindowedMean_fill_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_math_WindowedMean_add_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_math_WindowedMean_mean_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_WindowedMean_rawMean_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_WindowedMean_oldest_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_WindowedMean_latest_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_WindowedMean_standardDeviation_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_WindowedMean_lowest_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_WindowedMean_highest_R_float(jcontext ctx, jobject self);
jint M_arc_math_WindowedMean_getCount_R_int(jcontext ctx, jobject self);
jint M_arc_math_WindowedMean_getWindowSize_R_int(jcontext ctx, jobject self);
jobject M_arc_math_WindowedMean_getWindowValues_R_Array1_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
