#ifndef HEADER_arc_graphics_gl_HdpiUtils
#define HEADER_arc_graphics_gl_HdpiUtils

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_HdpiUtils {
	java_lang_Object parent;
} arc_graphics_gl_HdpiUtils;

extern Class class_arc_graphics_gl_HdpiUtils;

extern jobject SF_arc_graphics_gl_HdpiUtils_mode;

#define VTABLE_arc_graphics_gl_HdpiUtils_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_HdpiUtils_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_HdpiUtils_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_HdpiUtils_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_HdpiUtils_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_HdpiUtils_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_HdpiUtils_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_HdpiUtils_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_HdpiUtils_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_HdpiUtils_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_HdpiUtils_finalize 5
typedef void (*func_arc_graphics_gl_HdpiUtils_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_HdpiUtils_notify 6
typedef void (*func_arc_graphics_gl_HdpiUtils_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_HdpiUtils_notifyAll 7
typedef void (*func_arc_graphics_gl_HdpiUtils_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_HdpiUtils_wait 8
typedef void (*func_arc_graphics_gl_HdpiUtils_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_HdpiUtils_wait_long 9
typedef void (*func_arc_graphics_gl_HdpiUtils_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_HdpiUtils_wait_long_int 10
typedef void (*func_arc_graphics_gl_HdpiUtils_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_graphics_gl_HdpiUtils(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_HdpiUtils(jcontext ctx);
void init_arc_graphics_gl_HdpiUtils(jcontext ctx, jobject self);
void SM_arc_graphics_gl_HdpiUtils_setMode_arc_graphics_gl_HdpiMode(jcontext ctx, jobject param0);
void SM_arc_graphics_gl_HdpiUtils_glScissor_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_arc_graphics_gl_HdpiUtils_glViewport_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jint SM_arc_graphics_gl_HdpiUtils_toLogicalX_int_R_int(jcontext ctx, jint param0);
jint SM_arc_graphics_gl_HdpiUtils_toLogicalY_int_R_int(jcontext ctx, jint param0);
jint SM_arc_graphics_gl_HdpiUtils_toBackBufferX_int_R_int(jcontext ctx, jint param0);
jint SM_arc_graphics_gl_HdpiUtils_toBackBufferY_int_R_int(jcontext ctx, jint param0);

#ifdef __cplusplus
}
#endif

#endif
