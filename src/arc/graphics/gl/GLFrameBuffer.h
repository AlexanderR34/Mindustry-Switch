#ifndef HEADER_arc_graphics_gl_GLFrameBuffer
#define HEADER_arc_graphics_gl_GLFrameBuffer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_GLFrameBuffer {
	java_lang_Object parent;
	jref F_textureAttachments;
	jref F_lastBoundFramebuffer;
	jint F_framebufferHandle;
	jint F_depthbufferHandle;
	jint F_stencilbufferHandle;
	jint F_depthStencilPackedBufferHandle;
	jbool F_hasDepthStencilPackedBuffer;
	jbool F_isMRT;
	jref F_bufferBuilder;
} arc_graphics_gl_GLFrameBuffer;

extern Class class_arc_graphics_gl_GLFrameBuffer;

extern jint SF_arc_graphics_gl_GLFrameBuffer_GL_DEPTH24_STENCIL8_OES;
extern jobject SF_arc_graphics_gl_GLFrameBuffer_currentBoundFramebuffer;
extern jint SF_arc_graphics_gl_GLFrameBuffer_defaultFramebufferHandle;
extern jint SF_arc_graphics_gl_GLFrameBuffer_bufferNesting;
extern jbool SF_arc_graphics_gl_GLFrameBuffer_defaultFramebufferHandleInitialized;

#define VTABLE_arc_graphics_gl_GLFrameBuffer_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_GLFrameBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_GLFrameBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_GLFrameBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_GLFrameBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_GLFrameBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_finalize 5
typedef void (*func_arc_graphics_gl_GLFrameBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_notify 6
typedef void (*func_arc_graphics_gl_GLFrameBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_notifyAll 7
typedef void (*func_arc_graphics_gl_GLFrameBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_wait 8
typedef void (*func_arc_graphics_gl_GLFrameBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_wait_long 9
typedef void (*func_arc_graphics_gl_GLFrameBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_wait_long_int 10
typedef void (*func_arc_graphics_gl_GLFrameBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_dispose 11
typedef void (*func_arc_graphics_gl_GLFrameBuffer_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_gl_GLFrameBuffer_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_getTexture_R_arc_graphics_GLTexture 13
typedef jobject (*func_arc_graphics_gl_GLFrameBuffer_getTexture_R_arc_graphics_GLTexture)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_getTextureAttachments_R_arc_struct_Seq 14
typedef jobject (*func_arc_graphics_gl_GLFrameBuffer_getTextureAttachments_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture 15
typedef jobject (*func_arc_graphics_gl_GLFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_disposeTexture_arc_graphics_GLTexture 16
typedef void (*func_arc_graphics_gl_GLFrameBuffer_disposeTexture_arc_graphics_GLTexture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_attachTexture_int_arc_graphics_GLTexture 17
typedef void (*func_arc_graphics_gl_GLFrameBuffer_attachTexture_int_arc_graphics_GLTexture)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_build 18
typedef void (*func_arc_graphics_gl_GLFrameBuffer_build)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_checkValidBuilder 19
typedef void (*func_arc_graphics_gl_GLFrameBuffer_checkValidBuilder)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_bind 20
typedef void (*func_arc_graphics_gl_GLFrameBuffer_bind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_isBound_R_boolean 21
typedef jbool (*func_arc_graphics_gl_GLFrameBuffer_isBound_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_begin_arc_graphics_Color 22
typedef void (*func_arc_graphics_gl_GLFrameBuffer_begin_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_begin 23
typedef void (*func_arc_graphics_gl_GLFrameBuffer_begin)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_beginBind 24
typedef void (*func_arc_graphics_gl_GLFrameBuffer_beginBind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_setFrameBufferViewport 25
typedef void (*func_arc_graphics_gl_GLFrameBuffer_setFrameBufferViewport)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_end 26
typedef void (*func_arc_graphics_gl_GLFrameBuffer_end)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_endBind 27
typedef void (*func_arc_graphics_gl_GLFrameBuffer_endBind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_getFramebufferHandle_R_int 28
typedef jint (*func_arc_graphics_gl_GLFrameBuffer_getFramebufferHandle_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_getDepthBufferHandle_R_int 29
typedef jint (*func_arc_graphics_gl_GLFrameBuffer_getDepthBufferHandle_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_getStencilBufferHandle_R_int 30
typedef jint (*func_arc_graphics_gl_GLFrameBuffer_getStencilBufferHandle_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_getDepthStencilPackedBuffer_R_int 31
typedef jint (*func_arc_graphics_gl_GLFrameBuffer_getDepthStencilPackedBuffer_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_getHeight_R_int 32
typedef jint (*func_arc_graphics_gl_GLFrameBuffer_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_GLFrameBuffer_getWidth_R_int 33
typedef jint (*func_arc_graphics_gl_GLFrameBuffer_getWidth_R_int)(jcontext ctx, jobject self);

void mark_arc_graphics_gl_GLFrameBuffer(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_GLFrameBuffer(jcontext ctx);
void init_arc_graphics_gl_GLFrameBuffer(jcontext ctx, jobject self);
void init_arc_graphics_gl_GLFrameBuffer_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jobject param0);
jint SM_arc_graphics_gl_GLFrameBuffer_getBufferNesting_R_int(jcontext ctx);
void SM_arc_graphics_gl_GLFrameBuffer_unbind(jcontext ctx);
jobject M_arc_graphics_gl_GLFrameBuffer_getTexture_R_arc_graphics_GLTexture(jcontext ctx, jobject self);
jobject M_arc_graphics_gl_GLFrameBuffer_getTextureAttachments_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_arc_graphics_gl_GLFrameBuffer_build(jcontext ctx, jobject self);
void M_arc_graphics_gl_GLFrameBuffer_checkValidBuilder(jcontext ctx, jobject self);
void M_arc_graphics_gl_GLFrameBuffer_dispose(jcontext ctx, jobject self);
void M_arc_graphics_gl_GLFrameBuffer_bind(jcontext ctx, jobject self);
jbool M_arc_graphics_gl_GLFrameBuffer_isBound_R_boolean(jcontext ctx, jobject self);
void M_arc_graphics_gl_GLFrameBuffer_begin_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_gl_GLFrameBuffer_begin(jcontext ctx, jobject self);
void M_arc_graphics_gl_GLFrameBuffer_beginBind(jcontext ctx, jobject self);
void M_arc_graphics_gl_GLFrameBuffer_setFrameBufferViewport(jcontext ctx, jobject self);
void M_arc_graphics_gl_GLFrameBuffer_end(jcontext ctx, jobject self);
void M_arc_graphics_gl_GLFrameBuffer_endBind(jcontext ctx, jobject self);
jint M_arc_graphics_gl_GLFrameBuffer_getFramebufferHandle_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_GLFrameBuffer_getDepthBufferHandle_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_GLFrameBuffer_getStencilBufferHandle_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_GLFrameBuffer_getDepthStencilPackedBuffer_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_GLFrameBuffer_getHeight_R_int(jcontext ctx, jobject self);
jint M_arc_graphics_gl_GLFrameBuffer_getWidth_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
