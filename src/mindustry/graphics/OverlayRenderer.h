#ifndef HEADER_mindustry_graphics_OverlayRenderer
#define HEADER_mindustry_graphics_OverlayRenderer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_OverlayRenderer {
	java_lang_Object parent;
	jfloat F_buildFade;
	jfloat F_unitFade;
	jref F_lastSelect;
	jref F_cedges;
	jbool F_updatedCores;
} mindustry_graphics_OverlayRenderer;

extern Class class_mindustry_graphics_OverlayRenderer;

extern jfloat SF_mindustry_graphics_OverlayRenderer_indicatorLength;
extern jfloat SF_mindustry_graphics_OverlayRenderer_spawnerMargin;
extern jobject SF_mindustry_graphics_OverlayRenderer_rect;

#define VTABLE_mindustry_graphics_OverlayRenderer_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_OverlayRenderer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_OverlayRenderer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_OverlayRenderer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_OverlayRenderer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_OverlayRenderer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_OverlayRenderer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer_finalize 5
typedef void (*func_mindustry_graphics_OverlayRenderer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer_notify 6
typedef void (*func_mindustry_graphics_OverlayRenderer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer_notifyAll 7
typedef void (*func_mindustry_graphics_OverlayRenderer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer_wait 8
typedef void (*func_mindustry_graphics_OverlayRenderer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer_wait_long 9
typedef void (*func_mindustry_graphics_OverlayRenderer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_OverlayRenderer_wait_long_int 10
typedef void (*func_mindustry_graphics_OverlayRenderer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_OverlayRenderer_updateCoreEdges 11
typedef void (*func_mindustry_graphics_OverlayRenderer_updateCoreEdges)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer_drawBottom 12
typedef void (*func_mindustry_graphics_OverlayRenderer_drawBottom)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer_drawTop 13
typedef void (*func_mindustry_graphics_OverlayRenderer_drawTop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer_checkApplySelection_mindustry_gen_Unit 14
typedef void (*func_mindustry_graphics_OverlayRenderer_checkApplySelection_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_OverlayRenderer_lambda$new$1_mindustry_game_EventType$CoreChangeEvent 15
typedef void (*func_mindustry_graphics_OverlayRenderer_lambda$new$1_mindustry_game_EventType$CoreChangeEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_OverlayRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent 16
typedef void (*func_mindustry_graphics_OverlayRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_graphics_OverlayRenderer(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_OverlayRenderer(jcontext ctx);
void init_mindustry_graphics_OverlayRenderer(jcontext ctx, jobject self);
void M_mindustry_graphics_OverlayRenderer_updateCoreEdges(jcontext ctx, jobject self);
void M_mindustry_graphics_OverlayRenderer_drawBottom(jcontext ctx, jobject self);
void M_mindustry_graphics_OverlayRenderer_drawTop(jcontext ctx, jobject self);
void M_mindustry_graphics_OverlayRenderer_checkApplySelection_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_graphics_OverlayRenderer_lambda$drawTop$1_mindustry_gen_Building(jcontext ctx, jobject param0);
void SM_mindustry_graphics_OverlayRenderer_lambda$drawTop$0_mindustry_gen_Unit(jcontext ctx, jobject param0);
void M_mindustry_graphics_OverlayRenderer_lambda$new$1_mindustry_game_EventType$CoreChangeEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_OverlayRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
