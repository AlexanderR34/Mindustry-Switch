#ifndef HEADER_mindustry_graphics_FogRenderer
#define HEADER_mindustry_graphics_FogRenderer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_FogRenderer {
	java_lang_Object parent;
	jref F_staticFog;
	jref F_dynamicFog;
	jref F_events;
	jref F_rect;
	jref F_lastTeam;
} mindustry_graphics_FogRenderer;

extern Class class_mindustry_graphics_FogRenderer;


#define VTABLE_mindustry_graphics_FogRenderer_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_FogRenderer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FogRenderer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_FogRenderer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_FogRenderer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_FogRenderer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FogRenderer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_FogRenderer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FogRenderer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_FogRenderer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FogRenderer_finalize 5
typedef void (*func_mindustry_graphics_FogRenderer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FogRenderer_notify 6
typedef void (*func_mindustry_graphics_FogRenderer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FogRenderer_notifyAll 7
typedef void (*func_mindustry_graphics_FogRenderer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FogRenderer_wait 8
typedef void (*func_mindustry_graphics_FogRenderer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FogRenderer_wait_long 9
typedef void (*func_mindustry_graphics_FogRenderer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_FogRenderer_wait_long_int 10
typedef void (*func_mindustry_graphics_FogRenderer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_FogRenderer_handleEvent_long 11
typedef void (*func_mindustry_graphics_FogRenderer_handleEvent_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_FogRenderer_getStaticTexture_R_arc_graphics_Texture 12
typedef jobject (*func_mindustry_graphics_FogRenderer_getStaticTexture_R_arc_graphics_Texture)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FogRenderer_getDynamicTexture_R_arc_graphics_Texture 13
typedef jobject (*func_mindustry_graphics_FogRenderer_getDynamicTexture_R_arc_graphics_Texture)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FogRenderer_drawFog 14
typedef void (*func_mindustry_graphics_FogRenderer_drawFog)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FogRenderer_poly_float_float_float 15
typedef void (*func_mindustry_graphics_FogRenderer_poly_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_graphics_FogRenderer_renderEvent_long 16
typedef void (*func_mindustry_graphics_FogRenderer_renderEvent_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_FogRenderer_copyFromCpu 17
typedef void (*func_mindustry_graphics_FogRenderer_copyFromCpu)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_FogRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent 18
typedef void (*func_mindustry_graphics_FogRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_graphics_FogRenderer(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_FogRenderer(jcontext ctx);
void init_mindustry_graphics_FogRenderer(jcontext ctx, jobject self);
void M_mindustry_graphics_FogRenderer_handleEvent_long(jcontext ctx, jobject self, jlong param0);
jobject M_mindustry_graphics_FogRenderer_getStaticTexture_R_arc_graphics_Texture(jcontext ctx, jobject self);
jobject M_mindustry_graphics_FogRenderer_getDynamicTexture_R_arc_graphics_Texture(jcontext ctx, jobject self);
void M_mindustry_graphics_FogRenderer_drawFog(jcontext ctx, jobject self);
void M_mindustry_graphics_FogRenderer_poly_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void M_mindustry_graphics_FogRenderer_renderEvent_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_graphics_FogRenderer_copyFromCpu(jcontext ctx, jobject self);
void M_mindustry_graphics_FogRenderer_lambda$new$0_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
