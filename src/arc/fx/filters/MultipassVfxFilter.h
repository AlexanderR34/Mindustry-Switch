#ifndef HEADER_arc_fx_filters_MultipassVfxFilter
#define HEADER_arc_fx_filters_MultipassVfxFilter

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_fx_filters_MultipassVfxFilter {
	java_lang_Object parent;
} arc_fx_filters_MultipassVfxFilter;

extern Class class_arc_fx_filters_MultipassVfxFilter;


#define VTABLE_arc_fx_filters_MultipassVfxFilter_hashCode_R_int 0
typedef jint (*func_arc_fx_filters_MultipassVfxFilter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_MultipassVfxFilter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_fx_filters_MultipassVfxFilter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_fx_filters_MultipassVfxFilter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_fx_filters_MultipassVfxFilter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_MultipassVfxFilter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_fx_filters_MultipassVfxFilter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_MultipassVfxFilter_toString_R_java_lang_String 4
typedef jobject (*func_arc_fx_filters_MultipassVfxFilter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_MultipassVfxFilter_finalize 5
typedef void (*func_arc_fx_filters_MultipassVfxFilter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_MultipassVfxFilter_notify 6
typedef void (*func_arc_fx_filters_MultipassVfxFilter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_MultipassVfxFilter_notifyAll 7
typedef void (*func_arc_fx_filters_MultipassVfxFilter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_MultipassVfxFilter_wait 8
typedef void (*func_arc_fx_filters_MultipassVfxFilter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_MultipassVfxFilter_wait_long 9
typedef void (*func_arc_fx_filters_MultipassVfxFilter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_fx_filters_MultipassVfxFilter_wait_long_int 10
typedef void (*func_arc_fx_filters_MultipassVfxFilter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_fx_filters_MultipassVfxFilter_dispose 11
typedef void (*func_arc_fx_filters_MultipassVfxFilter_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_MultipassVfxFilter_isDisposed_R_boolean 12
typedef jbool (*func_arc_fx_filters_MultipassVfxFilter_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_MultipassVfxFilter_resize_int_int 13
typedef void (*func_arc_fx_filters_MultipassVfxFilter_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_fx_filters_MultipassVfxFilter_setParams 14
typedef void (*func_arc_fx_filters_MultipassVfxFilter_setParams)(jcontext ctx, jobject self);
#define VTABLE_arc_fx_filters_MultipassVfxFilter_render_arc_fx_util_PingPongBuffer 15
typedef void (*func_arc_fx_filters_MultipassVfxFilter_render_arc_fx_util_PingPongBuffer)(jcontext ctx, jobject self, jobject param0);

void mark_arc_fx_filters_MultipassVfxFilter(jobject object, jint mark, jint depth);
void clinit_arc_fx_filters_MultipassVfxFilter(jcontext ctx);
void init_arc_fx_filters_MultipassVfxFilter(jcontext ctx, jobject self);
void M_arc_fx_filters_MultipassVfxFilter_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
