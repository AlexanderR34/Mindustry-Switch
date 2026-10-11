#ifndef HEADER_arc_graphics_g2d_ScissorStack
#define HEADER_arc_graphics_g2d_ScissorStack

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_ScissorStack {
	java_lang_Object parent;
} arc_graphics_g2d_ScissorStack;

extern Class class_arc_graphics_g2d_ScissorStack;

extern jobject SF_arc_graphics_g2d_ScissorStack_viewport;
extern jobject SF_arc_graphics_g2d_ScissorStack_tmp;
extern jobject SF_arc_graphics_g2d_ScissorStack_scissors;

#define VTABLE_arc_graphics_g2d_ScissorStack_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_ScissorStack_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScissorStack_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_ScissorStack_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_ScissorStack_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_ScissorStack_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScissorStack_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_ScissorStack_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScissorStack_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_ScissorStack_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScissorStack_finalize 5
typedef void (*func_arc_graphics_g2d_ScissorStack_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScissorStack_notify 6
typedef void (*func_arc_graphics_g2d_ScissorStack_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScissorStack_notifyAll 7
typedef void (*func_arc_graphics_g2d_ScissorStack_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScissorStack_wait 8
typedef void (*func_arc_graphics_g2d_ScissorStack_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScissorStack_wait_long 9
typedef void (*func_arc_graphics_g2d_ScissorStack_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_ScissorStack_wait_long_int 10
typedef void (*func_arc_graphics_g2d_ScissorStack_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_graphics_g2d_ScissorStack(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_ScissorStack(jcontext ctx);
void init_arc_graphics_g2d_ScissorStack(jcontext ctx, jobject self);
jbool SM_arc_graphics_g2d_ScissorStack_push_arc_math_geom_Rect_R_boolean(jcontext ctx, jobject param0);
jobject SM_arc_graphics_g2d_ScissorStack_pop_R_arc_math_geom_Rect(jcontext ctx);
jbool SM_arc_graphics_g2d_ScissorStack_pushWorld_arc_math_geom_Rect_R_boolean(jcontext ctx, jobject param0);
jobject SM_arc_graphics_g2d_ScissorStack_peek_R_arc_math_geom_Rect(jcontext ctx);
void SM_arc_graphics_g2d_ScissorStack_fix_arc_math_geom_Rect(jcontext ctx, jobject param0);
void SM_arc_graphics_g2d_ScissorStack_calculateScissors_arc_graphics_Camera_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
void SM_arc_graphics_g2d_ScissorStack_calculateScissors_arc_graphics_Camera_float_float_float_float_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jobject param6, jobject param7);
jobject SM_arc_graphics_g2d_ScissorStack_getViewport_R_arc_math_geom_Rect(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
