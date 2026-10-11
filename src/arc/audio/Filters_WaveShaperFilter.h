#ifndef HEADER_arc_audio_Filters$WaveShaperFilter
#define HEADER_arc_audio_Filters$WaveShaperFilter

#include "Clearwing.h"
#include "arc/audio/AudioFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_audio_Filters$WaveShaperFilter {
	arc_audio_AudioFilter parent;
} arc_audio_Filters$WaveShaperFilter;

extern Class class_arc_audio_Filters$WaveShaperFilter;


#define VTABLE_arc_audio_Filters$WaveShaperFilter_hashCode_R_int 0
typedef jint (*func_arc_audio_Filters$WaveShaperFilter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$WaveShaperFilter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_audio_Filters$WaveShaperFilter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Filters$WaveShaperFilter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_audio_Filters$WaveShaperFilter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$WaveShaperFilter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_audio_Filters$WaveShaperFilter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$WaveShaperFilter_toString_R_java_lang_String 4
typedef jobject (*func_arc_audio_Filters$WaveShaperFilter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$WaveShaperFilter_finalize 5
typedef void (*func_arc_audio_Filters$WaveShaperFilter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$WaveShaperFilter_notify 6
typedef void (*func_arc_audio_Filters$WaveShaperFilter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$WaveShaperFilter_notifyAll 7
typedef void (*func_arc_audio_Filters$WaveShaperFilter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$WaveShaperFilter_wait 8
typedef void (*func_arc_audio_Filters$WaveShaperFilter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$WaveShaperFilter_wait_long 9
typedef void (*func_arc_audio_Filters$WaveShaperFilter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_audio_Filters$WaveShaperFilter_wait_long_int 10
typedef void (*func_arc_audio_Filters$WaveShaperFilter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_audio_Filters$WaveShaperFilter_set_float 11
typedef void (*func_arc_audio_Filters$WaveShaperFilter_set_float)(jcontext ctx, jobject self, jfloat param0);

void mark_arc_audio_Filters$WaveShaperFilter(jobject object, jint mark, jint depth);
void clinit_arc_audio_Filters$WaveShaperFilter(jcontext ctx);
void init_arc_audio_Filters$WaveShaperFilter(jcontext ctx, jobject self);
void M_arc_audio_Filters$WaveShaperFilter_set_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
