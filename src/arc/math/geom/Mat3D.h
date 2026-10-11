#ifndef HEADER_arc_math_geom_Mat3D
#define HEADER_arc_math_geom_Mat3D

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Mat3D {
	java_lang_Object parent;
	jref F_val;
} arc_math_geom_Mat3D;

extern Class class_arc_math_geom_Mat3D;

extern jint SF_arc_math_geom_Mat3D_M00;
extern jint SF_arc_math_geom_Mat3D_M01;
extern jint SF_arc_math_geom_Mat3D_M02;
extern jint SF_arc_math_geom_Mat3D_M03;
extern jint SF_arc_math_geom_Mat3D_M10;
extern jint SF_arc_math_geom_Mat3D_M11;
extern jint SF_arc_math_geom_Mat3D_M12;
extern jint SF_arc_math_geom_Mat3D_M13;
extern jint SF_arc_math_geom_Mat3D_M20;
extern jint SF_arc_math_geom_Mat3D_M21;
extern jint SF_arc_math_geom_Mat3D_M22;
extern jint SF_arc_math_geom_Mat3D_M23;
extern jint SF_arc_math_geom_Mat3D_M30;
extern jint SF_arc_math_geom_Mat3D_M31;
extern jint SF_arc_math_geom_Mat3D_M32;
extern jint SF_arc_math_geom_Mat3D_M33;
extern jobject SF_arc_math_geom_Mat3D_tmp;
extern jobject SF_arc_math_geom_Mat3D_tmp2;
extern jobject SF_arc_math_geom_Mat3D_quat;
extern jobject SF_arc_math_geom_Mat3D_quat2;
extern jobject SF_arc_math_geom_Mat3D_l_vez;
extern jobject SF_arc_math_geom_Mat3D_l_vex;
extern jobject SF_arc_math_geom_Mat3D_l_vey;
extern jobject SF_arc_math_geom_Mat3D_tmpVec;
extern jobject SF_arc_math_geom_Mat3D_tmpMat;
extern jobject SF_arc_math_geom_Mat3D_right;
extern jobject SF_arc_math_geom_Mat3D_tmpForward;
extern jobject SF_arc_math_geom_Mat3D_tmpUp;

