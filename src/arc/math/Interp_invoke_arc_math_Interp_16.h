#ifndef HEADER_arc_math_Interp_invoke_arc_math_Interp_16
#define HEADER_arc_math_Interp_invoke_arc_math_Interp_16

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/Interp.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_Interp_invoke_arc_math_Interp_16 {
	java_lang_Object parent;
} arc_math_Interp_invoke_arc_math_Interp_16;

extern Class class_arc_math_Interp_invoke_arc_math_Interp_16;


#define VTABLE_arc_math_Interp_invoke_arc_math_Interp_16_hashCode_R_int 0
typedef jint (*func_arc_math_Interp_invoke_arc_math_Interp_16_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp_invoke_arc_math_Interp_16_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_Interp_invoke_arc_math_Interp_16_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Interp_invoke_arc_math_Interp_16_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_Interp_invoke_arc_math_Interp_16_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp_invoke_arc_math_Interp_16_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_Interp_invoke_arc_math_Interp_16_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp_invoke_arc_math_Interp_16_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_Interp_invoke_arc_math_Interp_16_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp_invoke_arc_math_Interp_16_finalize 5
typedef void (*func_arc_math_Interp_invoke_arc_math_Interp_16_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp_invoke_arc_math_Interp_16_notify 6
typedef void (*func_arc_math_Interp_invoke_arc_math_Interp_16_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp_invoke_arc_math_Interp_16_notifyAll 7
typedef void (*func_arc_math_Interp_invoke_arc_math_Interp_16_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp_invoke_arc_math_Interp_16_wait 8
typedef void (*func_arc_math_Interp_invoke_arc_math_Interp_16_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Interp_invoke_arc_math_Interp_16_wait_long 9
typedef void (*func_arc_math_Interp_invoke_arc_math_Interp_16_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_Interp_invoke_arc_math_Interp_16_wait_long_int 10
typedef void (*func_arc_math_Interp_invoke_arc_math_Interp_16_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_Interp_invoke_arc_math_Interp_16_apply_float_R_float 11
typedef jfloat (*func_arc_math_Interp_invoke_arc_math_Interp_16_apply_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Interp_invoke_arc_math_Interp_16_apply_float_float_float_R_float 12
typedef jfloat (*func_arc_math_Interp_invoke_arc_math_Interp_16_apply_float_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);

void mark_arc_math_Interp_invoke_arc_math_Interp_16(jobject object, jint mark, jint depth);
void clinit_arc_math_Interp_invoke_arc_math_Interp_16(jcontext ctx);
jfloat M_arc_math_Interp_invoke_arc_math_Interp_16_apply_float_R_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
