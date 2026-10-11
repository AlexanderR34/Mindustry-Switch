#ifndef HEADER_arc_graphics_gl_FrameBuffer
#define HEADER_arc_graphics_gl_FrameBuffer

#include "Clearwing.h"
#include "arc/graphics/gl/GLFrameBuffer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_gl_FrameBuffer {
	arc_graphics_gl_GLFrameBuffer parent;
	jref F_format;
} arc_graphics_gl_FrameBuffer;

extern Class class_arc_graphics_gl_FrameBuffer;


#define VTABLE_arc_graphics_gl_FrameBuffer_hashCode_R_int 0
typedef jint (*func_arc_graphics_gl_FrameBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_gl_FrameBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FrameBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_gl_FrameBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_gl_FrameBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_gl_FrameBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_finalize 5
typedef void (*func_arc_graphics_gl_FrameBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_notify 6
typedef void (*func_arc_graphics_gl_FrameBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_notifyAll 7
typedef void (*func_arc_graphics_gl_FrameBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_wait 8
typedef void (*func_arc_graphics_gl_FrameBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_wait_long 9
typedef void (*func_arc_graphics_gl_FrameBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_gl_FrameBuffer_wait_long_int 10
typedef void (*func_arc_graphics_gl_FrameBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_gl_FrameBuffer_dispose 11
typedef void (*func_arc_graphics_gl_FrameBuffer_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_gl_FrameBuffer_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture 13
typedef jobject (*func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_getTextureAttachments_R_arc_struct_Seq 14
typedef jobject (*func_arc_graphics_gl_FrameBuffer_getTextureAttachments_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture 15
typedef jobject (*func_arc_graphics_gl_FrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FrameBuffer_disposeTexture_arc_graphics_GLTexture 16
typedef void (*func_arc_graphics_gl_FrameBuffer_disposeTexture_arc_graphics_GLTexture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FrameBuffer_attachTexture_int_arc_graphics_GLTexture 17
typedef void (*func_arc_graphics_gl_FrameBuffer_attachTexture_int_arc_graphics_GLTexture)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_graphics_gl_FrameBuffer_build 18
typedef void (*func_arc_graphics_gl_FrameBuffer_build)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_checkValidBuilder 19
typedef void (*func_arc_graphics_gl_FrameBuffer_checkValidBuilder)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_bind 20
typedef void (*func_arc_graphics_gl_FrameBuffer_bind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_isBound_R_boolean 21
typedef jbool (*func_arc_graphics_gl_FrameBuffer_isBound_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color 22
typedef void (*func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FrameBuffer_begin 23
typedef void (*func_arc_graphics_gl_FrameBuffer_begin)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_beginBind 24
typedef void (*func_arc_graphics_gl_FrameBuffer_beginBind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_setFrameBufferViewport 25
typedef void (*func_arc_graphics_gl_FrameBuffer_setFrameBufferViewport)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_end 26
typedef void (*func_arc_graphics_gl_FrameBuffer_end)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_endBind 27
typedef void (*func_arc_graphics_gl_FrameBuffer_endBind)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_getFramebufferHandle_R_int 28
typedef jint (*func_arc_graphics_gl_FrameBuffer_getFramebufferHandle_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_getDepthBufferHandle_R_int 29
typedef jint (*func_arc_graphics_gl_FrameBuffer_getDepthBufferHandle_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_getStencilBufferHandle_R_int 30
typedef jint (*func_arc_graphics_gl_FrameBuffer_getStencilBufferHandle_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_getDepthStencilPackedBuffer_R_int 31
typedef jint (*func_arc_graphics_gl_FrameBuffer_getDepthStencilPackedBuffer_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int 32
typedef jint (*func_arc_graphics_gl_FrameBuffer_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int 33
typedef jint (*func_arc_graphics_gl_FrameBuffer_getWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_gl_FrameBuffer_create_arc_graphics_Pixmap$Format_int_int_boolean_boolean 34
typedef void (*func_arc_graphics_gl_FrameBuffer_create_arc_graphics_Pixmap$Format_int_int_boolean_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4);
#define VTABLE_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader 35
typedef void (*func_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FrameBuffer_resizeCheck_int_int_R_boolean 36
typedef jbool (*func_arc_graphics_gl_FrameBuffer_resizeCheck_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_gl_FrameBuffer_resize_int_int 37
typedef void (*func_arc_graphics_gl_FrameBuffer_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_gl_FrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture 38
typedef jobject (*func_arc_graphics_gl_FrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FrameBuffer_disposeTexture_arc_graphics_Texture 39
typedef void (*func_arc_graphics_gl_FrameBuffer_disposeTexture_arc_graphics_Texture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_gl_FrameBuffer_attachTexture_int_arc_graphics_Texture 40
typedef void (*func_arc_graphics_gl_FrameBuffer_attachTexture_int_arc_graphics_Texture)(jcontext ctx, jobject self, jint param0, jobject param1);

void mark_arc_graphics_gl_FrameBuffer(jobject object, jint mark, jint depth);
void clinit_arc_graphics_gl_FrameBuffer(jcontext ctx);
void init_arc_graphics_gl_FrameBuffer_arc_graphics_gl_GLFrameBuffer$GLFrameBufferBuilder(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self);
void init_arc_graphics_gl_FrameBuffer_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
void init_arc_graphics_gl_FrameBuffer_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
void init_arc_graphics_gl_FrameBuffer_arc_graphics_Pixmap$Format_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4);
void M_arc_graphics_gl_FrameBuffer_create_arc_graphics_Pixmap$Format_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4);
void M_arc_graphics_gl_FrameBuffer_blit_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0);
jbool M_arc_graphics_gl_FrameBuffer_resizeCheck_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_graphics_gl_FrameBuffer_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void SM_arc_graphics_gl_FrameBuffer_unbind(jcontext ctx);
jobject M_arc_graphics_gl_FrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_gl_FrameBuffer_disposeTexture_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_gl_FrameBuffer_attachTexture_int_arc_graphics_Texture(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_graphics_gl_FrameBuffer_attachTexture_int_arc_graphics_GLTexture(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_graphics_gl_FrameBuffer_disposeTexture_arc_graphics_GLTexture(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_gl_FrameBuffer_createTexture_arc_graphics_gl_GLFrameBuffer$FrameBufferTextureAttachmentSpec_R_arc_graphics_GLTexture(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
