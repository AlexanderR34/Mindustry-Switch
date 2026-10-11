#ifndef HEADER_arc_graphics_Color
#define HEADER_arc_graphics_Color

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_Color {
	java_lang_Object parent;
	jfloat F_r;
	jfloat F_g;
	jfloat F_b;
	jfloat F_a;
} arc_graphics_Color;

extern Class class_arc_graphics_Color;

extern jobject SF_arc_graphics_Color_white;
extern jobject SF_arc_graphics_Color_lightGray;
extern jobject SF_arc_graphics_Color_gray;
extern jobject SF_arc_graphics_Color_darkGray;
extern jobject SF_arc_graphics_Color_black;
extern jobject SF_arc_graphics_Color_clear;
extern jfloat SF_arc_graphics_Color_whiteFloatBits;
extern jfloat SF_arc_graphics_Color_clearFloatBits;
extern jfloat SF_arc_graphics_Color_blackFloatBits;
extern jint SF_arc_graphics_Color_whiteRgba;
extern jint SF_arc_graphics_Color_clearRgba;
extern jint SF_arc_graphics_Color_blackRgba;
extern jobject SF_arc_graphics_Color_blue;
extern jobject SF_arc_graphics_Color_navy;
extern jobject SF_arc_graphics_Color_royal;
extern jobject SF_arc_graphics_Color_slate;
extern jobject SF_arc_graphics_Color_sky;
extern jobject SF_arc_graphics_Color_cyan;
extern jobject SF_arc_graphics_Color_teal;
extern jobject SF_arc_graphics_Color_green;
extern jobject SF_arc_graphics_Color_acid;
extern jobject SF_arc_graphics_Color_lime;
extern jobject SF_arc_graphics_Color_forest;
extern jobject SF_arc_graphics_Color_olive;
extern jobject SF_arc_graphics_Color_yellow;
extern jobject SF_arc_graphics_Color_gold;
extern jobject SF_arc_graphics_Color_goldenrod;
extern jobject SF_arc_graphics_Color_orange;
extern jobject SF_arc_graphics_Color_brown;
extern jobject SF_arc_graphics_Color_tan;
extern jobject SF_arc_graphics_Color_brick;
extern jobject SF_arc_graphics_Color_red;
extern jobject SF_arc_graphics_Color_scarlet;
extern jobject SF_arc_graphics_Color_crimson;
extern jobject SF_arc_graphics_Color_coral;
extern jobject SF_arc_graphics_Color_salmon;
extern jobject SF_arc_graphics_Color_pink;
extern jobject SF_arc_graphics_Color_magenta;
extern jobject SF_arc_graphics_Color_purple;
extern jobject SF_arc_graphics_Color_violet;
extern jobject SF_arc_graphics_Color_maroon;
extern jobject SF_arc_graphics_Color_tmpHSV;

