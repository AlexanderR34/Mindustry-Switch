#ifndef HEADER_mindustry_core_FileTree
#define HEADER_mindustry_core_FileTree

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/assets/loaders/FileHandleResolver.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_FileTree {
	java_lang_Object parent;
	jref F_files;
	jref F_loadedSounds;
	jref F_loadedMusic;
} mindustry_core_FileTree;

extern Class class_mindustry_core_FileTree;


#define VTABLE_mindustry_core_FileTree_hashCode_R_int 0
typedef jint (*func_mindustry_core_FileTree_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_FileTree_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_core_FileTree_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_FileTree_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_core_FileTree_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_FileTree_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_core_FileTree_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_FileTree_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_core_FileTree_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_FileTree_finalize 5
typedef void (*func_mindustry_core_FileTree_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_FileTree_notify 6
typedef void (*func_mindustry_core_FileTree_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_FileTree_notifyAll 7
typedef void (*func_mindustry_core_FileTree_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_FileTree_wait 8
typedef void (*func_mindustry_core_FileTree_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_FileTree_wait_long 9
typedef void (*func_mindustry_core_FileTree_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_FileTree_wait_long_int 10
typedef void (*func_mindustry_core_FileTree_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_core_FileTree_resolve_java_lang_String_R_arc_files_Fi 11
typedef jobject (*func_mindustry_core_FileTree_resolve_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_FileTree_addFile_java_lang_String_arc_files_Fi 12
typedef void (*func_mindustry_core_FileTree_addFile_java_lang_String_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi 13
typedef jobject (*func_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_FileTree_get_java_lang_String_boolean_R_arc_files_Fi 14
typedef jobject (*func_mindustry_core_FileTree_get_java_lang_String_boolean_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_core_FileTree_clear 15
typedef void (*func_mindustry_core_FileTree_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_FileTree_loadSound_java_lang_String_R_arc_audio_Sound 16
typedef jobject (*func_mindustry_core_FileTree_loadSound_java_lang_String_R_arc_audio_Sound)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_FileTree_loadMusic_java_lang_String_R_arc_audio_Music 17
typedef jobject (*func_mindustry_core_FileTree_loadMusic_java_lang_String_R_arc_audio_Music)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_core_FileTree(jobject object, jint mark, jint depth);
void clinit_mindustry_core_FileTree(jcontext ctx);
void init_mindustry_core_FileTree(jcontext ctx, jobject self);
void M_mindustry_core_FileTree_addFile_java_lang_String_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_core_FileTree_get_java_lang_String_boolean_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_core_FileTree_clear(jcontext ctx, jobject self);
jobject M_mindustry_core_FileTree_resolve_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_core_FileTree_loadSound_java_lang_String_R_arc_audio_Sound(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_core_FileTree_loadMusic_java_lang_String_R_arc_audio_Music(jcontext ctx, jobject self, jobject param0);
jobject SM_mindustry_core_FileTree_getAudioPath_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_mindustry_core_FileTree_lambda$loadMusic$0_java_lang_String_R_arc_audio_Music(jcontext ctx, jobject param0);
jobject SM_mindustry_core_FileTree_lambda$loadSound$0_java_lang_String_R_arc_audio_Sound(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
