#ifndef HEADER_arc_audio_Filters$RobotizeFilter
#define HEADER_arc_audio_Filters$RobotizeFilter

#include "Clearwing.h"
#include "arc/audio/AudioFilter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_audio_Filters$RobotizeFilter {
	arc_audio_AudioFilter parent;
} arc_audio_Filters$RobotizeFilter;

extern Class class_arc_audio_Filters$RobotizeFilter;


#define VTABLE_arc_audio_Filters$RobotizeFilter_hashCode_R_int 0
typedef jint (*func_arc_audio_Filters$RobotizeFilter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$RobotizeFilter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_audio_Filters$RobotizeFilter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_Filters$RobotizeFilter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_audio_Filters$RobotizeFilter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$RobotizeFilter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_audio_Filters$RobotizeFilter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$RobotizeFilter_toString_R_java_lang_String 4
typedef jobject (*func_arc_audio_Filters$RobotizeFilter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$RobotizeFilter_finalize 5
typedef void (*func_arc_audio_Filters$RobotizeFilter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$RobotizeFilter_notify 6
typedef void (*func_arc_audio_Filters$RobotizeFilter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$RobotizeFilter_notifyAll 7
typedef void (*func_arc_audio_Filters$RobotizeFilter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$RobotizeFilter_wait 8
typedef void (*func_arc_audio_Filters$RobotizeFilter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_Filters$RobotizeFilter_wait_long 9
typedef void (*func_arc_audio_Filters$RobotizeFilter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_audio_Filters$RobotizeFilter_wait_long_int 10
typedef void (*func_arc_audio_Filters$RobotizeFilter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_audio_Filters$RobotizeFilter_set_float_int 11
typedef void (*func_arc_audio_Filters$RobotizeFilter_set_float_int)(jcontext ctx, jobject self, jfloat param0, jint param1);

void mark_arc_audio_Filters$RobotizeFilter(jobject object, jint mark, jint depth);
void clinit_arc_audio_Filters$RobotizeFilter(jcontext ctx);
void init_arc_audio_Filters$RobotizeFilter(jcontext ctx, jobject self);
void M_arc_audio_Filters$RobotizeFilter_set_float_int(jcontext ctx, jobject self, jfloat param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
