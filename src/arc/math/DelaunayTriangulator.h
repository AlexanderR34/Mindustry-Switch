#ifndef HEADER_arc_math_DelaunayTriangulator
#define HEADER_arc_math_DelaunayTriangulator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_DelaunayTriangulator {
	java_lang_Object parent;
	jref F_quicksortStack;
	jref F_triangles;
	jref F_originalIndices;
	jref F_edges;
	jref F_complete;
	jref F_superTriangle;
	jref F_centroid;
	jref F_sortedPoints;
} arc_math_DelaunayTriangulator;

extern Class class_arc_math_DelaunayTriangulator;

extern jfloat SF_arc_math_DelaunayTriangulator_EPSILON;
extern jint SF_arc_math_DelaunayTriangulator_INSIDE;
extern jint SF_arc_math_DelaunayTriangulator_COMPLETE;
extern jint SF_arc_math_DelaunayTriangulator_INCOMPLETE;

#define VTABLE_arc_math_DelaunayTriangulator_hashCode_R_int 0
typedef jint (*func_arc_math_DelaunayTriangulator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_DelaunayTriangulator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_DelaunayTriangulator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_DelaunayTriangulator_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_DelaunayTriangulator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_DelaunayTriangulator_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_DelaunayTriangulator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_DelaunayTriangulator_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_DelaunayTriangulator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_DelaunayTriangulator_finalize 5
typedef void (*func_arc_math_DelaunayTriangulator_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_DelaunayTriangulator_notify 6
typedef void (*func_arc_math_DelaunayTriangulator_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_DelaunayTriangulator_notifyAll 7
typedef void (*func_arc_math_DelaunayTriangulator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_DelaunayTriangulator_wait 8
typedef void (*func_arc_math_DelaunayTriangulator_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_DelaunayTriangulator_wait_long 9
typedef void (*func_arc_math_DelaunayTriangulator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_DelaunayTriangulator_wait_long_int 10
typedef void (*func_arc_math_DelaunayTriangulator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_DelaunayTriangulator_computeTriangles_arc_struct_FloatSeq_boolean_R_arc_struct_ShortSeq 11
typedef jobject (*func_arc_math_DelaunayTriangulator_computeTriangles_arc_struct_FloatSeq_boolean_R_arc_struct_ShortSeq)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_boolean_R_arc_struct_ShortSeq 12
typedef jobject (*func_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_boolean_R_arc_struct_ShortSeq)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_int_int_boolean_R_arc_struct_ShortSeq 13
typedef jobject (*func_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_int_int_boolean_R_arc_struct_ShortSeq)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
#define VTABLE_arc_math_DelaunayTriangulator_circumCircle_float_float_float_float_float_float_float_float_R_int 14
typedef jint (*func_arc_math_DelaunayTriangulator_circumCircle_float_float_float_float_float_float_float_float_R_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
#define VTABLE_arc_math_DelaunayTriangulator_sort_Array1_float_int 15
typedef void (*func_arc_math_DelaunayTriangulator_sort_Array1_float_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_math_DelaunayTriangulator_quicksortPartition_Array1_float_int_int_Array1_short_R_int 16
typedef jint (*func_arc_math_DelaunayTriangulator_quicksortPartition_Array1_float_int_int_Array1_short_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_math_DelaunayTriangulator_trim_arc_struct_ShortSeq_Array1_float_Array1_float_int_int 17
typedef void (*func_arc_math_DelaunayTriangulator_trim_arc_struct_ShortSeq_Array1_float_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4);

void mark_arc_math_DelaunayTriangulator(jobject object, jint mark, jint depth);
void clinit_arc_math_DelaunayTriangulator(jcontext ctx);
void init_arc_math_DelaunayTriangulator(jcontext ctx, jobject self);
jobject M_arc_math_DelaunayTriangulator_computeTriangles_arc_struct_FloatSeq_boolean_R_arc_struct_ShortSeq(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_boolean_R_arc_struct_ShortSeq(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_math_DelaunayTriangulator_computeTriangles_Array1_float_int_int_boolean_R_arc_struct_ShortSeq(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
jint M_arc_math_DelaunayTriangulator_circumCircle_float_float_float_float_float_float_float_float_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
void M_arc_math_DelaunayTriangulator_sort_Array1_float_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_arc_math_DelaunayTriangulator_quicksortPartition_Array1_float_int_int_Array1_short_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
void M_arc_math_DelaunayTriangulator_trim_arc_struct_ShortSeq_Array1_float_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4);

#ifdef __cplusplus
}
#endif

#endif
