#ifndef HEADER_mindustry_audio_SoundControl
#define HEADER_mindustry_audio_SoundControl

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_audio_SoundControl {
	java_lang_Object parent;
	jfloat F_finTime;
	jfloat F_foutTime;
	jfloat F_musicInterval;
	jfloat F_musicChance;
	jfloat F_musicWaveChance;
	jref F_ambientMusic;
	jref F_darkMusic;
	jref F_bossMusic;
	jref F_uiBus;
	jref F_lastRandomPlayed;
	jref F_timer;
	jlong F_lastPlayed;
	jref F_current;
	jfloat F_fade;
	jbool F_silenced;
	jbool F_keepSilent;
	jref F_ambientThread;
	jbool F_launchingAmbientThread;
	jref F_localData;
	jbool F_wasPlaying;
	jref F_filter;
	jref F_sounds;
} mindustry_audio_SoundControl;

extern Class class_mindustry_audio_SoundControl;


#define VTABLE_mindustry_audio_SoundControl_hashCode_R_int 0
typedef jint (*func_mindustry_audio_SoundControl_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_audio_SoundControl_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_audio_SoundControl_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_audio_SoundControl_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_audio_SoundControl_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_audio_SoundControl_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_finalize 5
typedef void (*func_mindustry_audio_SoundControl_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_notify 6
typedef void (*func_mindustry_audio_SoundControl_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_notifyAll 7
typedef void (*func_mindustry_audio_SoundControl_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_wait 8
typedef void (*func_mindustry_audio_SoundControl_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_wait_long 9
typedef void (*func_mindustry_audio_SoundControl_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_audio_SoundControl_wait_long_int 10
typedef void (*func_mindustry_audio_SoundControl_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_audio_SoundControl_setupFilters 11
typedef void (*func_mindustry_audio_SoundControl_setupFilters)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_reload 12
typedef void (*func_mindustry_audio_SoundControl_reload)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_stop 13
typedef void (*func_mindustry_audio_SoundControl_stop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_update 14
typedef void (*func_mindustry_audio_SoundControl_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_keepSilent 15
typedef void (*func_mindustry_audio_SoundControl_keepSilent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_playMusic_arc_audio_Music_boolean 16
typedef void (*func_mindustry_audio_SoundControl_playMusic_arc_audio_Music_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_audio_SoundControl_isPlaying_R_boolean 17
typedef jbool (*func_mindustry_audio_SoundControl_isPlaying_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_getCurrent_R_arc_audio_Music 18
typedef jobject (*func_mindustry_audio_SoundControl_getCurrent_R_arc_audio_Music)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_playRandom 19
typedef void (*func_mindustry_audio_SoundControl_playRandom)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_alwaysPlayMusic_R_boolean 20
typedef jbool (*func_mindustry_audio_SoundControl_alwaysPlayMusic_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_getBossMusic_R_arc_struct_Seq 21
typedef jobject (*func_mindustry_audio_SoundControl_getBossMusic_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_getAmbientMusic_R_arc_struct_Seq 22
typedef jobject (*func_mindustry_audio_SoundControl_getAmbientMusic_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_getDarkMusic_R_arc_struct_Seq 23
typedef jobject (*func_mindustry_audio_SoundControl_getDarkMusic_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_isDark_R_boolean 24
typedef jbool (*func_mindustry_audio_SoundControl_isDark_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_volumeMultiplier_R_float 25
typedef jfloat (*func_mindustry_audio_SoundControl_volumeMultiplier_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_play_arc_audio_Music 26
typedef void (*func_mindustry_audio_SoundControl_play_arc_audio_Music)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_audio_SoundControl_playOnce_arc_audio_Music 27
typedef void (*func_mindustry_audio_SoundControl_playOnce_arc_audio_Music)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_audio_SoundControl_shouldPlay_R_boolean 28
typedef jbool (*func_mindustry_audio_SoundControl_shouldPlay_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_silence 29
typedef void (*func_mindustry_audio_SoundControl_silence)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_float 30
typedef void (*func_mindustry_audio_SoundControl_loop_arc_audio_Sound_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float 31
typedef void (*func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float_float 32
typedef void (*func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_audio_SoundControl_addAmbientSource_mindustry_audio_AmbientSource 33
typedef void (*func_mindustry_audio_SoundControl_addAmbientSource_mindustry_audio_AmbientSource)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_audio_SoundControl_updateLoops 34
typedef void (*func_mindustry_audio_SoundControl_updateLoops)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_lambda$addAmbientSource$0_mindustry_audio_SoundControl$AudioThread 35
typedef void (*func_mindustry_audio_SoundControl_lambda$addAmbientSource$0_mindustry_audio_SoundControl$AudioThread)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_audio_SoundControl_lambda$new$4_mindustry_game_EventType$ResetEvent 36
typedef void (*func_mindustry_audio_SoundControl_lambda$new$4_mindustry_game_EventType$ResetEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_audio_SoundControl_lambda$new$1_mindustry_game_EventType$WaveEvent 37
typedef void (*func_mindustry_audio_SoundControl_lambda$new$1_mindustry_game_EventType$WaveEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_audio_SoundControl_lambda$new$2 38
typedef void (*func_mindustry_audio_SoundControl_lambda$new$2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl_lambda$new$0_mindustry_game_EventType$ClientLoadEvent 39
typedef void (*func_mindustry_audio_SoundControl_lambda$new$0_mindustry_game_EventType$ClientLoadEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_audio_SoundControl(jobject object, jint mark, jint depth);
void clinit_mindustry_audio_SoundControl(jcontext ctx);
void init_mindustry_audio_SoundControl(jcontext ctx, jobject self);
void M_mindustry_audio_SoundControl_setupFilters(jcontext ctx, jobject self);
void M_mindustry_audio_SoundControl_reload(jcontext ctx, jobject self);
void M_mindustry_audio_SoundControl_stop(jcontext ctx, jobject self);
void M_mindustry_audio_SoundControl_update(jcontext ctx, jobject self);
void M_mindustry_audio_SoundControl_keepSilent(jcontext ctx, jobject self);
void M_mindustry_audio_SoundControl_playMusic_arc_audio_Music_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_mindustry_audio_SoundControl_isPlaying_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_audio_SoundControl_getCurrent_R_arc_audio_Music(jcontext ctx, jobject self);
void M_mindustry_audio_SoundControl_playRandom(jcontext ctx, jobject self);
jbool M_mindustry_audio_SoundControl_alwaysPlayMusic_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_audio_SoundControl_getBossMusic_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_audio_SoundControl_getAmbientMusic_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_audio_SoundControl_getDarkMusic_R_arc_struct_Seq(jcontext ctx, jobject self);
jbool M_mindustry_audio_SoundControl_isDark_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_audio_SoundControl_volumeMultiplier_R_float(jcontext ctx, jobject self);
void M_mindustry_audio_SoundControl_play_arc_audio_Music(jcontext ctx, jobject self, jobject param0);
void M_mindustry_audio_SoundControl_playOnce_arc_audio_Music(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_audio_SoundControl_shouldPlay_R_boolean(jcontext ctx, jobject self);
void M_mindustry_audio_SoundControl_silence(jcontext ctx, jobject self);
jobject SM_mindustry_audio_SoundControl_findMusic_java_lang_String_R_arc_audio_Music(jcontext ctx, jobject param0);
void M_mindustry_audio_SoundControl_loop_arc_audio_Sound_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
void M_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
void SM_mindustry_audio_SoundControl_loop_mindustry_audio_SoundControl$SoundData_arc_audio_Sound_arc_math_geom_Position_float_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4);
void M_mindustry_audio_SoundControl_addAmbientSource_mindustry_audio_AmbientSource(jcontext ctx, jobject self, jobject param0);
void M_mindustry_audio_SoundControl_updateLoops(jcontext ctx, jobject self);
void SM_mindustry_audio_SoundControl_lambda$updateLoops$0_float_arc_audio_Sound_mindustry_audio_SoundControl$SoundData(jcontext ctx, jfloat param0, jobject param1, jobject param2);
void M_mindustry_audio_SoundControl_lambda$addAmbientSource$0_mindustry_audio_SoundControl$AudioThread(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_audio_SoundControl_lambda$getDarkMusic$0_arc_audio_Music_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_audio_SoundControl_lambda$getAmbientMusic$0_arc_audio_Music_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_audio_SoundControl_lambda$getBossMusic$0_arc_audio_Music_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_audio_SoundControl_lambda$new$4_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_audio_SoundControl_lambda$new$1_mindustry_game_EventType$WaveEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_audio_SoundControl_lambda$new$2(jcontext ctx, jobject self);
jbool SM_mindustry_audio_SoundControl_lambda$new$3_mindustry_game_SpawnGroup_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_audio_SoundControl_lambda$new$0_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
