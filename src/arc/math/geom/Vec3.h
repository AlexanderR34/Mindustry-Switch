#ifndef HEADER_arc_math_geom_Vec3
#define HEADER_arc_math_geom_Vec3

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Vector.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Vec3 {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jfloat F_z;
} arc_math_geom_Vec3;

extern Class class_arc_math_geom_Vec3;

extern jobject SF_arc_math_geom_Vec3_X;
extern jobject SF_arc_math_geom_Vec3_Y;
extern jobject SF_arc_math_geom_Vec3_Z;
extern jobject SF_arc_math_geom_Vec3_Zero;
extern jobject SF_arc_math_geom_Vec3_tmpMat;

#define VTABLE_arc_math_geom_Vec3_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Vec3_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Vec3_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Vec3_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Vec3_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Vec3_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_finalize 5
typedef void (*func_arc_math_geom_Vec3_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_notify 6
typedef void (*func_arc_math_geom_Vec3_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_notifyAll 7
typedef void (*func_arc_math_geom_Vec3_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_wait 8
typedef void (*func_arc_math_geom_Vec3_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_wait_long 9
typedef void (*func_arc_math_geom_Vec3_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Vec3_wait_long_int 10
typedef void (*func_arc_math_geom_Vec3_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vector 11
typedef jobject (*func_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vector)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_len_R_float 12
typedef jfloat (*func_arc_math_geom_Vec3_len_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_len2_R_float 13
typedef jfloat (*func_arc_math_geom_Vec3_len2_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_limit_float_R_arc_math_geom_Vector 14
typedef jobject (*func_arc_math_geom_Vec3_limit_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vector 15
typedef jobject (*func_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vector 16
typedef jobject (*func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vector 17
typedef jobject (*func_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec3_clamp_float_float_R_arc_math_geom_Vector 18
typedef jobject (*func_arc_math_geom_Vec3_clamp_float_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vector_R_arc_math_geom_Vector 19
typedef jobject (*func_arc_math_geom_Vec3_set_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vector_R_arc_math_geom_Vector 20
typedef jobject (*func_arc_math_geom_Vec3_sub_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vector 21
typedef jobject (*func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vector)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vector_R_arc_math_geom_Vector 22
typedef jobject (*func_arc_math_geom_Vec3_add_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vector_R_float 23
typedef jfloat (*func_arc_math_geom_Vec3_dot_arc_math_geom_Vector_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vector 24
typedef jobject (*func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec3_scl_arc_math_geom_Vector_R_arc_math_geom_Vector 25
typedef jobject (*func_arc_math_geom_Vec3_scl_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_div_arc_math_geom_Vector_R_arc_math_geom_Vector 26
typedef jobject (*func_arc_math_geom_Vec3_div_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vector_R_float 27
typedef jfloat (*func_arc_math_geom_Vec3_dst_arc_math_geom_Vector_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_dst2_arc_math_geom_Vector_R_float 28
typedef jfloat (*func_arc_math_geom_Vec3_dst2_arc_math_geom_Vector_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_lerp_arc_math_geom_Vector_float_R_arc_math_geom_Vector 29
typedef jobject (*func_arc_math_geom_Vec3_lerp_arc_math_geom_Vector_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_interpolate_arc_math_geom_Vector_float_arc_math_Interp_R_arc_math_geom_Vector 30
typedef jobject (*func_arc_math_geom_Vec3_interpolate_arc_math_geom_Vector_float_arc_math_Interp_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
#define VTABLE_arc_math_geom_Vec3_setToRandomDirection_R_arc_math_geom_Vector 31
typedef jobject (*func_arc_math_geom_Vec3_setToRandomDirection_R_arc_math_geom_Vector)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_isUnit_R_boolean 32
typedef jbool (*func_arc_math_geom_Vec3_isUnit_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_isUnit_float_R_boolean 33
typedef jbool (*func_arc_math_geom_Vec3_isUnit_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec3_isZero_R_boolean 34
typedef jbool (*func_arc_math_geom_Vec3_isZero_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_isZero_float_R_boolean 35
typedef jbool (*func_arc_math_geom_Vec3_isZero_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vector_float_R_boolean 36
typedef jbool (*func_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vector_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vector_R_boolean 37
typedef jbool (*func_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vector_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vector_float_R_boolean 38
typedef jbool (*func_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vector_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vector_R_boolean 39
typedef jbool (*func_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vector_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vector_float_R_boolean 40
typedef jbool (*func_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vector_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vector_R_boolean 41
typedef jbool (*func_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vector_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vector_R_boolean 42
typedef jbool (*func_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vector_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vector_float_R_boolean 43
typedef jbool (*func_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vector_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vector_R_boolean 44
typedef jbool (*func_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vector_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vector_R_boolean 45
typedef jbool (*func_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vector_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vector_float_R_boolean 46
typedef jbool (*func_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vector_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vector_float_R_arc_math_geom_Vector 47
typedef jobject (*func_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vector_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector 48
typedef jobject (*func_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vector 49
typedef jobject (*func_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vector)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_plus_arc_math_geom_Vector_R_arc_math_geom_Vector 50
typedef jobject (*func_arc_math_geom_Vec3_plus_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_minus_arc_math_geom_Vector_R_arc_math_geom_Vector 51
typedef jobject (*func_arc_math_geom_Vec3_minus_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_unaryMinus_R_arc_math_geom_Vector 52
typedef jobject (*func_arc_math_geom_Vec3_unaryMinus_R_arc_math_geom_Vector)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_times_arc_math_geom_Vector_R_arc_math_geom_Vector 53
typedef jobject (*func_arc_math_geom_Vec3_times_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3 54
typedef jobject (*func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Vec3_div_arc_math_geom_Vec3_R_arc_math_geom_Vec3 55
typedef jobject (*func_arc_math_geom_Vec3_div_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3 56
typedef jobject (*func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_set_Array1_float_R_arc_math_geom_Vec3 57
typedef jobject (*func_arc_math_geom_Vec3_set_Array1_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_set_Array1_float_int_R_arc_math_geom_Vec3 58
typedef jobject (*func_arc_math_geom_Vec3_set_Array1_float_int_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec2_float_R_arc_math_geom_Vec3 59
typedef jobject (*func_arc_math_geom_Vec3_set_arc_math_geom_Vec2_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_setFromSpherical_float_float_R_arc_math_geom_Vec3 60
typedef jobject (*func_arc_math_geom_Vec3_setFromSpherical_float_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_setToRandomDirection_R_arc_math_geom_Vec3 61
typedef jobject (*func_arc_math_geom_Vec3_setToRandomDirection_R_arc_math_geom_Vec3)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec3 62
typedef jobject (*func_arc_math_geom_Vec3_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3 63
typedef jobject (*func_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3 64
typedef jobject (*func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_cpy_arc_math_geom_Vec3_R_arc_math_geom_Vec3 65
typedef jobject (*func_arc_math_geom_Vec3_cpy_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3 66
typedef jobject (*func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3 67
typedef jobject (*func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3 68
typedef jobject (*func_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Vec3_add_float_R_arc_math_geom_Vec3 69
typedef jobject (*func_arc_math_geom_Vec3_add_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3 70
typedef jobject (*func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3 71
typedef jobject (*func_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Vec3_sub_float_R_arc_math_geom_Vec3 72
typedef jobject (*func_arc_math_geom_Vec3_sub_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3 73
typedef jobject (*func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec3_scl_arc_math_geom_Vec3_R_arc_math_geom_Vec3 74
typedef jobject (*func_arc_math_geom_Vec3_scl_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_scl_float_float_float_R_arc_math_geom_Vec3 75
typedef jobject (*func_arc_math_geom_Vec3_scl_float_float_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3 76
typedef jobject (*func_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Vec3 77
typedef jobject (*func_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Vec3_idt_arc_math_geom_Vec3_R_boolean 78
typedef jbool (*func_arc_math_geom_Vec3_idt_arc_math_geom_Vec3_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float 79
typedef jfloat (*func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_dst_float_float_float_R_float 80
typedef jfloat (*func_arc_math_geom_Vec3_dst_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float 81
typedef jfloat (*func_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_dst2_float_float_float_R_float 82
typedef jfloat (*func_arc_math_geom_Vec3_dst2_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Vec3_within_arc_math_geom_Vec3_float_R_boolean 83
typedef jbool (*func_arc_math_geom_Vec3_within_arc_math_geom_Vec3_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3 84
typedef jobject (*func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float 85
typedef jfloat (*func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_angleRad_arc_math_geom_Vec3_R_float 86
typedef jfloat (*func_arc_math_geom_Vec3_angleRad_arc_math_geom_Vec3_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_angle_arc_math_geom_Vec3_R_float 87
typedef jfloat (*func_arc_math_geom_Vec3_angle_arc_math_geom_Vec3_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_dot_float_float_float_R_float 88
typedef jfloat (*func_arc_math_geom_Vec3_dot_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3 89
typedef jobject (*func_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_crs_float_float_float_R_arc_math_geom_Vec3 90
typedef jobject (*func_arc_math_geom_Vec3_crs_float_float_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Vec3_mul4x3_Array1_float_R_arc_math_geom_Vec3 91
typedef jobject (*func_arc_math_geom_Vec3_mul4x3_Array1_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_mul_arc_math_Mat_R_arc_math_geom_Vec3 92
typedef jobject (*func_arc_math_geom_Vec3_mul_arc_math_Mat_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_traMul_arc_math_Mat_R_arc_math_geom_Vec3 93
typedef jobject (*func_arc_math_geom_Vec3_traMul_arc_math_Mat_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3 94
typedef jobject (*func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_float_R_boolean 95
typedef jbool (*func_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_R_boolean 96
typedef jbool (*func_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_float_R_boolean 97
typedef jbool (*func_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_R_boolean 98
typedef jbool (*func_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_float_R_boolean 99
typedef jbool (*func_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_R_boolean 100
typedef jbool (*func_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_R_boolean 101
typedef jbool (*func_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_float_R_boolean 102
typedef jbool (*func_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vec3_R_boolean 103
typedef jbool (*func_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vec3_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vec3_R_boolean 104
typedef jbool (*func_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vec3_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3 105
typedef jobject (*func_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_interpolate_arc_math_geom_Vec3_float_arc_math_Interp_R_arc_math_geom_Vec3 106
typedef jobject (*func_arc_math_geom_Vec3_interpolate_arc_math_geom_Vec3_float_arc_math_Interp_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
#define VTABLE_arc_math_geom_Vec3_slerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3 107
typedef jobject (*func_arc_math_geom_Vec3_slerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_fromString_java_lang_String_R_arc_math_geom_Vec3 108
typedef jobject (*func_arc_math_geom_Vec3_fromString_java_lang_String_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_limit_float_R_arc_math_geom_Vec3 109
typedef jobject (*func_arc_math_geom_Vec3_limit_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vec3 110
typedef jobject (*func_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3 111
typedef jobject (*func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vec3 112
typedef jobject (*func_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec3_clamp_float_float_R_arc_math_geom_Vec3 113
typedef jobject (*func_arc_math_geom_Vec3_clamp_float_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_float_R_boolean 114
typedef jbool (*func_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec3_epsilonEquals_float_float_float_float_R_boolean 115
typedef jbool (*func_arc_math_geom_Vec3_epsilonEquals_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_R_boolean 116
typedef jbool (*func_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec3_epsilonEquals_float_float_float_R_boolean 117
typedef jbool (*func_arc_math_geom_Vec3_epsilonEquals_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3 118
typedef jobject (*func_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3)(jcontext ctx, jobject self);

void mark_arc_math_geom_Vec3(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Vec3(jcontext ctx);
void init_arc_math_geom_Vec3(jcontext ctx, jobject self);
void init_arc_math_geom_Vec3_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void init_arc_math_geom_Vec3_double_double_double(jcontext ctx, jobject self, jdouble param0, jdouble param1, jdouble param2);
void init_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
void init_arc_math_geom_Vec3_Array1_float(jcontext ctx, jobject self, jobject param0);
void init_arc_math_geom_Vec3_arc_math_geom_Vec2_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
jfloat SM_arc_math_geom_Vec3_len_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_geom_Vec3_len2_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_arc_math_geom_Vec3_dst_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jfloat SM_arc_math_geom_Vec3_dst2_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jfloat SM_arc_math_geom_Vec3_dot_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject M_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Vec3_div_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_set_Array1_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_set_Array1_float_int_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_arc_math_geom_Vec3_set_arc_math_geom_Vec2_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec3_setFromSpherical_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Vec3_setToRandomDirection_R_arc_math_geom_Vec3(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec3_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_cpy_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Vec3_add_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Vec3_sub_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec3_scl_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_scl_float_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1);
jfloat M_arc_math_geom_Vec3_len_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Vec3_len2_R_float(jcontext ctx, jobject self);
jbool M_arc_math_geom_Vec3_idt_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Vec3_dst_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jfloat M_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Vec3_dst2_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jbool M_arc_math_geom_Vec3_within_arc_math_geom_Vec3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Vec3_angleRad_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Vec3_angle_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Vec3_dot_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_crs_float_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Vec3_mul4x3_Array1_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_mul_arc_math_Mat_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_traMul_arc_math_Mat_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec3_isUnit_R_boolean(jcontext ctx, jobject self);
jbool M_arc_math_geom_Vec3_isUnit_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_math_geom_Vec3_isZero_R_boolean(jcontext ctx, jobject self);
jbool M_arc_math_geom_Vec3_isZero_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec3_interpolate_arc_math_geom_Vec3_float_arc_math_Interp_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
jobject M_arc_math_geom_Vec3_slerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec3_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec3_fromString_java_lang_String_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_limit_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec3_clamp_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jint M_arc_math_geom_Vec3_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_math_geom_Vec3_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec3_epsilonEquals_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jbool M_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec3_epsilonEquals_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vector(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vector_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec3_setToRandomDirection_R_arc_math_geom_Vector(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec3_interpolate_arc_math_geom_Vector_float_arc_math_Interp_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
jobject M_arc_math_geom_Vec3_lerp_arc_math_geom_Vector_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1);
jfloat M_arc_math_geom_Vec3_dst2_arc_math_geom_Vector_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Vec3_dst_arc_math_geom_Vector_R_float(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_div_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_scl_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_math_geom_Vec3_dot_arc_math_geom_Vector_R_float(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_add_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_nor_R_arc_math_geom_Vector(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec3_sub_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_set_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec3_clamp_float_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec3_limit_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vector(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
