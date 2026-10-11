#ifndef HEADER_arc_math_EarClippingTriangulator
#define HEADER_arc_math_EarClippingTriangulator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_EarClippingTriangulator {
	java_lang_Object parent;
	jref F_indicesArray;
	jref F_vertexTypes;
	jref F_triangles;
	jref F_indices;
	jref F_vertices;
	jint F_vertexCount;
} arc_math_EarClippingTriangulator;

extern Class class_arc_math_EarClippingTriangulator;

extern jint SF_arc_math_EarClippingTriangulator_CONCAVE;
extern jint SF_arc_math_EarClippingTriangulator_CONVEX;

#define VTABLE_arc_math_EarClippingTriangulator_hashCode_R_int 0
typedef jint (*func_arc_math_EarClippingTriangulator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_EarClippingTriangulator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_EarClippingTriangulator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_EarClippingTriangulator_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_EarClippingTriangulator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_EarClippingTriangulator_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_EarClippingTriangulator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_EarClippingTriangulator_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_EarClippingTriangulator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_EarClippingTriangulator_finalize 5
typedef void (*func_arc_math_EarClippingTriangulator_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_EarClippingTriangulator_notify 6
typedef void (*func_arc_math_EarClippingTriangulator_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_EarClippingTriangulator_notifyAll 7
typedef void (*func_arc_math_EarClippingTriangulator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_EarClippingTriangulator_wait 8
typedef void (*func_arc_math_EarClippingTriangulator_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_EarClippingTriangulator_wait_long 9
typedef void (*func_arc_math_EarClippingTriangulator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_EarClippingTriangulator_wait_long_int 10
typedef void (*func_arc_math_EarClippingTriangulator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_EarClippingTriangulator_computeTriangles_arc_struct_FloatSeq_R_arc_struct_ShortSeq 11
typedef jobject (*func_arc_math_EarClippingTriangulator_computeTriangles_arc_struct_FloatSeq_R_arc_struct_ShortSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_R_arc_struct_ShortSeq 12
typedef jobject (*func_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_R_arc_struct_ShortSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_arc_struct_ShortSeq 13
typedef jobject (*func_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_arc_struct_ShortSeq)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_math_EarClippingTriangulator_triangulate 14
typedef void (*func_arc_math_EarClippingTriangulator_triangulate)(jcontext ctx, jobject self);
#define VTABLE_arc_math_EarClippingTriangulator_classifyVertex_int_R_int 15
typedef jint (*func_arc_math_EarClippingTriangulator_classifyVertex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_math_EarClippingTriangulator_findEarTip_R_int 16
typedef jint (*func_arc_math_EarClippingTriangulator_findEarTip_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_EarClippingTriangulator_isEarTip_int_R_boolean 17
typedef jbool (*func_arc_math_EarClippingTriangulator_isEarTip_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_math_EarClippingTriangulator_cutEarTip_int 18
typedef void (*func_arc_math_EarClippingTriangulator_cutEarTip_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_math_EarClippingTriangulator_previousIndex_int_R_int 19
typedef jint (*func_arc_math_EarClippingTriangulator_previousIndex_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_math_EarClippingTriangulator_nextIndex_int_R_int 20
typedef jint (*func_arc_math_EarClippingTriangulator_nextIndex_int_R_int)(jcontext ctx, jobject self, jint param0);

void mark_arc_math_EarClippingTriangulator(jobject object, jint mark, jint depth);
void clinit_arc_math_EarClippingTriangulator(jcontext ctx);
void init_arc_math_EarClippingTriangulator(jcontext ctx, jobject self);
jbool SM_arc_math_EarClippingTriangulator_areVerticesClockwise_Array1_float_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_arc_math_EarClippingTriangulator_computeSpannedAreaSign_float_float_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject M_arc_math_EarClippingTriangulator_computeTriangles_arc_struct_FloatSeq_R_arc_struct_ShortSeq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_R_arc_struct_ShortSeq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_EarClippingTriangulator_computeTriangles_Array1_float_int_int_R_arc_struct_ShortSeq(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_math_EarClippingTriangulator_triangulate(jcontext ctx, jobject self);
jint M_arc_math_EarClippingTriangulator_classifyVertex_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_arc_math_EarClippingTriangulator_findEarTip_R_int(jcontext ctx, jobject self);
jbool M_arc_math_EarClippingTriangulator_isEarTip_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_arc_math_EarClippingTriangulator_cutEarTip_int(jcontext ctx, jobject self, jint param0);
jint M_arc_math_EarClippingTriangulator_previousIndex_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_arc_math_EarClippingTriangulator_nextIndex_int_R_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
