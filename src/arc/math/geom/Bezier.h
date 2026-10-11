#ifndef HEADER_arc_math_geom_Bezier
#define HEADER_arc_math_geom_Bezier

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Path.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Bezier {
	java_lang_Object parent;
	jref F_points;
	jref F_tmp;
	jref F_tmp2;
	jref F_tmp3;
} arc_math_geom_Bezier;

extern Class class_arc_math_geom_Bezier;


#define VTABLE_arc_math_geom_Bezier_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Bezier_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Bezier_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Bezier_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Bezier_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Bezier_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Bezier_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Bezier_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Bezier_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Bezier_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Bezier_finalize 5
typedef void (*func_arc_math_geom_Bezier_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Bezier_notify 6
typedef void (*func_arc_math_geom_Bezier_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Bezier_notifyAll 7
typedef void (*func_arc_math_geom_Bezier_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Bezier_wait 8
typedef void (*func_arc_math_geom_Bezier_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Bezier_wait_long 9
typedef void (*func_arc_math_geom_Bezier_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Bezier_wait_long_int 10
typedef void (*func_arc_math_geom_Bezier_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_Bezier_derivativeAt_java_lang_Object_float_R_java_lang_Object 11
typedef jobject (*func_arc_math_geom_Bezier_derivativeAt_java_lang_Object_float_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Bezier_valueAt_java_lang_Object_float_R_java_lang_Object 12
typedef jobject (*func_arc_math_geom_Bezier_valueAt_java_lang_Object_float_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Bezier_approximate_java_lang_Object_R_float 13
typedef jfloat (*func_arc_math_geom_Bezier_approximate_java_lang_Object_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Bezier_locate_java_lang_Object_R_float 14
typedef jfloat (*func_arc_math_geom_Bezier_locate_java_lang_Object_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Bezier_approxLength_int_R_float 15
typedef jfloat (*func_arc_math_geom_Bezier_approxLength_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_R_arc_math_geom_Bezier 16
typedef jobject (*func_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_R_arc_math_geom_Bezier)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_int_int_R_arc_math_geom_Bezier 17
typedef jobject (*func_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_int_int_R_arc_math_geom_Bezier)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_math_geom_Bezier_set_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Bezier 18
typedef jobject (*func_arc_math_geom_Bezier_set_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Bezier)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_math_geom_Bezier_set_arc_struct_Seq_R_arc_math_geom_Bezier 19
typedef jobject (*func_arc_math_geom_Bezier_set_arc_struct_Seq_R_arc_math_geom_Bezier)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Bezier_set_arc_struct_Seq_int_int_R_arc_math_geom_Bezier 20
typedef jobject (*func_arc_math_geom_Bezier_set_arc_struct_Seq_int_int_R_arc_math_geom_Bezier)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector 21
typedef jobject (*func_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Bezier_derivativeAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector 22
typedef jobject (*func_arc_math_geom_Bezier_derivativeAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Bezier_approximate_arc_math_geom_Vector_R_float 23
typedef jfloat (*func_arc_math_geom_Bezier_approximate_arc_math_geom_Vector_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Bezier_locate_arc_math_geom_Vector_R_float 24
typedef jfloat (*func_arc_math_geom_Bezier_locate_arc_math_geom_Vector_R_float)(jcontext ctx, jobject self, jobject param0);

void mark_arc_math_geom_Bezier(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Bezier(jcontext ctx);
void init_arc_math_geom_Bezier(jcontext ctx, jobject self);
void init_arc_math_geom_Bezier_Array1_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0);
void init_arc_math_geom_Bezier_Array1_arc_math_geom_Vector_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void init_arc_math_geom_Bezier_arc_struct_Seq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject SM_arc_math_geom_Bezier_linear_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3, jobject param4);
jobject SM_arc_math_geom_Bezier_linearDerivative_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3, jobject param4);
jobject SM_arc_math_geom_Bezier_quadratic_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3, jobject param4, jobject param5);
jobject SM_arc_math_geom_Bezier_quadraticDerivative_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3, jobject param4, jobject param5);
jobject SM_arc_math_geom_Bezier_cubic_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
jobject SM_arc_math_geom_Bezier_cubicDerivative_arc_math_geom_Vector_float_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
jobject M_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_R_arc_math_geom_Bezier(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Bezier_set_Array1_arc_math_geom_Vector_int_int_R_arc_math_geom_Bezier(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_arc_math_geom_Bezier_set_arc_math_geom_Vector_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Bezier(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_arc_math_geom_Bezier_set_arc_struct_Seq_R_arc_math_geom_Bezier(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Bezier_set_arc_struct_Seq_int_int_R_arc_math_geom_Bezier(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Bezier_derivativeAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1);
jfloat M_arc_math_geom_Bezier_approximate_arc_math_geom_Vector_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Bezier_locate_arc_math_geom_Vector_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Bezier_approxLength_int_R_float(jcontext ctx, jobject self, jint param0);
jfloat M_arc_math_geom_Bezier_locate_java_lang_Object_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Bezier_approximate_java_lang_Object_R_float(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Bezier_valueAt_java_lang_Object_float_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Bezier_derivativeAt_java_lang_Object_float_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
