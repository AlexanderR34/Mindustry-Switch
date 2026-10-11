#ifndef HEADER_arc_math_Interp$Exp
#define HEADER_arc_math_Interp$Exp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/Interp.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_Interp$Exp {
	java_lang_Object parent;
	jfloat F_value;
	jfloat F_power;
	jfloat F_min;
	jfloat F_scale;
} arc_math_Interp$Exp;

extern Class class_arc_math_Interp$Exp;


#define VTABLE_arc_math_Interp$Exp_hashCode_R_int 0
typedef jint (*func_arc_math_Interp$Exp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$Exp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_Interp$Exp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Interp$Exp_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_Interp$Exp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$Exp_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_Interp$Exp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$Exp_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_Interp$Exp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$Exp_finalize 5
typedef void (*func_arc_math_Interp$Exp_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$Exp_notify 6
typedef void (*func_arc_math_Interp$Exp_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$Exp_notifyAll 7
typedef void (*func_arc_math_Interp$Exp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$Exp_wait 8
typedef void (*func_arc_math_Interp$Exp_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$Exp_wait_long 9
typedef void (*func_arc_math_Interp$Exp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_Interp$Exp_wait_long_int 10
typedef void (*func_arc_math_Interp$Exp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_Interp$Exp_apply_float_R_float 11
typedef jfloat (*func_arc_math_Interp$Exp_apply_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Interp$Exp_apply_float_float_float_R_float 12
typedef jfloat (*func_arc_math_Interp$Exp_apply_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);

void mark_arc_math_Interp$Exp(jobject object, jint mark, jint depth);
void clinit_arc_math_Interp$Exp(jcontext ctx);
void init_arc_math_Interp$Exp_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jfloat M_arc_math_Interp$Exp_apply_float_R_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
