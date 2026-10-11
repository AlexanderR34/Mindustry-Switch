#ifndef HEADER_arc_input_GestureDetector$VelocityTracker
#define HEADER_arc_input_GestureDetector$VelocityTracker

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_input_GestureDetector$VelocityTracker {
	java_lang_Object parent;
	jint F_sampleSize;
	jfloat F_lastX;
	jfloat F_lastY;
	jfloat F_deltaX;
	jfloat F_deltaY;
	jlong F_lastTime;
	jint F_numSamples;
	jref F_meanX;
	jref F_meanY;
	jref F_meanTime;
} arc_input_GestureDetector$VelocityTracker;

extern Class class_arc_input_GestureDetector$VelocityTracker;


#define VTABLE_arc_input_GestureDetector$VelocityTracker_hashCode_R_int 0
typedef jint (*func_arc_input_GestureDetector$VelocityTracker_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_input_GestureDetector$VelocityTracker_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_clone_R_java_lang_Object 2
typedef jobject (*func_arc_input_GestureDetector$VelocityTracker_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_input_GestureDetector$VelocityTracker_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_toString_R_java_lang_String 4
typedef jobject (*func_arc_input_GestureDetector$VelocityTracker_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_finalize 5
typedef void (*func_arc_input_GestureDetector$VelocityTracker_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_notify 6
typedef void (*func_arc_input_GestureDetector$VelocityTracker_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_notifyAll 7
typedef void (*func_arc_input_GestureDetector$VelocityTracker_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_wait 8
typedef void (*func_arc_input_GestureDetector$VelocityTracker_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_wait_long 9
typedef void (*func_arc_input_GestureDetector$VelocityTracker_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_wait_long_int 10
typedef void (*func_arc_input_GestureDetector$VelocityTracker_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_start_float_float_long 11
typedef void (*func_arc_input_GestureDetector$VelocityTracker_start_float_float_long)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jlong param2);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_update_float_float_long 12
typedef void (*func_arc_input_GestureDetector$VelocityTracker_update_float_float_long)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jlong param2);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_getVelocityX_R_float 13
typedef jfloat (*func_arc_input_GestureDetector$VelocityTracker_getVelocityX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_getVelocityY_R_float 14
typedef jfloat (*func_arc_input_GestureDetector$VelocityTracker_getVelocityY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_float_int_R_float 15
typedef jfloat (*func_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_float_int_R_float)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_long_int_R_long 16
typedef jlong (*func_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_long_int_R_long)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_input_GestureDetector$VelocityTracker_getSum_Array1_float_int_R_float 17
typedef jfloat (*func_arc_input_GestureDetector$VelocityTracker_getSum_Array1_float_int_R_float)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_arc_input_GestureDetector$VelocityTracker(jobject object, jint mark, jint depth);
void clinit_arc_input_GestureDetector$VelocityTracker(jcontext ctx);
void init_arc_input_GestureDetector$VelocityTracker(jcontext ctx, jobject self);
void M_arc_input_GestureDetector$VelocityTracker_start_float_float_long(jcontext ctx, jobject self, jfloat param0, jfloat param1, jlong param2);
void M_arc_input_GestureDetector$VelocityTracker_update_float_float_long(jcontext ctx, jobject self, jfloat param0, jfloat param1, jlong param2);
jfloat M_arc_input_GestureDetector$VelocityTracker_getVelocityX_R_float(jcontext ctx, jobject self);
jfloat M_arc_input_GestureDetector$VelocityTracker_getVelocityY_R_float(jcontext ctx, jobject self);
jfloat M_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_float_int_R_float(jcontext ctx, jobject self, jobject param0, jint param1);
jlong M_arc_input_GestureDetector$VelocityTracker_getAverage_Array1_long_int_R_long(jcontext ctx, jobject self, jobject param0, jint param1);
jfloat M_arc_input_GestureDetector$VelocityTracker_getSum_Array1_float_int_R_float(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
