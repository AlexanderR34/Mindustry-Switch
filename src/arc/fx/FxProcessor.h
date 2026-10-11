#ifndef HEADER_arc_fx_FxProcessor
#define HEADER_arc_fx_FxProcessor

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_fx_FxProcessor {
	java_lang_Object parent;
	jref F_priorities;
	jref F_effectsAll;
	jref F_effectsEnabled;
	jref F_bufferRenderer;
	jref F_fboFormat;
	jref F_pingPongBuffer;
	jbool F_disabled;
	jbool F_capturing;
	jbool F_hasCaptured;
	jbool F_applyingEffects;
	jbool F_blendingEnabled;
	jint F_width;
	jint F_height;
} arc_fx_FxProcessor;

extern Class class_arc_fx_FxProcessor;


#define VTABLE_arc_fx_FxProcessor_hashCode_R_int 0
typedef jint (*func_arc_fx_FxProcessor_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_fx_FxProcessor_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_FxProcessor_clone_R_java_lang_Object 2
typedef jobject (*func_arc_fx_FxProcessor_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_fx_FxProcessor_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_toString_R_java_lang_String 4
typedef jobject (*func_arc_fx_FxProcessor_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_finalize 5
typedef void (*func_arc_fx_FxProcessor_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_notify 6
typedef void (*func_arc_fx_FxProcessor_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_notifyAll 7
typedef void (*func_arc_fx_FxProcessor_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_wait 8
typedef void (*func_arc_fx_FxProcessor_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_wait_long 9
typedef void (*func_arc_fx_FxProcessor_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_fx_FxProcessor_wait_long_int 10
typedef void (*func_arc_fx_FxProcessor_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_fx_FxProcessor_dispose 11
typedef void (*func_arc_fx_FxProcessor_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_isDisposed_R_boolean 12
typedef jbool (*func_arc_fx_FxProcessor_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_resize_int_int 13
typedef void (*func_arc_fx_FxProcessor_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_fx_FxProcessor_rebind 14
typedef void (*func_arc_fx_FxProcessor_rebind)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_getWidth_R_int 15
typedef jint (*func_arc_fx_FxProcessor_getWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_getHeight_R_int 16
typedef jint (*func_arc_fx_FxProcessor_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_isDisabled_R_boolean 17
typedef jbool (*func_arc_fx_FxProcessor_isDisabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_setDisabled_boolean 18
typedef void (*func_arc_fx_FxProcessor_setDisabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_fx_FxProcessor_isBlendingEnabled_R_boolean 19
typedef jbool (*func_arc_fx_FxProcessor_isBlendingEnabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_setBlendingEnabled_boolean 20
typedef void (*func_arc_fx_FxProcessor_setBlendingEnabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_fx_FxProcessor_getFramebufferFormat_R_arc_graphics_Pixmap$Format 21
typedef jobject (*func_arc_fx_FxProcessor_getFramebufferFormat_R_arc_graphics_Pixmap$Format)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_setBufferTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter 22
typedef void (*func_arc_fx_FxProcessor_setBufferTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_arc_fx_FxProcessor_setTextureFilter_arc_graphics_Texture$TextureFilter 23
typedef void (*func_arc_fx_FxProcessor_setTextureFilter_arc_graphics_Texture$TextureFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_FxProcessor_isCapturing_R_boolean 24
typedef jbool (*func_arc_fx_FxProcessor_isCapturing_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_isApplyingEffects_R_boolean 25
typedef jbool (*func_arc_fx_FxProcessor_isApplyingEffects_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_hasResult_R_boolean 26
typedef jbool (*func_arc_fx_FxProcessor_hasResult_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_getResultBuffer_R_arc_graphics_gl_FrameBuffer 27
typedef jobject (*func_arc_fx_FxProcessor_getResultBuffer_R_arc_graphics_gl_FrameBuffer)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_getPingPongBuffer_R_arc_fx_util_PingPongBuffer 28
typedef jobject (*func_arc_fx_FxProcessor_getPingPongBuffer_R_arc_fx_util_PingPongBuffer)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_hasEnabledEffects_R_boolean 29
typedef jbool (*func_arc_fx_FxProcessor_hasEnabledEffects_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter 30
typedef void (*func_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter_int 31
typedef void (*func_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_fx_FxProcessor_removeEffect_arc_fx_FxFilter 32
typedef void (*func_arc_fx_FxProcessor_removeEffect_arc_fx_FxFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_FxProcessor_removeAllEffects 33
typedef void (*func_arc_fx_FxProcessor_removeAllEffects)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_setEffectPriority_arc_fx_FxFilter_int 34
typedef void (*func_arc_fx_FxProcessor_setEffectPriority_arc_fx_FxFilter_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_fx_FxProcessor_clear 35
typedef void (*func_arc_fx_FxProcessor_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_clear_arc_graphics_Color 36
typedef void (*func_arc_fx_FxProcessor_clear_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_FxProcessor_begin_R_boolean 37
typedef jbool (*func_arc_fx_FxProcessor_begin_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_end_R_boolean 38
typedef jbool (*func_arc_fx_FxProcessor_end_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_applyEffects 39
typedef void (*func_arc_fx_FxProcessor_applyEffects)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_render 40
typedef void (*func_arc_fx_FxProcessor_render)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_FxProcessor_render_int_int_int_int 41
typedef void (*func_arc_fx_FxProcessor_render_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_fx_FxProcessor_render_arc_graphics_gl_FrameBuffer 42
typedef void (*func_arc_fx_FxProcessor_render_arc_graphics_gl_FrameBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_FxProcessor_lambda$setEffectPriority$0_arc_fx_FxFilter_arc_fx_FxFilter_R_float 43
typedef jfloat (*func_arc_fx_FxProcessor_lambda$setEffectPriority$0_arc_fx_FxFilter_arc_fx_FxFilter_R_float)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_fx_FxProcessor_lambda$addEffect$0_arc_fx_FxFilter_arc_fx_FxFilter_R_float 44
typedef jfloat (*func_arc_fx_FxProcessor_lambda$addEffect$0_arc_fx_FxFilter_arc_fx_FxFilter_R_float)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_fx_FxProcessor(jobject object, jint mark, jint depth);
void clinit_arc_fx_FxProcessor(jcontext ctx);
void init_arc_fx_FxProcessor(jcontext ctx, jobject self);
void init_arc_fx_FxProcessor_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void init_arc_fx_FxProcessor_arc_graphics_Pixmap$Format_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void init_arc_fx_FxProcessor_arc_graphics_Pixmap$Format_int_int_boolean_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4);
void M_arc_fx_FxProcessor_dispose(jcontext ctx, jobject self);
void M_arc_fx_FxProcessor_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_fx_FxProcessor_rebind(jcontext ctx, jobject self);
jint M_arc_fx_FxProcessor_getWidth_R_int(jcontext ctx, jobject self);
jint M_arc_fx_FxProcessor_getHeight_R_int(jcontext ctx, jobject self);
jbool M_arc_fx_FxProcessor_isDisabled_R_boolean(jcontext ctx, jobject self);
void M_arc_fx_FxProcessor_setDisabled_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_arc_fx_FxProcessor_isBlendingEnabled_R_boolean(jcontext ctx, jobject self);
void M_arc_fx_FxProcessor_setBlendingEnabled_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_arc_fx_FxProcessor_getFramebufferFormat_R_arc_graphics_Pixmap$Format(jcontext ctx, jobject self);
void M_arc_fx_FxProcessor_setBufferTextureParams_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_arc_fx_FxProcessor_setTextureFilter_arc_graphics_Texture$TextureFilter(jcontext ctx, jobject self, jobject param0);
jbool M_arc_fx_FxProcessor_isCapturing_R_boolean(jcontext ctx, jobject self);
jbool M_arc_fx_FxProcessor_isApplyingEffects_R_boolean(jcontext ctx, jobject self);
jbool M_arc_fx_FxProcessor_hasResult_R_boolean(jcontext ctx, jobject self);
jobject M_arc_fx_FxProcessor_getResultBuffer_R_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self);
jobject M_arc_fx_FxProcessor_getPingPongBuffer_R_arc_fx_util_PingPongBuffer(jcontext ctx, jobject self);
jbool M_arc_fx_FxProcessor_hasEnabledEffects_R_boolean(jcontext ctx, jobject self);
void M_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter(jcontext ctx, jobject self, jobject param0);
void M_arc_fx_FxProcessor_addEffect_arc_fx_FxFilter_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_arc_fx_FxProcessor_removeEffect_arc_fx_FxFilter(jcontext ctx, jobject self, jobject param0);
void M_arc_fx_FxProcessor_removeAllEffects(jcontext ctx, jobject self);
void M_arc_fx_FxProcessor_setEffectPriority_arc_fx_FxFilter_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_arc_fx_FxProcessor_clear(jcontext ctx, jobject self);
void M_arc_fx_FxProcessor_clear_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
jbool M_arc_fx_FxProcessor_begin_R_boolean(jcontext ctx, jobject self);
jbool M_arc_fx_FxProcessor_end_R_boolean(jcontext ctx, jobject self);
void M_arc_fx_FxProcessor_applyEffects(jcontext ctx, jobject self);
void M_arc_fx_FxProcessor_render(jcontext ctx, jobject self);
void M_arc_fx_FxProcessor_render_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_arc_fx_FxProcessor_render_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self, jobject param0);
jbool SM_arc_fx_FxProcessor_lambda$applyEffects$0_arc_fx_FxFilter_R_boolean(jcontext ctx, jobject param0);
jfloat M_arc_fx_FxProcessor_lambda$setEffectPriority$0_arc_fx_FxFilter_arc_fx_FxFilter_R_float(jcontext ctx, jobject self, jobject param0, jobject param1);
jfloat M_arc_fx_FxProcessor_lambda$addEffect$0_arc_fx_FxFilter_arc_fx_FxFilter_R_float(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool SM_arc_fx_FxProcessor_lambda$hasEnabledEffects$0_arc_fx_FxFilter_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
