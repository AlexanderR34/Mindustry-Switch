#ifndef HEADER_arc_math_geom_Intersector3D
#define HEADER_arc_math_geom_Intersector3D

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Intersector3D {
	java_lang_Object parent;
} arc_math_geom_Intersector3D;

extern Class class_arc_math_geom_Intersector3D;

extern jobject SF_arc_math_geom_Intersector3D_v0;
extern jobject SF_arc_math_geom_Intersector3D_v1;
extern jobject SF_arc_math_geom_Intersector3D_v2;
extern jobject SF_arc_math_geom_Intersector3D_p;
extern jobject SF_arc_math_geom_Intersector3D_i;
extern jobject SF_arc_math_geom_Intersector3D_best;
extern jobject SF_arc_math_geom_Intersector3D_tmp;
extern jobject SF_arc_math_geom_Intersector3D_tmp1;
extern jobject SF_arc_math_geom_Intersector3D_tmp2;
extern jobject SF_arc_math_geom_Intersector3D_tmp3;
extern jobject SF_arc_math_geom_Intersector3D_intersection;

#define VTABLE_arc_math_geom_Intersector3D_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Intersector3D_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Intersector3D_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Intersector3D_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Intersector3D_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Intersector3D_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Intersector3D_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D_finalize 5
typedef void (*func_arc_math_geom_Intersector3D_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D_notify 6
typedef void (*func_arc_math_geom_Intersector3D_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D_notifyAll 7
typedef void (*func_arc_math_geom_Intersector3D_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D_wait 8
typedef void (*func_arc_math_geom_Intersector3D_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector3D_wait_long 9
typedef void (*func_arc_math_geom_Intersector3D_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Intersector3D_wait_long_int 10
typedef void (*func_arc_math_geom_Intersector3D_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_math_geom_Intersector3D(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Intersector3D(jcontext ctx);
void init_arc_math_geom_Intersector3D(jcontext ctx, jobject self);
jbool SM_arc_math_geom_Intersector3D_intersectRayPlane_arc_math_geom_Ray_arc_math_geom_Plane_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jfloat SM_arc_math_geom_Intersector3D_intersectLinePlane_float_float_float_float_float_float_arc_math_geom_Plane_arc_math_geom_Vec3_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6, jobject param7);
jbool SM_arc_math_geom_Intersector3D_intersectRayTriangle_arc_math_geom_Ray_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jbool SM_arc_math_geom_Intersector3D_intersectRaySphere_arc_math_geom_Ray_arc_math_geom_Vec3_float_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jfloat param2, jobject param3);
jbool SM_arc_math_geom_Intersector3D_intersectRayBounds_arc_math_geom_Ray_arc_math_geom_BoundingBox_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_arc_math_geom_Intersector3D_intersectRayBoundsFast_arc_math_geom_Ray_arc_math_geom_BoundingBox_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_arc_math_geom_Intersector3D_intersectRayBoundsFast_arc_math_geom_Ray_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_arc_math_geom_Intersector3D_intersectSegmentPlane_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Plane_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jbool SM_arc_math_geom_Intersector3D_intersectRayTriangles_arc_math_geom_Ray_Array1_float_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_arc_math_geom_Intersector3D_intersectRayTriangles_arc_math_geom_Ray_Array1_float_Array1_short_int_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4);
jbool SM_arc_math_geom_Intersector3D_intersectRayTriangles_arc_math_geom_Ray_arc_struct_Seq_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_arc_math_geom_Intersector3D_splitTriangle_Array1_float_arc_math_geom_Plane_arc_math_geom_Intersector3D$SplitTriangle(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_arc_math_geom_Intersector3D_splitEdge_Array1_float_int_int_int_arc_math_geom_Plane_Array1_float_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4, jobject param5, jint param6);

#ifdef __cplusplus
}
#endif

#endif
