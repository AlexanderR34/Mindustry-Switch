#ifndef HEADER_arc_graphics_Camera
#define HEADER_arc_graphics_Camera

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_Camera {
	java_lang_Object parent;
	jref F_position;
	jref F_mat;
	jref F_inv;
	jfloat F_width;
	jfloat F_height;
} arc_graphics_Camera;

extern Class class_arc_graphics_Camera;

extern jobject SF_arc_graphics_Camera_tmpVector;

#define VTABLE_arc_graphics_Camera_hashCode_R_int 0
typedef jint (*func_arc_graphics_Camera_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Camera_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_Camera_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Camera_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_Camera_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Camera_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_Camera_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Camera_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_Camera_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Camera_finalize 5
typedef void (*func_arc_graphics_Camera_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Camera_notify 6
typedef void (*func_arc_graphics_Camera_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Camera_notifyAll 7
typedef void (*func_arc_graphics_Camera_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Camera_wait 8
typedef void (*func_arc_graphics_Camera_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Camera_wait_long 9
typedef void (*func_arc_graphics_Camera_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_Camera_wait_long_int 10
typedef void (*func_arc_graphics_Camera_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_Camera_update 11
typedef void (*func_arc_graphics_Camera_update)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Camera_resize_float_float 12
typedef void (*func_arc_graphics_Camera_resize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_graphics_Camera_unproject_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2 13
typedef jobject (*func_arc_graphics_Camera_unproject_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_graphics_Camera_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2 14
typedef jobject (*func_arc_graphics_Camera_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Camera_unproject_float_float_R_arc_math_geom_Vec2 15
typedef jobject (*func_arc_graphics_Camera_unproject_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_graphics_Camera_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2 16
typedef jobject (*func_arc_graphics_Camera_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Camera_project_float_float_R_arc_math_geom_Vec2 17
typedef jobject (*func_arc_graphics_Camera_project_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2 18
typedef jobject (*func_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect 19
typedef jobject (*func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);

void mark_arc_graphics_Camera(jobject object, jint mark, jint depth);
void clinit_arc_graphics_Camera(jcontext ctx);
void init_arc_graphics_Camera(jcontext ctx, jobject self);
void M_arc_graphics_Camera_update(jcontext ctx, jobject self);
void M_arc_graphics_Camera_resize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_graphics_Camera_unproject_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jobject M_arc_graphics_Camera_unproject_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_Camera_unproject_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_graphics_Camera_project_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_Camera_project_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jobject M_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
