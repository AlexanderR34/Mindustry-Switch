#ifndef HEADER_arc_graphics_g2d_ScreenQuad
#define HEADER_arc_graphics_g2d_ScreenQuad

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_ScreenQuad {
	java_lang_Object parent;
	jref F_mesh;
} arc_graphics_g2d_ScreenQuad;

extern Class class_arc_graphics_g2d_ScreenQuad;


#define VTABLE_arc_graphics_g2d_ScreenQuad_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_ScreenQuad_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScreenQuad_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_ScreenQuad_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_ScreenQuad_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_ScreenQuad_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScreenQuad_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_ScreenQuad_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScreenQuad_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_ScreenQuad_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScreenQuad_finalize 5
typedef void (*func_arc_graphics_g2d_ScreenQuad_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScreenQuad_notify 6
typedef void (*func_arc_graphics_g2d_ScreenQuad_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScreenQuad_notifyAll 7
typedef void (*func_arc_graphics_g2d_ScreenQuad_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScreenQuad_wait 8
typedef void (*func_arc_graphics_g2d_ScreenQuad_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScreenQuad_wait_long 9
typedef void (*func_arc_graphics_g2d_ScreenQuad_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_ScreenQuad_wait_long_int 10
typedef void (*func_arc_graphics_g2d_ScreenQuad_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_ScreenQuad_dispose 11
typedef void (*func_arc_graphics_g2d_ScreenQuad_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScreenQuad_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_g2d_ScreenQuad_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_ScreenQuad_render_arc_graphics_gl_Shader 13
typedef void (*func_arc_graphics_g2d_ScreenQuad_render_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);

void mark_arc_graphics_g2d_ScreenQuad(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_ScreenQuad(jcontext ctx);
void init_arc_graphics_g2d_ScreenQuad(jcontext ctx, jobject self);
void M_arc_graphics_g2d_ScreenQuad_render_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_ScreenQuad_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
