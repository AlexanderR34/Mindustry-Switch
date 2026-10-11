#ifndef HEADER_arc_math_geom_Frustum
#define HEADER_arc_math_geom_Frustum

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Frustum {
	java_lang_Object parent;
	jref F_planes;
	jref F_planePoints;
	jref F_planePointsArray;
} arc_math_geom_Frustum;

extern Class class_arc_math_geom_Frustum;

extern jobject SF_arc_math_geom_Frustum_clipSpacePlanePoints;
extern jobject SF_arc_math_geom_Frustum_clipSpacePlanePointsArray;
extern jobject SF_arc_math_geom_Frustum_tmpV;

#define VTABLE_arc_math_geom_Frustum_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Frustum_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Frustum_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Frustum_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Frustum_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Frustum_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Frustum_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Frustum_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Frustum_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Frustum_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Frustum_finalize 5
typedef void (*func_arc_math_geom_Frustum_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Frustum_notify 6
typedef void (*func_arc_math_geom_Frustum_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Frustum_notifyAll 7
typedef void (*func_arc_math_geom_Frustum_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Frustum_wait 8
typedef void (*func_arc_math_geom_Frustum_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Frustum_wait_long 9
typedef void (*func_arc_math_geom_Frustum_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Frustum_wait_long_int 10
typedef void (*func_arc_math_geom_Frustum_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_Frustum_update_arc_math_geom_Mat3D 11
typedef void (*func_arc_math_geom_Frustum_update_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Frustum_containsPoint_arc_math_geom_Vec3_R_boolean 12
typedef jbool (*func_arc_math_geom_Frustum_containsPoint_arc_math_geom_Vec3_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Frustum_containsPoint_float_float_float_R_boolean 13
typedef jbool (*func_arc_math_geom_Frustum_containsPoint_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_math_geom_Frustum_containsSphere_arc_math_geom_Vec3_float_R_boolean 14
typedef jbool (*func_arc_math_geom_Frustum_containsSphere_arc_math_geom_Vec3_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Frustum_containsSphere_float_float_float_float_R_boolean 15
typedef jbool (*func_arc_math_geom_Frustum_containsSphere_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Frustum_containsSphereWithoutNearFar_arc_math_geom_Vec3_float_R_boolean 16
typedef jbool (*func_arc_math_geom_Frustum_containsSphereWithoutNearFar_arc_math_geom_Vec3_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Frustum_containsSphereWithoutNearFar_float_float_float_float_R_boolean 17
typedef jbool (*func_arc_math_geom_Frustum_containsSphereWithoutNearFar_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_Frustum_containsBounds_arc_math_geom_BoundingBox_R_boolean 18
typedef jbool (*func_arc_math_geom_Frustum_containsBounds_arc_math_geom_BoundingBox_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Frustum_containsBounds_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean 19
typedef jbool (*func_arc_math_geom_Frustum_containsBounds_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Frustum_containsBounds_float_float_float_float_float_float_R_boolean 20
typedef jbool (*func_arc_math_geom_Frustum_containsBounds_float_float_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);

void mark_arc_math_geom_Frustum(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Frustum(jcontext ctx);
void init_arc_math_geom_Frustum(jcontext ctx, jobject self);
void M_arc_math_geom_Frustum_update_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Frustum_containsPoint_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Frustum_containsPoint_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jbool M_arc_math_geom_Frustum_containsSphere_arc_math_geom_Vec3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Frustum_containsSphere_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jbool M_arc_math_geom_Frustum_containsSphereWithoutNearFar_arc_math_geom_Vec3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_arc_math_geom_Frustum_containsSphereWithoutNearFar_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jbool M_arc_math_geom_Frustum_containsBounds_arc_math_geom_BoundingBox_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_Frustum_containsBounds_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_arc_math_geom_Frustum_containsBounds_float_float_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);

#ifdef __cplusplus
}
#endif

#endif
