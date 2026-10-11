#ifndef HEADER_arc_math_geom_Bresenham2
#define HEADER_arc_math_geom_Bresenham2

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Bresenham2 {
	java_lang_Object parent;
	jref F_points;
	jref F_pool;
} arc_math_geom_Bresenham2;

extern Class class_arc_math_geom_Bresenham2;


#define VTABLE_arc_math_geom_Bresenham2_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Bresenham2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Bresenham2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Bresenham2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Bresenham2_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Bresenham2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Bresenham2_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Bresenham2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Bresenham2_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Bresenham2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Bresenham2_finalize 5
typedef void (*func_arc_math_geom_Bresenham2_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Bresenham2_notify 6
typedef void (*func_arc_math_geom_Bresenham2_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Bresenham2_notifyAll 7
typedef void (*func_arc_math_geom_Bresenham2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Bresenham2_wait 8
typedef void (*func_arc_math_geom_Bresenham2_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Bresenham2_wait_long 9
typedef void (*func_arc_math_geom_Bresenham2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Bresenham2_wait_long_int 10
typedef void (*func_arc_math_geom_Bresenham2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_Bresenham2_line_arc_math_geom_Point2_arc_math_geom_Point2_R_arc_struct_Seq 11
typedef jobject (*func_arc_math_geom_Bresenham2_line_arc_math_geom_Point2_arc_math_geom_Point2_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Bresenham2_line_int_int_int_int_R_arc_struct_Seq 12
typedef jobject (*func_arc_math_geom_Bresenham2_line_int_int_int_int_R_arc_struct_Seq)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_math_geom_Bresenham2_line_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq 13
typedef jobject (*func_arc_math_geom_Bresenham2_line_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5);
#define VTABLE_arc_math_geom_Bresenham2_lineNoDiagonal_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq 14
typedef jobject (*func_arc_math_geom_Bresenham2_lineNoDiagonal_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5);

void mark_arc_math_geom_Bresenham2(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Bresenham2(jcontext ctx);
void init_arc_math_geom_Bresenham2(jcontext ctx, jobject self);
void SM_arc_math_geom_Bresenham2_line_int_int_int_int_arc_func_Intc2(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4);
jobject M_arc_math_geom_Bresenham2_line_arc_math_geom_Point2_arc_math_geom_Point2_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_geom_Bresenham2_line_int_int_int_int_R_arc_struct_Seq(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject M_arc_math_geom_Bresenham2_line_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5);
jobject M_arc_math_geom_Bresenham2_lineNoDiagonal_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5);

#ifdef __cplusplus
}
#endif

#endif
