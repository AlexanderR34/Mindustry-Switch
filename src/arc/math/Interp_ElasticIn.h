#ifndef HEADER_arc_math_Interp$ElasticIn
#define HEADER_arc_math_Interp$ElasticIn

#include "Clearwing.h"
#include "arc/math/Interp_Elastic.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_Interp$ElasticIn {
	arc_math_Interp$Elastic parent;
} arc_math_Interp$ElasticIn;

extern Class class_arc_math_Interp$ElasticIn;


#define VTABLE_arc_math_Interp$ElasticIn_hashCode_R_int 0
typedef jint (*func_arc_math_Interp$ElasticIn_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$ElasticIn_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_Interp$ElasticIn_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Interp$ElasticIn_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_Interp$ElasticIn_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$ElasticIn_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_Interp$ElasticIn_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$ElasticIn_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_Interp$ElasticIn_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$ElasticIn_finalize 5
typedef void (*func_arc_math_Interp$ElasticIn_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$ElasticIn_notify 6
typedef void (*func_arc_math_Interp$ElasticIn_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$ElasticIn_notifyAll 7
typedef void (*func_arc_math_Interp$ElasticIn_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$ElasticIn_wait 8
typedef void (*func_arc_math_Interp$ElasticIn_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$ElasticIn_wait_long 9
typedef void (*func_arc_math_Interp$ElasticIn_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_Interp$ElasticIn_wait_long_int 10
typedef void (*func_arc_math_Interp$ElasticIn_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_Interp$ElasticIn_apply_float_R_float 11
typedef jfloat (*func_arc_math_Interp$ElasticIn_apply_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Interp$ElasticIn_apply_float_float_float_R_float 12
typedef jfloat (*func_arc_math_Interp$ElasticIn_apply_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);

void mark_arc_math_Interp$ElasticIn(jobject object, jint mark, jint depth);
void clinit_arc_math_Interp$ElasticIn(jcontext ctx);
void init_arc_math_Interp$ElasticIn_float_float_int_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jfloat param3);
jfloat M_arc_math_Interp$ElasticIn_apply_float_R_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
