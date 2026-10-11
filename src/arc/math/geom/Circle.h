#ifndef HEADER_arc_math_geom_Circle
#define HEADER_arc_math_geom_Circle

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Shape2D.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Circle {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jfloat F_radius;
} arc_math_geom_Circle;

extern Class class_arc_math_geom_Circle;


#define VTABLE_arc_math_geom_Circle_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Circle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Circle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Circle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Circle_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Circle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Circle_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Circle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Circle_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Circle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Circle_finalize 5
typedef void (*func_arc_math_geom_Circle_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Circle_notify 6
typedef void (*func_arc_math_geom_Circle_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Circle_notifyAll 7
typedef void (*func_arc_math_geom_Circle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Circle_wait 8
typedef void (*func_arc_math_geom_Circle_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Circle_wait_long 9
typedef void (*func_arc_math_geom_Circle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Circle_wait_long_int 10
typedef void (*func_arc_math_geom_Circle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_Circle_contains_arc_math_geom_Vec2_R_boolean 11
typedef jbool (*func_arc_math_geom_Circle_contains_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Circle_contains_float_float_R_boolean 12
typedef jbool (*func_arc_math_geom_Circle_contains_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Circle_set_float_float_float_R_arc_math_geom_Circle 13
typedef jobject (*func_arc_math_geom_Circle_set_float_float_float_R_arc_math_geom_Circle)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Circle_set_arc_math_geom_Vec2_float_R_arc_math_geom_Circle 14
typedef jobject (*func_arc_math_geom_Circle_set_arc_math_geom_Vec2_float_R_arc_math_geom_Circle)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Circle_set_arc_math_geom_Circle_R_arc_math_geom_Circle 15
typedef jobject (*func_arc_math_geom_Circle_set_arc_math_geom_Circle_R_arc_math_geom_Circle)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Circle_set_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Circle 16
typedef jobject (*func_arc_math_geom_Circle_set_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Circle)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Circle_setPosition_arc_math_geom_Vec2_R_arc_math_geom_Circle 17
typedef jobject (*func_arc_math_geom_Circle_setPosition_arc_math_geom_Vec2_R_arc_math_geom_Circle)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Circle_setPosition_float_float_R_arc_math_geom_Circle 18
typedef jobject (*func_arc_math_geom_Circle_setPosition_float_float_R_arc_math_geom_Circle)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_geom_Circle_setX_float 19
typedef void (*func_arc_math_geom_Circle_setX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Circle_setY_float 20
typedef void (*func_arc_math_geom_Circle_setY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Circle_setRadius_float 21
typedef void (*func_arc_math_geom_Circle_setRadius_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_geom_Circle_contains_arc_math_geom_Circle_R_boolean 22
typedef jbool (*func_arc_math_geom_Circle_contains_arc_math_geom_Circle_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Circle_overlaps_arc_math_geom_Circle_R_boolean 23
typedef jbool (*func_arc_math_geom_Circle_overlaps_arc_math_geom_Circle_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Circle_circumference_R_float 24
typedef jfloat (*func_arc_math_geom_Circle_circumference_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Circle_area_R_float 25
typedef jfloat (*func_arc_math_geom_Circle_area_R_float)(jcontext ctx, jobject self);

void mark_arc_math_geom_Circle(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Circle(jcontext ctx);
void init_arc_math_geom_Circle(jcontext ctx, jobject self);
void init_arc_math_geom_Circle_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void init_arc_math_geom_Circle_arc_math_geom_Vec2_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void init_arc_math_geom_Circle_arc_math_geom_Circle(jcontext ctx, jobject self, jobject param0);
void init_arc_math_geom_Circle_arc_math_geom_Vec2_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_geom_Circle_set_float_float_float_R_arc_math_geom_Circle(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jobject M_arc_math_geom_Circle_set_arc_math_geom_Vec2_float_R_arc_math_geom_Circle(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Circle_set_arc_math_geom_Circle_R_arc_math_geom_Circle(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Circle_set_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Circle(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_geom_Circle_setPosition_arc_math_geom_Vec2_R_arc_math_geom_Circle(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Circle_setPosition_float_float_R_arc_math_geom_Circle(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_math_geom_Circle_setX_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_math_geom_Circle_setY_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_math_geom_Circle_setRadius_float(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_math_geom_Circle_contains_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_arc_math_geom_Circle_contains_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Circle_contains_arc_math_geom_Circle_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Circle_overlaps_arc_math_geom_Circle_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Circle_toString_R_java_lang_String(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Circle_circumference_R_float(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Circle_area_R_float(jcontext ctx, jobject self);
jbool M_arc_math_geom_Circle_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_arc_math_geom_Circle_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
