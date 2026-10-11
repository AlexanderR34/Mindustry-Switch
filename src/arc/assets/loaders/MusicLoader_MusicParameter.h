#ifndef HEADER_arc_assets_loaders_MusicLoader$MusicParameter
#define HEADER_arc_assets_loaders_MusicLoader$MusicParameter

#include "Clearwing.h"
#include "arc/assets/AssetLoaderParameters.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_assets_loaders_MusicLoader$MusicParameter {
	arc_assets_AssetLoaderParameters parent;
	jref F_music;
} arc_assets_loaders_MusicLoader$MusicParameter;

extern Class class_arc_assets_loaders_MusicLoader$MusicParameter;


#define VTABLE_arc_assets_loaders_MusicLoader$MusicParameter_hashCode_R_int 0
typedef jint (*func_arc_assets_loaders_MusicLoader$MusicParameter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_MusicLoader$MusicParameter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_assets_loaders_MusicLoader$MusicParameter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_assets_loaders_MusicLoader$MusicParameter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_assets_loaders_MusicLoader$MusicParameter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_MusicLoader$MusicParameter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_assets_loaders_MusicLoader$MusicParameter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_MusicLoader$MusicParameter_toString_R_java_lang_String 4
typedef jobject (*func_arc_assets_loaders_MusicLoader$MusicParameter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_MusicLoader$MusicParameter_finalize 5
typedef void (*func_arc_assets_loaders_MusicLoader$MusicParameter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_MusicLoader$MusicParameter_notify 6
typedef void (*func_arc_assets_loaders_MusicLoader$MusicParameter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_MusicLoader$MusicParameter_notifyAll 7
typedef void (*func_arc_assets_loaders_MusicLoader$MusicParameter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_MusicLoader$MusicParameter_wait 8
typedef void (*func_arc_assets_loaders_MusicLoader$MusicParameter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_assets_loaders_MusicLoader$MusicParameter_wait_long 9
typedef void (*func_arc_assets_loaders_MusicLoader$MusicParameter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_assets_loaders_MusicLoader$MusicParameter_wait_long_int 10
typedef void (*func_arc_assets_loaders_MusicLoader$MusicParameter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_assets_loaders_MusicLoader$MusicParameter(jobject object, jint mark, jint depth);
void clinit_arc_assets_loaders_MusicLoader$MusicParameter(jcontext ctx);
void init_arc_assets_loaders_MusicLoader$MusicParameter(jcontext ctx, jobject self);
void init_arc_assets_loaders_MusicLoader$MusicParameter_arc_audio_Music(jcontext ctx, jobject self, jobject param0);
void init_arc_assets_loaders_MusicLoader$MusicParameter_arc_assets_AssetLoaderParameters$LoadedCallback(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
