#ifndef HEADER_arc_util_noise_Simplex
#define HEADER_arc_util_noise_Simplex

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_noise_Simplex {
	java_lang_Object parent;
} arc_util_noise_Simplex;

extern Class class_arc_util_noise_Simplex;

extern jobject SF_arc_util_noise_Simplex_grad3;
extern jobject SF_arc_util_noise_Simplex_grad4;
extern jobject SF_arc_util_noise_Simplex_simplex;

#define VTABLE_arc_util_noise_Simplex_hashCode_R_int 0
typedef jint (*func_arc_util_noise_Simplex_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Simplex_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_noise_Simplex_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_noise_Simplex_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_noise_Simplex_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Simplex_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_noise_Simplex_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Simplex_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_noise_Simplex_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Simplex_finalize 5
typedef void (*func_arc_util_noise_Simplex_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Simplex_notify 6
typedef void (*func_arc_util_noise_Simplex_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Simplex_notifyAll 7
typedef void (*func_arc_util_noise_Simplex_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Simplex_wait 8
typedef void (*func_arc_util_noise_Simplex_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_noise_Simplex_wait_long 9
typedef void (*func_arc_util_noise_Simplex_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_noise_Simplex_wait_long_int 10
typedef void (*func_arc_util_noise_Simplex_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_noise_Simplex(jobject object, jint mark, jint depth);
void clinit_arc_util_noise_Simplex(jcontext ctx);
void init_arc_util_noise_Simplex(jcontext ctx, jobject self);
jfloat SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(jcontext ctx, jint param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5);
jfloat SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(jcontext ctx, jint param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5, jdouble param6);
jfloat SM_arc_util_noise_Simplex_noise4d_double_double_double_double_double_double_double_R_float(jcontext ctx, jdouble param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5, jdouble param6);
jdouble SM_arc_util_noise_Simplex_raw2d_int_double_double_R_double(jcontext ctx, jint param0, jdouble param1, jdouble param2);
jdouble SM_arc_util_noise_Simplex_raw3d_int_double_double_double_R_double(jcontext ctx, jint param0, jdouble param1, jdouble param2, jdouble param3);
jdouble SM_arc_util_noise_Simplex_raw4d_double_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2, jdouble param3);
jdouble SM_arc_util_noise_Simplex_rawTiled_double_double_double_double_double_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5, jdouble param6);
jint SM_arc_util_noise_Simplex_perm_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_arc_util_noise_Simplex_fastfloor_double_R_int(jcontext ctx, jdouble param0);
jdouble SM_arc_util_noise_Simplex_dot_Array1_int_double_double_R_double(jcontext ctx, jobject param0, jdouble param1, jdouble param2);
jdouble SM_arc_util_noise_Simplex_dot_Array1_int_double_double_double_R_double(jcontext ctx, jobject param0, jdouble param1, jdouble param2, jdouble param3);
jdouble SM_arc_util_noise_Simplex_dot_Array1_int_double_double_double_double_R_double(jcontext ctx, jobject param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4);

#ifdef __cplusplus
}
#endif

#endif
