#ifndef HEADER_mindustry_graphics_MenuRenderer
#define HEADER_mindustry_graphics_MenuRenderer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_MenuRenderer {
	java_lang_Object parent;
	jint F_width;
	jint F_height;
	jint F_cacheFloor;
	jint F_cacheWall;
	jref F_camera;
	jref F_mat;
	jref F_shadows;
	jref F_batch;
	jfloat F_time;
	jfloat F_flyerRot;
	jint F_flyers;
	jref F_flyerType;
} mindustry_graphics_MenuRenderer;

extern Class class_mindustry_graphics_MenuRenderer;

extern jfloat SF_mindustry_graphics_MenuRenderer_darkness;

#define VTABLE_mindustry_graphics_MenuRenderer_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_MenuRenderer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MenuRenderer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_MenuRenderer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_MenuRenderer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_MenuRenderer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MenuRenderer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_MenuRenderer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MenuRenderer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_MenuRenderer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MenuRenderer_finalize 5
typedef void (*func_mindustry_graphics_MenuRenderer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MenuRenderer_notify 6
typedef void (*func_mindustry_graphics_MenuRenderer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MenuRenderer_notifyAll 7
typedef void (*func_mindustry_graphics_MenuRenderer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MenuRenderer_wait 8
typedef void (*func_mindustry_graphics_MenuRenderer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MenuRenderer_wait_long 9
typedef void (*func_mindustry_graphics_MenuRenderer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_MenuRenderer_wait_long_int 10
typedef void (*func_mindustry_graphics_MenuRenderer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_MenuRenderer_dispose 11
typedef void (*func_mindustry_graphics_MenuRenderer_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MenuRenderer_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_graphics_MenuRenderer_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MenuRenderer_generate 13
typedef void (*func_mindustry_graphics_MenuRenderer_generate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MenuRenderer_cache 14
typedef void (*func_mindustry_graphics_MenuRenderer_cache)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MenuRenderer_render 15
typedef void (*func_mindustry_graphics_MenuRenderer_render)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MenuRenderer_drawFlyers 16
typedef void (*func_mindustry_graphics_MenuRenderer_drawFlyers)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_MenuRenderer_flyers_arc_func_Floatc2 17
typedef void (*func_mindustry_graphics_MenuRenderer_flyers_arc_func_Floatc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_MenuRenderer_lambda$drawFlyers$0_float_float 18
typedef void (*func_mindustry_graphics_MenuRenderer_lambda$drawFlyers$0_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);

void mark_mindustry_graphics_MenuRenderer(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_MenuRenderer(jcontext ctx);
void init_mindustry_graphics_MenuRenderer(jcontext ctx, jobject self);
void M_mindustry_graphics_MenuRenderer_generate(jcontext ctx, jobject self);
void M_mindustry_graphics_MenuRenderer_cache(jcontext ctx, jobject self);
void M_mindustry_graphics_MenuRenderer_render(jcontext ctx, jobject self);
void M_mindustry_graphics_MenuRenderer_drawFlyers(jcontext ctx, jobject self);
void M_mindustry_graphics_MenuRenderer_flyers_arc_func_Floatc2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_MenuRenderer_dispose(jcontext ctx, jobject self);
void M_mindustry_graphics_MenuRenderer_lambda$drawFlyers$0_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
