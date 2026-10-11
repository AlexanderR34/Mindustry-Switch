#ifndef HEADER_mindustry_ClientLauncher$2
#define HEADER_mindustry_ClientLauncher$2

#include "Clearwing.h"
#include "arc/assets/loaders/MusicLoader.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ClientLauncher$2 {
	arc_assets_loaders_MusicLoader parent;
	jref F_this$0;
} mindustry_ClientLauncher$2;

extern Class class_mindustry_ClientLauncher$2;


#define VTABLE_mindustry_ClientLauncher$2_hashCode_R_int 0
typedef jint (*func_mindustry_ClientLauncher$2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher$2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ClientLauncher$2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ClientLauncher$2_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ClientLauncher$2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher$2_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ClientLauncher$2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher$2_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ClientLauncher$2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher$2_finalize 5
typedef void (*func_mindustry_ClientLauncher$2_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher$2_notify 6
typedef void (*func_mindustry_ClientLauncher$2_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher$2_notifyAll 7
typedef void (*func_mindustry_ClientLauncher$2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher$2_wait 8
typedef void (*func_mindustry_ClientLauncher$2_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher$2_wait_long 9
typedef void (*func_mindustry_ClientLauncher$2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ClientLauncher$2_wait_long_int 10
typedef void (*func_mindustry_ClientLauncher$2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ClientLauncher$2_resolve_java_lang_String_R_arc_files_Fi 11
typedef jobject (*func_mindustry_ClientLauncher$2_resolve_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ClientLauncher$2_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq 12
typedef jobject (*func_mindustry_ClientLauncher$2_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_ClientLauncher$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters 13
typedef void (*func_mindustry_ClientLauncher$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_ClientLauncher$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object 14
typedef jobject (*func_mindustry_ClientLauncher$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_ClientLauncher$2_getLoadedMusic_R_arc_audio_Music 15
typedef jobject (*func_mindustry_ClientLauncher$2_getLoadedMusic_R_arc_audio_Music)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter 16
typedef void (*func_mindustry_ClientLauncher$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_ClientLauncher$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter_R_arc_audio_Music 17
typedef jobject (*func_mindustry_ClientLauncher$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter_R_arc_audio_Music)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_ClientLauncher$2_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter_R_arc_struct_Seq 18
typedef jobject (*func_mindustry_ClientLauncher$2_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_mindustry_ClientLauncher$2(jobject object, jint mark, jint depth);
void clinit_mindustry_ClientLauncher$2(jcontext ctx);
void init_mindustry_ClientLauncher$2_mindustry_ClientLauncher_arc_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_ClientLauncher$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_mindustry_ClientLauncher$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_MusicLoader$MusicParameter_R_arc_audio_Music(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_mindustry_ClientLauncher$2_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_mindustry_ClientLauncher$2_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void SM_mindustry_ClientLauncher$2_lambda$loadSync$1_arc_audio_Music_arc_files_Fi(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_ClientLauncher$2_lambda$loadSync$0_arc_assets_loaders_MusicLoader$MusicParameter_arc_files_Fi(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
