#ifndef HEADER_mindustry_audio_AmbientSource
#define HEADER_mindustry_audio_AmbientSource

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Position.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_audio_AmbientSource {
	java_lang_Object parent;
} mindustry_audio_AmbientSource;

extern Class class_mindustry_audio_AmbientSource;


#define INDEX_mindustry_audio_AmbientSource_isValid_R_boolean 0
typedef jbool (*func_mindustry_audio_AmbientSource_isValid_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_audio_AmbientSource_shouldAmbientSound_R_boolean 1
typedef jbool (*func_mindustry_audio_AmbientSource_shouldAmbientSound_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_audio_AmbientSource_getAmbientVolume_R_float 2
typedef jfloat (*func_mindustry_audio_AmbientSource_getAmbientVolume_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_audio_AmbientSource_getAmbientSound_R_arc_audio_Sound 3
typedef jobject (*func_mindustry_audio_AmbientSource_getAmbientSound_R_arc_audio_Sound)(jcontext ctx, jobject self);

void mark_mindustry_audio_AmbientSource(jobject object, jint mark, jint depth);
void clinit_mindustry_audio_AmbientSource(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
