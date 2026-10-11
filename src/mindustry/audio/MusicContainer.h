#ifndef HEADER_mindustry_audio_MusicContainer
#define HEADER_mindustry_audio_MusicContainer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_audio_MusicContainer {
	java_lang_Object parent;
	jref F_name;
	jref F_cached;
	jbool F_accessed;
} mindustry_audio_MusicContainer;

extern Class class_mindustry_audio_MusicContainer;


#define VTABLE_mindustry_audio_MusicContainer_hashCode_R_int 0
typedef jint (*func_mindustry_audio_MusicContainer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_MusicContainer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_audio_MusicContainer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_audio_MusicContainer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_audio_MusicContainer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_MusicContainer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_audio_MusicContainer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_MusicContainer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_audio_MusicContainer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_MusicContainer_finalize 5
typedef void (*func_mindustry_audio_MusicContainer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_MusicContainer_notify 6
typedef void (*func_mindustry_audio_MusicContainer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_MusicContainer_notifyAll 7
typedef void (*func_mindustry_audio_MusicContainer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_MusicContainer_wait 8
typedef void (*func_mindustry_audio_MusicContainer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_audio_MusicContainer_wait_long 9
typedef void (*func_mindustry_audio_MusicContainer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_audio_MusicContainer_wait_long_int 10
typedef void (*func_mindustry_audio_MusicContainer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_audio_MusicContainer_get_R_arc_audio_Music 11
typedef jobject (*func_mindustry_audio_MusicContainer_get_R_arc_audio_Music)(jcontext ctx, jobject self);

void mark_mindustry_audio_MusicContainer(jobject object, jint mark, jint depth);
void clinit_mindustry_audio_MusicContainer(jcontext ctx);
void init_mindustry_audio_MusicContainer_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_mindustry_audio_MusicContainer(jcontext ctx, jobject self);
jobject M_mindustry_audio_MusicContainer_get_R_arc_audio_Music(jcontext ctx, jobject self);
jobject M_mindustry_audio_MusicContainer_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
