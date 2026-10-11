#ifndef HEADER_mindustry_audio_SoundControl$SoundData
#define HEADER_mindustry_audio_SoundControl$SoundData

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_audio_SoundControl$SoundData {
	java_lang_Object parent;
	jfloat F_volume;
	jfloat F_pitch;
	jfloat F_total;
	jfloat F_sumX;
	jfloat F_sumY;
	jint F_soundID;
	jfloat F_curVolume;
	jfloat F_totalVolume;
	jref F_sound;
} mindustry_audio_SoundControl$SoundData;

extern Class class_mindustry_audio_SoundControl$SoundData;


#define VTABLE_mindustry_audio_SoundControl$SoundData_hashCode_R_int 0
typedef jint (*func_mindustry_audio_SoundControl$SoundData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$SoundData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_audio_SoundControl$SoundData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_audio_SoundControl$SoundData_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_audio_SoundControl$SoundData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$SoundData_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_audio_SoundControl$SoundData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$SoundData_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_audio_SoundControl$SoundData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$SoundData_finalize 5
typedef void (*func_mindustry_audio_SoundControl$SoundData_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$SoundData_notify 6
typedef void (*func_mindustry_audio_SoundControl$SoundData_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$SoundData_notifyAll 7
typedef void (*func_mindustry_audio_SoundControl$SoundData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$SoundData_wait 8
typedef void (*func_mindustry_audio_SoundControl$SoundData_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_SoundControl$SoundData_wait_long 9
typedef void (*func_mindustry_audio_SoundControl$SoundData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_audio_SoundControl$SoundData_wait_long_int 10
typedef void (*func_mindustry_audio_SoundControl$SoundData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_audio_SoundControl$SoundData_clone_R_mindustry_audio_SoundControl$SoundData 11
typedef jobject (*func_mindustry_audio_SoundControl$SoundData_clone_R_mindustry_audio_SoundControl$SoundData)(jcontext ctx, jobject self);

void mark_mindustry_audio_SoundControl$SoundData(jobject object, jint mark, jint depth);
void clinit_mindustry_audio_SoundControl$SoundData(jcontext ctx);
void init_mindustry_audio_SoundControl$SoundData(jcontext ctx, jobject self);
jobject M_mindustry_audio_SoundControl$SoundData_clone_R_mindustry_audio_SoundControl$SoundData(jcontext ctx, jobject self);
jobject M_mindustry_audio_SoundControl$SoundData_clone_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