#define VTABLE_arc_graphics_Color_hashCode_R_int 0
typedef jint (*func_arc_graphics_Color_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_Color_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Color_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_Color_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_Color_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_Color_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_finalize 5
typedef void (*func_arc_graphics_Color_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_notify 6
typedef void (*func_arc_graphics_Color_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_notifyAll 7
typedef void (*func_arc_graphics_Color_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_wait 8
typedef void (*func_arc_graphics_Color_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_wait_long 9
typedef void (*func_arc_graphics_Color_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_Color_wait_long_int 10
typedef void (*func_arc_graphics_Color_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color 11
typedef jobject (*func_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_arc_graphics_Color_rgb565_R_int 12
typedef jint (*func_arc_graphics_Color_rgb565_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_rgba4444_R_int 13
typedef jint (*func_arc_graphics_Color_rgba4444_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_rgb888_R_int 14
typedef jint (*func_arc_graphics_Color_rgb888_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_rgba8888_R_int 15
typedef jint (*func_arc_graphics_Color_rgba8888_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_argb8888_R_int 16
typedef jint (*func_arc_graphics_Color_argb8888_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_rgb565_int_R_arc_graphics_Color 17
typedef jobject (*func_arc_graphics_Color_rgb565_int_R_arc_graphics_Color)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_Color_rgba4444_int_R_arc_graphics_Color 18
typedef jobject (*func_arc_graphics_Color_rgba4444_int_R_arc_graphics_Color)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_Color_rgb888_int_R_arc_graphics_Color 19
typedef jobject (*func_arc_graphics_Color_rgb888_int_R_arc_graphics_Color)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color 20
typedef jobject (*func_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_Color_argb8888_int_R_arc_graphics_Color 21
typedef jobject (*func_arc_graphics_Color_argb8888_int_R_arc_graphics_Color)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_Color_abgr8888_float_R_arc_graphics_Color 22
typedef jobject (*func_arc_graphics_Color_abgr8888_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_Color_rand_R_arc_graphics_Color 23
typedef jobject (*func_arc_graphics_Color_rand_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_randHue_R_arc_graphics_Color 24
typedef jobject (*func_arc_graphics_Color_randHue_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_diff_arc_graphics_Color_R_float 25
typedef jfloat (*func_arc_graphics_Color_diff_arc_graphics_Color_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Color_rgba_R_int 26
typedef jint (*func_arc_graphics_Color_rgba_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color 27
typedef jobject (*func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Color_set_arc_math_geom_Vec3_R_arc_graphics_Color 28
typedef jobject (*func_arc_graphics_Color_set_arc_math_geom_Vec3_R_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color 29
typedef jobject (*func_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color 30
typedef jobject (*func_arc_graphics_Color_mul_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_Color_mula_float_R_arc_graphics_Color 31
typedef jobject (*func_arc_graphics_Color_mula_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_Color_add_arc_graphics_Color_R_arc_graphics_Color 32
typedef jobject (*func_arc_graphics_Color_add_arc_graphics_Color_R_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Color_sub_arc_graphics_Color_R_arc_graphics_Color 33
typedef jobject (*func_arc_graphics_Color_sub_arc_graphics_Color_R_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Color_clamp_R_arc_graphics_Color 34
typedef jobject (*func_arc_graphics_Color_clamp_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color 35
typedef jobject (*func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_Color_set_float_float_float_R_arc_graphics_Color 36
typedef jobject (*func_arc_graphics_Color_set_float_float_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_Color_set_int_R_arc_graphics_Color 37
typedef jobject (*func_arc_graphics_Color_set_int_R_arc_graphics_Color)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_Color_sum_R_float 38
typedef jfloat (*func_arc_graphics_Color_sum_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_add_float_float_float_float_R_arc_graphics_Color 39
typedef jobject (*func_arc_graphics_Color_add_float_float_float_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_Color_add_float_float_float_R_arc_graphics_Color 40
typedef jobject (*func_arc_graphics_Color_add_float_float_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_Color_sub_float_float_float_float_R_arc_graphics_Color 41
typedef jobject (*func_arc_graphics_Color_sub_float_float_float_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_Color_sub_float_float_float_R_arc_graphics_Color 42
typedef jobject (*func_arc_graphics_Color_sub_float_float_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_Color_inv_R_arc_graphics_Color 43
typedef jobject (*func_arc_graphics_Color_inv_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_r_float_R_arc_graphics_Color 44
typedef jobject (*func_arc_graphics_Color_r_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_Color_g_float_R_arc_graphics_Color 45
typedef jobject (*func_arc_graphics_Color_g_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_Color_b_float_R_arc_graphics_Color 46
typedef jobject (*func_arc_graphics_Color_b_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color 47
typedef jobject (*func_arc_graphics_Color_a_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_Color_mulA_float_R_arc_graphics_Color 48
typedef jobject (*func_arc_graphics_Color_mulA_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_Color_mul_float_float_float_float_R_arc_graphics_Color 49
typedef jobject (*func_arc_graphics_Color_mul_float_float_float_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color 50
typedef jobject (*func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_graphics_Color_lerp_float_float_float_float_float_R_arc_graphics_Color 51
typedef jobject (*func_arc_graphics_Color_lerp_float_float_float_float_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_graphics_Color_premultiplyAlpha_R_arc_graphics_Color 52
typedef jobject (*func_arc_graphics_Color_premultiplyAlpha_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_dst_arc_graphics_Color_R_float 53
typedef jfloat (*func_arc_graphics_Color_dst_arc_graphics_Color_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color 54
typedef jobject (*func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Color_hue_R_float 55
typedef jfloat (*func_arc_graphics_Color_hue_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_saturation_R_float 56
typedef jfloat (*func_arc_graphics_Color_saturation_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_value_R_float 57
typedef jfloat (*func_arc_graphics_Color_value_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_hue_float_R_arc_graphics_Color 58
typedef jobject (*func_arc_graphics_Color_hue_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_Color_saturation_float_R_arc_graphics_Color 59
typedef jobject (*func_arc_graphics_Color_saturation_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_Color_value_float_R_arc_graphics_Color 60
typedef jobject (*func_arc_graphics_Color_value_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_Color_shiftHue_float_R_arc_graphics_Color 61
typedef jobject (*func_arc_graphics_Color_shiftHue_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_Color_shiftSaturation_float_R_arc_graphics_Color 62
typedef jobject (*func_arc_graphics_Color_shiftSaturation_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_Color_shiftValue_float_R_arc_graphics_Color 63
typedef jobject (*func_arc_graphics_Color_shiftValue_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_Color_toFloatBits_R_float 64
typedef jfloat (*func_arc_graphics_Color_toFloatBits_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_toDoubleBits_R_double 65
typedef jdouble (*func_arc_graphics_Color_toDoubleBits_R_double)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_abgr_R_int 66
typedef jint (*func_arc_graphics_Color_abgr_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_toString_java_lang_StringBuilder 67
typedef void (*func_arc_graphics_Color_toString_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color 68
typedef jobject (*func_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color 69
typedef jobject (*func_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Color_toHsv_Array1_float_R_Array1_float 70
typedef jobject (*func_arc_graphics_Color_toHsv_Array1_float_R_Array1_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color 71
typedef jobject (*func_arc_graphics_Color_cpy_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Color_lerp_Array1_arc_graphics_Color_float_R_arc_graphics_Color 72
typedef jobject (*func_arc_graphics_Color_lerp_Array1_arc_graphics_Color_float_R_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jfloat param1);

void mark_arc_graphics_Color(jobject object, jint mark, jint depth);
void clinit_arc_graphics_Color(jcontext ctx);
void init_arc_graphics_Color(jcontext ctx, jobject self);
void init_arc_graphics_Color_int(jcontext ctx, jobject self, jint param0);
void init_arc_graphics_Color_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void init_arc_graphics_Color_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void init_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
jobject SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(jcontext ctx, jobject param0);
jobject SM_arc_graphics_Color_valueOf_arc_graphics_Color_java_lang_String_R_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1);
jint SM_arc_graphics_Color_parseHex_java_lang_String_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2);
jfloat SM_arc_graphics_Color_toFloatBits_int_int_int_int_R_float(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jfloat SM_arc_graphics_Color_toFloatBits_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jdouble SM_arc_graphics_Color_toDoubleBits_float_float_float_float_R_double(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jdouble SM_arc_graphics_Color_toDoubleBits_int_int_int_int_R_double(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jobject M_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color(jcontext ctx, jobject self, jdouble param0);
jint SM_arc_graphics_Color_abgr_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jint SM_arc_graphics_Color_alpha_float_R_int(jcontext ctx, jfloat param0);
jint SM_arc_graphics_Color_luminanceAlpha_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1);
jint SM_arc_graphics_Color_rgb565_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jint SM_arc_graphics_Color_rgba4444_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jint SM_arc_graphics_Color_rgb888_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jint SM_arc_graphics_Color_rgba8888_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jint SM_arc_graphics_Color_argb8888_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jint SM_arc_graphics_Color_packRgba_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jint M_arc_graphics_Color_rgb565_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_Color_rgba4444_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_Color_rgb888_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_Color_rgba8888_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_Color_argb8888_R_int(jcontext ctx, jobject self);
jobject M_arc_graphics_Color_rgb565_int_R_arc_graphics_Color(jcontext ctx, jobject self, jint param0);
jobject M_arc_graphics_Color_rgba4444_int_R_arc_graphics_Color(jcontext ctx, jobject self, jint param0);
jobject M_arc_graphics_Color_rgb888_int_R_arc_graphics_Color(jcontext ctx, jobject self, jint param0);
jobject M_arc_graphics_Color_rgba8888_int_R_arc_graphics_Color(jcontext ctx, jobject self, jint param0);
jobject M_arc_graphics_Color_argb8888_int_R_arc_graphics_Color(jcontext ctx, jobject self, jint param0);
jobject M_arc_graphics_Color_abgr8888_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0);
jobject SM_arc_graphics_Color_grays_float_R_arc_graphics_Color(jcontext ctx, jfloat param0);
jobject SM_arc_graphics_Color_rgb_int_int_int_R_arc_graphics_Color(jcontext ctx, jint param0, jint param1, jint param2);
jint SM_arc_graphics_Color_floatToIntColor_float_R_int(jcontext ctx, jfloat param0);
jfloat SM_arc_graphics_Color_intToFloatColor_int_R_float(jcontext ctx, jint param0);
jobject M_arc_graphics_Color_rand_R_arc_graphics_Color(jcontext ctx, jobject self);
jobject M_arc_graphics_Color_randHue_R_arc_graphics_Color(jcontext ctx, jobject self);
jfloat M_arc_graphics_Color_diff_arc_graphics_Color_R_float(jcontext ctx, jobject self, jobject param0);
jint M_arc_graphics_Color_rgba_R_int(jcontext ctx, jobject self);
jobject M_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_Color_set_arc_math_geom_Vec3_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_Color_mul_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_graphics_Color_mula_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_graphics_Color_add_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_Color_sub_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_Color_clamp_R_arc_graphics_Color(jcontext ctx, jobject self);
jobject M_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_graphics_Color_set_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_graphics_Color_set_int_R_arc_graphics_Color(jcontext ctx, jobject self, jint param0);
jfloat M_arc_graphics_Color_sum_R_float(jcontext ctx, jobject self);
jobject M_arc_graphics_Color_add_float_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_graphics_Color_add_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_graphics_Color_sub_float_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_graphics_Color_sub_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_graphics_Color_inv_R_arc_graphics_Color(jcontext ctx, jobject self);
jobject M_arc_graphics_Color_r_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_graphics_Color_g_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_graphics_Color_b_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_graphics_Color_a_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_graphics_Color_mulA_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_graphics_Color_mul_float_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_graphics_Color_lerp_float_float_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jobject M_arc_graphics_Color_premultiplyAlpha_R_arc_graphics_Color(jcontext ctx, jobject self);
jfloat M_arc_graphics_Color_dst_arc_graphics_Color_R_float(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_graphics_Color_hue_R_float(jcontext ctx, jobject self);
jfloat M_arc_graphics_Color_saturation_R_float(jcontext ctx, jobject self);
jfloat M_arc_graphics_Color_value_R_float(jcontext ctx, jobject self);
jobject M_arc_graphics_Color_hue_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_graphics_Color_saturation_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_graphics_Color_value_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_graphics_Color_shiftHue_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_graphics_Color_shiftSaturation_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_graphics_Color_shiftValue_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_graphics_Color_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_arc_graphics_Color_hashCode_R_int(jcontext ctx, jobject self);
jfloat M_arc_graphics_Color_toFloatBits_R_float(jcontext ctx, jobject self);
jdouble M_arc_graphics_Color_toDoubleBits_R_double(jcontext ctx, jobject self);
jint M_arc_graphics_Color_abgr_R_int(jcontext ctx, jobject self);
jobject M_arc_graphics_Color_toString_R_java_lang_String(jcontext ctx, jobject self);
void M_arc_graphics_Color_toString_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_graphics_Color_fromHsv_Array1_float_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_Color_toHsv_Array1_float_R_Array1_float(jcontext ctx, jobject self, jobject param0);
jobject SM_arc_graphics_Color_HSVtoRGB_float_float_float_float_R_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject SM_arc_graphics_Color_HSVtoRGB_float_float_float_R_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jobject SM_arc_graphics_Color_HSVtoRGB_float_float_float_arc_graphics_Color_R_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3);
jobject SM_arc_graphics_Color_RGBtoHSV_arc_graphics_Color_R_Array1_int(jcontext ctx, jobject param0);
jobject SM_arc_graphics_Color_RGBtoHSV_float_float_float_R_Array1_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_graphics_Color_cpy_R_arc_graphics_Color(jcontext ctx, jobject self);
jobject M_arc_graphics_Color_lerp_Array1_arc_graphics_Color_float_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jfloat param1);
jint SM_arc_graphics_Color_clampf_float_R_int(jcontext ctx, jfloat param0);
jint SM_arc_graphics_Color_ri_int_R_int(jcontext ctx, jint param0);
jint SM_arc_graphics_Color_gi_int_R_int(jcontext ctx, jint param0);
jint SM_arc_graphics_Color_bi_int_R_int(jcontext ctx, jint param0);
jint SM_arc_graphics_Color_ai_int_R_int(jcontext ctx, jint param0);
jint SM_arc_graphics_Color_muli_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_arc_graphics_Color_muli_int_float_R_int(jcontext ctx, jint param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
