#ifndef HEADER_arc_math_geom_Quat
#define HEADER_arc_math_geom_Quat

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Quat {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jfloat F_z;
	jfloat F_w;
} arc_math_geom_Quat;

extern Class class_arc_math_geom_Quat;

extern jobject SF_arc_math_geom_Quat_tmp1;
extern jobject SF_arc_math_geom_Quat_tmp2;

#define VTABLE_arc_math_geom_Quat_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Quat_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Quat_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Quat_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Quat_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Quat_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Quat_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_finalize 5
typedef void (*func_arc_math_geom_Quat_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_notify 6
typedef void (*func_arc_math_geom_Quat_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_notifyAll 7
typedef void (*func_arc_math_geom_Quat_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_wait 8
typedef void (*func_arc_math_geom_Quat_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_wait_long 9
typedef void (*func_arc_math_geom_Quat_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Quat_wait_long_int 10
typedef void (*func_arc_math_geom_Quat_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat 11
typedef jobject (*func_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat 12
typedef jobject (*func_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Quat_set_arc_math_geom_Vec3_float_R_arc_math_geom_Quat 13
typedef jobject (*func_arc_math_geom_Quat_set_arc_math_geom_Vec3_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Quat_cpy_R_arc_math_geom_Quat 14
typedef jobject (*func_arc_math_geom_Quat_cpy_R_arc_math_geom_Quat)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_len_R_float 15
typedef jfloat (*func_arc_math_geom_Quat_len_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_setEulerAngles_float_float_float_R_arc_math_geom_Quat 16
typedef jobject (*func_arc_math_geom_Quat_setEulerAngles_float_float_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Quat_setEulerAnglesRad_float_float_float_R_arc_math_geom_Quat 17
typedef jobject (*func_arc_math_geom_Quat_setEulerAnglesRad_float_float_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Quat_getGimbalPole_R_int 18
typedef jint (*func_arc_math_geom_Quat_getGimbalPole_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_getRollRad_R_float 19
typedef jfloat (*func_arc_math_geom_Quat_getRollRad_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_getRoll_R_float 20
typedef jfloat (*func_arc_math_geom_Quat_getRoll_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_getPitchRad_R_float 21
typedef jfloat (*func_arc_math_geom_Quat_getPitchRad_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_getPitch_R_float 22
typedef jfloat (*func_arc_math_geom_Quat_getPitch_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_getYawRad_R_float 23
typedef jfloat (*func_arc_math_geom_Quat_getYawRad_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_getYaw_R_float 24
typedef jfloat (*func_arc_math_geom_Quat_getYaw_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_len2_R_float 25
typedef jfloat (*func_arc_math_geom_Quat_len2_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_nor_R_arc_math_geom_Quat 26
typedef jobject (*func_arc_math_geom_Quat_nor_R_arc_math_geom_Quat)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_conjugate_R_arc_math_geom_Quat 27
typedef jobject (*func_arc_math_geom_Quat_conjugate_R_arc_math_geom_Quat)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_transform_arc_math_geom_Vec3_R_arc_math_geom_Vec3 28
typedef jobject (*func_arc_math_geom_Quat_transform_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Quat_mul_arc_math_geom_Quat_R_arc_math_geom_Quat 29
typedef jobject (*func_arc_math_geom_Quat_mul_arc_math_geom_Quat_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Quat_mul_float_float_float_float_R_arc_math_geom_Quat 30
typedef jobject (*func_arc_math_geom_Quat_mul_float_float_float_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Quat_mulLeft_arc_math_geom_Quat_R_arc_math_geom_Quat 31
typedef jobject (*func_arc_math_geom_Quat_mulLeft_arc_math_geom_Quat_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Quat_mulLeft_float_float_float_float_R_arc_math_geom_Quat 32
typedef jobject (*func_arc_math_geom_Quat_mulLeft_float_float_float_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Quat_add_arc_math_geom_Quat_R_arc_math_geom_Quat 33
typedef jobject (*func_arc_math_geom_Quat_add_arc_math_geom_Quat_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Quat_add_float_float_float_float_R_arc_math_geom_Quat 34
typedef jobject (*func_arc_math_geom_Quat_add_float_float_float_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Quat_toMatrix_Array1_float 35
typedef void (*func_arc_math_geom_Quat_toMatrix_Array1_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Quat_idt_R_arc_math_geom_Quat 36
typedef jobject (*func_arc_math_geom_Quat_idt_R_arc_math_geom_Quat)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_isIdentity_R_boolean 37
typedef jbool (*func_arc_math_geom_Quat_isIdentity_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_isIdentity_float_R_boolean 38
typedef jbool (*func_arc_math_geom_Quat_isIdentity_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Quat_setFromAxis_arc_math_geom_Vec3_float_R_arc_math_geom_Quat 39
typedef jobject (*func_arc_math_geom_Quat_setFromAxis_arc_math_geom_Vec3_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Quat_setFromAxisRad_arc_math_geom_Vec3_float_R_arc_math_geom_Quat 40
typedef jobject (*func_arc_math_geom_Quat_setFromAxisRad_arc_math_geom_Vec3_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Quat_setFromAxis_float_float_float_float_R_arc_math_geom_Quat 41
typedef jobject (*func_arc_math_geom_Quat_setFromAxis_float_float_float_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat 42
typedef jobject (*func_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_geom_Mat3D_R_arc_math_geom_Quat 43
typedef jobject (*func_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_geom_Mat3D_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jbool param0, jobject param1);
#define VTABLE_arc_math_geom_Quat_setFromMatrix_arc_math_geom_Mat3D_R_arc_math_geom_Quat 44
typedef jobject (*func_arc_math_geom_Quat_setFromMatrix_arc_math_geom_Mat3D_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_Mat_R_arc_math_geom_Quat 45
typedef jobject (*func_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_Mat_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jbool param0, jobject param1);
#define VTABLE_arc_math_geom_Quat_setFromMatrix_arc_math_Mat_R_arc_math_geom_Quat 46
typedef jobject (*func_arc_math_geom_Quat_setFromMatrix_arc_math_Mat_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Quat_setFromAxes_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat 47
typedef jobject (*func_arc_math_geom_Quat_setFromAxes_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);
#define VTABLE_arc_math_geom_Quat_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat 48
typedef jobject (*func_arc_math_geom_Quat_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jbool param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9);
#define VTABLE_arc_math_geom_Quat_setFromCross_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Quat 49
typedef jobject (*func_arc_math_geom_Quat_setFromCross_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Quat_setFromCross_float_float_float_float_float_float_R_arc_math_geom_Quat 50
typedef jobject (*func_arc_math_geom_Quat_setFromCross_float_float_float_float_float_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_arc_math_geom_Quat_slerp_arc_math_geom_Quat_float_R_arc_math_geom_Quat 51
typedef jobject (*func_arc_math_geom_Quat_slerp_arc_math_geom_Quat_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Quat_slerp_Array1_arc_math_geom_Quat_R_arc_math_geom_Quat 52
typedef jobject (*func_arc_math_geom_Quat_slerp_Array1_arc_math_geom_Quat_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Quat_slerp_Array1_arc_math_geom_Quat_Array1_float_R_arc_math_geom_Quat 53
typedef jobject (*func_arc_math_geom_Quat_slerp_Array1_arc_math_geom_Quat_Array1_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat 54
typedef jobject (*func_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Quat_dot_arc_math_geom_Quat_R_float 55
typedef jfloat (*func_arc_math_geom_Quat_dot_arc_math_geom_Quat_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Quat_dot_float_float_float_float_R_float 56
typedef jfloat (*func_arc_math_geom_Quat_dot_float_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Quat_mul_float_R_arc_math_geom_Quat 57
typedef jobject (*func_arc_math_geom_Quat_mul_float_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Quat_getAxisAngle_arc_math_geom_Vec3_R_float 58
typedef jfloat (*func_arc_math_geom_Quat_getAxisAngle_arc_math_geom_Vec3_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Quat_getAxisAngleRad_arc_math_geom_Vec3_R_float 59
typedef jfloat (*func_arc_math_geom_Quat_getAxisAngleRad_arc_math_geom_Vec3_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Quat_getAngleRad_R_float 60
typedef jfloat (*func_arc_math_geom_Quat_getAngleRad_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_getAngle_R_float 61
typedef jfloat (*func_arc_math_geom_Quat_getAngle_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Quat_getSwingTwist_float_float_float_arc_math_geom_Quat_arc_math_geom_Quat 62
typedef void (*func_arc_math_geom_Quat_getSwingTwist_float_float_float_arc_math_geom_Quat_arc_math_geom_Quat)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
#define VTABLE_arc_math_geom_Quat_getSwingTwist_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Quat 63
typedef void (*func_arc_math_geom_Quat_getSwingTwist_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Quat)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_math_geom_Quat_getAngleAroundRad_float_float_float_R_float 64
typedef jfloat (*func_arc_math_geom_Quat_getAngleAroundRad_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Quat_getAngleAroundRad_arc_math_geom_Vec3_R_float 65
typedef jfloat (*func_arc_math_geom_Quat_getAngleAroundRad_arc_math_geom_Vec3_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Quat_getAngleAround_float_float_float_R_float 66
typedef jfloat (*func_arc_math_geom_Quat_getAngleAround_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Quat_getAngleAround_arc_math_geom_Vec3_R_float 67
typedef jfloat (*func_arc_math_geom_Quat_getAngleAround_arc_math_geom_Vec3_R_float)(jcontext ctx, jobject self, jobject param0);

void mark_arc_math_geom_Quat(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Quat(jcontext ctx);
void init_arc_math_geom_Quat_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void init_arc_math_geom_Quat(jcontext ctx, jobject self);
void init_arc_math_geom_Quat_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0);
void init_arc_math_geom_Quat_arc_math_geom_Vec3_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
jfloat SM_arc_math_geom_Quat_len_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jfloat SM_arc_math_geom_Quat_len2_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jfloat SM_arc_math_geom_Quat_dot_float_float_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
jobject M_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Quat_set_arc_math_geom_Vec3_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Quat_cpy_R_arc_math_geom_Quat(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Quat_len_R_float(jcontext ctx, jobject self);
jobject M_arc_math_geom_Quat_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_math_geom_Quat_setEulerAngles_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Quat_setEulerAnglesRad_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jint M_arc_math_geom_Quat_getGimbalPole_R_int(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Quat_getRollRad_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Quat_getRoll_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Quat_getPitchRad_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Quat_getPitch_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Quat_getYawRad_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Quat_getYaw_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Quat_len2_R_float(jcontext ctx, jobject self);
jobject M_arc_math_geom_Quat_nor_R_arc_math_geom_Quat(jcontext ctx, jobject self);
jobject M_arc_math_geom_Quat_conjugate_R_arc_math_geom_Quat(jcontext ctx, jobject self);
jobject M_arc_math_geom_Quat_transform_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Quat_mul_arc_math_geom_Quat_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Quat_mul_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Quat_mulLeft_arc_math_geom_Quat_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Quat_mulLeft_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Quat_add_arc_math_geom_Quat_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Quat_add_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_math_geom_Quat_toMatrix_Array1_float(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Quat_idt_R_arc_math_geom_Quat(jcontext ctx, jobject self);
jbool M_arc_math_geom_Quat_isIdentity_R_boolean(jcontext ctx, jobject self);
jbool M_arc_math_geom_Quat_isIdentity_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Quat_setFromAxis_arc_math_geom_Vec3_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Quat_setFromAxisRad_arc_math_geom_Vec3_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Quat_setFromAxis_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_geom_Mat3D_R_arc_math_geom_Quat(jcontext ctx, jobject self, jbool param0, jobject param1);
jobject M_arc_math_geom_Quat_setFromMatrix_arc_math_geom_Mat3D_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_Mat_R_arc_math_geom_Quat(jcontext ctx, jobject self, jbool param0, jobject param1);
jobject M_arc_math_geom_Quat_setFromMatrix_arc_math_Mat_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Quat_setFromAxes_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8);
jobject M_arc_math_geom_Quat_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jbool param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9);
jobject M_arc_math_geom_Quat_setFromCross_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_geom_Quat_setFromCross_float_float_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject M_arc_math_geom_Quat_slerp_arc_math_geom_Quat_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Quat_slerp_Array1_arc_math_geom_Quat_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Quat_slerp_Array1_arc_math_geom_Quat_Array1_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0);
jint M_arc_math_geom_Quat_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_math_geom_Quat_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Quat_dot_arc_math_geom_Quat_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Quat_dot_float_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Quat_mul_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_math_geom_Quat_getAxisAngle_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Quat_getAxisAngleRad_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Quat_getAngleRad_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Quat_getAngle_R_float(jcontext ctx, jobject self);
void M_arc_math_geom_Quat_getSwingTwist_float_float_float_arc_math_geom_Quat_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
void M_arc_math_geom_Quat_getSwingTwist_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jfloat M_arc_math_geom_Quat_getAngleAroundRad_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jfloat M_arc_math_geom_Quat_getAngleAroundRad_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Quat_getAngleAround_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jfloat M_arc_math_geom_Quat_getAngleAround_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
