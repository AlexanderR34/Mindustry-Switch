#ifndef HEADER_arc_math_Interp$ExpIn
#define HEADER_arc_math_Interp$ExpIn

#include "Clearwing.h"
#include "arc/math/Interp_Exp.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_Interp$ExpIn {
	arc_math_Interp$Exp parent;
} arc_math_Interp$ExpIn;

extern Class class_arc_math_Interp$ExpIn;


#define VTABLE_arc_math_Interp$ExpIn_hashCode_R_int 0
typedef jint (*func_arc_math_Interp$ExpIn_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$ExpIn_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_Interp$ExpIn_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Interp$ExpIn_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_Interp$ExpIn_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$ExpIn_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_Interp$ExpIn_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$ExpIn_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_Interp$ExpIn_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$ExpIn_finalize 5
typedef void (*func_arc_math_Interp$ExpIn_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$ExpIn_notify 6
typedef void (*func_arc_math_Interp$ExpIn_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$ExpIn_notifyAll 7
typedef void (*func_arc_math_Interp$ExpIn_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$ExpIn_wait 8
typedef void (*func_arc_math_Interp$ExpIn_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp$ExpIn_wait_long 9
typedef void (*func_arc_math_Interp$ExpIn_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_Interp$ExpIn_wait_long_int 10
typedef void (*func_arc_math_Interp$ExpIn_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_Interp$ExpIn_apply_float_R_float 11
typedef jfloat (*func_arc_math_Interp$ExpIn_apply_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Interp$ExpIn_apply_float_float_float_R_float 12
typedef jfloat (*func_arc_math_Interp$ExpIn_apply_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);

void mark_arc_math_Interp$ExpIn(jobject object, jint mark, jint depth);
void clinit_arc_math_Interp$ExpIn(jcontext ctx);
void init_arc_math_Interp$ExpIn_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jfloat M_arc_math_Interp$ExpIn_apply_float_R_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
