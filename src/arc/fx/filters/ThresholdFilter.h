#ifndef HEADER_arc_fx_filters_ThresholdFilter
#define HEADER_arc_fx_filters_ThresholdFilter

#include "Clearwing.h"
#include "arc/fx/FxFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_fx_filters_ThresholdFilter {
	arc_fx_FxFilter parent;
	jfloat F_gamma;
} arc_fx_filters_ThresholdFilter;

extern Class class_arc_fx_filters_ThresholdFilter;


#define VTABLE_arc_fx_filters_ThresholdFilter_hashCode_R_int 0
typedef jint (*func_arc_fx_filters_ThresholdFilter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_ThresholdFilter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_fx_filters_ThresholdFilter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_ThresholdFilter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_fx_filters_ThresholdFilter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_ThresholdFilter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_fx_filters_ThresholdFilter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_ThresholdFilter_toString_R_java_lang_String 4
typedef jobject (*func_arc_fx_filters_ThresholdFilter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_ThresholdFilter_finalize 5
typedef void (*func_arc_fx_filters_ThresholdFilter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_ThresholdFilter_notify 6
typedef void (*func_arc_fx_filters_ThresholdFilter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_ThresholdFilter_notifyAll 7
typedef void (*func_arc_fx_filters_ThresholdFilter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_ThresholdFilter_wait 8
typedef void (*func_arc_fx_filters_ThresholdFilter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_ThresholdFilter_wait_long 9
typedef void (*func_arc_fx_filters_ThresholdFilter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_fx_filters_ThresholdFilter_wait_long_int 10
typedef void (*func_arc_fx_filters_ThresholdFilter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_fx_filters_ThresholdFilter_dispose 11
typedef void (*func_arc_fx_filters_ThresholdFilter_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_ThresholdFilter_isDisposed_R_boolean 12
typedef jbool (*func_arc_fx_filters_ThresholdFilter_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_ThresholdFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter 13
typedef jobject (*func_arc_fx_filters_ThresholdFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_ThresholdFilter_setInput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter 14
typedef jobject (*func_arc_fx_filters_ThresholdFilter_setInput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_ThresholdFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter 15
typedef jobject (*func_arc_fx_filters_ThresholdFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_ThresholdFilter_resize_int_int 16
typedef void (*func_arc_fx_filters_ThresholdFilter_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_fx_filters_ThresholdFilter_rebind 17
typedef void (*func_arc_fx_filters_ThresholdFilter_rebind)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_ThresholdFilter_setParams 18
typedef void (*func_arc_fx_filters_ThresholdFilter_setParams)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_ThresholdFilter_render 19
typedef void (*func_arc_fx_filters_ThresholdFilter_render)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_ThresholdFilter_onBeforeRender 20
typedef void (*func_arc_fx_filters_ThresholdFilter_onBeforeRender)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_ThresholdFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer 21
typedef void (*func_arc_fx_filters_ThresholdFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_fx_filters_ThresholdFilter_isDisabled_R_boolean 22
typedef jbool (*func_arc_fx_filters_ThresholdFilter_isDisabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_ThresholdFilter_setDisabled_boolean 23
typedef void (*func_arc_fx_filters_ThresholdFilter_setDisabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_fx_filters_ThresholdFilter_update 24
typedef void (*func_arc_fx_filters_ThresholdFilter_update)(jcontext ctx, jobject self);

void mark_arc_fx_filters_ThresholdFilter(jobject object, jint mark, jint depth);
void clinit_arc_fx_filters_ThresholdFilter(jcontext ctx);
void init_arc_fx_filters_ThresholdFilter(jcontext ctx, jobject self);
void M_arc_fx_filters_ThresholdFilter_setParams(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
