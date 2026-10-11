#ifndef HEADER_mindustry_graphics_LoadRenderer
#define HEADER_mindustry_graphics_LoadRenderer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_LoadRenderer {
	java_lang_Object parent;
	jfloat F_testprogress;
	jref F_assetText;
	jref F_bars;
	jref F_mesh;
	jref F_cam;
	jint F_lastLength;
	jref F_fx;
	jref F_renderTimes;
	jref F_bloom;
	jbool F_renderStencil;
	jlong F_lastFrameTime;
} mindustry_graphics_LoadRenderer;

extern Class class_mindustry_graphics_LoadRenderer;

extern jobject SF_mindustry_graphics_LoadRenderer_color;
extern jobject SF_mindustry_graphics_LoadRenderer_colorRed;
extern jobject SF_mindustry_graphics_LoadRenderer_red;
extern jobject SF_mindustry_graphics_LoadRenderer_orange;
extern jobject SF_mindustry_graphics_LoadRenderer_floats;
extern jbool SF_mindustry_graphics_LoadRenderer_preview;

#define VTABLE_mindustry_graphics_LoadRenderer_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_LoadRenderer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_LoadRenderer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_LoadRenderer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_LoadRenderer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_LoadRenderer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_LoadRenderer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer_finalize 5
typedef void (*func_mindustry_graphics_LoadRenderer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer_notify 6
typedef void (*func_mindustry_graphics_LoadRenderer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer_notifyAll 7
typedef void (*func_mindustry_graphics_LoadRenderer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer_wait 8
typedef void (*func_mindustry_graphics_LoadRenderer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer_wait_long 9
typedef void (*func_mindustry_graphics_LoadRenderer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_LoadRenderer_wait_long_int 10
typedef void (*func_mindustry_graphics_LoadRenderer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_LoadRenderer_dispose 11
typedef void (*func_mindustry_graphics_LoadRenderer_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_graphics_LoadRenderer_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_LoadRenderer_draw 13
typedef void (*func_mindustry_graphics_LoadRenderer_draw)(jcontext ctx, jobject self);

void mark_mindustry_graphics_LoadRenderer(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_LoadRenderer(jcontext ctx);
void init_mindustry_graphics_LoadRenderer(jcontext ctx, jobject self);
void M_mindustry_graphics_LoadRenderer_dispose(jcontext ctx, jobject self);
void M_mindustry_graphics_LoadRenderer_draw(jcontext ctx, jobject self);
jbool SM_mindustry_graphics_LoadRenderer_lambda$new$17_R_boolean(jcontext ctx);
jfloat SM_mindustry_graphics_LoadRenderer_lambda$new$16_R_float(jcontext ctx);
jbool SM_mindustry_graphics_LoadRenderer_lambda$new$15_R_boolean(jcontext ctx);
jbool SM_mindustry_graphics_LoadRenderer_lambda$new$14_R_boolean(jcontext ctx);
jfloat SM_mindustry_graphics_LoadRenderer_lambda$new$13_R_float(jcontext ctx);
jbool SM_mindustry_graphics_LoadRenderer_lambda$new$12_R_boolean(jcontext ctx);
jbool SM_mindustry_graphics_LoadRenderer_lambda$new$11_R_boolean(jcontext ctx);
jfloat SM_mindustry_graphics_LoadRenderer_lambda$new$10_R_float(jcontext ctx);
jbool SM_mindustry_graphics_LoadRenderer_lambda$new$9_R_boolean(jcontext ctx);
jbool SM_mindustry_graphics_LoadRenderer_lambda$new$8_R_boolean(jcontext ctx);
jfloat SM_mindustry_graphics_LoadRenderer_lambda$new$7_R_float(jcontext ctx);
jbool SM_mindustry_graphics_LoadRenderer_lambda$new$6_R_boolean(jcontext ctx);
jbool SM_mindustry_graphics_LoadRenderer_lambda$new$5_R_boolean(jcontext ctx);
jfloat SM_mindustry_graphics_LoadRenderer_lambda$new$4_R_float(jcontext ctx);
jbool SM_mindustry_graphics_LoadRenderer_lambda$new$3_R_boolean(jcontext ctx);
jbool SM_mindustry_graphics_LoadRenderer_lambda$new$2_R_boolean(jcontext ctx);
jfloat SM_mindustry_graphics_LoadRenderer_lambda$new$1_R_float(jcontext ctx);
jbool SM_mindustry_graphics_LoadRenderer_lambda$new$0_R_boolean(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
