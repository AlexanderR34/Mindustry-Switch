#ifndef HEADER_arc_fx_util_FxBufferRenderer
#define HEADER_arc_fx_util_FxBufferRenderer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_fx_util_FxBufferRenderer {
	java_lang_Object parent;
	jref F_shader;
} arc_fx_util_FxBufferRenderer;

extern Class class_arc_fx_util_FxBufferRenderer;


#define VTABLE_arc_fx_util_FxBufferRenderer_hashCode_R_int 0
typedef jint (*func_arc_fx_util_FxBufferRenderer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_FxBufferRenderer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_fx_util_FxBufferRenderer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_util_FxBufferRenderer_clone_R_java_lang_Object 2
typedef jobject (*func_arc_fx_util_FxBufferRenderer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_FxBufferRenderer_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_fx_util_FxBufferRenderer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_FxBufferRenderer_toString_R_java_lang_String 4
typedef jobject (*func_arc_fx_util_FxBufferRenderer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_FxBufferRenderer_finalize 5
typedef void (*func_arc_fx_util_FxBufferRenderer_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_FxBufferRenderer_notify 6
typedef void (*func_arc_fx_util_FxBufferRenderer_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_FxBufferRenderer_notifyAll 7
typedef void (*func_arc_fx_util_FxBufferRenderer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_FxBufferRenderer_wait 8
typedef void (*func_arc_fx_util_FxBufferRenderer_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_FxBufferRenderer_wait_long 9
typedef void (*func_arc_fx_util_FxBufferRenderer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_fx_util_FxBufferRenderer_wait_long_int 10
typedef void (*func_arc_fx_util_FxBufferRenderer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_fx_util_FxBufferRenderer_dispose 11
typedef void (*func_arc_fx_util_FxBufferRenderer_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_FxBufferRenderer_isDisposed_R_boolean 12
typedef jbool (*func_arc_fx_util_FxBufferRenderer_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_FxBufferRenderer_rebind 13
typedef void (*func_arc_fx_util_FxBufferRenderer_rebind)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer 14
typedef void (*func_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer_int_int_int_int 15
typedef void (*func_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_arc_fx_util_FxBufferRenderer_renderToFbo_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer 16
typedef void (*func_arc_fx_util_FxBufferRenderer_renderToFbo_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_fx_util_FxBufferRenderer(jobject object, jint mark, jint depth);
void clinit_arc_fx_util_FxBufferRenderer(jcontext ctx);
void init_arc_fx_util_FxBufferRenderer(jcontext ctx, jobject self);
void M_arc_fx_util_FxBufferRenderer_dispose(jcontext ctx, jobject self);
void M_arc_fx_util_FxBufferRenderer_rebind(jcontext ctx, jobject self);
void M_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self, jobject param0);
void M_arc_fx_util_FxBufferRenderer_renderToScreen_arc_graphics_gl_FrameBuffer_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
void M_arc_fx_util_FxBufferRenderer_renderToFbo_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
