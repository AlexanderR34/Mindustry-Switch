#ifndef HEADER_arc_math_geom_Intersector
#define HEADER_arc_math_geom_Intersector

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Intersector {
	java_lang_Object parent;
} arc_math_geom_Intersector;

extern Class class_arc_math_geom_Intersector;

extern jobject SF_arc_math_geom_Intersector_v0;
extern jobject SF_arc_math_geom_Intersector_v1;
extern jobject SF_arc_math_geom_Intersector_v2;
extern jobject SF_arc_math_geom_Intersector_floatArray;
extern jobject SF_arc_math_geom_Intersector_floatArray2;
extern jobject SF_arc_math_geom_Intersector_ip;
extern jobject SF_arc_math_geom_Intersector_ep1;
extern jobject SF_arc_math_geom_Intersector_ep2;
extern jobject SF_arc_math_geom_Intersector_s;
extern jobject SF_arc_math_geom_Intersector_e;
extern jobject SF_arc_math_geom_Intersector_tmp;
extern jobject SF_arc_math_geom_Intersector_tmp1;
extern jobject SF_arc_math_geom_Intersector_tmp2;
extern jobject SF_arc_math_geom_Intersector_tmp3;
extern jobject SF_arc_math_geom_Intersector_v2tmp;

#define VTABLE_arc_math_geom_Intersector_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Intersector_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Intersector_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Intersector_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Intersector_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Intersector_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Intersector_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector_finalize 5
typedef void (*func_arc_math_geom_Intersector_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector_notify 6
typedef void (*func_arc_math_geom_Intersector_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector_notifyAll 7
typedef void (*func_arc_math_geom_Intersector_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector_wait 8
typedef void (*func_arc_math_geom_Intersector_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Intersector_wait_long 9
typedef void (*func_arc_math_geom_Intersector_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Intersector_wait_long_int 10
typedef void (*func_arc_math_geom_Intersector_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_math_geom_Intersector(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Intersector(jcontext ctx);
void init_arc_math_geom_Intersector(jcontext ctx, jobject self);
jbool SM_arc_math_geom_Intersector_intersectPolygons_Array1_float_Array1_float_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_arc_math_geom_Intersector_isInTriangle_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jbool SM_arc_math_geom_Intersector_isInsideHexagon_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jbool SM_arc_math_geom_Intersector_isInRegularPolygon_int_float_float_float_float_float_float_R_boolean(jcontext ctx, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
jbool SM_arc_math_geom_Intersector_isInTriangle_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jbool SM_arc_math_geom_Intersector_isInTriangle_float_float_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
jint SM_arc_math_geom_Intersector_pointLineSide_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
jint SM_arc_math_geom_Intersector_pointLineSide_float_float_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jbool SM_arc_math_geom_Intersector_isInPolygon_arc_struct_Seq_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_arc_math_geom_Intersector_isInPolygon_Array1_float_int_int_float_float_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jfloat param3, jfloat param4);
jbool SM_arc_math_geom_Intersector_intersectPolygons_arc_math_geom_Polygon_arc_math_geom_Polygon_arc_math_geom_Polygon_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jfloat SM_arc_math_geom_Intersector_distanceLinePoint_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2);
jfloat SM_arc_math_geom_Intersector_distanceLinePoint_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jfloat SM_arc_math_geom_Intersector_distanceSegmentPoint_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jfloat SM_arc_math_geom_Intersector_distanceSegmentPoint_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_arc_math_geom_Intersector_nearestSegmentPoint_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_arc_math_geom_Intersector_nearestSegmentPoint_float_float_float_float_float_float_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);
jbool SM_arc_math_geom_Intersector_intersectSegmentCircle_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3);
jfloat SM_arc_math_geom_Intersector_intersectSegmentCircleDisplace_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jobject param4);
jfloat SM_arc_math_geom_Intersector_intersectRayRay_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jbool SM_arc_math_geom_Intersector_intersectLines_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jbool SM_arc_math_geom_Intersector_intersectLines_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8);
jbool SM_arc_math_geom_Intersector_intersectLinePolygon_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Polygon_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_arc_math_geom_Intersector_intersectRectangles_arc_math_geom_Rect_arc_math_geom_Rect_arc_math_geom_Rect_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_arc_math_geom_Intersector_intersectSegmentRectangleFast_float_float_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
jbool SM_arc_math_geom_Intersector_intersectSegmentRectangle_float_float_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
jbool SM_arc_math_geom_Intersector_intersectSegmentRectangle_float_float_float_float_arc_math_geom_Rect_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jbool SM_arc_math_geom_Intersector_intersectSegmentRectangle_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Rect_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_arc_math_geom_Intersector_intersectSegmentPolygon_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Polygon_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_arc_math_geom_Intersector_intersectSegments_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jbool SM_arc_math_geom_Intersector_intersectSegments_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8);
jfloat SM_arc_math_geom_Intersector_det_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jdouble SM_arc_math_geom_Intersector_detd_double_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2, jdouble param3);
jbool SM_arc_math_geom_Intersector_overlapsRect_float_float_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
jbool SM_arc_math_geom_Intersector_overlaps_arc_math_geom_Circle_arc_math_geom_Circle_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_arc_math_geom_Intersector_overlaps_arc_math_geom_Rect_arc_math_geom_Rect_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_arc_math_geom_Intersector_overlaps_arc_math_geom_Circle_arc_math_geom_Rect_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_arc_math_geom_Intersector_overlapConvexPolygons_arc_math_geom_Polygon_arc_math_geom_Polygon_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_arc_math_geom_Intersector_overlapConvexPolygons_arc_math_geom_Polygon_arc_math_geom_Polygon_arc_math_geom_Intersector$MinimumTranslationVector_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_arc_math_geom_Intersector_overlapConvexPolygons_Array1_float_Array1_float_arc_math_geom_Intersector$MinimumTranslationVector_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_arc_math_geom_Intersector_overlapConvexPolygons_Array1_float_int_int_Array1_float_int_int_arc_math_geom_Intersector$MinimumTranslationVector_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5, jobject param6);

#ifdef __cplusplus
}
#endif

#endif
