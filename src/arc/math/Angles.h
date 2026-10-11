#ifndef HEADER_arc_math_Angles
#define HEADER_arc_math_Angles

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_Angles {
	java_lang_Object parent;
} arc_math_Angles;

extern Class class_arc_math_Angles;

extern jobject SF_arc_math_Angles_rand;
extern jobject SF_arc_math_Angles_rv;

#define VTABLE_arc_math_Angles_hashCode_R_int 0
typedef jint (*func_arc_math_Angles_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Angles_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_Angles_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Angles_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_Angles_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Angles_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_Angles_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Angles_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_Angles_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Angles_finalize 5
typedef void (*func_arc_math_Angles_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Angles_notify 6
typedef void (*func_arc_math_Angles_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Angles_notifyAll 7
typedef void (*func_arc_math_Angles_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Angles_wait 8
typedef void (*func_arc_math_Angles_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Angles_wait_long 9
typedef void (*func_arc_math_Angles_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_Angles_wait_long_int 10
typedef void (*func_arc_math_Angles_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_math_Angles(jobject object, jint mark, jint depth);
void clinit_arc_math_Angles(jcontext ctx);
void init_arc_math_Angles(jcontext ctx, jobject self);
jfloat SM_arc_math_Angles_forwardDistance_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_arc_math_Angles_backwardDistance_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jbool SM_arc_math_Angles_within_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Angles_angleDist_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jbool SM_arc_math_Angles_near_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Angles_clampRange_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Angles_moveToward_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Angles_angle_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_arc_math_Angles_angle_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jfloat SM_arc_math_Angles_angleRad_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jfloat SM_arc_math_Angles_trnsx_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_arc_math_Angles_trnsy_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
jfloat SM_arc_math_Angles_trnsx_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Angles_trnsy_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_Angles_mouseAngle_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
void SM_arc_math_Angles_circleVectors_int_float_arc_func_Floatc2(jcontext ctx, jint param0, jfloat param1, jobject param2);
void SM_arc_math_Angles_circleVectors_int_float_float_arc_func_Floatc2(jcontext ctx, jint param0, jfloat param1, jfloat param2, jobject param3);
void SM_arc_math_Angles_randVectors_long_int_float_arc_func_Floatc2(jcontext ctx, jlong param0, jint param1, jfloat param2, jobject param3);
void SM_arc_math_Angles_randLenVectors_long_int_float_arc_func_Floatc2(jcontext ctx, jlong param0, jint param1, jfloat param2, jobject param3);
void SM_arc_math_Angles_randLenVectors_long_int_float_float_arc_func_Floatc2(jcontext ctx, jlong param0, jint param1, jfloat param2, jfloat param3, jobject param4);
void SM_arc_math_Angles_randLenVectors_long_int_float_float_float_arc_func_Floatc2(jcontext ctx, jlong param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jobject param5);
void SM_arc_math_Angles_randLenVectors_long_int_float_float_float_float_arc_func_Floatc2(jcontext ctx, jlong param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);
void SM_arc_math_Angles_randLenVectors_long_float_int_float_arc_math_Angles$ParticleConsumer(jcontext ctx, jlong param0, jfloat param1, jint param2, jfloat param3, jobject param4);
void SM_arc_math_Angles_randLenVectors_long_float_int_float_float_float_arc_math_Angles$ParticleConsumer(jcontext ctx, jlong param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);

#ifdef __cplusplus
}
#endif

#endif
