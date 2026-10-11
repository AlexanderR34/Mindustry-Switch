#ifndef HEADER_arc_fx_util_PingPongBuffer
#define HEADER_arc_fx_util_PingPongBuffer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_fx_util_PingPongBuffer {
	java_lang_Object parent;
	jref F_buffer1;
	jref F_buffer2;
	jref F_bufDst;
	jref F_bufSrc;
	jbool F_writeState;
	jbool F_capturing;
	jref F_wrapU;
	jref F_wrapV;
	jref F_filterMin;
	jref F_filterMag;
} arc_fx_util_PingPongBuffer;

extern Class class_arc_fx_util_PingPongBuffer;


#define VTABLE_arc_fx_util_PingPongBuffer_hashCode_R_int 0
typedef jint (*func_arc_fx_util_PingPongBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_fx_util_PingPongBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_util_PingPongBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_arc_fx_util_PingPongBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_fx_util_PingPongBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_toString_R_java_lang_String 4
typedef jobject (*func_arc_fx_util_PingPongBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_finalize 5
typedef void (*func_arc_fx_util_PingPongBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_notify 6
typedef void (*func_arc_fx_util_PingPongBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_notifyAll 7
typedef void (*func_arc_fx_util_PingPongBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_wait 8
typedef void (*func_arc_fx_util_PingPongBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_wait_long 9
typedef void (*func_arc_fx_util_PingPongBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_fx_util_PingPongBuffer_wait_long_int 10
typedef void (*func_arc_fx_util_PingPongBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_fx_util_PingPongBuffer_dispose 11
typedef void (*func_arc_fx_util_PingPongBuffer_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_resize_int_int 12
typedef void (*func_arc_fx_util_PingPongBuffer_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_fx_util_PingPongBuffer_rebind 13
typedef void (*func_arc_fx_util_PingPongBuffer_rebind)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_begin 14
typedef void (*func_arc_fx_util_PingPongBuffer_begin)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_swap 15
typedef void (*func_arc_fx_util_PingPongBuffer_swap)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_end 16
typedef void (*func_arc_fx_util_PingPongBuffer_end)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_getSrcTexture_R_arc_graphics_Texture 17
typedef jobject (*func_arc_fx_util_PingPongBuffer_getSrcTexture_R_arc_graphics_Texture)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_getSrcBuffer_R_arc_graphics_gl_FrameBuffer 18
typedef jobject (*func_arc_fx_util_PingPongBuffer_getSrcBuffer_R_arc_graphics_gl_FrameBuffer)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_getDstTexture_R_arc_graphics_Texture 19
typedef jobject (*func_arc_fx_util_PingPongBuffer_getDstTexture_R_arc_graphics_Texture)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer 20
typedef jobject (*func_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_util_PingPongBuffer_setTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter 21
typedef void (*func_arc_fx_util_PingPongBuffer_setTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_arc_fx_util_PingPongBuffer_clear_arc_graphics_Color 22
typedef void (*func_arc_fx_util_PingPongBuffer_clear_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_util_PingPongBuffer_clear_float_float_float_float 23
typedef void (*func_arc_fx_util_PingPongBuffer_clear_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);

void mark_arc_fx_util_PingPongBuffer(jobject object, jint mark, jint depth);
void clinit_arc_fx_util_PingPongBuffer(jcontext ctx);
void init_arc_fx_util_PingPongBuffer_arc_graphics_Pixmap$Format(jcontext ctx, jobject self, jobject param0);
void init_arc_fx_util_PingPongBuffer_arc_graphics_Pixmap$Format_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void init_arc_fx_util_PingPongBuffer_arc_graphics_Pixmap$Format_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4);
void M_arc_fx_util_PingPongBuffer_dispose(jcontext ctx, jobject self);
void M_arc_fx_util_PingPongBuffer_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_fx_util_PingPongBuffer_rebind(jcontext ctx, jobject self);
void M_arc_fx_util_PingPongBuffer_begin(jcontext ctx, jobject self);
void M_arc_fx_util_PingPongBuffer_swap(jcontext ctx, jobject self);
void M_arc_fx_util_PingPongBuffer_end(jcontext ctx, jobject self);
jobject M_arc_fx_util_PingPongBuffer_getSrcTexture_R_arc_graphics_Texture(jcontext ctx, jobject self);
jobject M_arc_fx_util_PingPongBuffer_getSrcBuffer_R_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self);
jobject M_arc_fx_util_PingPongBuffer_getDstTexture_R_arc_graphics_Texture(jcontext ctx, jobject self);
jobject M_arc_fx_util_PingPongBuffer_getDstBuffer_R_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self);
void M_arc_fx_util_PingPongBuffer_setTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_arc_fx_util_PingPongBuffer_clear_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
void M_arc_fx_util_PingPongBuffer_clear_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);

#ifdef __cplusplus
}
#endif

#endif
