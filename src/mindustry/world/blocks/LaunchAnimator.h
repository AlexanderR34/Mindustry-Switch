#ifndef HEADER_mindustry_world_blocks_LaunchAnimator
#define HEADER_mindustry_world_blocks_LaunchAnimator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_LaunchAnimator {
	java_lang_Object parent;
} mindustry_world_blocks_LaunchAnimator;

extern Class class_mindustry_world_blocks_LaunchAnimator;


#define INDEX_mindustry_world_blocks_LaunchAnimator_drawLaunch 0
typedef void (*func_mindustry_world_blocks_LaunchAnimator_drawLaunch)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_blocks_LaunchAnimator_drawLaunchGlobalZ 1
typedef void (*func_mindustry_world_blocks_LaunchAnimator_drawLaunchGlobalZ)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_blocks_LaunchAnimator_beginLaunch_boolean 2
typedef void (*func_mindustry_world_blocks_LaunchAnimator_beginLaunch_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_world_blocks_LaunchAnimator_endLaunch 3
typedef void (*func_mindustry_world_blocks_LaunchAnimator_endLaunch)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_blocks_LaunchAnimator_updateLaunch 4
typedef void (*func_mindustry_world_blocks_LaunchAnimator_updateLaunch)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_blocks_LaunchAnimator_launchDuration_R_float 5
typedef jfloat (*func_mindustry_world_blocks_LaunchAnimator_launchDuration_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_blocks_LaunchAnimator_landMusic_R_arc_audio_Music 6
typedef jobject (*func_mindustry_world_blocks_LaunchAnimator_landMusic_R_arc_audio_Music)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_blocks_LaunchAnimator_zoomLaunch_R_float 7
typedef jfloat (*func_mindustry_world_blocks_LaunchAnimator_zoomLaunch_R_float)(jcontext ctx, jobject self);

void mark_mindustry_world_blocks_LaunchAnimator(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_LaunchAnimator(jcontext ctx);
void M_mindustry_world_blocks_LaunchAnimator_drawLaunchGlobalZ(jcontext ctx, jobject self);
jobject M_mindustry_world_blocks_LaunchAnimator_landMusic_R_arc_audio_Music(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
