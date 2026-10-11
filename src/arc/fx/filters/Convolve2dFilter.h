#ifndef HEADER_arc_fx_filters_Convolve2dFilter
#define HEADER_arc_fx_filters_Convolve2dFilter

#include "Clearwing.h"
#include "arc/fx/filters/MultipassVfxFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_fx_filters_Convolve2dFilter {
	arc_fx_filters_MultipassVfxFilter parent;
	jint F_radius;
	jint F_length;
	jref F_weights;
	jref F_offsetsHor;
	jref F_offsetsVert;
	jref F_hor;
	jref F_vert;
} arc_fx_filters_Convolve2dFilter;

extern Class class_arc_fx_filters_Convolve2dFilter;


#define VTABLE_arc_fx_filters_Convolve2dFilter_hashCode_R_int 0
typedef jint (*func_arc_fx_filters_Convolve2dFilter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_Convolve2dFilter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_fx_filters_Convolve2dFilter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_Convolve2dFilter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_fx_filters_Convolve2dFilter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_Convolve2dFilter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_fx_filters_Convolve2dFilter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_Convolve2dFilter_toString_R_java_lang_String 4
typedef jobject (*func_arc_fx_filters_Convolve2dFilter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_Convolve2dFilter_finalize 5
typedef void (*func_arc_fx_filters_Convolve2dFilter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_Convolve2dFilter_notify 6
typedef void (*func_arc_fx_filters_Convolve2dFilter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_Convolve2dFilter_notifyAll 7
typedef void (*func_arc_fx_filters_Convolve2dFilter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_Convolve2dFilter_wait 8
typedef void (*func_arc_fx_filters_Convolve2dFilter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_Convolve2dFilter_wait_long 9
typedef void (*func_arc_fx_filters_Convolve2dFilter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_fx_filters_Convolve2dFilter_wait_long_int 10
typedef void (*func_arc_fx_filters_Convolve2dFilter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_fx_filters_Convolve2dFilter_dispose 11
typedef void (*func_arc_fx_filters_Convolve2dFilter_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_Convolve2dFilter_isDisposed_R_boolean 12
typedef jbool (*func_arc_fx_filters_Convolve2dFilter_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_Convolve2dFilter_resize_int_int 13
typedef void (*func_arc_fx_filters_Convolve2dFilter_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_fx_filters_Convolve2dFilter_setParams 14
typedef void (*func_arc_fx_filters_Convolve2dFilter_setParams)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_Convolve2dFilter_render_arc_fx_util_PingPongBuffer 15
typedef void (*func_arc_fx_filters_Convolve2dFilter_render_arc_fx_util_PingPongBuffer)(jcontext ctx, jobject self, jobject param0);

void mark_arc_fx_filters_Convolve2dFilter(jobject object, jint mark, jint depth);
void clinit_arc_fx_filters_Convolve2dFilter(jcontext ctx);
void init_arc_fx_filters_Convolve2dFilter_int(jcontext ctx, jobject self, jint param0);
void M_arc_fx_filters_Convolve2dFilter_dispose(jcontext ctx, jobject self);
void M_arc_fx_filters_Convolve2dFilter_setParams(jcontext ctx, jobject self);
void M_arc_fx_filters_Convolve2dFilter_render_arc_fx_util_PingPongBuffer(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
