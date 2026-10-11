#ifndef HEADER_arc_audio_Filters$FlangerFilter
#define HEADER_arc_audio_Filters$FlangerFilter

#include "Clearwing.h"
#include "arc/audio/AudioFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_audio_Filters$FlangerFilter {
	arc_audio_AudioFilter parent;
} arc_audio_Filters$FlangerFilter;

extern Class class_arc_audio_Filters$FlangerFilter;


#define VTABLE_arc_audio_Filters$FlangerFilter_hashCode_R_int 0
typedef jint (*func_arc_audio_Filters$FlangerFilter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$FlangerFilter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_audio_Filters$FlangerFilter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Filters$FlangerFilter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_audio_Filters$FlangerFilter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$FlangerFilter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_audio_Filters$FlangerFilter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$FlangerFilter_toString_R_java_lang_String 4
typedef jobject (*func_arc_audio_Filters$FlangerFilter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$FlangerFilter_finalize 5
typedef void (*func_arc_audio_Filters$FlangerFilter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$FlangerFilter_notify 6
typedef void (*func_arc_audio_Filters$FlangerFilter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$FlangerFilter_notifyAll 7
typedef void (*func_arc_audio_Filters$FlangerFilter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$FlangerFilter_wait 8
typedef void (*func_arc_audio_Filters$FlangerFilter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$FlangerFilter_wait_long 9
typedef void (*func_arc_audio_Filters$FlangerFilter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_audio_Filters$FlangerFilter_wait_long_int 10
typedef void (*func_arc_audio_Filters$FlangerFilter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_audio_Filters$FlangerFilter_set_float_float 11
typedef void (*func_arc_audio_Filters$FlangerFilter_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);

void mark_arc_audio_Filters$FlangerFilter(jobject object, jint mark, jint depth);
void clinit_arc_audio_Filters$FlangerFilter(jcontext ctx);
void init_arc_audio_Filters$FlangerFilter(jcontext ctx, jobject self);
void M_arc_audio_Filters$FlangerFilter_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
