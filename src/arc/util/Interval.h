#ifndef HEADER_arc_util_Interval
#define HEADER_arc_util_Interval

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Interval {
	java_lang_Object parent;
	jref F_times;
} arc_util_Interval;

extern Class class_arc_util_Interval;


#define VTABLE_arc_util_Interval_hashCode_R_int 0
typedef jint (*func_arc_util_Interval_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Interval_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Interval_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Interval_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Interval_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Interval_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Interval_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Interval_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Interval_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Interval_finalize 5
typedef void (*func_arc_util_Interval_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Interval_notify 6
typedef void (*func_arc_util_Interval_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Interval_notifyAll 7
typedef void (*func_arc_util_Interval_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Interval_wait 8
typedef void (*func_arc_util_Interval_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Interval_wait_long 9
typedef void (*func_arc_util_Interval_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Interval_wait_long_int 10
typedef void (*func_arc_util_Interval_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Interval_get_float_R_boolean 11
typedef jbool (*func_arc_util_Interval_get_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_util_Interval_get_int_float_R_boolean 12
typedef jbool (*func_arc_util_Interval_get_int_float_R_boolean)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_util_Interval_check_int_float_R_boolean 13
typedef jbool (*func_arc_util_Interval_check_int_float_R_boolean)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_util_Interval_reset_int_float 14
typedef void (*func_arc_util_Interval_reset_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_arc_util_Interval_clear 15
typedef void (*func_arc_util_Interval_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Interval_getTime_int_R_float 16
typedef jfloat (*func_arc_util_Interval_getTime_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_Interval_getTimes_R_Array1_float 17
typedef jobject (*func_arc_util_Interval_getTimes_R_Array1_float)(jcontext ctx, jobject self);

void mark_arc_util_Interval(jobject object, jint mark, jint depth);
void clinit_arc_util_Interval(jcontext ctx);
void init_arc_util_Interval_int(jcontext ctx, jobject self, jint param0);
void init_arc_util_Interval(jcontext ctx, jobject self);
jbool M_arc_util_Interval_get_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_util_Interval_get_int_float_R_boolean(jcontext ctx, jobject self, jint param0, jfloat param1);
jbool M_arc_util_Interval_check_int_float_R_boolean(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_arc_util_Interval_reset_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_arc_util_Interval_clear(jcontext ctx, jobject self);
jfloat M_arc_util_Interval_getTime_int_R_float(jcontext ctx, jobject self, jint param0);
jobject M_arc_util_Interval_getTimes_R_Array1_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
