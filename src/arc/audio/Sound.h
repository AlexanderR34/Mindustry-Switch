#ifndef HEADER_arc_audio_Sound
#define HEADER_arc_audio_Sound

#include "Clearwing.h"
#include "arc/audio/AudioSource.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_audio_Sound {
	arc_audio_AudioSource parent;
	jref F_bus;
	jref F_file;
	jfloat F_falloffOffset;
	jlong F_minInterval;
	jlong F_lastTimePlayed;
	jint F_lastVoice;
	jfloat F_lastVolume;
	jbool F_stream;
	jbool F_lazyLoad;
	volatile jbool F_currentlyLoading;
} arc_audio_Sound;

extern Class class_arc_audio_Sound;


#define VTABLE_arc_audio_Sound_hashCode_R_int 0
typedef jint (*func_arc_audio_Sound_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_audio_Sound_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Sound_clone_R_java_lang_Object 2
typedef jobject (*func_arc_audio_Sound_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_audio_Sound_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_toString_R_java_lang_String 4
typedef jobject (*func_arc_audio_Sound_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_finalize 5
typedef void (*func_arc_audio_Sound_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_notify 6
typedef void (*func_arc_audio_Sound_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_notifyAll 7
typedef void (*func_arc_audio_Sound_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_wait 8
typedef void (*func_arc_audio_Sound_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_wait_long 9
typedef void (*func_arc_audio_Sound_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_audio_Sound_wait_long_int 10
typedef void (*func_arc_audio_Sound_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_audio_Sound_dispose 11
typedef void (*func_arc_audio_Sound_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_isDisposed_R_boolean 12
typedef jbool (*func_arc_audio_Sound_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_valid_R_boolean 13
typedef jbool (*func_arc_audio_Sound_valid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_setFilter_int_arc_audio_AudioFilter 14
typedef void (*func_arc_audio_Sound_setFilter_int_arc_audio_AudioFilter)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_audio_Sound_setFilter_arc_audio_AudioFilter 15
typedef void (*func_arc_audio_Sound_setFilter_arc_audio_AudioFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Sound_setParamsAfterLoad 16
typedef void (*func_arc_audio_Sound_setParamsAfterLoad)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_setPriority_float 17
typedef void (*func_arc_audio_Sound_setPriority_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_audio_Sound_setMaxConcurrent_int 18
typedef void (*func_arc_audio_Sound_setMaxConcurrent_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_audio_Sound_setConcurrentGroup_int 19
typedef void (*func_arc_audio_Sound_setConcurrentGroup_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_audio_Sound_setMinConcurrentInterrupt_float 20
typedef void (*func_arc_audio_Sound_setMinConcurrentInterrupt_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_audio_Sound_setMinConcurrentInterruptFraction_float_float 21
typedef void (*func_arc_audio_Sound_setMinConcurrentInterruptFraction_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_audio_Sound_countPlaying_R_int 22
typedef jint (*func_arc_audio_Sound_countPlaying_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_setSingleInstance_boolean 23
typedef void (*func_arc_audio_Sound_setSingleInstance_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_audio_Sound_stop 24
typedef void (*func_arc_audio_Sound_stop)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_getLength_R_float 25
typedef jfloat (*func_arc_audio_Sound_getLength_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_isLazy_R_boolean 26
typedef jbool (*func_arc_audio_Sound_isLazy_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_load_Array1_byte_boolean 27
typedef void (*func_arc_audio_Sound_load_Array1_byte_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_audio_Sound_load_arc_files_Fi 28
typedef void (*func_arc_audio_Sound_load_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Sound_loadLazy_arc_files_Fi 29
typedef void (*func_arc_audio_Sound_loadLazy_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Sound_checkLazyLoad_java_lang_Runnable 30
typedef void (*func_arc_audio_Sound_checkLazyLoad_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int 31
typedef jint (*func_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4, jobject param5);
#define VTABLE_arc_audio_Sound_play_float_float_float_boolean_boolean_R_int 32
typedef jint (*func_arc_audio_Sound_play_float_float_float_boolean_boolean_R_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4);
#define VTABLE_arc_audio_Sound_setBus_arc_audio_AudioBus 33
typedef void (*func_arc_audio_Sound_setBus_arc_audio_AudioBus)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Sound_calcPan_float_float_R_float 34
typedef jfloat (*func_arc_audio_Sound_calcPan_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_audio_Sound_calcVolume_float_float_R_float 35
typedef jfloat (*func_arc_audio_Sound_calcVolume_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_audio_Sound_calcFalloff_float_float_R_float 36
typedef jfloat (*func_arc_audio_Sound_calcFalloff_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_audio_Sound_at_float_float_float_R_int 37
typedef jint (*func_arc_audio_Sound_at_float_float_float_R_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_audio_Sound_at_float_float_float_float_boolean_R_int 38
typedef jint (*func_arc_audio_Sound_at_float_float_float_float_boolean_R_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4);
#define VTABLE_arc_audio_Sound_at_float_float_float_float_arc_audio_AudioBus_R_int 39
typedef jint (*func_arc_audio_Sound_at_float_float_float_float_arc_audio_AudioBus_R_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int 40
typedef jint (*func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_audio_Sound_at_float_float_float_float_R_int 41
typedef jint (*func_arc_audio_Sound_at_float_float_float_float_R_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_audio_Sound_at_float_float_R_int 42
typedef jint (*func_arc_audio_Sound_at_float_float_R_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_audio_Sound_at_arc_math_geom_Position_R_int 43
typedef jint (*func_arc_audio_Sound_at_arc_math_geom_Position_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_R_int 44
typedef jint (*func_arc_audio_Sound_at_arc_math_geom_Position_float_R_int)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_audio_Sound_play_R_int 45
typedef jint (*func_arc_audio_Sound_play_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_play_arc_audio_AudioBus_R_int 46
typedef jint (*func_arc_audio_Sound_play_arc_audio_AudioBus_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Sound_play_float_R_int 47
typedef jint (*func_arc_audio_Sound_play_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_audio_Sound_play_float_float_float_boolean_R_int 48
typedef jint (*func_arc_audio_Sound_play_float_float_float_boolean_R_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3);
#define VTABLE_arc_audio_Sound_play_float_float_float_R_int 49
typedef jint (*func_arc_audio_Sound_play_float_float_float_R_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_audio_Sound_loop_R_int 50
typedef jint (*func_arc_audio_Sound_loop_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Sound_loop_float_R_int 51
typedef jint (*func_arc_audio_Sound_loop_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_audio_Sound_loop_float_float_float_R_int 52
typedef jint (*func_arc_audio_Sound_loop_float_float_float_R_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_audio_Sound_setMinInterval_long 53
typedef void (*func_arc_audio_Sound_setMinInterval_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_audio_Sound_setFalloffOffset_float 54
typedef void (*func_arc_audio_Sound_setFalloffOffset_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_audio_Sound_lambda$play$0_boolean_float_float_float_boolean_arc_audio_AudioBus 55
typedef void (*func_arc_audio_Sound_lambda$play$0_boolean_float_float_float_boolean_arc_audio_AudioBus)(jcontext ctx, jobject self, jbool param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jobject param5);
#define VTABLE_arc_audio_Sound_lambda$checkLazyLoad$0_java_lang_Runnable 56
typedef void (*func_arc_audio_Sound_lambda$checkLazyLoad$0_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);

void mark_arc_audio_Sound(jobject object, jint mark, jint depth);
void clinit_arc_audio_Sound(jcontext ctx);
jobject SM_arc_audio_Sound_createStream_arc_files_Fi_R_arc_audio_Sound(jcontext ctx, jobject param0);
jobject SM_arc_audio_Sound_createLazy_arc_files_Fi_R_arc_audio_Sound(jcontext ctx, jobject param0);
void init_arc_audio_Sound(jcontext ctx, jobject self);
void init_arc_audio_Sound_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void M_arc_audio_Sound_load_Array1_byte_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_audio_Sound_load_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void M_arc_audio_Sound_loadLazy_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jbool M_arc_audio_Sound_isLazy_R_boolean(jcontext ctx, jobject self);
void M_arc_audio_Sound_checkLazyLoad_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
jint M_arc_audio_Sound_play_float_float_float_boolean_boolean_arc_audio_AudioBus_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4, jobject param5);
jint M_arc_audio_Sound_play_float_float_float_boolean_boolean_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jbool param4);
void M_arc_audio_Sound_setBus_arc_audio_AudioBus(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_audio_Sound_calcPan_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jfloat M_arc_audio_Sound_calcVolume_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jfloat M_arc_audio_Sound_calcFalloff_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jint M_arc_audio_Sound_at_float_float_float_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jint M_arc_audio_Sound_at_float_float_float_float_boolean_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4);
jint M_arc_audio_Sound_at_float_float_float_float_arc_audio_AudioBus_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jint M_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jint M_arc_audio_Sound_at_float_float_float_float_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jint M_arc_audio_Sound_at_float_float_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jint M_arc_audio_Sound_at_arc_math_geom_Position_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_audio_Sound_at_arc_math_geom_Position_float_R_int(jcontext ctx, jobject self, jobject param0, jfloat param1);
jint M_arc_audio_Sound_play_R_int(jcontext ctx, jobject self);
jint M_arc_audio_Sound_play_arc_audio_AudioBus_R_int(jcontext ctx, jobject self, jobject param0);
jint M_arc_audio_Sound_play_float_R_int(jcontext ctx, jobject self, jfloat param0);
jint M_arc_audio_Sound_play_float_float_float_boolean_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3);
jint M_arc_audio_Sound_play_float_float_float_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jint M_arc_audio_Sound_loop_R_int(jcontext ctx, jobject self);
jint M_arc_audio_Sound_loop_float_R_int(jcontext ctx, jobject self, jfloat param0);
jint M_arc_audio_Sound_loop_float_float_float_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jfloat M_arc_audio_Sound_getLength_R_float(jcontext ctx, jobject self);
void M_arc_audio_Sound_setMinInterval_long(jcontext ctx, jobject self, jlong param0);
void M_arc_audio_Sound_setFalloffOffset_float(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_audio_Sound_toString_R_java_lang_String(jcontext ctx, jobject self);
void M_arc_audio_Sound_lambda$play$0_boolean_float_float_float_boolean_arc_audio_AudioBus(jcontext ctx, jobject self, jbool param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jobject param5);
void M_arc_audio_Sound_lambda$checkLazyLoad$0_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
