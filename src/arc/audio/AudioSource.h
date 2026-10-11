#ifndef HEADER_arc_audio_AudioSource
#define HEADER_arc_audio_AudioSource

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_audio_AudioSource {
	java_lang_Object parent;
	jlong F_handle;
	jint F_maxConcurrent;
	jint F_concurrentGroup;
	jfloat F_minInterruptAbsolute;
	jfloat F_minInterruptFraction;
	jfloat F_priority;
} arc_audio_AudioSource;

extern Class class_arc_audio_AudioSource;


#define VTABLE_arc_audio_AudioSource_hashCode_R_int 0
typedef jint (*func_arc_audio_AudioSource_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioSource_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_audio_AudioSource_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_AudioSource_clone_R_java_lang_Object 2
typedef jobject (*func_arc_audio_AudioSource_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioSource_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_audio_AudioSource_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioSource_toString_R_java_lang_String 4
typedef jobject (*func_arc_audio_AudioSource_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioSource_finalize 5
typedef void (*func_arc_audio_AudioSource_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioSource_notify 6
typedef void (*func_arc_audio_AudioSource_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioSource_notifyAll 7
typedef void (*func_arc_audio_AudioSource_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioSource_wait 8
typedef void (*func_arc_audio_AudioSource_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioSource_wait_long 9
typedef void (*func_arc_audio_AudioSource_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_audio_AudioSource_wait_long_int 10
typedef void (*func_arc_audio_AudioSource_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_audio_AudioSource_dispose 11
typedef void (*func_arc_audio_AudioSource_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioSource_isDisposed_R_boolean 12
typedef jbool (*func_arc_audio_AudioSource_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioSource_valid_R_boolean 13
typedef jbool (*func_arc_audio_AudioSource_valid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioSource_setFilter_int_arc_audio_AudioFilter 14
typedef void (*func_arc_audio_AudioSource_setFilter_int_arc_audio_AudioFilter)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_audio_AudioSource_setFilter_arc_audio_AudioFilter 15
typedef void (*func_arc_audio_AudioSource_setFilter_arc_audio_AudioFilter)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_audio_AudioSource_setParamsAfterLoad 16
typedef void (*func_arc_audio_AudioSource_setParamsAfterLoad)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioSource_setPriority_float 17
typedef void (*func_arc_audio_AudioSource_setPriority_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_audio_AudioSource_setMaxConcurrent_int 18
typedef void (*func_arc_audio_AudioSource_setMaxConcurrent_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_audio_AudioSource_setConcurrentGroup_int 19
typedef void (*func_arc_audio_AudioSource_setConcurrentGroup_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_audio_AudioSource_setMinConcurrentInterrupt_float 20
typedef void (*func_arc_audio_AudioSource_setMinConcurrentInterrupt_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_audio_AudioSource_setMinConcurrentInterruptFraction_float_float 21
typedef void (*func_arc_audio_AudioSource_setMinConcurrentInterruptFraction_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_audio_AudioSource_countPlaying_R_int 22
typedef jint (*func_arc_audio_AudioSource_countPlaying_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioSource_setSingleInstance_boolean 23
typedef void (*func_arc_audio_AudioSource_setSingleInstance_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_audio_AudioSource_stop 24
typedef void (*func_arc_audio_AudioSource_stop)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioSource_getLength_R_float 25
typedef jfloat (*func_arc_audio_AudioSource_getLength_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_audio_AudioSource_isLazy_R_boolean 26
typedef jbool (*func_arc_audio_AudioSource_isLazy_R_boolean)(jcontext ctx, jobject self);

void mark_arc_audio_AudioSource(jobject object, jint mark, jint depth);
void clinit_arc_audio_AudioSource(jcontext ctx);
void init_arc_audio_AudioSource(jcontext ctx, jobject self);
jbool M_arc_audio_AudioSource_valid_R_boolean(jcontext ctx, jobject self);
void M_arc_audio_AudioSource_setFilter_int_arc_audio_AudioFilter(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_audio_AudioSource_setFilter_arc_audio_AudioFilter(jcontext ctx, jobject self, jobject param0);
void M_arc_audio_AudioSource_setParamsAfterLoad(jcontext ctx, jobject self);
void M_arc_audio_AudioSource_setPriority_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_audio_AudioSource_setMaxConcurrent_int(jcontext ctx, jobject self, jint param0);
void M_arc_audio_AudioSource_setConcurrentGroup_int(jcontext ctx, jobject self, jint param0);
void M_arc_audio_AudioSource_setMinConcurrentInterrupt_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_audio_AudioSource_setMinConcurrentInterruptFraction_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jint M_arc_audio_AudioSource_countPlaying_R_int(jcontext ctx, jobject self);
void M_arc_audio_AudioSource_setSingleInstance_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_audio_AudioSource_stop(jcontext ctx, jobject self);
jbool M_arc_audio_AudioSource_isLazy_R_boolean(jcontext ctx, jobject self);
void M_arc_audio_AudioSource_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
