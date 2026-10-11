#ifndef HEADER_arc_math_Mat
#define HEADER_arc_math_Mat

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_Mat {
	java_lang_Object parent;
	jref F_val;
	jref F_tmp;
} arc_math_Mat;

extern Class class_arc_math_Mat;

extern jint SF_arc_math_Mat_M00;
extern jint SF_arc_math_Mat_M01;
extern jint SF_arc_math_Mat_M02;
extern jint SF_arc_math_Mat_M10;
extern jint SF_arc_math_Mat_M11;
extern jint SF_arc_math_Mat_M12;
extern jint SF_arc_math_Mat_M20;
extern jint SF_arc_math_Mat_M21;
extern jint SF_arc_math_Mat_M22;

#define VTABLE_arc_math_Mat_hashCode_R_int 0
typedef jint (*func_arc_math_Mat_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mat_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_Mat_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mat_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_Mat_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mat_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_Mat_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mat_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_Mat_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mat_finalize 5
typedef void (*func_arc_math_Mat_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mat_notify 6
typedef void (*func_arc_math_Mat_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mat_notifyAll 7
typedef void (*func_arc_math_Mat_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mat_wait 8
typedef void (*func_arc_math_Mat_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mat_wait_long 9
typedef void (*func_arc_math_Mat_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_Mat_wait_long_int 10
typedef void (*func_arc_math_Mat_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat 11
typedef jobject (*func_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_Mat_idt_R_arc_math_Mat 12
typedef jobject (*func_arc_math_Mat_idt_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mat_mul_arc_math_Mat_R_arc_math_Mat 13
typedef jobject (*func_arc_math_Mat_mul_arc_math_Mat_R_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mat_mulLeft_arc_math_Mat_R_arc_math_Mat 14
typedef jobject (*func_arc_math_Mat_mulLeft_arc_math_Mat_R_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mat_setToRotation_float_R_arc_math_Mat 15
typedef jobject (*func_arc_math_Mat_setToRotation_float_R_arc_math_Mat)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Mat_setToRotationRad_float_R_arc_math_Mat 16
typedef jobject (*func_arc_math_Mat_setToRotationRad_float_R_arc_math_Mat)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_R_arc_math_Mat 17
typedef jobject (*func_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_R_arc_math_Mat)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_float_R_arc_math_Mat 18
typedef jobject (*func_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_float_R_arc_math_Mat)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_Mat_setToTranslation_float_float_R_arc_math_Mat 19
typedef jobject (*func_arc_math_Mat_setToTranslation_float_float_R_arc_math_Mat)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_Mat_setToTranslation_arc_math_geom_Vec2_R_arc_math_Mat 20
typedef jobject (*func_arc_math_Mat_setToTranslation_arc_math_geom_Vec2_R_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mat_setToScaling_float_float_R_arc_math_Mat 21
typedef jobject (*func_arc_math_Mat_setToScaling_float_float_R_arc_math_Mat)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_Mat_setToScaling_arc_math_geom_Vec2_R_arc_math_Mat 22
typedef jobject (*func_arc_math_Mat_setToScaling_arc_math_geom_Vec2_R_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mat_det_R_float 23
typedef jfloat (*func_arc_math_Mat_det_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mat_inv_R_arc_math_Mat 24
typedef jobject (*func_arc_math_Mat_inv_R_arc_math_Mat)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat 25
typedef jobject (*func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mat_set_arc_math_Affine2_R_arc_math_Mat 26
typedef jobject (*func_arc_math_Mat_set_arc_math_Affine2_R_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mat_set_Array1_float_R_arc_math_Mat 27
typedef jobject (*func_arc_math_Mat_set_Array1_float_R_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mat_trn_arc_math_geom_Vec2_R_arc_math_Mat 28
typedef jobject (*func_arc_math_Mat_trn_arc_math_geom_Vec2_R_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mat_trn_float_float_R_arc_math_Mat 29
typedef jobject (*func_arc_math_Mat_trn_float_float_R_arc_math_Mat)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_Mat_trn_arc_math_geom_Vec3_R_arc_math_Mat 30
typedef jobject (*func_arc_math_Mat_trn_arc_math_geom_Vec3_R_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mat_translate_float_float_R_arc_math_Mat 31
typedef jobject (*func_arc_math_Mat_translate_float_float_R_arc_math_Mat)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_Mat_translate_arc_math_geom_Vec2_R_arc_math_Mat 32
typedef jobject (*func_arc_math_Mat_translate_arc_math_geom_Vec2_R_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mat_rotate_float_R_arc_math_Mat 33
typedef jobject (*func_arc_math_Mat_rotate_float_R_arc_math_Mat)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Mat_rotateRad_float_R_arc_math_Mat 34
typedef jobject (*func_arc_math_Mat_rotateRad_float_R_arc_math_Mat)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Mat_scale_float_float_R_arc_math_Mat 35
typedef jobject (*func_arc_math_Mat_scale_float_float_R_arc_math_Mat)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_Mat_scale_arc_math_geom_Vec2_R_arc_math_Mat 36
typedef jobject (*func_arc_math_Mat_scale_arc_math_geom_Vec2_R_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mat_getValues_R_Array1_float 37
typedef jobject (*func_arc_math_Mat_getValues_R_Array1_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mat_getTranslation_arc_math_geom_Vec2_R_arc_math_geom_Vec2 38
typedef jobject (*func_arc_math_Mat_getTranslation_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mat_getScale_arc_math_geom_Vec2_R_arc_math_geom_Vec2 39
typedef jobject (*func_arc_math_Mat_getScale_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mat_getRotation_R_float 40
typedef jfloat (*func_arc_math_Mat_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mat_getRotationRad_R_float 41
typedef jfloat (*func_arc_math_Mat_getRotationRad_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Mat_scl_float_R_arc_math_Mat 42
typedef jobject (*func_arc_math_Mat_scl_float_R_arc_math_Mat)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Mat_scl_arc_math_geom_Vec2_R_arc_math_Mat 43
typedef jobject (*func_arc_math_Mat_scl_arc_math_geom_Vec2_R_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mat_scl_arc_math_geom_Vec3_R_arc_math_Mat 44
typedef jobject (*func_arc_math_Mat_scl_arc_math_geom_Vec3_R_arc_math_Mat)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Mat_transpose_R_arc_math_Mat 45
typedef jobject (*func_arc_math_Mat_transpose_R_arc_math_Mat)(jcontext ctx, jobject self);

void mark_arc_math_Mat(jobject object, jint mark, jint depth);
void clinit_arc_math_Mat(jcontext ctx);
void init_arc_math_Mat(jcontext ctx, jobject self);
void init_arc_math_Mat_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
void init_arc_math_Mat_Array1_float(jcontext ctx, jobject self, jobject param0);
void SM_arc_math_Mat_mul_Array1_float_Array1_float(jcontext ctx, jobject param0, jobject param1);
jobject M_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_Mat_idt_R_arc_math_Mat(jcontext ctx, jobject self);
jobject M_arc_math_Mat_mul_arc_math_Mat_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Mat_mulLeft_arc_math_Mat_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Mat_setToRotation_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_Mat_setToRotationRad_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_float_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jobject M_arc_math_Mat_setToTranslation_float_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_Mat_setToTranslation_arc_math_geom_Vec2_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Mat_setToScaling_float_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_Mat_setToScaling_arc_math_geom_Vec2_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Mat_toString_R_java_lang_String(jcontext ctx, jobject self);
jfloat M_arc_math_Mat_det_R_float(jcontext ctx, jobject self);
jobject M_arc_math_Mat_inv_R_arc_math_Mat(jcontext ctx, jobject self);
jobject M_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Mat_set_arc_math_Affine2_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Mat_set_Array1_float_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Mat_trn_arc_math_geom_Vec2_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Mat_trn_float_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_Mat_trn_arc_math_geom_Vec3_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Mat_translate_float_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_Mat_translate_arc_math_geom_Vec2_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Mat_rotate_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_Mat_rotateRad_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_Mat_scale_float_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_Mat_scale_arc_math_geom_Vec2_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Mat_getValues_R_Array1_float(jcontext ctx, jobject self);
jobject M_arc_math_Mat_getTranslation_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Mat_getScale_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_Mat_getRotation_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_Mat_getRotationRad_R_float(jcontext ctx, jobject self);
jobject M_arc_math_Mat_scl_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_Mat_scl_arc_math_geom_Vec2_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Mat_scl_arc_math_geom_Vec3_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Mat_transpose_R_arc_math_Mat(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
