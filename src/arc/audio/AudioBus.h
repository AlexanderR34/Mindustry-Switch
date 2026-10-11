#ifndef HEADER_arc_audio_AudioBus
#define HEADER_arc_audio_AudioBus

#include "Clearwing.h"
#include "arc/audio/AudioSource.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_audio_AudioBus {
	arc_audio_AudioSource parent;
	jint F_id;
} arc_audio_AudioBus;

extern Class class_arc_audio_AudioBus;


#define VTABLE_arc_audio_AudioBus_hashCode_R_int 0
typedef jint (*func_arc_audio_AudioBus_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_audio_AudioBus_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_AudioBus_clone_R_java_lang_Object 2
typedef jobject (*func_arc_audio_AudioBus_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_audio_AudioBus_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_toString_R_java_lang_String 4
typedef jobject (*func_arc_audio_AudioBus_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_finalize 5
typedef void (*func_arc_audio_AudioBus_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_notify 6
typedef void (*func_arc_audio_AudioBus_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_notifyAll 7
typedef void (*func_arc_audio_AudioBus_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_wait 8
typedef void (*func_arc_audio_AudioBus_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_wait_long 9
typedef void (*func_arc_audio_AudioBus_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_audio_AudioBus_wait_long_int 10
typedef void (*func_arc_audio_AudioBus_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_audio_AudioBus_dispose 11
typedef void (*func_arc_audio_AudioBus_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_isDisposed_R_boolean 12
typedef jbool (*func_arc_audio_AudioBus_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_valid_R_boolean 13
typedef jbool (*func_arc_audio_AudioBus_valid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_setFilter_int_arc_audio_AudioFilter 14
typedef void (*func_arc_audio_AudioBus_setFilter_int_arc_audio_AudioFilter)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_audio_AudioBus_setFilter_arc_audio_AudioFilter 15
typedef void (*func_arc_audio_AudioBus_setFilter_arc_audio_AudioFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_AudioBus_setParamsAfterLoad 16
typedef void (*func_arc_audio_AudioBus_setParamsAfterLoad)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_setPriority_float 17
typedef void (*func_arc_audio_AudioBus_setPriority_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_audio_AudioBus_setMaxConcurrent_int 18
typedef void (*func_arc_audio_AudioBus_setMaxConcurrent_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_audio_AudioBus_setConcurrentGroup_int 19
typedef void (*func_arc_audio_AudioBus_setConcurrentGroup_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_audio_AudioBus_setMinConcurrentInterrupt_float 20
typedef void (*func_arc_audio_AudioBus_setMinConcurrentInterrupt_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_audio_AudioBus_setMinConcurrentInterruptFraction_float_float 21
typedef void (*func_arc_audio_AudioBus_setMinConcurrentInterruptFraction_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_audio_AudioBus_countPlaying_R_int 22
typedef jint (*func_arc_audio_AudioBus_countPlaying_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_setSingleInstance_boolean 23
typedef void (*func_arc_audio_AudioBus_setSingleInstance_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_audio_AudioBus_stop 24
typedef void (*func_arc_audio_AudioBus_stop)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_getLength_R_float 25
typedef jfloat (*func_arc_audio_AudioBus_getLength_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_isLazy_R_boolean 26
typedef jbool (*func_arc_audio_AudioBus_isLazy_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_init_R_arc_audio_AudioBus 27
typedef jobject (*func_arc_audio_AudioBus_init_R_arc_audio_AudioBus)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_playing_R_boolean 28
typedef jbool (*func_arc_audio_AudioBus_playing_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_play 29
typedef void (*func_arc_audio_AudioBus_play)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioBus_fadeFilterParam_int_int_float_float 30
typedef void (*func_arc_audio_AudioBus_fadeFilterParam_int_int_float_float)(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2, jfloat param3);
#define VTABLE_arc_audio_AudioBus_setFilterParam_int_int_float 31
typedef void (*func_arc_audio_AudioBus_setFilterParam_int_int_float)(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2);
#define VTABLE_arc_audio_AudioBus_setVolume_float 32
typedef void (*func_arc_audio_AudioBus_setVolume_float)(jcontext ctx, jobject self, jfloat param0);

void mark_arc_audio_AudioBus(jobject object, jint mark, jint depth);
void clinit_arc_audio_AudioBus(jcontext ctx);
void init_arc_audio_AudioBus(jcontext ctx, jobject self);
void M_arc_audio_AudioBus_setFilter_int_arc_audio_AudioFilter(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_arc_audio_AudioBus_init_R_arc_audio_AudioBus(jcontext ctx, jobject self);
jbool M_arc_audio_AudioBus_playing_R_boolean(jcontext ctx, jobject self);
void M_arc_audio_AudioBus_play(jcontext ctx, jobject self);
void M_arc_audio_AudioBus_stop(jcontext ctx, jobject self);
jfloat M_arc_audio_AudioBus_getLength_R_float(jcontext ctx, jobject self);
void M_arc_audio_AudioBus_fadeFilterParam_int_int_float_float(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2, jfloat param3);
void M_arc_audio_AudioBus_setFilterParam_int_int_float(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2);
void M_arc_audio_AudioBus_setVolume_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
