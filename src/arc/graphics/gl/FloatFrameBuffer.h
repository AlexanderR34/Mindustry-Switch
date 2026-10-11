#ifndef HEADER_arc_graphics_gl_FloatFrameBuffer
#define HEADER_arc_graphics_gl_FloatFrameBuffer

#include "Clearwing.h"
#include "arc/graphics/gl/FrameBuffer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_FloatFrameBuffer {
	arc_graphics_gl_FrameBuffer parent;
} arc_graphics_gl_FloatFrameBuffer;

extern Class class_arc_graphics_gl_FloatFrameBuffer;


#define VTABLE_arc_graphics_gl_FloatFrameBuffer_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_FloatFrameBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_FloatFrameBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_FloatFrameBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_FloatFrameBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_FloatFrameBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_finalize 5
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_notify 6
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_notifyAll 7
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_wait 8
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_wait_long 9
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_wait_long_int 10
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_dispose 11
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_gl_FloatFrameBuffer_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_getTexture_R_arc_graphics_GLTexture 13
typedef jobject (*func_arc_graphics_gl_FloatFrameBuffer_getTexture_R_arc_graphics_GLTexture)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_getTextureAttachments_R_arc_struct_Seq 14
typedef jobject (*func_arc_graphics_gl_FloatFrameBuffer_getTextureAttachments_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture 15
typedef jobject (*func_arc_graphics_gl_FloatFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_disposeTexture_arc_graphics_GLTexture 16
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_disposeTexture_arc_graphics_GLTexture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_attachTexture_int_arc_graphics_GLTexture 17
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_attachTexture_int_arc_graphics_GLTexture)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_build 18
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_build)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_checkValidBuilder 19
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_checkValidBuilder)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_bind 20
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_bind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_isBound_R_boolean 21
typedef jbool (*func_arc_graphics_gl_FloatFrameBuffer_isBound_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_begin_arc_graphics_Color 22
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_begin_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_begin 23
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_begin)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_beginBind 24
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_beginBind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_setFrameBufferViewport 25
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_setFrameBufferViewport)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_end 26
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_end)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_endBind 27
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_endBind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_getFramebufferHandle_R_int 28
typedef jint (*func_arc_graphics_gl_FloatFrameBuffer_getFramebufferHandle_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_getDepthBufferHandle_R_int 29
typedef jint (*func_arc_graphics_gl_FloatFrameBuffer_getDepthBufferHandle_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_getStencilBufferHandle_R_int 30
typedef jint (*func_arc_graphics_gl_FloatFrameBuffer_getStencilBufferHandle_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_getDepthStencilPackedBuffer_R_int 31
typedef jint (*func_arc_graphics_gl_FloatFrameBuffer_getDepthStencilPackedBuffer_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_getHeight_R_int 32
typedef jint (*func_arc_graphics_gl_FloatFrameBuffer_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_getWidth_R_int 33
typedef jint (*func_arc_graphics_gl_FloatFrameBuffer_getWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_create_arc_graphics_Pixmap$Format_int_int_boolean_boolean 34
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_create_arc_graphics_Pixmap$Format_int_int_boolean_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_blit_arc_graphics_gl_Shader 35
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_blit_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_resizeCheck_int_int_R_boolean 36
typedef jbool (*func_arc_graphics_gl_FloatFrameBuffer_resizeCheck_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_resize_int_int 37
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture 38
typedef jobject (*func_arc_graphics_gl_FloatFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_disposeTexture_arc_graphics_Texture 39
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_disposeTexture_arc_graphics_Texture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FloatFrameBuffer_attachTexture_int_arc_graphics_Texture 40
typedef void (*func_arc_graphics_gl_FloatFrameBuffer_attachTexture_int_arc_graphics_Texture)(jcontext ctx, jobject self, jint param0, jobject param1);

void mark_arc_graphics_gl_FloatFrameBuffer(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_FloatFrameBuffer(jcontext ctx);
void init_arc_graphics_gl_FloatFrameBuffer(jcontext ctx, jobject self);
void init_arc_graphics_gl_FloatFrameBuffer_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_gl_FloatFrameBuffer_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
void M_arc_graphics_gl_FloatFrameBuffer_create_arc_graphics_Pixmap$Format_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4);
void M_arc_graphics_gl_FloatFrameBuffer_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_arc_graphics_gl_FloatFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_gl_FloatFrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
