#ifndef HEADER_arc_audio_Music
#define HEADER_arc_audio_Music

#include "Clearwing.h"
#include "arc/audio/AudioSource.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_audio_Music {
	arc_audio_AudioSource parent;
	jref F_file;
	jint F_voice;
	jbool F_looping;
	jfloat F_volume;
	jfloat F_pitch;
	jfloat F_pan;
} arc_audio_Music;

extern Class class_arc_audio_Music;


#define VTABLE_arc_audio_Music_hashCode_R_int 0
typedef jint (*func_arc_audio_Music_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_audio_Music_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Music_clone_R_java_lang_Object 2
typedef jobject (*func_arc_audio_Music_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_audio_Music_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_toString_R_java_lang_String 4
typedef jobject (*func_arc_audio_Music_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_finalize 5
typedef void (*func_arc_audio_Music_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_notify 6
typedef void (*func_arc_audio_Music_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_notifyAll 7
typedef void (*func_arc_audio_Music_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_wait 8
typedef void (*func_arc_audio_Music_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_wait_long 9
typedef void (*func_arc_audio_Music_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_audio_Music_wait_long_int 10
typedef void (*func_arc_audio_Music_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_audio_Music_dispose 11
typedef void (*func_arc_audio_Music_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_isDisposed_R_boolean 12
typedef jbool (*func_arc_audio_Music_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_valid_R_boolean 13
typedef jbool (*func_arc_audio_Music_valid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_setFilter_int_arc_audio_AudioFilter 14
typedef void (*func_arc_audio_Music_setFilter_int_arc_audio_AudioFilter)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_audio_Music_setFilter_arc_audio_AudioFilter 15
typedef void (*func_arc_audio_Music_setFilter_arc_audio_AudioFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Music_setParamsAfterLoad 16
typedef void (*func_arc_audio_Music_setParamsAfterLoad)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_setPriority_float 17
typedef void (*func_arc_audio_Music_setPriority_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_audio_Music_setMaxConcurrent_int 18
typedef void (*func_arc_audio_Music_setMaxConcurrent_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_audio_Music_setConcurrentGroup_int 19
typedef void (*func_arc_audio_Music_setConcurrentGroup_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_audio_Music_setMinConcurrentInterrupt_float 20
typedef void (*func_arc_audio_Music_setMinConcurrentInterrupt_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_audio_Music_setMinConcurrentInterruptFraction_float_float 21
typedef void (*func_arc_audio_Music_setMinConcurrentInterruptFraction_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_audio_Music_countPlaying_R_int 22
typedef jint (*func_arc_audio_Music_countPlaying_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_setSingleInstance_boolean 23
typedef void (*func_arc_audio_Music_setSingleInstance_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_audio_Music_stop 24
typedef void (*func_arc_audio_Music_stop)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_getLength_R_float 25
typedef jfloat (*func_arc_audio_Music_getLength_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_isLazy_R_boolean 26
typedef jbool (*func_arc_audio_Music_isLazy_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_load_Array1_byte 27
typedef void (*func_arc_audio_Music_load_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Music_load_arc_files_Fi 28
typedef void (*func_arc_audio_Music_load_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Music_play 29
typedef void (*func_arc_audio_Music_play)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_pause_boolean 30
typedef void (*func_arc_audio_Music_pause_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_audio_Music_isPlaying_R_boolean 31
typedef jbool (*func_arc_audio_Music_isPlaying_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_isLooping_R_boolean 32
typedef jbool (*func_arc_audio_Music_isLooping_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_setLooping_boolean 33
typedef void (*func_arc_audio_Music_setLooping_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_audio_Music_getVolume_R_float 34
typedef jfloat (*func_arc_audio_Music_getVolume_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_setVolume_float 35
typedef void (*func_arc_audio_Music_setVolume_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_audio_Music_set_float_float 36
typedef void (*func_arc_audio_Music_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_audio_Music_getPosition_R_float 37
typedef jfloat (*func_arc_audio_Music_getPosition_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Music_setPosition_float 38
typedef void (*func_arc_audio_Music_setPosition_float)(jcontext ctx, jobject self, jfloat param0);

void mark_arc_audio_Music(jobject object, jint mark, jint depth);
void clinit_arc_audio_Music(jcontext ctx);
jobject SM_arc_audio_Music_create_arc_files_Fi_R_arc_audio_Music(jcontext ctx, jobject param0);
void init_arc_audio_Music_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void init_arc_audio_Music(jcontext ctx, jobject self);
void M_arc_audio_Music_load_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_arc_audio_Music_load_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void M_arc_audio_Music_play(jcontext ctx, jobject self);
void M_arc_audio_Music_pause_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_audio_Music_stop(jcontext ctx, jobject self);
jbool M_arc_audio_Music_isPlaying_R_boolean(jcontext ctx, jobject self);
jbool M_arc_audio_Music_isLooping_R_boolean(jcontext ctx, jobject self);
void M_arc_audio_Music_setLooping_boolean(jcontext ctx, jobject self, jbool param0);
jfloat M_arc_audio_Music_getVolume_R_float(jcontext ctx, jobject self);
void M_arc_audio_Music_setVolume_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_audio_Music_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jfloat M_arc_audio_Music_getPosition_R_float(jcontext ctx, jobject self);
void M_arc_audio_Music_setPosition_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_audio_Music_getLength_R_float(jcontext ctx, jobject self);
jobject M_arc_audio_Music_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_arc_audio_Music_caches_java_lang_String_R_Array1_arc_files_Fi(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
