#ifndef HEADER_arc_audio_AudioFilter
#define HEADER_arc_audio_AudioFilter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_audio_AudioFilter {
	java_lang_Object parent;
	jlong F_handle;
} arc_audio_AudioFilter;

extern Class class_arc_audio_AudioFilter;


#define VTABLE_arc_audio_AudioFilter_hashCode_R_int 0
typedef jint (*func_arc_audio_AudioFilter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioFilter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_audio_AudioFilter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_AudioFilter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_audio_AudioFilter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioFilter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_audio_AudioFilter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioFilter_toString_R_java_lang_String 4
typedef jobject (*func_arc_audio_AudioFilter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioFilter_finalize 5
typedef void (*func_arc_audio_AudioFilter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioFilter_notify 6
typedef void (*func_arc_audio_AudioFilter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioFilter_notifyAll 7
typedef void (*func_arc_audio_AudioFilter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioFilter_wait 8
typedef void (*func_arc_audio_AudioFilter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioFilter_wait_long 9
typedef void (*func_arc_audio_AudioFilter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_audio_AudioFilter_wait_long_int 10
typedef void (*func_arc_audio_AudioFilter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_audio_AudioFilter(jobject object, jint mark, jint depth);
void clinit_arc_audio_AudioFilter(jcontext ctx);
void init_arc_audio_AudioFilter_long(jcontext ctx, jobject self, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
