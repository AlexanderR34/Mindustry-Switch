#ifndef HEADER_arc_math_Extrapolator
#define HEADER_arc_math_Extrapolator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_Extrapolator {
	java_lang_Object parent;
	jref F_snapPos;
	jref F_snapVel;
	jref F_aimPos;
	jref F_lastPacketPos;
	jref F_tmpArr;
	jref F_tmpArr2;
	jdouble F_snapTime;
	jdouble F_aimTime;
	jdouble F_lastPacketTime;
	jdouble F_latency;
	jdouble F_updateTime;
	jint F_size;
} arc_math_Extrapolator;

extern Class class_arc_math_Extrapolator;


#define VTABLE_arc_math_Extrapolator_hashCode_R_int 0
typedef jint (*func_arc_math_Extrapolator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Extrapolator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_Extrapolator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Extrapolator_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_Extrapolator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Extrapolator_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_Extrapolator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Extrapolator_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_Extrapolator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Extrapolator_finalize 5
typedef void (*func_arc_math_Extrapolator_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Extrapolator_notify 6
typedef void (*func_arc_math_Extrapolator_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Extrapolator_notifyAll 7
typedef void (*func_arc_math_Extrapolator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Extrapolator_wait 8
typedef void (*func_arc_math_Extrapolator_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Extrapolator_wait_long 9
typedef void (*func_arc_math_Extrapolator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_Extrapolator_wait_long_int 10
typedef void (*func_arc_math_Extrapolator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_Extrapolator_addSample_double_double_Array1_float_R_boolean 11
typedef jbool (*func_arc_math_Extrapolator_addSample_double_double_Array1_float_R_boolean)(jcontext ctx, jobject self, jdouble param0, jdouble param1, jobject param2);
#define VTABLE_arc_math_Extrapolator_addSample_double_double_Array1_float_Array1_float_R_boolean 12
typedef jbool (*func_arc_math_Extrapolator_addSample_double_double_Array1_float_Array1_float_R_boolean)(jcontext ctx, jobject self, jdouble param0, jdouble param1, jobject param2, jobject param3);
#define VTABLE_arc_math_Extrapolator_addSample_double_double_float_R_boolean 13
typedef jbool (*func_arc_math_Extrapolator_addSample_double_double_float_R_boolean)(jcontext ctx, jobject self, jdouble param0, jdouble param1, jfloat param2);
#define VTABLE_arc_math_Extrapolator_addSample_double_double_float_float_R_boolean 14
typedef jbool (*func_arc_math_Extrapolator_addSample_double_double_float_float_R_boolean)(jcontext ctx, jobject self, jdouble param0, jdouble param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_Extrapolator_reset_double_double_Array1_float 15
typedef void (*func_arc_math_Extrapolator_reset_double_double_Array1_float)(jcontext ctx, jobject self, jdouble param0, jdouble param1, jobject param2);
#define VTABLE_arc_math_Extrapolator_reset_double_double_Array1_float_Array1_float 16
typedef void (*func_arc_math_Extrapolator_reset_double_double_Array1_float_Array1_float)(jcontext ctx, jobject self, jdouble param0, jdouble param1, jobject param2, jobject param3);
#define VTABLE_arc_math_Extrapolator_reset_double_double_float 17
typedef void (*func_arc_math_Extrapolator_reset_double_double_float)(jcontext ctx, jobject self, jdouble param0, jdouble param1, jfloat param2);
#define VTABLE_arc_math_Extrapolator_reset_double_double_float_float 18
typedef void (*func_arc_math_Extrapolator_reset_double_double_float_float)(jcontext ctx, jobject self, jdouble param0, jdouble param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_Extrapolator_readPosition_double_Array1_float_R_boolean 19
typedef jbool (*func_arc_math_Extrapolator_readPosition_double_Array1_float_R_boolean)(jcontext ctx, jobject self, jdouble param0, jobject param1);
#define VTABLE_arc_math_Extrapolator_readPosition_double_Array1_float_Array1_float_R_boolean 20
typedef jbool (*func_arc_math_Extrapolator_readPosition_double_Array1_float_Array1_float_R_boolean)(jcontext ctx, jobject self, jdouble param0, jobject param1, jobject param2);
#define VTABLE_arc_math_Extrapolator_readPosition_double_R_float 21
typedef jfloat (*func_arc_math_Extrapolator_readPosition_double_R_float)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_arc_math_Extrapolator_estimateLatency_R_double 22
typedef jdouble (*func_arc_math_Extrapolator_estimateLatency_R_double)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Extrapolator_estimateUpdateTime_R_double 23
typedef jdouble (*func_arc_math_Extrapolator_estimateUpdateTime_R_double)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Extrapolator_estimates_double_double_R_boolean 24
typedef jbool (*func_arc_math_Extrapolator_estimates_double_double_R_boolean)(jcontext ctx, jobject self, jdouble param0, jdouble param1);
#define VTABLE_arc_math_Extrapolator_clear_Array1_float_R_Array1_float 25
typedef jobject (*func_arc_math_Extrapolator_clear_Array1_float_R_Array1_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Extrapolator_copyArray_Array1_float_Array1_float 26
typedef void (*func_arc_math_Extrapolator_copyArray_Array1_float_Array1_float)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_Extrapolator_checkArraySizeOne 27
typedef void (*func_arc_math_Extrapolator_checkArraySizeOne)(jcontext ctx, jobject self);

void mark_arc_math_Extrapolator(jobject object, jint mark, jint depth);
void clinit_arc_math_Extrapolator(jcontext ctx);
void init_arc_math_Extrapolator_int(jcontext ctx, jobject self, jint param0);
jbool M_arc_math_Extrapolator_addSample_double_double_Array1_float_R_boolean(jcontext ctx, jobject self, jdouble param0, jdouble param1, jobject param2);
jbool M_arc_math_Extrapolator_addSample_double_double_Array1_float_Array1_float_R_boolean(jcontext ctx, jobject self, jdouble param0, jdouble param1, jobject param2, jobject param3);
jbool M_arc_math_Extrapolator_addSample_double_double_float_R_boolean(jcontext ctx, jobject self, jdouble param0, jdouble param1, jfloat param2);
jbool M_arc_math_Extrapolator_addSample_double_double_float_float_R_boolean(jcontext ctx, jobject self, jdouble param0, jdouble param1, jfloat param2, jfloat param3);
void M_arc_math_Extrapolator_reset_double_double_Array1_float(jcontext ctx, jobject self, jdouble param0, jdouble param1, jobject param2);
void M_arc_math_Extrapolator_reset_double_double_Array1_float_Array1_float(jcontext ctx, jobject self, jdouble param0, jdouble param1, jobject param2, jobject param3);
void M_arc_math_Extrapolator_reset_double_double_float(jcontext ctx, jobject self, jdouble param0, jdouble param1, jfloat param2);
void M_arc_math_Extrapolator_reset_double_double_float_float(jcontext ctx, jobject self, jdouble param0, jdouble param1, jfloat param2, jfloat param3);
jbool M_arc_math_Extrapolator_readPosition_double_Array1_float_R_boolean(jcontext ctx, jobject self, jdouble param0, jobject param1);
jbool M_arc_math_Extrapolator_readPosition_double_Array1_float_Array1_float_R_boolean(jcontext ctx, jobject self, jdouble param0, jobject param1, jobject param2);
jfloat M_arc_math_Extrapolator_readPosition_double_R_float(jcontext ctx, jobject self, jdouble param0);
jdouble M_arc_math_Extrapolator_estimateLatency_R_double(jcontext ctx, jobject self);
jdouble M_arc_math_Extrapolator_estimateUpdateTime_R_double(jcontext ctx, jobject self);
jbool M_arc_math_Extrapolator_estimates_double_double_R_boolean(jcontext ctx, jobject self, jdouble param0, jdouble param1);
jobject M_arc_math_Extrapolator_clear_Array1_float_R_Array1_float(jcontext ctx, jobject self, jobject param0);
void M_arc_math_Extrapolator_copyArray_Array1_float_Array1_float(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_math_Extrapolator_checkArraySizeOne(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
