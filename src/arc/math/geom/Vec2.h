#ifndef HEADER_arc_math_geom_Vec2
#define HEADER_arc_math_geom_Vec2

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Vector.h"
#include "arc/math/geom/Position.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Vec2 {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
} arc_math_geom_Vec2;

extern Class class_arc_math_geom_Vec2;

extern jobject SF_arc_math_geom_Vec2_X;
extern jobject SF_arc_math_geom_Vec2_Y;
extern jobject SF_arc_math_geom_Vec2_ZERO;

#define VTABLE_arc_math_geom_Vec2_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Vec2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Vec2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Vec2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Vec2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Vec2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_finalize 5
typedef void (*func_arc_math_geom_Vec2_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_notify 6
typedef void (*func_arc_math_geom_Vec2_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_notifyAll 7
typedef void (*func_arc_math_geom_Vec2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_wait 8
typedef void (*func_arc_math_geom_Vec2_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_wait_long 9
typedef void (*func_arc_math_geom_Vec2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Vec2_wait_long_int 10
typedef void (*func_arc_math_geom_Vec2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vector 11
typedef jobject (*func_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vector)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_len_R_float 12
typedef jfloat (*func_arc_math_geom_Vec2_len_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_len2_R_float 13
typedef jfloat (*func_arc_math_geom_Vec2_len2_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vector 14
typedef jobject (*func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vector 15
typedef jobject (*func_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vector 16
typedef jobject (*func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vector 17
typedef jobject (*func_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_clamp_float_float_R_arc_math_geom_Vector 18
typedef jobject (*func_arc_math_geom_Vec2_clamp_float_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vector_R_arc_math_geom_Vector 19
typedef jobject (*func_arc_math_geom_Vec2_set_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vector_R_arc_math_geom_Vector 20
typedef jobject (*func_arc_math_geom_Vec2_sub_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_nor_R_arc_math_geom_Vector 21
typedef jobject (*func_arc_math_geom_Vec2_nor_R_arc_math_geom_Vector)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vector_R_arc_math_geom_Vector 22
typedef jobject (*func_arc_math_geom_Vec2_add_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vector_R_float 23
typedef jfloat (*func_arc_math_geom_Vec2_dot_arc_math_geom_Vector_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vector 24
typedef jobject (*func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_scl_arc_math_geom_Vector_R_arc_math_geom_Vector 25
typedef jobject (*func_arc_math_geom_Vec2_scl_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_div_arc_math_geom_Vector_R_arc_math_geom_Vector 26
typedef jobject (*func_arc_math_geom_Vec2_div_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_dst_arc_math_geom_Vector_R_float 27
typedef jfloat (*func_arc_math_geom_Vec2_dst_arc_math_geom_Vector_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_dst2_arc_math_geom_Vector_R_float 28
typedef jfloat (*func_arc_math_geom_Vec2_dst2_arc_math_geom_Vector_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_lerp_arc_math_geom_Vector_float_R_arc_math_geom_Vector 29
typedef jobject (*func_arc_math_geom_Vec2_lerp_arc_math_geom_Vector_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_interpolate_arc_math_geom_Vector_float_arc_math_Interp_R_arc_math_geom_Vector 30
typedef jobject (*func_arc_math_geom_Vec2_interpolate_arc_math_geom_Vector_float_arc_math_Interp_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
#define VTABLE_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vector 31
typedef jobject (*func_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vector)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_isUnit_R_boolean 32
typedef jbool (*func_arc_math_geom_Vec2_isUnit_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_isUnit_float_R_boolean 33
typedef jbool (*func_arc_math_geom_Vec2_isUnit_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_isZero_R_boolean 34
typedef jbool (*func_arc_math_geom_Vec2_isZero_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_isZero_float_R_boolean 35
typedef jbool (*func_arc_math_geom_Vec2_isZero_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vector_float_R_boolean 36
typedef jbool (*func_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vector_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vector_R_boolean 37
typedef jbool (*func_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vector_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vector_float_R_boolean 38
typedef jbool (*func_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vector_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vector_R_boolean 39
typedef jbool (*func_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vector_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vector_float_R_boolean 40
typedef jbool (*func_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vector_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vector_R_boolean 41
typedef jbool (*func_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vector_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vector_R_boolean 42
typedef jbool (*func_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vector_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vector_float_R_boolean 43
typedef jbool (*func_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vector_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_hasSameDirection_arc_math_geom_Vector_R_boolean 44
typedef jbool (*func_arc_math_geom_Vec2_hasSameDirection_arc_math_geom_Vector_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_hasOppositeDirection_arc_math_geom_Vector_R_boolean 45
typedef jbool (*func_arc_math_geom_Vec2_hasOppositeDirection_arc_math_geom_Vector_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vector_float_R_boolean 46
typedef jbool (*func_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vector_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vector_float_R_arc_math_geom_Vector 47
typedef jobject (*func_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vector_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector 48
typedef jobject (*func_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vector 49
typedef jobject (*func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vector)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_plus_arc_math_geom_Vector_R_arc_math_geom_Vector 50
typedef jobject (*func_arc_math_geom_Vec2_plus_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_minus_arc_math_geom_Vector_R_arc_math_geom_Vector 51
typedef jobject (*func_arc_math_geom_Vec2_minus_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_unaryMinus_R_arc_math_geom_Vector 52
typedef jobject (*func_arc_math_geom_Vec2_unaryMinus_R_arc_math_geom_Vector)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_times_arc_math_geom_Vector_R_arc_math_geom_Vector 53
typedef jobject (*func_arc_math_geom_Vec2_times_arc_math_geom_Vector_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_getX_R_float 54
typedef jfloat (*func_arc_math_geom_Vec2_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_getY_R_float 55
typedef jfloat (*func_arc_math_geom_Vec2_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_angleTo_arc_math_geom_Position_R_float 56
typedef jfloat (*func_arc_math_geom_Vec2_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_angleTo_float_float_R_float 57
typedef jfloat (*func_arc_math_geom_Vec2_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_dst2_arc_math_geom_Position_R_float 58
typedef jfloat (*func_arc_math_geom_Vec2_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_dst_arc_math_geom_Position_R_float 59
typedef jfloat (*func_arc_math_geom_Vec2_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_dst_float_float_R_float 60
typedef jfloat (*func_arc_math_geom_Vec2_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_dst2_float_float_R_float 61
typedef jfloat (*func_arc_math_geom_Vec2_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_within_arc_math_geom_Position_float_R_boolean 62
typedef jbool (*func_arc_math_geom_Vec2_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_within_float_float_float_R_boolean 63
typedef jbool (*func_arc_math_geom_Vec2_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2 64
typedef jobject (*func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2 65
typedef jobject (*func_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2 66
typedef jobject (*func_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_snap_R_arc_math_geom_Vec2 67
typedef jobject (*func_arc_math_geom_Vec2_snap_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_div_arc_math_geom_Vec2_R_arc_math_geom_Vec2 68
typedef jobject (*func_arc_math_geom_Vec2_div_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2 69
typedef jobject (*func_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2 70
typedef jobject (*func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2 71
typedef jobject (*func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2 72
typedef jobject (*func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec3_R_arc_math_geom_Vec2 73
typedef jobject (*func_arc_math_geom_Vec2_set_arc_math_geom_Vec3_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2 74
typedef jobject (*func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2 75
typedef jobject (*func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2 76
typedef jobject (*func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec2 77
typedef jobject (*func_arc_math_geom_Vec2_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2 78
typedef jobject (*func_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2 79
typedef jobject (*func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2 80
typedef jobject (*func_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2 81
typedef jobject (*func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2 82
typedef jobject (*func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float 83
typedef jfloat (*func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_dot_float_float_R_float 84
typedef jfloat (*func_arc_math_geom_Vec2_dot_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2 85
typedef jobject (*func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_inv_R_arc_math_geom_Vec2 86
typedef jobject (*func_arc_math_geom_Vec2_inv_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_scl_float_float_R_arc_math_geom_Vec2 87
typedef jobject (*func_arc_math_geom_Vec2_scl_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_scl_arc_math_geom_Vec2_R_arc_math_geom_Vec2 88
typedef jobject (*func_arc_math_geom_Vec2_scl_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2 89
typedef jobject (*func_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2 90
typedef jobject (*func_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float 91
typedef jfloat (*func_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_dst2_arc_math_geom_Vec2_R_float 92
typedef jfloat (*func_arc_math_geom_Vec2_dst2_arc_math_geom_Vec2_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2 93
typedef jobject (*func_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2 94
typedef jobject (*func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vec2 95
typedef jobject (*func_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_clamp_float_float_R_arc_math_geom_Vec2 96
typedef jobject (*func_arc_math_geom_Vec2_clamp_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2 97
typedef jobject (*func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vec2 98
typedef jobject (*func_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2 99
typedef jobject (*func_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Vec2_tryFromString_java_lang_String_R_arc_math_geom_Vec2 100
typedef jobject (*func_arc_math_geom_Vec2_tryFromString_java_lang_String_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_fromString_java_lang_String_R_arc_math_geom_Vec2 101
typedef jobject (*func_arc_math_geom_Vec2_fromString_java_lang_String_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2 102
typedef jobject (*func_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_crs_arc_math_geom_Vec2_R_float 103
typedef jfloat (*func_arc_math_geom_Vec2_crs_arc_math_geom_Vec2_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_crs_float_float_R_float 104
typedef jfloat (*func_arc_math_geom_Vec2_crs_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_angle_R_float 105
typedef jfloat (*func_arc_math_geom_Vec2_angle_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_angle_arc_math_geom_Vec2_R_float 106
typedef jfloat (*func_arc_math_geom_Vec2_angle_arc_math_geom_Vec2_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2 107
typedef jobject (*func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_angleRad_R_float 108
typedef jfloat (*func_arc_math_geom_Vec2_angleRad_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_angleRad_arc_math_geom_Vec2_R_float 109
typedef jfloat (*func_arc_math_geom_Vec2_angleRad_arc_math_geom_Vec2_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2 110
typedef jobject (*func_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_setAngleRad_float_R_arc_math_geom_Vec2 111
typedef jobject (*func_arc_math_geom_Vec2_setAngleRad_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_rotateTo_float_float_R_arc_math_geom_Vec2 112
typedef jobject (*func_arc_math_geom_Vec2_rotateTo_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2 113
typedef jobject (*func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_rotateAround_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2 114
typedef jobject (*func_arc_math_geom_Vec2_rotateAround_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_rotateRad_float_R_arc_math_geom_Vec2 115
typedef jobject (*func_arc_math_geom_Vec2_rotateRad_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2 116
typedef jobject (*func_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Vec2_rotateAroundRad_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2 117
typedef jobject (*func_arc_math_geom_Vec2_rotateAroundRad_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_rotate90_int_R_arc_math_geom_Vec2 118
typedef jobject (*func_arc_math_geom_Vec2_rotate90_int_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2 119
typedef jobject (*func_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_approach_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2 120
typedef jobject (*func_arc_math_geom_Vec2_approach_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_lerpPast_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2 121
typedef jobject (*func_arc_math_geom_Vec2_lerpPast_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_lerpDelta_float_float_float_R_arc_math_geom_Vec2 122
typedef jobject (*func_arc_math_geom_Vec2_lerpDelta_float_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2 123
typedef jobject (*func_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_lerp_arc_math_geom_Position_float_R_arc_math_geom_Vec2 124
typedef jobject (*func_arc_math_geom_Vec2_lerp_arc_math_geom_Position_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_lerp_float_float_float_R_arc_math_geom_Vec2 125
typedef jobject (*func_arc_math_geom_Vec2_lerp_float_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2 126
typedef jobject (*func_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_interpolate_arc_math_geom_Vec2_float_arc_math_Interp_R_arc_math_geom_Vec2 127
typedef jobject (*func_arc_math_geom_Vec2_interpolate_arc_math_geom_Vec2_float_arc_math_Interp_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
#define VTABLE_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2 128
typedef jobject (*func_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec2 129
typedef jobject (*func_arc_math_geom_Vec2_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_float_R_boolean 130
typedef jbool (*func_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_epsilonEquals_float_float_float_R_boolean 131
typedef jbool (*func_arc_math_geom_Vec2_epsilonEquals_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_R_boolean 132
typedef jbool (*func_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_epsilonEquals_float_float_R_boolean 133
typedef jbool (*func_arc_math_geom_Vec2_epsilonEquals_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_isNaN_R_boolean 134
typedef jbool (*func_arc_math_geom_Vec2_isNaN_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_isInfinite_R_boolean 135
typedef jbool (*func_arc_math_geom_Vec2_isInfinite_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_R_boolean 136
typedef jbool (*func_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_float_R_boolean 137
typedef jbool (*func_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_float_R_boolean 138
typedef jbool (*func_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_R_boolean 139
typedef jbool (*func_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_float_R_boolean 140
typedef jbool (*func_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_R_boolean 141
typedef jbool (*func_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_R_boolean 142
typedef jbool (*func_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_float_R_boolean 143
typedef jbool (*func_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Vec2_hasSameDirection_arc_math_geom_Vec2_R_boolean 144
typedef jbool (*func_arc_math_geom_Vec2_hasSameDirection_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_hasOppositeDirection_arc_math_geom_Vec2_R_boolean 145
typedef jbool (*func_arc_math_geom_Vec2_hasOppositeDirection_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2 146
typedef jobject (*func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);

void mark_arc_math_geom_Vec2(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Vec2(jcontext ctx);
void init_arc_math_geom_Vec2(jcontext ctx, jobject self);
void init_arc_math_geom_Vec2_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void init_arc_math_geom_Vec2_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Vec2_snap_R_arc_math_geom_Vec2(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec2_div_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Vec2_len_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Vec2_len2_R_float(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Vec2_set_arc_math_geom_Vec3_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Vec2_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_add_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jfloat M_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Vec2_dot_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec2_inv_R_arc_math_geom_Vec2(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec2_scl_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Vec2_scl_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1);
jfloat M_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Vec2_dst_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jfloat M_arc_math_geom_Vec2_dst2_arc_math_geom_Vec2_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Vec2_dst2_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec2_clamp_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec2_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Vec2_tryFromString_java_lang_String_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_fromString_java_lang_String_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Vec2_crs_arc_math_geom_Vec2_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Vec2_crs_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jfloat M_arc_math_geom_Vec2_angle_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Vec2_angle_arc_math_geom_Vec2_R_float(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_math_geom_Vec2_angleRad_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Vec2_angleRad_arc_math_geom_Vec2_R_float(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec2_setAngleRad_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec2_rotateTo_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec2_rotateAround_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec2_rotateRad_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec2_rotateAroundRad_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec2_rotate90_int_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jint param0);
jobject M_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec2_approach_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec2_lerpPast_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec2_lerpDelta_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec2_lerp_arc_math_geom_Position_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec2_lerp_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec2_interpolate_arc_math_geom_Vec2_float_arc_math_Interp_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
jobject M_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec2_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jint M_arc_math_geom_Vec2_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_math_geom_Vec2_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec2_epsilonEquals_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jbool M_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec2_epsilonEquals_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_arc_math_geom_Vec2_isNaN_R_boolean(jcontext ctx, jobject self);
jbool M_arc_math_geom_Vec2_isInfinite_R_boolean(jcontext ctx, jobject self);
jbool M_arc_math_geom_Vec2_isUnit_R_boolean(jcontext ctx, jobject self);
jbool M_arc_math_geom_Vec2_isUnit_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_math_geom_Vec2_isZero_R_boolean(jcontext ctx, jobject self);
jbool M_arc_math_geom_Vec2_isZero_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec2_hasSameDirection_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec2_hasOppositeDirection_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Vec2_getX_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Vec2_getY_R_float(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vector(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vector_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec2_hasOppositeDirection_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec2_hasSameDirection_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vector(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec2_interpolate_arc_math_geom_Vector_float_arc_math_Interp_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
jobject M_arc_math_geom_Vec2_lerp_arc_math_geom_Vector_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1);
jfloat M_arc_math_geom_Vec2_dst2_arc_math_geom_Vector_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Vec2_dst_arc_math_geom_Vector_R_float(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_div_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_scl_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_math_geom_Vec2_dot_arc_math_geom_Vector_R_float(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_add_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_nor_R_arc_math_geom_Vector(jcontext ctx, jobject self);
jobject M_arc_math_geom_Vec2_sub_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_set_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Vec2_clamp_float_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vector(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
