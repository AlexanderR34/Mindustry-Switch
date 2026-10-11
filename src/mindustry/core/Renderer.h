#ifndef HEADER_mindustry_core_Renderer
#define HEADER_mindustry_core_Renderer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/ApplicationListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_Renderer {
	java_lang_Object parent;
	jref F_blocks;
	jref F_fog;
	jref F_minimap;
	jref F_overlays;
	jref F_lights;
	jref F_pixelator;
	jref F_planets;
	jref F_bloom;
	jref F_backgroundBuffer;
	jref F_effectBuffer;
	jbool F_animateShields;
	jbool F_animateWater;
	jbool F_drawWeather;
	jbool F_drawStatus;
	jbool F_enableEffects;
	jbool F_drawDisplays;
	jbool F_drawLight;
	jbool F_pixelate;
	jbool F_showPings;
	jbool F_showOtherBuildPlans;
	jfloat F_weatherAlpha;
	jfloat F_minZoom;
	jfloat F_maxZoom;
	jfloat F_minZoomInGame;
	jfloat F_maxZoomInGame;
	jref F_envRenderers;
	jref F_customBackgrounds;
	jref F_bubbles;
	jref F_splashes;
	jref F_fluidFrames;
	jref F_launchAnimator;
	jref F_clearColor;
	jfloat F_targetscale;
	jfloat F_camerascale;
	jfloat F_landTime;
	jfloat F_shakeIntensity;
	jfloat F_shakeReduction;
	jfloat F_shakeTime;
	jbool F_launching;
	jref F_camShakeOffset;
	jint F_glErrors;
} mindustry_core_Renderer;

extern Class class_mindustry_core_Renderer;

extern jfloat SF_mindustry_core_Renderer_laserOpacity;
extern jfloat SF_mindustry_core_Renderer_unitLaserOpacity;
extern jfloat SF_mindustry_core_Renderer_bridgeOpacity;

