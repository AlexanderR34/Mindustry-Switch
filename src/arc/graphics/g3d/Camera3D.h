#ifndef HEADER_arc_graphics_g3d_Camera3D
#define HEADER_arc_graphics_g3d_Camera3D

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g3d_Camera3D {
	java_lang_Object parent;
	jfloat F_fov;
	jfloat F_near;
	jfloat F_far;
	jbool F_perspective;
	jfloat F_width;
	jfloat F_height;
	jref F_position;
	jref F_direction;
	jref F_up;
	jref F_combined;
	jref F_projection;
	jref F_view;
	jref F_invProjectionView;
	jref F_frustum;
	jref F_tmpVec;
	jref F_ray;
} arc_graphics_g3d_Camera3D;

extern Class class_arc_graphics_g3d_Camera3D;


#define VTABLE_arc_graphics_g3d_Camera3D_hashCode_R_int 0
typedef jint (*func_arc_graphics_g3d_Camera3D_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_Camera3D_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g3d_Camera3D_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_Camera3D_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g3d_Camera3D_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_Camera3D_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g3d_Camera3D_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_Camera3D_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g3d_Camera3D_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_Camera3D_finalize 5
typedef void (*func_arc_graphics_g3d_Camera3D_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_Camera3D_notify 6
typedef void (*func_arc_graphics_g3d_Camera3D_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_Camera3D_notifyAll 7
typedef void (*func_arc_graphics_g3d_Camera3D_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_Camera3D_wait 8
typedef void (*func_arc_graphics_g3d_Camera3D_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_Camera3D_wait_long 9
typedef void (*func_arc_graphics_g3d_Camera3D_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g3d_Camera3D_wait_long_int 10
typedef void (*func_arc_graphics_g3d_Camera3D_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g3d_Camera3D_update 11
typedef void (*func_arc_graphics_g3d_Camera3D_update)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_Camera3D_resize_float_float 12
typedef void (*func_arc_graphics_g3d_Camera3D_resize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_graphics_g3d_Camera3D_lookAt_float_float_float 13
typedef void (*func_arc_graphics_g3d_Camera3D_lookAt_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_g3d_Camera3D_lookAt_arc_math_geom_Vec3 14
typedef void (*func_arc_graphics_g3d_Camera3D_lookAt_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_Camera3D_normalizeUp 15
typedef void (*func_arc_graphics_g3d_Camera3D_normalizeUp)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3 16
typedef jobject (*func_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_R_arc_math_geom_Vec3 17
typedef jobject (*func_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3 18
typedef jobject (*func_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3 19
typedef jobject (*func_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_arc_graphics_g3d_Camera3D_getMouseRay_R_arc_math_geom_Ray 20
typedef jobject (*func_arc_graphics_g3d_Camera3D_getMouseRay_R_arc_math_geom_Ray)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g3d_Camera3D_getPickRay_float_float_float_float_float_float_R_arc_math_geom_Ray 21
typedef jobject (*func_arc_graphics_g3d_Camera3D_getPickRay_float_float_float_float_float_float_R_arc_math_geom_Ray)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_arc_graphics_g3d_Camera3D_getPickRay_float_float_R_arc_math_geom_Ray 22
typedef jobject (*func_arc_graphics_g3d_Camera3D_getPickRay_float_float_R_arc_math_geom_Ray)(jcontext ctx, jobject self, jfloat param0, jfloat param1);

void mark_arc_graphics_g3d_Camera3D(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g3d_Camera3D(jcontext ctx);
void init_arc_graphics_g3d_Camera3D(jcontext ctx, jobject self);
void M_arc_graphics_g3d_Camera3D_update(jcontext ctx, jobject self);
void M_arc_graphics_g3d_Camera3D_resize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_graphics_g3d_Camera3D_lookAt_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void M_arc_graphics_g3d_Camera3D_lookAt_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g3d_Camera3D_normalizeUp(jcontext ctx, jobject self);
jobject M_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jobject M_arc_graphics_g3d_Camera3D_unproject_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_float_float_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jobject M_arc_graphics_g3d_Camera3D_getMouseRay_R_arc_math_geom_Ray(jcontext ctx, jobject self);
jobject M_arc_graphics_g3d_Camera3D_getPickRay_float_float_float_float_float_float_R_arc_math_geom_Ray(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject M_arc_graphics_g3d_Camera3D_getPickRay_float_float_R_arc_math_geom_Ray(jcontext ctx, jobject self, jfloat param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