#define VTABLE_arc_math_geom_Mat3D_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Mat3D_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Mat3D_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Mat3D_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Mat3D_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Mat3D_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_finalize 5
typedef void (*func_arc_math_geom_Mat3D_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_notify 6
typedef void (*func_arc_math_geom_Mat3D_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_notifyAll 7
typedef void (*func_arc_math_geom_Mat3D_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_wait 8
typedef void (*func_arc_math_geom_Mat3D_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_wait_long 9
typedef void (*func_arc_math_geom_Mat3D_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Mat3D_wait_long_int 10
typedef void (*func_arc_math_geom_Mat3D_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D 11
typedef jobject (*func_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_set_Array1_float_R_arc_math_geom_Mat3D 12
typedef jobject (*func_arc_math_geom_Mat3D_set_Array1_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D 13
typedef jobject (*func_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_set_float_float_float_float_R_arc_math_geom_Mat3D 14
typedef jobject (*func_arc_math_geom_Mat3D_set_float_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Quat_R_arc_math_geom_Mat3D 15
typedef jobject (*func_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Quat_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D 16
typedef jobject (*func_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
#define VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Vec3_R_arc_math_geom_Mat3D 17
typedef jobject (*func_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Vec3_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D 18
typedef jobject (*func_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9);
#define VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D 19
typedef jobject (*func_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_arc_math_geom_Mat3D_cpy_R_arc_math_geom_Mat3D 20
typedef jobject (*func_arc_math_geom_Mat3D_cpy_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_trn_arc_math_geom_Vec3_R_arc_math_geom_Mat3D 21
typedef jobject (*func_arc_math_geom_Mat3D_trn_arc_math_geom_Vec3_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_trn_float_float_float_R_arc_math_geom_Mat3D 22
typedef jobject (*func_arc_math_geom_Mat3D_trn_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Mat3D_getValues_R_Array1_float 23
typedef jobject (*func_arc_math_geom_Mat3D_getValues_R_Array1_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D 24
typedef jobject (*func_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_mulLeft_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D 25
typedef jobject (*func_arc_math_geom_Mat3D_mulLeft_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_tra_R_arc_math_geom_Mat3D 26
typedef jobject (*func_arc_math_geom_Mat3D_tra_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D 27
typedef jobject (*func_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_inv_R_arc_math_geom_Mat3D 28
typedef jobject (*func_arc_math_geom_Mat3D_inv_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_det_R_float 29
typedef jfloat (*func_arc_math_geom_Mat3D_det_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_det3x3_R_float 30
typedef jfloat (*func_arc_math_geom_Mat3D_det3x3_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_setToProjection_float_float_float_float_R_arc_math_geom_Mat3D 31
typedef jobject (*func_arc_math_geom_Mat3D_setToProjection_float_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Mat3D_setToProjection_float_float_float_float_float_float_R_arc_math_geom_Mat3D 32
typedef jobject (*func_arc_math_geom_Mat3D_setToProjection_float_float_float_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_arc_math_geom_Mat3D_setToOrtho2D_float_float_float_float_R_arc_math_geom_Mat3D 33
typedef jobject (*func_arc_math_geom_Mat3D_setToOrtho2D_float_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Mat3D_setToOrtho2D_float_float_float_float_float_float_R_arc_math_geom_Mat3D 34
typedef jobject (*func_arc_math_geom_Mat3D_setToOrtho2D_float_float_float_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_arc_math_geom_Mat3D_setToOrtho_float_float_float_float_float_float_R_arc_math_geom_Mat3D 35
typedef jobject (*func_arc_math_geom_Mat3D_setToOrtho_float_float_float_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_arc_math_geom_Mat3D_setTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D 36
typedef jobject (*func_arc_math_geom_Mat3D_setTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_setTranslation_float_float_float_R_arc_math_geom_Mat3D 37
typedef jobject (*func_arc_math_geom_Mat3D_setTranslation_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Mat3D_setToTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D 38
typedef jobject (*func_arc_math_geom_Mat3D_setToTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_setToTranslation_float_float_float_R_arc_math_geom_Mat3D 39
typedef jobject (*func_arc_math_geom_Mat3D_setToTranslation_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Mat3D_setToTranslationAndScaling_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D 40
typedef jobject (*func_arc_math_geom_Mat3D_setToTranslationAndScaling_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Mat3D_setToTranslationAndScaling_float_float_float_float_float_float_R_arc_math_geom_Mat3D 41
typedef jobject (*func_arc_math_geom_Mat3D_setToTranslationAndScaling_float_float_float_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_arc_math_geom_Mat3D_setToRotation_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D 42
typedef jobject (*func_arc_math_geom_Mat3D_setToRotation_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Mat3D_setToRotationRad_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D 43
typedef jobject (*func_arc_math_geom_Mat3D_setToRotationRad_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Mat3D_setToRotation_float_float_float_float_R_arc_math_geom_Mat3D 44
typedef jobject (*func_arc_math_geom_Mat3D_setToRotation_float_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Mat3D_setToRotationRad_float_float_float_float_R_arc_math_geom_Mat3D 45
typedef jobject (*func_arc_math_geom_Mat3D_setToRotationRad_float_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Mat3D_setToRotation_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D 46
typedef jobject (*func_arc_math_geom_Mat3D_setToRotation_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Mat3D_setToRotation_float_float_float_float_float_float_R_arc_math_geom_Mat3D 47
typedef jobject (*func_arc_math_geom_Mat3D_setToRotation_float_float_float_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_arc_math_geom_Mat3D_setFromEulerAngles_float_float_float_R_arc_math_geom_Mat3D 48
typedef jobject (*func_arc_math_geom_Mat3D_setFromEulerAngles_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Mat3D_setFromEulerAnglesRad_float_float_float_R_arc_math_geom_Mat3D 49
typedef jobject (*func_arc_math_geom_Mat3D_setFromEulerAnglesRad_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Mat3D_setToScaling_arc_math_geom_Vec3_R_arc_math_geom_Mat3D 50
typedef jobject (*func_arc_math_geom_Mat3D_setToScaling_arc_math_geom_Vec3_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_setToScaling_float_float_float_R_arc_math_geom_Mat3D 51
typedef jobject (*func_arc_math_geom_Mat3D_setToScaling_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D 52
typedef jobject (*func_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D 53
typedef jobject (*func_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_math_geom_Mat3D_setToWorld_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D 54
typedef jobject (*func_arc_math_geom_Mat3D_setToWorld_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_math_geom_Mat3D_lerp_arc_math_geom_Mat3D_float_R_arc_math_geom_Mat3D 55
typedef jobject (*func_arc_math_geom_Mat3D_lerp_arc_math_geom_Mat3D_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Mat3D_avg_arc_math_geom_Mat3D_float_R_arc_math_geom_Mat3D 56
typedef jobject (*func_arc_math_geom_Mat3D_avg_arc_math_geom_Mat3D_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Mat3D_avg_Array1_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D 57
typedef jobject (*func_arc_math_geom_Mat3D_avg_Array1_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_avg_Array1_arc_math_geom_Mat3D_Array1_float_R_arc_math_geom_Mat3D 58
typedef jobject (*func_arc_math_geom_Mat3D_avg_Array1_arc_math_geom_Mat3D_Array1_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Mat3D_set_arc_math_Mat_R_arc_math_geom_Mat3D 59
typedef jobject (*func_arc_math_geom_Mat3D_set_arc_math_Mat_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_set_arc_math_Affine2_R_arc_math_geom_Mat3D 60
typedef jobject (*func_arc_math_geom_Mat3D_set_arc_math_Affine2_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_setAsAffine_arc_math_Affine2_R_arc_math_geom_Mat3D 61
typedef jobject (*func_arc_math_geom_Mat3D_setAsAffine_arc_math_Affine2_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_setAsAffine_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D 62
typedef jobject (*func_arc_math_geom_Mat3D_setAsAffine_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_scl_arc_math_geom_Vec3_R_arc_math_geom_Mat3D 63
typedef jobject (*func_arc_math_geom_Mat3D_scl_arc_math_geom_Vec3_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_scl_float_float_float_R_arc_math_geom_Mat3D 64
typedef jobject (*func_arc_math_geom_Mat3D_scl_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Mat3D_scl_float_R_arc_math_geom_Mat3D 65
typedef jobject (*func_arc_math_geom_Mat3D_scl_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3 66
typedef jobject (*func_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_boolean_R_arc_math_geom_Quat 67
typedef jobject (*func_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_boolean_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat 68
typedef jobject (*func_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_getScaleXSquared_R_float 69
typedef jfloat (*func_arc_math_geom_Mat3D_getScaleXSquared_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_getScaleYSquared_R_float 70
typedef jfloat (*func_arc_math_geom_Mat3D_getScaleYSquared_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_getScaleZSquared_R_float 71
typedef jfloat (*func_arc_math_geom_Mat3D_getScaleZSquared_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_getScaleX_R_float 72
typedef jfloat (*func_arc_math_geom_Mat3D_getScaleX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_getScaleY_R_float 73
typedef jfloat (*func_arc_math_geom_Mat3D_getScaleY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_getScaleZ_R_float 74
typedef jfloat (*func_arc_math_geom_Mat3D_getScaleZ_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3 75
typedef jobject (*func_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_toNormalMatrix_R_arc_math_geom_Mat3D 76
typedef jobject (*func_arc_math_geom_Mat3D_toNormalMatrix_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Mat3D_translate_arc_math_geom_Vec3_R_arc_math_geom_Mat3D 77
typedef jobject (*func_arc_math_geom_Mat3D_translate_arc_math_geom_Vec3_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_translate_float_float_float_R_arc_math_geom_Mat3D 78
typedef jobject (*func_arc_math_geom_Mat3D_translate_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D 79
typedef jobject (*func_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Mat3D_rotateRad_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D 80
typedef jobject (*func_arc_math_geom_Mat3D_rotateRad_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Mat3D_rotate_float_float_float_float_R_arc_math_geom_Mat3D 81
typedef jobject (*func_arc_math_geom_Mat3D_rotate_float_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Mat3D_rotateRad_float_float_float_float_R_arc_math_geom_Mat3D 82
typedef jobject (*func_arc_math_geom_Mat3D_rotateRad_float_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D 83
typedef jobject (*func_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D 84
typedef jobject (*func_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Mat3D_scale_arc_math_geom_Vec3_R_arc_math_geom_Mat3D 85
typedef jobject (*func_arc_math_geom_Mat3D_scale_arc_math_geom_Vec3_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_scale_float_float_float_R_arc_math_geom_Mat3D 86
typedef jobject (*func_arc_math_geom_Mat3D_scale_float_float_float_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Mat3D_extract4x3Matrix_Array1_float 87
typedef void (*func_arc_math_geom_Mat3D_extract4x3Matrix_Array1_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Mat3D_hasRotationOrScaling_R_boolean 88
typedef jbool (*func_arc_math_geom_Mat3D_hasRotationOrScaling_R_boolean)(jcontext ctx, jobject self);

void mark_arc_math_geom_Mat3D(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Mat3D(jcontext ctx);
void init_arc_math_geom_Mat3D(jcontext ctx, jobject self);
void init_arc_math_geom_Mat3D_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
void init_arc_math_geom_Mat3D_Array1_float(jcontext ctx, jobject self, jobject param0);
void init_arc_math_geom_Mat3D_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0);
void init_arc_math_geom_Mat3D_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_set_Array1_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_set_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Quat_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
jobject M_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9);
jobject M_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_arc_math_geom_Mat3D_cpy_R_arc_math_geom_Mat3D(jcontext ctx, jobject self);
jobject M_arc_math_geom_Mat3D_trn_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_trn_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Mat3D_getValues_R_Array1_float(jcontext ctx, jobject self);
jobject M_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_mulLeft_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_tra_R_arc_math_geom_Mat3D(jcontext ctx, jobject self);
jobject M_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D(jcontext ctx, jobject self);
jobject M_arc_math_geom_Mat3D_inv_R_arc_math_geom_Mat3D(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Mat3D_det_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Mat3D_det3x3_R_float(jcontext ctx, jobject self);
jobject M_arc_math_geom_Mat3D_setToProjection_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Mat3D_setToProjection_float_float_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject M_arc_math_geom_Mat3D_setToOrtho2D_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Mat3D_setToOrtho2D_float_float_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject M_arc_math_geom_Mat3D_setToOrtho_float_float_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject M_arc_math_geom_Mat3D_setTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_setTranslation_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Mat3D_setToTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_setToTranslation_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Mat3D_setToTranslationAndScaling_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_geom_Mat3D_setToTranslationAndScaling_float_float_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject M_arc_math_geom_Mat3D_setToRotation_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Mat3D_setToRotationRad_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Mat3D_setToRotation_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Mat3D_setToRotationRad_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Mat3D_setToRotation_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_geom_Mat3D_setToRotation_float_float_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject M_arc_math_geom_Mat3D_setFromEulerAngles_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Mat3D_setFromEulerAnglesRad_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Mat3D_setToScaling_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_setToScaling_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_arc_math_geom_Mat3D_setToWorld_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_arc_math_geom_Mat3D_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_math_geom_Mat3D_lerp_arc_math_geom_Mat3D_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Mat3D_avg_arc_math_geom_Mat3D_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Mat3D_avg_Array1_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_avg_Array1_arc_math_geom_Mat3D_Array1_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_geom_Mat3D_set_arc_math_Mat_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_set_arc_math_Affine2_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_setAsAffine_arc_math_Affine2_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_setAsAffine_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_scl_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_scl_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Mat3D_scl_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_boolean_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Mat3D_getScaleXSquared_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Mat3D_getScaleYSquared_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Mat3D_getScaleZSquared_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Mat3D_getScaleX_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Mat3D_getScaleY_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Mat3D_getScaleZ_R_float(jcontext ctx, jobject self);
jobject M_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_toNormalMatrix_R_arc_math_geom_Mat3D(jcontext ctx, jobject self);
void SM_arc_math_geom_Mat3D_mul_Array1_float_Array1_float(jcontext ctx, jobject param0, jobject param1);
void SM_arc_math_geom_Mat3D_mulVec_Array1_float_Array1_float(jcontext ctx, jobject param0, jobject param1);
void SM_arc_math_geom_Mat3D_prj_Array1_float_Array1_float(jcontext ctx, jobject param0, jobject param1);
void SM_arc_math_geom_Mat3D_prj_Array1_float_Array1_float_int_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4);
void SM_arc_math_geom_Mat3D_rot_Array1_float_Array1_float(jcontext ctx, jobject param0, jobject param1);
jbool SM_arc_math_geom_Mat3D_inv_Array1_float_R_boolean(jcontext ctx, jobject param0);
jfloat SM_arc_math_geom_Mat3D_det_Array1_float_R_float(jcontext ctx, jobject param0);
jobject M_arc_math_geom_Mat3D_translate_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_translate_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Mat3D_rotateRad_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Mat3D_rotate_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Mat3D_rotateRad_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_geom_Mat3D_scale_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Mat3D_scale_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void M_arc_math_geom_Mat3D_extract4x3Matrix_Array1_float(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Mat3D_hasRotationOrScaling_R_boolean(jcontext ctx, jobject self);
jobject SM_arc_math_geom_Mat3D_prj_arc_math_geom_Vec3_arc_math_geom_Mat3D_R_arc_math_geom_Vec3(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_math_geom_Mat3D_rot_arc_math_geom_Vec3_arc_math_geom_Mat3D_R_arc_math_geom_Vec3(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_math_geom_Mat3D_unrotate_arc_math_geom_Vec3_arc_math_geom_Mat3D_R_arc_math_geom_Vec3(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_math_geom_Mat3D_untransform_arc_math_geom_Vec3_arc_math_geom_Mat3D_R_arc_math_geom_Vec3(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
