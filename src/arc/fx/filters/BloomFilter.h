#ifndef HEADER_arc_fx_filters_BloomFilter
#define HEADER_arc_fx_filters_BloomFilter

#include "Clearwing.h"
#include "arc/fx/FxFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_fx_filters_BloomFilter {
	arc_fx_FxFilter parent;
	jref F_buffer;
	jref F_blur;
	jref F_threshold;
	jref F_combine;
	jref F_blending;
	jint F_scaling;
} arc_fx_filters_BloomFilter;

extern Class class_arc_fx_filters_BloomFilter;


#define VTABLE_arc_fx_filters_BloomFilter_hashCode_R_int 0
typedef jint (*func_arc_fx_filters_BloomFilter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_BloomFilter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_fx_filters_BloomFilter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_BloomFilter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_fx_filters_BloomFilter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_BloomFilter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_fx_filters_BloomFilter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_BloomFilter_toString_R_java_lang_String 4
typedef jobject (*func_arc_fx_filters_BloomFilter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_BloomFilter_finalize 5
typedef void (*func_arc_fx_filters_BloomFilter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_BloomFilter_notify 6
typedef void (*func_arc_fx_filters_BloomFilter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_BloomFilter_notifyAll 7
typedef void (*func_arc_fx_filters_BloomFilter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_BloomFilter_wait 8
typedef void (*func_arc_fx_filters_BloomFilter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_BloomFilter_wait_long 9
typedef void (*func_arc_fx_filters_BloomFilter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_fx_filters_BloomFilter_wait_long_int 10
typedef void (*func_arc_fx_filters_BloomFilter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_fx_filters_BloomFilter_dispose 11
typedef void (*func_arc_fx_filters_BloomFilter_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_BloomFilter_isDisposed_R_boolean 12
typedef jbool (*func_arc_fx_filters_BloomFilter_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_BloomFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter 13
typedef jobject (*func_arc_fx_filters_BloomFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_BloomFilter_setInput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter 14
typedef jobject (*func_arc_fx_filters_BloomFilter_setInput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_BloomFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter 15
typedef jobject (*func_arc_fx_filters_BloomFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_BloomFilter_resize_int_int 16
typedef void (*func_arc_fx_filters_BloomFilter_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_fx_filters_BloomFilter_rebind 17
typedef void (*func_arc_fx_filters_BloomFilter_rebind)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_BloomFilter_setParams 18
typedef void (*func_arc_fx_filters_BloomFilter_setParams)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_BloomFilter_render 19
typedef void (*func_arc_fx_filters_BloomFilter_render)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_BloomFilter_onBeforeRender 20
typedef void (*func_arc_fx_filters_BloomFilter_onBeforeRender)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_BloomFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer 21
typedef void (*func_arc_fx_filters_BloomFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_fx_filters_BloomFilter_isDisabled_R_boolean 22
typedef jbool (*func_arc_fx_filters_BloomFilter_isDisabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_BloomFilter_setDisabled_boolean 23
typedef void (*func_arc_fx_filters_BloomFilter_setDisabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_fx_filters_BloomFilter_update 24
typedef void (*func_arc_fx_filters_BloomFilter_update)(jcontext ctx, jobject self);

void mark_arc_fx_filters_BloomFilter(jobject object, jint mark, jint depth);
void clinit_arc_fx_filters_BloomFilter(jcontext ctx);
void init_arc_fx_filters_BloomFilter(jcontext ctx, jobject self);
void M_arc_fx_filters_BloomFilter_rebind(jcontext ctx, jobject self);
void M_arc_fx_filters_BloomFilter_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_fx_filters_BloomFilter_dispose(jcontext ctx, jobject self);
void M_arc_fx_filters_BloomFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
