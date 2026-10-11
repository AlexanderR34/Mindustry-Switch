#ifndef HEADER_arc_fx_filters_GaussianBlurFilter
#define HEADER_arc_fx_filters_GaussianBlurFilter

#include "Clearwing.h"
#include "arc/fx/filters/MultipassVfxFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_fx_filters_GaussianBlurFilter {
	arc_fx_filters_MultipassVfxFilter parent;
	jref F_type;
	jfloat F_amount;
	jint F_passes;
	jfloat F_invWidth;
	jfloat F_invHeight;
	jref F_convolve;
} arc_fx_filters_GaussianBlurFilter;

extern Class class_arc_fx_filters_GaussianBlurFilter;


#define VTABLE_arc_fx_filters_GaussianBlurFilter_hashCode_R_int 0
typedef jint (*func_arc_fx_filters_GaussianBlurFilter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_fx_filters_GaussianBlurFilter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_fx_filters_GaussianBlurFilter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_fx_filters_GaussianBlurFilter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_toString_R_java_lang_String 4
typedef jobject (*func_arc_fx_filters_GaussianBlurFilter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_finalize 5
typedef void (*func_arc_fx_filters_GaussianBlurFilter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_notify 6
typedef void (*func_arc_fx_filters_GaussianBlurFilter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_notifyAll 7
typedef void (*func_arc_fx_filters_GaussianBlurFilter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_wait 8
typedef void (*func_arc_fx_filters_GaussianBlurFilter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_wait_long 9
typedef void (*func_arc_fx_filters_GaussianBlurFilter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_wait_long_int 10
typedef void (*func_arc_fx_filters_GaussianBlurFilter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_dispose 11
typedef void (*func_arc_fx_filters_GaussianBlurFilter_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_isDisposed_R_boolean 12
typedef jbool (*func_arc_fx_filters_GaussianBlurFilter_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_resize_int_int 13
typedef void (*func_arc_fx_filters_GaussianBlurFilter_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_setParams 14
typedef void (*func_arc_fx_filters_GaussianBlurFilter_setParams)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_render_arc_fx_util_PingPongBuffer 15
typedef void (*func_arc_fx_filters_GaussianBlurFilter_render_arc_fx_util_PingPongBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_getType_R_arc_fx_filters_GaussianBlurFilter$BlurType 16
typedef jobject (*func_arc_fx_filters_GaussianBlurFilter_getType_R_arc_fx_filters_GaussianBlurFilter$BlurType)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_setType_arc_fx_filters_GaussianBlurFilter$BlurType 17
typedef void (*func_arc_fx_filters_GaussianBlurFilter_setType_arc_fx_filters_GaussianBlurFilter$BlurType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_getAmount_R_float 18
typedef jfloat (*func_arc_fx_filters_GaussianBlurFilter_getAmount_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_setAmount_float 19
typedef void (*func_arc_fx_filters_GaussianBlurFilter_setAmount_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_getPasses_R_int 20
typedef jint (*func_arc_fx_filters_GaussianBlurFilter_getPasses_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_setPasses_int 21
typedef void (*func_arc_fx_filters_GaussianBlurFilter_setPasses_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_computeBlurWeightings 22
typedef void (*func_arc_fx_filters_GaussianBlurFilter_computeBlurWeightings)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_computeKernel_int_float_Array1_float 23
typedef void (*func_arc_fx_filters_GaussianBlurFilter_computeKernel_int_float_Array1_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jobject param2);
#define VTABLE_arc_fx_filters_GaussianBlurFilter_computeOffsets_int_float_float_Array1_float_Array1_float 24
typedef void (*func_arc_fx_filters_GaussianBlurFilter_computeOffsets_int_float_float_Array1_float_Array1_float)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jobject param3, jobject param4);

void mark_arc_fx_filters_GaussianBlurFilter(jobject object, jint mark, jint depth);
void clinit_arc_fx_filters_GaussianBlurFilter(jcontext ctx);
void init_arc_fx_filters_GaussianBlurFilter(jcontext ctx, jobject self);
void init_arc_fx_filters_GaussianBlurFilter_arc_fx_filters_GaussianBlurFilter$BlurType(jcontext ctx, jobject self, jobject param0);
void M_arc_fx_filters_GaussianBlurFilter_dispose(jcontext ctx, jobject self);
void M_arc_fx_filters_GaussianBlurFilter_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_fx_filters_GaussianBlurFilter_setParams(jcontext ctx, jobject self);
void M_arc_fx_filters_GaussianBlurFilter_render_arc_fx_util_PingPongBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_arc_fx_filters_GaussianBlurFilter_getType_R_arc_fx_filters_GaussianBlurFilter$BlurType(jcontext ctx, jobject self);
void M_arc_fx_filters_GaussianBlurFilter_setType_arc_fx_filters_GaussianBlurFilter$BlurType(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_fx_filters_GaussianBlurFilter_getAmount_R_float(jcontext ctx, jobject self);
void M_arc_fx_filters_GaussianBlurFilter_setAmount_float(jcontext ctx, jobject self, jfloat param0);
jint M_arc_fx_filters_GaussianBlurFilter_getPasses_R_int(jcontext ctx, jobject self);
void M_arc_fx_filters_GaussianBlurFilter_setPasses_int(jcontext ctx, jobject self, jint param0);
void M_arc_fx_filters_GaussianBlurFilter_computeBlurWeightings(jcontext ctx, jobject self);
void M_arc_fx_filters_GaussianBlurFilter_computeKernel_int_float_Array1_float(jcontext ctx, jobject self, jint param0, jfloat param1, jobject param2);
void M_arc_fx_filters_GaussianBlurFilter_computeOffsets_int_float_float_Array1_float_Array1_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jobject param3, jobject param4);

#ifdef __cplusplus
}
#endif

#endif
