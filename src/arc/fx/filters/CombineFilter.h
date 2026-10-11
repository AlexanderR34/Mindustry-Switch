#ifndef HEADER_arc_fx_filters_CombineFilter
#define HEADER_arc_fx_filters_CombineFilter

#include "Clearwing.h"
#include "arc/fx/FxFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_fx_filters_CombineFilter {
	arc_fx_FxFilter parent;
	jfloat F_src1int;
	jfloat F_src1sat;
	jfloat F_src2int;
	jfloat F_src2sat;
	jref F_inputTexture2;
} arc_fx_filters_CombineFilter;

extern Class class_arc_fx_filters_CombineFilter;


#define VTABLE_arc_fx_filters_CombineFilter_hashCode_R_int 0
typedef jint (*func_arc_fx_filters_CombineFilter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_CombineFilter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_fx_filters_CombineFilter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_CombineFilter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_fx_filters_CombineFilter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_CombineFilter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_fx_filters_CombineFilter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_CombineFilter_toString_R_java_lang_String 4
typedef jobject (*func_arc_fx_filters_CombineFilter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_CombineFilter_finalize 5
typedef void (*func_arc_fx_filters_CombineFilter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_CombineFilter_notify 6
typedef void (*func_arc_fx_filters_CombineFilter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_CombineFilter_notifyAll 7
typedef void (*func_arc_fx_filters_CombineFilter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_CombineFilter_wait 8
typedef void (*func_arc_fx_filters_CombineFilter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_CombineFilter_wait_long 9
typedef void (*func_arc_fx_filters_CombineFilter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_fx_filters_CombineFilter_wait_long_int 10
typedef void (*func_arc_fx_filters_CombineFilter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_fx_filters_CombineFilter_dispose 11
typedef void (*func_arc_fx_filters_CombineFilter_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_CombineFilter_isDisposed_R_boolean 12
typedef jbool (*func_arc_fx_filters_CombineFilter_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_CombineFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter 13
typedef jobject (*func_arc_fx_filters_CombineFilter_setInput_arc_graphics_Texture_R_arc_fx_FxFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_CombineFilter_setInput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter 14
typedef jobject (*func_arc_fx_filters_CombineFilter_setInput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_CombineFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter 15
typedef jobject (*func_arc_fx_filters_CombineFilter_setOutput_arc_graphics_gl_FrameBuffer_R_arc_fx_FxFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_CombineFilter_resize_int_int 16
typedef void (*func_arc_fx_filters_CombineFilter_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_fx_filters_CombineFilter_rebind 17
typedef void (*func_arc_fx_filters_CombineFilter_rebind)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_CombineFilter_setParams 18
typedef void (*func_arc_fx_filters_CombineFilter_setParams)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_CombineFilter_render 19
typedef void (*func_arc_fx_filters_CombineFilter_render)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_CombineFilter_onBeforeRender 20
typedef void (*func_arc_fx_filters_CombineFilter_onBeforeRender)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_CombineFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer 21
typedef void (*func_arc_fx_filters_CombineFilter_render_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_fx_filters_CombineFilter_isDisabled_R_boolean 22
typedef jbool (*func_arc_fx_filters_CombineFilter_isDisabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_CombineFilter_setDisabled_boolean 23
typedef void (*func_arc_fx_filters_CombineFilter_setDisabled_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_fx_filters_CombineFilter_update 24
typedef void (*func_arc_fx_filters_CombineFilter_update)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_CombineFilter_setInput_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer_R_arc_fx_filters_CombineFilter 25
typedef jobject (*func_arc_fx_filters_CombineFilter_setInput_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer_R_arc_fx_filters_CombineFilter)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_fx_filters_CombineFilter_setInput_arc_graphics_Texture_arc_graphics_Texture_R_arc_fx_filters_CombineFilter 26
typedef jobject (*func_arc_fx_filters_CombineFilter_setInput_arc_graphics_Texture_arc_graphics_Texture_R_arc_fx_filters_CombineFilter)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_fx_filters_CombineFilter(jobject object, jint mark, jint depth);
void clinit_arc_fx_filters_CombineFilter(jcontext ctx);
void init_arc_fx_filters_CombineFilter(jcontext ctx, jobject self);
jobject M_arc_fx_filters_CombineFilter_setInput_arc_graphics_gl_FrameBuffer_arc_graphics_gl_FrameBuffer_R_arc_fx_filters_CombineFilter(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_fx_filters_CombineFilter_setInput_arc_graphics_Texture_arc_graphics_Texture_R_arc_fx_filters_CombineFilter(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_fx_filters_CombineFilter_setParams(jcontext ctx, jobject self);
void M_arc_fx_filters_CombineFilter_onBeforeRender(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
