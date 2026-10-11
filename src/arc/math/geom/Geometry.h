#ifndef HEADER_arc_math_geom_Geometry
#define HEADER_arc_math_geom_Geometry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Geometry {
	java_lang_Object parent;
} arc_math_geom_Geometry;

extern Class class_arc_math_geom_Geometry;

extern jobject SF_arc_math_geom_Geometry_d4;
extern jobject SF_arc_math_geom_Geometry_d4c;
extern jobject SF_arc_math_geom_Geometry_d4x;
extern jobject SF_arc_math_geom_Geometry_d4y;
extern jobject SF_arc_math_geom_Geometry_d8;
extern jobject SF_arc_math_geom_Geometry_d8edge;
extern jobject SF_arc_math_geom_Geometry_tmp1;
extern jobject SF_arc_math_geom_Geometry_tmp2;
extern jobject SF_arc_math_geom_Geometry_tmp3;

#define VTABLE_arc_math_geom_Geometry_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Geometry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Geometry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Geometry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Geometry_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Geometry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Geometry_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Geometry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Geometry_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Geometry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Geometry_finalize 5
typedef void (*func_arc_math_geom_Geometry_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Geometry_notify 6
typedef void (*func_arc_math_geom_Geometry_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Geometry_notifyAll 7
typedef void (*func_arc_math_geom_Geometry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Geometry_wait 8
typedef void (*func_arc_math_geom_Geometry_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Geometry_wait_long 9
typedef void (*func_arc_math_geom_Geometry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Geometry_wait_long_int 10
typedef void (*func_arc_math_geom_Geometry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_math_geom_Geometry(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Geometry(jcontext ctx);
void init_arc_math_geom_Geometry(jcontext ctx, jobject self);
jobject SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(jcontext ctx, jint param0);
jint SM_arc_math_geom_Geometry_d4x_int_R_int(jcontext ctx, jint param0);
jint SM_arc_math_geom_Geometry_d4y_int_R_int(jcontext ctx, jint param0);
jobject SM_arc_math_geom_Geometry_d8_int_R_arc_math_geom_Point2(jcontext ctx, jint param0);
jobject SM_arc_math_geom_Geometry_d8edge_int_R_arc_math_geom_Point2(jcontext ctx, jint param0);
void SM_arc_math_geom_Geometry_circle_int_int_int_arc_func_Intc2(jcontext ctx, jint param0, jint param1, jint param2, jobject param3);
void SM_arc_math_geom_Geometry_circle_int_int_int_int_int_arc_func_Intc2(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jobject param5);
jobject SM_arc_math_geom_Geometry_vectorsToFloats_arc_struct_Seq_R_arc_struct_FloatSeq(jcontext ctx, jobject param0);
jobject SM_arc_math_geom_Geometry_findClosest_float_float_Array1_arc_math_geom_Position_R_arc_math_geom_Position(jcontext ctx, jfloat param0, jfloat param1, jobject param2);
jobject SM_arc_math_geom_Geometry_findClosest_float_float_java_lang_Iterable_R_arc_math_geom_Position(jcontext ctx, jfloat param0, jfloat param1, jobject param2);
jobject SM_arc_math_geom_Geometry_findClosest_float_float_java_lang_Iterable_arc_func_Boolf_R_arc_math_geom_Position(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jobject param3);
jobject SM_arc_math_geom_Geometry_findFurthest_float_float_java_lang_Iterable_R_arc_math_geom_Position(jcontext ctx, jfloat param0, jfloat param1, jobject param2);
jobject SM_arc_math_geom_Geometry_findFurthest_float_float_java_lang_Iterable_arc_func_Boolf_R_arc_math_geom_Position(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jobject param3);
jobject SM_arc_math_geom_Geometry_pixelCircle_float_R_Array1_arc_math_geom_Vec2(jcontext ctx, jfloat param0);
jobject SM_arc_math_geom_Geometry_pixelCircle_float_arc_math_geom_Geometry$SolidChecker_R_Array1_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jobject param1);
jobject SM_arc_math_geom_Geometry_regPoly_int_float_R_Array1_float(jcontext ctx, jint param0, jfloat param1);
jfloat SM_arc_math_geom_Geometry_iterateLine_float_float_float_float_float_float_arc_func_Floatc2_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);
void SM_arc_math_geom_Geometry_iteratePolySegments_Array1_float_arc_func_Floatc4(jcontext ctx, jobject param0, jobject param1);
void SM_arc_math_geom_Geometry_iteratePolygon_arc_func_Floatc2_Array1_float(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_math_geom_Geometry_getD4Points_R_Array1_arc_math_geom_Point2(jcontext ctx);
jobject SM_arc_math_geom_Geometry_getD8Points_R_Array1_arc_math_geom_Point2(jcontext ctx);
jobject SM_arc_math_geom_Geometry_getD8EdgePoints_R_Array1_arc_math_geom_Point2(jcontext ctx);
jbool SM_arc_math_geom_Geometry_raycast_int_int_int_int_arc_math_geom_Geometry$Raycaster_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4);
jobject SM_arc_math_geom_Geometry_raycastRect_float_float_float_float_arc_math_geom_Rect_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jobject SM_arc_math_geom_Geometry_raycastRect_float_float_float_float_float_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
jobject SM_arc_math_geom_Geometry_overlap_arc_math_geom_Rect_arc_math_geom_Rect_boolean_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jbool param2);
jobject SM_arc_math_geom_Geometry_toBarycoord_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jbool SM_arc_math_geom_Geometry_barycoordInsideTriangle_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject param0);
jobject SM_arc_math_geom_Geometry_fromBarycoord_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jfloat SM_arc_math_geom_Geometry_fromBarycoord_arc_math_geom_Vec2_float_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
jfloat SM_arc_math_geom_Geometry_lowestPositiveRoot_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jbool SM_arc_math_geom_Geometry_colinear_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject SM_arc_math_geom_Geometry_triangleCentroid_float_float_float_float_float_float_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);
jobject SM_arc_math_geom_Geometry_triangleCircumcenter_float_float_float_float_float_float_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);
jfloat SM_arc_math_geom_Geometry_triangleCircumradius_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jfloat SM_arc_math_geom_Geometry_triangleQuality_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jfloat SM_arc_math_geom_Geometry_triangleArea_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject SM_arc_math_geom_Geometry_quadrilateralCentroid_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8);
jobject SM_arc_math_geom_Geometry_polygonCentroid_Array1_float_int_int_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
jfloat SM_arc_math_geom_Geometry_polygonArea_Array1_float_int_int_R_float(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_arc_math_geom_Geometry_ensureCCW_Array1_float(jcontext ctx, jobject param0);
void SM_arc_math_geom_Geometry_ensureCCW_Array1_float_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
jbool SM_arc_math_geom_Geometry_isClockwise_Array1_float_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2);
jfloat SM_arc_math_geom_Geometry_lambda$pixelCircle$1_int_float_java_lang_Integer_R_float(jcontext ctx, jint param0, jfloat param1, jobject param2);
jbool SM_arc_math_geom_Geometry_lambda$pixelCircle$0_float_int_int_R_boolean(jcontext ctx, jfloat param0, jint param1, jint param2);
void SM_arc_math_geom_Geometry_lambda$vectorsToFloats$0_arc_struct_FloatSeq_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
