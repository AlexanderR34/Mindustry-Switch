#ifndef HEADER_arc_math_geom_Plane
#define HEADER_arc_math_geom_Plane

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Plane {
	java_lang_Object parent;
	jref F_normal;
	jfloat F_d;
} arc_math_geom_Plane;

extern Class class_arc_math_geom_Plane;


#define VTABLE_arc_math_geom_Plane_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Plane_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Plane_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Plane_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Plane_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Plane_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Plane_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane_finalize 5
typedef void (*func_arc_math_geom_Plane_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane_notify 6
typedef void (*func_arc_math_geom_Plane_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane_notifyAll 7
typedef void (*func_arc_math_geom_Plane_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane_wait 8
typedef void (*func_arc_math_geom_Plane_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane_wait_long 9
typedef void (*func_arc_math_geom_Plane_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Plane_wait_long_int 10
typedef void (*func_arc_math_geom_Plane_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3 11
typedef void (*func_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_math_geom_Plane_set_float_float_float_float 12
typedef void (*func_arc_math_geom_Plane_set_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Plane_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3 13
typedef jobject (*func_arc_math_geom_Plane_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Plane_distance_arc_math_geom_Vec3_R_float 14
typedef jfloat (*func_arc_math_geom_Plane_distance_arc_math_geom_Vec3_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide 15
typedef jobject (*func_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide 16
typedef jobject (*func_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Plane_isFrontFacing_arc_math_geom_Vec3_R_boolean 17
typedef jbool (*func_arc_math_geom_Plane_isFrontFacing_arc_math_geom_Vec3_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Plane_getNormal_R_arc_math_geom_Vec3 18
typedef jobject (*func_arc_math_geom_Plane_getNormal_R_arc_math_geom_Vec3)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane_getD_R_float 19
typedef jfloat (*func_arc_math_geom_Plane_getD_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3 20
typedef void (*func_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Plane_set_float_float_float_float_float_float 21
typedef void (*func_arc_math_geom_Plane_set_float_float_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_arc_math_geom_Plane_set_arc_math_geom_Plane 22
typedef void (*func_arc_math_geom_Plane_set_arc_math_geom_Plane)(jcontext ctx, jobject self, jobject param0);

void mark_arc_math_geom_Plane(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Plane(jcontext ctx);
void init_arc_math_geom_Plane(jcontext ctx, jobject self);
void init_arc_math_geom_Plane_arc_math_geom_Vec3_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void init_arc_math_geom_Plane_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_arc_math_geom_Plane_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_arc_math_geom_Plane_set_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_math_geom_Plane_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Plane_distance_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jbool M_arc_math_geom_Plane_isFrontFacing_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Plane_getNormal_R_arc_math_geom_Vec3(jcontext ctx, jobject self);
jfloat M_arc_math_geom_Plane_getD_R_float(jcontext ctx, jobject self);
void M_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_math_geom_Plane_set_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void M_arc_math_geom_Plane_set_arc_math_geom_Plane(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Plane_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
