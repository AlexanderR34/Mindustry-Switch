#ifndef HEADER_arc_math_geom_Rect
#define HEADER_arc_math_geom_Rect

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Shape2D.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Rect {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jfloat F_width;
	jfloat F_height;
} arc_math_geom_Rect;

extern Class class_arc_math_geom_Rect;

extern jobject SF_arc_math_geom_Rect_tmp;
extern jobject SF_arc_math_geom_Rect_tmp2;

#define VTABLE_arc_math_geom_Rect_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Rect_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Rect_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Rect_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Rect_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Rect_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Rect_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Rect_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Rect_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Rect_finalize 5
typedef void (*func_arc_math_geom_Rect_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Rect_notify 6
typedef void (*func_arc_math_geom_Rect_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Rect_notifyAll 7
typedef void (*func_arc_math_geom_Rect_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Rect_wait 8
typedef void (*func_arc_math_geom_Rect_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Rect_wait_long 9
typedef void (*func_arc_math_geom_Rect_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Rect_wait_long_int 10
typedef void (*func_arc_math_geom_Rect_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_Rect_contains_arc_math_geom_Vec2_R_boolean 11
typedef jbool (*func_arc_math_geom_Rect_contains_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_contains_float_float_R_boolean 12
typedef jbool (*func_arc_math_geom_Rect_contains_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect 13
typedef jobject (*func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect 14
typedef jobject (*func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect 15
typedef jobject (*func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Rect_getX_R_float 16
typedef jfloat (*func_arc_math_geom_Rect_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Rect_setX_float_R_arc_math_geom_Rect 17
typedef jobject (*func_arc_math_geom_Rect_setX_float_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Rect_getY_R_float 18
typedef jfloat (*func_arc_math_geom_Rect_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Rect_setY_float_R_arc_math_geom_Rect 19
typedef jobject (*func_arc_math_geom_Rect_setY_float_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Rect_getWidth_R_float 20
typedef jfloat (*func_arc_math_geom_Rect_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Rect_setWidth_float_R_arc_math_geom_Rect 21
typedef jobject (*func_arc_math_geom_Rect_setWidth_float_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Rect_getHeight_R_float 22
typedef jfloat (*func_arc_math_geom_Rect_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Rect_setHeight_float_R_arc_math_geom_Rect 23
typedef jobject (*func_arc_math_geom_Rect_setHeight_float_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Rect_getPosition_arc_math_geom_Vec2_R_arc_math_geom_Vec2 24
typedef jobject (*func_arc_math_geom_Rect_getPosition_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_setPosition_arc_math_geom_Vec2_R_arc_math_geom_Rect 25
typedef jobject (*func_arc_math_geom_Rect_setPosition_arc_math_geom_Vec2_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect 26
typedef jobject (*func_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Rect_move_float_float_R_arc_math_geom_Rect 27
typedef jobject (*func_arc_math_geom_Rect_move_float_float_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect 28
typedef jobject (*func_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect 29
typedef jobject (*func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Rect_getSize_arc_math_geom_Vec2_R_arc_math_geom_Vec2 30
typedef jobject (*func_arc_math_geom_Rect_getSize_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_contains_arc_math_geom_Circle_R_boolean 31
typedef jbool (*func_arc_math_geom_Rect_contains_arc_math_geom_Circle_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_contains_arc_math_geom_Rect_R_boolean 32
typedef jbool (*func_arc_math_geom_Rect_contains_arc_math_geom_Rect_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean 33
typedef jbool (*func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean 34
typedef jbool (*func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Rect_set_arc_math_geom_Rect_R_arc_math_geom_Rect 35
typedef jobject (*func_arc_math_geom_Rect_set_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect 36
typedef jobject (*func_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Rect_grow_float_float_R_arc_math_geom_Rect 37
typedef jobject (*func_arc_math_geom_Rect_grow_float_float_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Rect_merge_arc_math_geom_Rect_R_arc_math_geom_Rect 38
typedef jobject (*func_arc_math_geom_Rect_merge_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect 39
typedef jobject (*func_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Rect_merge_float_float_R_arc_math_geom_Rect 40
typedef jobject (*func_arc_math_geom_Rect_merge_float_float_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Rect_merge_arc_math_geom_Vec2_R_arc_math_geom_Rect 41
typedef jobject (*func_arc_math_geom_Rect_merge_arc_math_geom_Vec2_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_merge_Array1_arc_math_geom_Vec2_R_arc_math_geom_Rect 42
typedef jobject (*func_arc_math_geom_Rect_merge_Array1_arc_math_geom_Vec2_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_getAspectRatio_R_float 43
typedef jfloat (*func_arc_math_geom_Rect_getAspectRatio_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Rect_getCenter_arc_math_geom_Vec2_R_arc_math_geom_Vec2 44
typedef jobject (*func_arc_math_geom_Rect_getCenter_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect 45
typedef jobject (*func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Rect_setCenter_arc_math_geom_Vec2_R_arc_math_geom_Rect 46
typedef jobject (*func_arc_math_geom_Rect_setCenter_arc_math_geom_Vec2_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_fitOutside_arc_math_geom_Rect_R_arc_math_geom_Rect 47
typedef jobject (*func_arc_math_geom_Rect_fitOutside_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_fitInside_arc_math_geom_Rect_R_arc_math_geom_Rect 48
typedef jobject (*func_arc_math_geom_Rect_fitInside_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_fromString_java_lang_String_R_arc_math_geom_Rect 49
typedef jobject (*func_arc_math_geom_Rect_fromString_java_lang_String_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Rect_area_R_float 50
typedef jfloat (*func_arc_math_geom_Rect_area_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Rect_perimeter_R_float 51
typedef jfloat (*func_arc_math_geom_Rect_perimeter_R_float)(jcontext ctx, jobject self);

void mark_arc_math_geom_Rect(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Rect(jcontext ctx);
void init_arc_math_geom_Rect(jcontext ctx, jobject self);
void init_arc_math_geom_Rect_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void init_arc_math_geom_Rect_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jfloat M_arc_math_geom_Rect_getX_R_float(jcontext ctx, jobject self);
jobject M_arc_math_geom_Rect_setX_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_math_geom_Rect_getY_R_float(jcontext ctx, jobject self);
jobject M_arc_math_geom_Rect_setY_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_math_geom_Rect_getWidth_R_float(jcontext ctx, jobject self);
jobject M_arc_math_geom_Rect_setWidth_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_math_geom_Rect_getHeight_R_float(jcontext ctx, jobject self);
jobject M_arc_math_geom_Rect_setHeight_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Rect_getPosition_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Rect_setPosition_arc_math_geom_Vec2_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Rect_move_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Rect_getSize_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jbool SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jbool SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
jbool M_arc_math_geom_Rect_contains_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_arc_math_geom_Rect_contains_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Rect_contains_arc_math_geom_Circle_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Rect_contains_arc_math_geom_Rect_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Rect_set_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_math_geom_Rect_grow_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Rect_merge_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect(jcontext ctx, jobject self);
jobject M_arc_math_geom_Rect_merge_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Rect_merge_arc_math_geom_Vec2_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Rect_merge_Array1_arc_math_geom_Vec2_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Rect_getAspectRatio_R_float(jcontext ctx, jobject self);
jobject M_arc_math_geom_Rect_getCenter_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_math_geom_Rect_setCenter_arc_math_geom_Vec2_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Rect_fitOutside_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Rect_fitInside_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Rect_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_math_geom_Rect_fromString_java_lang_String_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Rect_area_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Rect_perimeter_R_float(jcontext ctx, jobject self);
jint M_arc_math_geom_Rect_hashCode_R_int(jcontext ctx, jobject self);
jbool M_arc_math_geom_Rect_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
