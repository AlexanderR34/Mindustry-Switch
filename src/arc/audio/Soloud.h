#ifndef HEADER_arc_audio_Soloud
#define HEADER_arc_audio_Soloud

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_audio_Soloud {
	java_lang_Object parent;
} arc_audio_Soloud;

extern Class class_arc_audio_Soloud;


#define VTABLE_arc_audio_Soloud_hashCode_R_int 0
typedef jint (*func_arc_audio_Soloud_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Soloud_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_audio_Soloud_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Soloud_clone_R_java_lang_Object 2
typedef jobject (*func_arc_audio_Soloud_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Soloud_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_audio_Soloud_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Soloud_toString_R_java_lang_String 4
typedef jobject (*func_arc_audio_Soloud_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Soloud_finalize 5
typedef void (*func_arc_audio_Soloud_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Soloud_notify 6
typedef void (*func_arc_audio_Soloud_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Soloud_notifyAll 7
typedef void (*func_arc_audio_Soloud_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Soloud_wait 8
typedef void (*func_arc_audio_Soloud_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Soloud_wait_long 9
typedef void (*func_arc_audio_Soloud_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_audio_Soloud_wait_long_int 10
typedef void (*func_arc_audio_Soloud_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_audio_Soloud(jobject object, jint mark, jint depth);
void clinit_arc_audio_Soloud(jcontext ctx);
void init_arc_audio_Soloud(jcontext ctx, jobject self);
void SM_arc_audio_Soloud_init(jcontext ctx);
void SM_arc_audio_Soloud_deinit(jcontext ctx);
jobject SM_arc_audio_Soloud_backendString_R_java_lang_String(jcontext ctx);
jint SM_arc_audio_Soloud_backendId_R_int(jcontext ctx);
jint SM_arc_audio_Soloud_backendChannels_R_int(jcontext ctx);
jint SM_arc_audio_Soloud_backendSamplerate_R_int(jcontext ctx);
jint SM_arc_audio_Soloud_backendBufferSize_R_int(jcontext ctx);
jint SM_arc_audio_Soloud_version_R_int(jcontext ctx);
jint SM_arc_audio_Soloud_activeVoiceCount_R_int(jcontext ctx);
void SM_arc_audio_Soloud_stopAll(jcontext ctx);
void SM_arc_audio_Soloud_pauseAll_boolean(jcontext ctx, jbool param0);
void SM_arc_audio_Soloud_biquadSet_long_int_float_float(jcontext ctx, jlong param0, jint param1, jfloat param2, jfloat param3);
void SM_arc_audio_Soloud_echoSet_long_float_float_float(jcontext ctx, jlong param0, jfloat param1, jfloat param2, jfloat param3);
void SM_arc_audio_Soloud_lofiSet_long_float_float(jcontext ctx, jlong param0, jfloat param1, jfloat param2);
void SM_arc_audio_Soloud_flangerSet_long_float_float(jcontext ctx, jlong param0, jfloat param1, jfloat param2);
void SM_arc_audio_Soloud_waveShaperSet_long_float(jcontext ctx, jlong param0, jfloat param1);
void SM_arc_audio_Soloud_bassBoostSet_long_float(jcontext ctx, jlong param0, jfloat param1);
void SM_arc_audio_Soloud_robotizeSet_long_float_int(jcontext ctx, jlong param0, jfloat param1, jint param2);
void SM_arc_audio_Soloud_freeverbSet_long_float_float_float_float(jcontext ctx, jlong param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jlong SM_arc_audio_Soloud_filterBiquad_R_long(jcontext ctx);
jlong SM_arc_audio_Soloud_filterEcho_R_long(jcontext ctx);
jlong SM_arc_audio_Soloud_filterLofi_R_long(jcontext ctx);
jlong SM_arc_audio_Soloud_filterFlanger_R_long(jcontext ctx);
jlong SM_arc_audio_Soloud_filterBassBoost_R_long(jcontext ctx);
jlong SM_arc_audio_Soloud_filterWaveShaper_R_long(jcontext ctx);
jlong SM_arc_audio_Soloud_filterRobotize_R_long(jcontext ctx);
jlong SM_arc_audio_Soloud_filterFreeverb_R_long(jcontext ctx);
void SM_arc_audio_Soloud_setGlobalFilter_int_long(jcontext ctx, jint param0, jlong param1);
void SM_arc_audio_Soloud_filterFade_int_int_int_float_float(jcontext ctx, jint param0, jint param1, jint param2, jfloat param3, jfloat param4);
void SM_arc_audio_Soloud_filterSet_int_int_int_float(jcontext ctx, jint param0, jint param1, jint param2, jfloat param3);
jlong SM_arc_audio_Soloud_busNew_R_long(jcontext ctx);
void SM_arc_audio_Soloud_idSeek_int_float(jcontext ctx, jint param0, jfloat param1);
void SM_arc_audio_Soloud_idVolume_int_float(jcontext ctx, jint param0, jfloat param1);
jfloat SM_arc_audio_Soloud_idGetVolume_int_R_float(jcontext ctx, jint param0);
void SM_arc_audio_Soloud_idPan_int_float(jcontext ctx, jint param0, jfloat param1);
void SM_arc_audio_Soloud_idPitch_int_float(jcontext ctx, jint param0, jfloat param1);
void SM_arc_audio_Soloud_idPause_int_boolean(jcontext ctx, jint param0, jbool param1);
jbool SM_arc_audio_Soloud_idGetPause_int_R_boolean(jcontext ctx, jint param0);
void SM_arc_audio_Soloud_idProtected_int_boolean(jcontext ctx, jint param0, jbool param1);
void SM_arc_audio_Soloud_idStop_int(jcontext ctx, jint param0);
void SM_arc_audio_Soloud_idLooping_int_boolean(jcontext ctx, jint param0, jbool param1);
jbool SM_arc_audio_Soloud_idGetLooping_int_R_boolean(jcontext ctx, jint param0);
jfloat SM_arc_audio_Soloud_idPosition_int_R_float(jcontext ctx, jint param0);
jbool SM_arc_audio_Soloud_idValid_int_R_boolean(jcontext ctx, jint param0);
jlong SM_arc_audio_Soloud_wavLoadBytes_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1);
jlong SM_arc_audio_Soloud_wavLoadFile_java_lang_String_R_long(jcontext ctx, jobject param0);
jlong SM_arc_audio_Soloud_streamLoadBytes_Array1_byte_int_R_long(jcontext ctx, jobject param0, jint param1);
jlong SM_arc_audio_Soloud_streamLoadFile_java_lang_String_R_long(jcontext ctx, jobject param0);
jdouble SM_arc_audio_Soloud_streamLength_long_R_double(jcontext ctx, jlong param0);
jdouble SM_arc_audio_Soloud_wavLength_long_R_double(jcontext ctx, jlong param0);
void SM_arc_audio_Soloud_sourceDestroy_long(jcontext ctx, jlong param0);
void SM_arc_audio_Soloud_sourceInaudible_long_boolean_boolean(jcontext ctx, jlong param0, jbool param1, jbool param2);
jint SM_arc_audio_Soloud_sourcePlay_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_audio_Soloud_sourceCount_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_audio_Soloud_sourcePlay_long_float_float_float_boolean_R_int(jcontext ctx, jlong param0, jfloat param1, jfloat param2, jfloat param3, jbool param4);
jint SM_arc_audio_Soloud_sourcePlayBus_long_long_float_float_float_boolean_R_int(jcontext ctx, jlong param0, jlong param1, jfloat param2, jfloat param3, jfloat param4, jbool param5);
void SM_arc_audio_Soloud_sourcePriority_long_float(jcontext ctx, jlong param0, jfloat param1);
void SM_arc_audio_Soloud_sourceMinConcurrentInterrupt_long_float(jcontext ctx, jlong param0, jfloat param1);
void SM_arc_audio_Soloud_sourceMaxConcurrent_long_int(jcontext ctx, jlong param0, jint param1);
void SM_arc_audio_Soloud_sourceConcurrentGroup_long_int(jcontext ctx, jlong param0, jint param1);
void SM_arc_audio_Soloud_sourceLoop_long_boolean(jcontext ctx, jlong param0, jbool param1);
void SM_arc_audio_Soloud_sourceSingleInstance_long_boolean(jcontext ctx, jlong param0, jbool param1);
void SM_arc_audio_Soloud_sourceStop_long(jcontext ctx, jlong param0);
void SM_arc_audio_Soloud_sourceFilter_long_int_long(jcontext ctx, jlong param0, jint param1, jlong param2);
jint SM_arc_audio_Soloud_pauseDevice_R_int(jcontext ctx);
jint SM_arc_audio_Soloud_resumeDevice_R_int(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
