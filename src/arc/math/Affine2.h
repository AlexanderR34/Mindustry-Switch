#ifndef HEADER_arc_math_Affine2
#define HEADER_arc_math_Affine2

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_Affine2 {
	java_lang_Object parent;
	jfloat F_m00;
	jfloat F_m01;
	jfloat F_m02;
	jfloat F_m10;
	jfloat F_m11;
	jfloat F_m12;
} arc_math_Affine2;

extern Class class_arc_math_Affine2;


#define VTABLE_arc_math_Affine2_hashCode_R_int 0
typedef jint (*func_arc_math_Affine2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Affine2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_Affine2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Affine2_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_Affine2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Affine2_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_Affine2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Affine2_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_Affine2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Affine2_finalize 5
typedef void (*func_arc_math_Affine2_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Affine2_notify 6
typedef void (*func_arc_math_Affine2_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Affine2_notifyAll 7
typedef void (*func_arc_math_Affine2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Affine2_wait 8
typedef void (*func_arc_math_Affine2_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Affine2_wait_long 9
typedef void (*func_arc_math_Affine2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_Affine2_wait_long_int 10
typedef void (*func_arc_math_Affine2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_Affine2_idt_R_arc_math_Affine2 11
typedef jobject (*func_arc_math_Affine2_idt_R_arc_math_Affine2)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Affine2_set_arc_math_Affine2_R_arc_math_Affine2 12
typedef jobject (*func_arc_math_Affine2_set_arc_math_Affine2_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Affine2_set_arc_math_Mat_R_arc_math_Affine2 13
typedef jobject (*func_arc_math_Affine2_set_arc_math_Mat_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Affine2_setToTranslation_float_float_R_arc_math_Affine2 14
typedef jobject (*func_arc_math_Affine2_setToTranslation_float_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_Affine2_setToTranslation_arc_math_geom_Vec2_R_arc_math_Affine2 15
typedef jobject (*func_arc_math_Affine2_setToTranslation_arc_math_geom_Vec2_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Affine2_setToScaling_float_float_R_arc_math_Affine2 16
typedef jobject (*func_arc_math_Affine2_setToScaling_float_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_Affine2_setToScaling_arc_math_geom_Vec2_R_arc_math_Affine2 17
typedef jobject (*func_arc_math_Affine2_setToScaling_arc_math_geom_Vec2_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Affine2_setToRotation_float_R_arc_math_Affine2 18
typedef jobject (*func_arc_math_Affine2_setToRotation_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Affine2_setToRotationRad_float_R_arc_math_Affine2 19
typedef jobject (*func_arc_math_Affine2_setToRotationRad_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Affine2_setToRotation_float_float_R_arc_math_Affine2 20
typedef jobject (*func_arc_math_Affine2_setToRotation_float_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_Affine2_setToShearing_float_float_R_arc_math_Affine2 21
typedef jobject (*func_arc_math_Affine2_setToShearing_float_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_Affine2_setToShearing_arc_math_geom_Vec2_R_arc_math_Affine2 22
typedef jobject (*func_arc_math_Affine2_setToShearing_arc_math_geom_Vec2_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_arc_math_Affine2 23
typedef jobject (*func_arc_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_math_Affine2_setToTrnRotScl_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_arc_math_Affine2 24
typedef jobject (*func_arc_math_Affine2_setToTrnRotScl_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
#define VTABLE_arc_math_Affine2_setToTrnRotRadScl_float_float_float_float_float_R_arc_math_Affine2 25
typedef jobject (*func_arc_math_Affine2_setToTrnRotRadScl_float_float_float_float_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_math_Affine2_setToTrnRotRadScl_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_arc_math_Affine2 26
typedef jobject (*func_arc_math_Affine2_setToTrnRotRadScl_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
#define VTABLE_arc_math_Affine2_setToTrnScl_float_float_float_float_R_arc_math_Affine2 27
typedef jobject (*func_arc_math_Affine2_setToTrnScl_float_float_float_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_Affine2_setToTrnScl_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_Affine2 28
typedef jobject (*func_arc_math_Affine2_setToTrnScl_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_Affine2_setToProduct_arc_math_Affine2_arc_math_Affine2_R_arc_math_Affine2 29
typedef jobject (*func_arc_math_Affine2_setToProduct_arc_math_Affine2_arc_math_Affine2_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_Affine2_inv_R_arc_math_Affine2 30
typedef jobject (*func_arc_math_Affine2_inv_R_arc_math_Affine2)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Affine2_mul_arc_math_Affine2_R_arc_math_Affine2 31
typedef jobject (*func_arc_math_Affine2_mul_arc_math_Affine2_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Affine2_preMul_arc_math_Affine2_R_arc_math_Affine2 32
typedef jobject (*func_arc_math_Affine2_preMul_arc_math_Affine2_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Affine2_translate_float_float_R_arc_math_Affine2 33
typedef jobject (*func_arc_math_Affine2_translate_float_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_Affine2_translate_arc_math_geom_Vec2_R_arc_math_Affine2 34
typedef jobject (*func_arc_math_Affine2_translate_arc_math_geom_Vec2_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Affine2_preTranslate_float_float_R_arc_math_Affine2 35
typedef jobject (*func_arc_math_Affine2_preTranslate_float_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_Affine2_preTranslate_arc_math_geom_Vec2_R_arc_math_Affine2 36
typedef jobject (*func_arc_math_Affine2_preTranslate_arc_math_geom_Vec2_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Affine2_scale_float_float_R_arc_math_Affine2 37
typedef jobject (*func_arc_math_Affine2_scale_float_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_Affine2_scale_arc_math_geom_Vec2_R_arc_math_Affine2 38
typedef jobject (*func_arc_math_Affine2_scale_arc_math_geom_Vec2_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Affine2_preScale_float_float_R_arc_math_Affine2 39
typedef jobject (*func_arc_math_Affine2_preScale_float_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_Affine2_preScale_arc_math_geom_Vec2_R_arc_math_Affine2 40
typedef jobject (*func_arc_math_Affine2_preScale_arc_math_geom_Vec2_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Affine2_rotate_float_R_arc_math_Affine2 41
typedef jobject (*func_arc_math_Affine2_rotate_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Affine2_rotateRad_float_R_arc_math_Affine2 42
typedef jobject (*func_arc_math_Affine2_rotateRad_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Affine2_preRotate_float_R_arc_math_Affine2 43
typedef jobject (*func_arc_math_Affine2_preRotate_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Affine2_preRotateRad_float_R_arc_math_Affine2 44
typedef jobject (*func_arc_math_Affine2_preRotateRad_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Affine2_shear_float_float_R_arc_math_Affine2 45
typedef jobject (*func_arc_math_Affine2_shear_float_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_Affine2_shear_arc_math_geom_Vec2_R_arc_math_Affine2 46
typedef jobject (*func_arc_math_Affine2_shear_arc_math_geom_Vec2_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Affine2_preShear_float_float_R_arc_math_Affine2 47
typedef jobject (*func_arc_math_Affine2_preShear_float_float_R_arc_math_Affine2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_Affine2_preShear_arc_math_geom_Vec2_R_arc_math_Affine2 48
typedef jobject (*func_arc_math_Affine2_preShear_arc_math_geom_Vec2_R_arc_math_Affine2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Affine2_det_R_float 49
typedef jfloat (*func_arc_math_Affine2_det_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Affine2_getTranslation_arc_math_geom_Vec2_R_arc_math_geom_Vec2 50
typedef jobject (*func_arc_math_Affine2_getTranslation_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Affine2_isTranslation_R_boolean 51
typedef jbool (*func_arc_math_Affine2_isTranslation_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Affine2_isIdt_R_boolean 52
typedef jbool (*func_arc_math_Affine2_isIdt_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Affine2_applyTo_arc_math_geom_Vec2 53
typedef void (*func_arc_math_Affine2_applyTo_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);

void mark_arc_math_Affine2(jobject object, jint mark, jint depth);
void clinit_arc_math_Affine2(jcontext ctx);
void init_arc_math_Affine2(jcontext ctx, jobject self);
void init_arc_math_Affine2_arc_math_Affine2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Affine2_idt_R_arc_math_Affine2(jcontext ctx, jobject self);
jobject M_arc_math_Affine2_set_arc_math_Affine2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Affine2_set_arc_math_Mat_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Affine2_setToTranslation_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_Affine2_setToTranslation_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Affine2_setToScaling_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_Affine2_setToScaling_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Affine2_setToRotation_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_Affine2_setToRotationRad_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_Affine2_setToRotation_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_Affine2_setToShearing_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_Affine2_setToShearing_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jobject M_arc_math_Affine2_setToTrnRotScl_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
jobject M_arc_math_Affine2_setToTrnRotRadScl_float_float_float_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jobject M_arc_math_Affine2_setToTrnRotRadScl_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
jobject M_arc_math_Affine2_setToTrnScl_float_float_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_Affine2_setToTrnScl_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_Affine2_setToProduct_arc_math_Affine2_arc_math_Affine2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_Affine2_inv_R_arc_math_Affine2(jcontext ctx, jobject self);
jobject M_arc_math_Affine2_mul_arc_math_Affine2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Affine2_preMul_arc_math_Affine2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Affine2_translate_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_Affine2_translate_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Affine2_preTranslate_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_Affine2_preTranslate_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Affine2_scale_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_Affine2_scale_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Affine2_preScale_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_Affine2_preScale_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Affine2_rotate_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_Affine2_rotateRad_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_Affine2_preRotate_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_Affine2_preRotateRad_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_Affine2_shear_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_Affine2_shear_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Affine2_preShear_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_Affine2_preShear_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_Affine2_det_R_float(jcontext ctx, jobject self);
jobject M_arc_math_Affine2_getTranslation_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_Affine2_isTranslation_R_boolean(jcontext ctx, jobject self);
jbool M_arc_math_Affine2_isIdt_R_boolean(jcontext ctx, jobject self);
void M_arc_math_Affine2_applyTo_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_Affine2_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