#define VTABLE_mindustry_core_Renderer_hashCode_R_int 0
typedef jint (*func_mindustry_core_Renderer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_core_Renderer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Renderer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_core_Renderer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_core_Renderer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_core_Renderer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_finalize 5
typedef void (*func_mindustry_core_Renderer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_notify 6
typedef void (*func_mindustry_core_Renderer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_notifyAll 7
typedef void (*func_mindustry_core_Renderer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_wait 8
typedef void (*func_mindustry_core_Renderer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_wait_long 9
typedef void (*func_mindustry_core_Renderer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_Renderer_wait_long_int 10
typedef void (*func_mindustry_core_Renderer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_core_Renderer_init 11
typedef void (*func_mindustry_core_Renderer_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_resize_int_int 12
typedef void (*func_mindustry_core_Renderer_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_Renderer_update 13
typedef void (*func_mindustry_core_Renderer_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_pause 14
typedef void (*func_mindustry_core_Renderer_pause)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_resume 15
typedef void (*func_mindustry_core_Renderer_resume)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_dispose 16
typedef void (*func_mindustry_core_Renderer_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_exit 17
typedef void (*func_mindustry_core_Renderer_exit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_fileDropped_arc_files_Fi 18
typedef void (*func_mindustry_core_Renderer_fileDropped_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Renderer_shake_float_float 19
typedef void (*func_mindustry_core_Renderer_shake_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_core_Renderer_addEnvRenderer_int_java_lang_Runnable 20
typedef void (*func_mindustry_core_Renderer_addEnvRenderer_int_java_lang_Runnable)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_core_Renderer_addCustomBackground_java_lang_String_java_lang_Runnable 21
typedef void (*func_mindustry_core_Renderer_addCustomBackground_java_lang_String_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_Renderer_loadFluidFrames 22
typedef void (*func_mindustry_core_Renderer_loadFluidFrames)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_getFluidFrames_R_Array2_arc_graphics_g2d_TextureRegion 23
typedef jobject (*func_mindustry_core_Renderer_getFluidFrames_R_Array2_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_updateAllDarkness 24
typedef void (*func_mindustry_core_Renderer_updateAllDarkness)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_isCutscene_R_boolean 25
typedef jbool (*func_mindustry_core_Renderer_isCutscene_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_landScale_R_float 26
typedef jfloat (*func_mindustry_core_Renderer_landScale_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_setupBloom 27
typedef void (*func_mindustry_core_Renderer_setupBloom)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_toggleBloom_boolean 28
typedef void (*func_mindustry_core_Renderer_toggleBloom_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_core_Renderer_draw 29
typedef void (*func_mindustry_core_Renderer_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_drawBackground 30
typedef void (*func_mindustry_core_Renderer_drawBackground)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_scaleCamera_float 31
typedef void (*func_mindustry_core_Renderer_scaleCamera_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_Renderer_clampScale 32
typedef void (*func_mindustry_core_Renderer_clampScale)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_getDisplayScale_R_float 33
typedef jfloat (*func_mindustry_core_Renderer_getDisplayScale_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_minScale_R_float 34
typedef jfloat (*func_mindustry_core_Renderer_minScale_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_maxScale_R_float 35
typedef jfloat (*func_mindustry_core_Renderer_maxScale_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_getScale_R_float 36
typedef jfloat (*func_mindustry_core_Renderer_getScale_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_setScale_float 37
typedef void (*func_mindustry_core_Renderer_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_core_Renderer_isLaunching_R_boolean 38
typedef jbool (*func_mindustry_core_Renderer_isLaunching_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_getLandTime_R_float 39
typedef jfloat (*func_mindustry_core_Renderer_getLandTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_getLandTimeIn_R_float 40
typedef jfloat (*func_mindustry_core_Renderer_getLandTimeIn_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_showLanding_mindustry_world_blocks_LaunchAnimator 41
typedef void (*func_mindustry_core_Renderer_showLanding_mindustry_world_blocks_LaunchAnimator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Renderer_showLaunch_mindustry_world_blocks_LaunchAnimator 42
typedef void (*func_mindustry_core_Renderer_showLaunch_mindustry_world_blocks_LaunchAnimator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Renderer_takeMapScreenshot 43
typedef void (*func_mindustry_core_Renderer_takeMapScreenshot)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_lambda$draw$9 44
typedef void (*func_mindustry_core_Renderer_lambda$draw$9)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_lambda$draw$8 45
typedef void (*func_mindustry_core_Renderer_lambda$draw$8)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_lambda$draw$7 46
typedef void (*func_mindustry_core_Renderer_lambda$draw$7)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_lambda$draw$6 47
typedef void (*func_mindustry_core_Renderer_lambda$draw$6)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_lambda$draw$5 48
typedef void (*func_mindustry_core_Renderer_lambda$draw$5)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_lambda$draw$0 49
typedef void (*func_mindustry_core_Renderer_lambda$draw$0)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer_lambda$init$2_mindustry_game_EventType$WorldLoadEvent 50
typedef void (*func_mindustry_core_Renderer_lambda$init$2_mindustry_game_EventType$WorldLoadEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Renderer_lambda$init$0_mindustry_game_EventType$ClientLoadEvent 51
typedef void (*func_mindustry_core_Renderer_lambda$init$0_mindustry_game_EventType$ClientLoadEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Renderer_lambda$new$0_mindustry_game_EventType$ResetEvent 52
typedef void (*func_mindustry_core_Renderer_lambda$new$0_mindustry_game_EventType$ResetEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_core_Renderer(jobject object, jint mark, jint depth);
void clinit_mindustry_core_Renderer(jcontext ctx);
void init_mindustry_core_Renderer(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_shake_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_core_Renderer_addEnvRenderer_int_java_lang_Runnable(jcontext ctx, jobject self, jint param0, jobject param1);
void M_mindustry_core_Renderer_addCustomBackground_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_Renderer_init(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_loadFluidFrames(jcontext ctx, jobject self);
jobject M_mindustry_core_Renderer_getFluidFrames_R_Array2_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_update(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_updateAllDarkness(jcontext ctx, jobject self);
jbool M_mindustry_core_Renderer_isCutscene_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_core_Renderer_landScale_R_float(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_dispose(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_resume(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_setupBloom(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_toggleBloom_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_core_Renderer_draw(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_drawBackground(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_scaleCamera_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_core_Renderer_clampScale(jcontext ctx, jobject self);
jfloat M_mindustry_core_Renderer_getDisplayScale_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_core_Renderer_minScale_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_core_Renderer_maxScale_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_core_Renderer_getScale_R_float(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_setScale_float(jcontext ctx, jobject self, jfloat param0);
jbool M_mindustry_core_Renderer_isLaunching_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_core_Renderer_getLandTime_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_core_Renderer_getLandTimeIn_R_float(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_showLanding_mindustry_world_blocks_LaunchAnimator(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Renderer_showLaunch_mindustry_world_blocks_LaunchAnimator(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Renderer_takeMapScreenshot(jcontext ctx, jobject self);
void SM_mindustry_core_Renderer_lambda$takeMapScreenshot$0_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_mindustry_core_Renderer_lambda$takeMapScreenshot$1_arc_files_Fi(jcontext ctx, jobject param0);
void M_mindustry_core_Renderer_lambda$draw$9(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_lambda$draw$8(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_lambda$draw$7(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_lambda$draw$6(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_lambda$draw$5(jcontext ctx, jobject self);
void SM_mindustry_core_Renderer_lambda$draw$3_float(jcontext ctx, jfloat param0);
void SM_mindustry_core_Renderer_lambda$draw$4_float_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jfloat param0, jobject param1);
void SM_mindustry_core_Renderer_lambda$draw$2_float_mindustry_game_MapObjectives$MapObjective(jcontext ctx, jfloat param0, jobject param1);
void SM_mindustry_core_Renderer_lambda$draw$1(jcontext ctx);
void M_mindustry_core_Renderer_lambda$draw$0(jcontext ctx, jobject self);
void M_mindustry_core_Renderer_lambda$init$2_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_core_Renderer_lambda$init$1_arc_graphics_Texture(jcontext ctx, jobject param0);
void M_mindustry_core_Renderer_lambda$init$0_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Renderer_lambda$new$0_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
