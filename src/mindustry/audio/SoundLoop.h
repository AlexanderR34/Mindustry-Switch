#ifndef HEADER_mindustry_audio_SoundLoop
#define HEADER_mindustry_audio_SoundLoop

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_audio_SoundLoop {
	java_lang_Object parent;
	jref F_sound;
	jint F_id;
	jfloat F_volume;
	jfloat F_baseVolume;
} mindustry_audio_SoundLoop;

extern Class class_mindustry_audio_SoundLoop;

extern jfloat SF_mindustry_audio_SoundLoop_fadeSpeed;

#define VTABLE_mindustry_audio_SoundLoop_hashCode_R_int 0
typedef jint (*func_mindustry_audio_SoundLoop_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundLoop_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_audio_SoundLoop_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_audio_SoundLoop_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_audio_SoundLoop_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundLoop_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_audio_SoundLoop_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundLoop_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_audio_SoundLoop_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundLoop_finalize 5
typedef void (*func_mindustry_audio_SoundLoop_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundLoop_notify 6
typedef void (*func_mindustry_audio_SoundLoop_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundLoop_notifyAll 7
typedef void (*func_mindustry_audio_SoundLoop_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundLoop_wait 8
typedef void (*func_mindustry_audio_SoundLoop_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundLoop_wait_long 9
typedef void (*func_mindustry_audio_SoundLoop_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_audio_SoundLoop_wait_long_int 10
typedef void (*func_mindustry_audio_SoundLoop_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_audio_SoundLoop_update_float_float_boolean 11
typedef void (*func_mindustry_audio_SoundLoop_update_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_audio_SoundLoop_update_float_float_boolean_float 12
typedef void (*func_mindustry_audio_SoundLoop_update_float_float_boolean_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2, jfloat param3);
#define VTABLE_mindustry_audio_SoundLoop_stop 13
typedef void (*func_mindustry_audio_SoundLoop_stop)(jcontext ctx, jobject self);

void mark_mindustry_audio_SoundLoop(jobject object, jint mark, jint depth);
void clinit_mindustry_audio_SoundLoop(jcontext ctx);
void init_mindustry_audio_SoundLoop_arc_audio_Sound_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_audio_SoundLoop_update_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
void M_mindustry_audio_SoundLoop_update_float_float_boolean_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2, jfloat param3);
void M_mindustry_audio_SoundLoop_stop(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
