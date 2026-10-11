#ifndef HEADER_mindustry_mod_Mods$LoadedMod
#define HEADER_mindustry_mod_Mods$LoadedMod

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/type/Publishable.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_Mods$LoadedMod {
	java_lang_Object parent;
	jref F_file;
	jref F_root;
	jref F_main;
	jref F_name;
	jref F_meta;
	jref F_dependencies;
	jref F_softDependencies;
	jref F_missingDependencies;
	jref F_missingSoftDependencies;
	jref F_erroredContent;
	jref F_state;
	jref F_iconTexture;
	jref F_loader;
} mindustry_mod_Mods$LoadedMod;

extern Class class_mindustry_mod_Mods$LoadedMod;


#define VTABLE_mindustry_mod_Mods$LoadedMod_hashCode_R_int 0
typedef jint (*func_mindustry_mod_Mods$LoadedMod_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_Mods$LoadedMod_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$LoadedMod_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_Mods$LoadedMod_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_Mods$LoadedMod_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_Mods$LoadedMod_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_finalize 5
typedef void (*func_mindustry_mod_Mods$LoadedMod_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_notify 6
typedef void (*func_mindustry_mod_Mods$LoadedMod_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_notifyAll 7
typedef void (*func_mindustry_mod_Mods$LoadedMod_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_wait 8
typedef void (*func_mindustry_mod_Mods$LoadedMod_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_wait_long 9
typedef void (*func_mindustry_mod_Mods$LoadedMod_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_Mods$LoadedMod_wait_long_int 10
typedef void (*func_mindustry_mod_Mods$LoadedMod_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_Mods$LoadedMod_getSteamID_R_java_lang_String 11
typedef jobject (*func_mindustry_mod_Mods$LoadedMod_getSteamID_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_addSteamID_java_lang_String 12
typedef void (*func_mindustry_mod_Mods$LoadedMod_addSteamID_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$LoadedMod_removeSteamID 13
typedef void (*func_mindustry_mod_Mods$LoadedMod_removeSteamID)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_steamTitle_R_java_lang_String 14
typedef jobject (*func_mindustry_mod_Mods$LoadedMod_steamTitle_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_steamDescription_R_java_lang_String 15
typedef jobject (*func_mindustry_mod_Mods$LoadedMod_steamDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_steamTag_R_java_lang_String 16
typedef jobject (*func_mindustry_mod_Mods$LoadedMod_steamTag_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_createSteamFolder_java_lang_String_R_arc_files_Fi 17
typedef jobject (*func_mindustry_mod_Mods$LoadedMod_createSteamFolder_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$LoadedMod_createSteamPreview_java_lang_String_R_arc_files_Fi 18
typedef jobject (*func_mindustry_mod_Mods$LoadedMod_createSteamPreview_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$LoadedMod_extraTags_R_arc_struct_Seq 19
typedef jobject (*func_mindustry_mod_Mods$LoadedMod_extraTags_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_hasSteamID_R_boolean 20
typedef jbool (*func_mindustry_mod_Mods$LoadedMod_hasSteamID_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_prePublish_R_boolean 21
typedef jbool (*func_mindustry_mod_Mods$LoadedMod_prePublish_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_dispose 22
typedef void (*func_mindustry_mod_Mods$LoadedMod_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_isDisposed_R_boolean 23
typedef jbool (*func_mindustry_mod_Mods$LoadedMod_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_isJava_R_boolean 24
typedef jbool (*func_mindustry_mod_Mods$LoadedMod_isJava_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String 25
typedef jobject (*func_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_setRepo_java_lang_String 26
typedef void (*func_mindustry_mod_Mods$LoadedMod_setRepo_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$LoadedMod_enabled_R_boolean 27
typedef jbool (*func_mindustry_mod_Mods$LoadedMod_enabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_shouldBeEnabled_R_boolean 28
typedef jbool (*func_mindustry_mod_Mods$LoadedMod_shouldBeEnabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_failed_R_boolean 29
typedef jbool (*func_mindustry_mod_Mods$LoadedMod_failed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_hasUnmetDependencies_R_boolean 30
typedef jbool (*func_mindustry_mod_Mods$LoadedMod_hasUnmetDependencies_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_hasContentErrors_R_boolean 31
typedef jbool (*func_mindustry_mod_Mods$LoadedMod_hasContentErrors_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean 32
typedef jbool (*func_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_isBlacklisted_R_boolean 33
typedef jbool (*func_mindustry_mod_Mods$LoadedMod_isBlacklisted_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_isOutdated_R_boolean 34
typedef jbool (*func_mindustry_mod_Mods$LoadedMod_isOutdated_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$LoadedMod_getMinMajor_R_int 35
typedef jint (*func_mindustry_mod_Mods$LoadedMod_getMinMajor_R_int)(jcontext ctx, jobject self);

void mark_mindustry_mod_Mods$LoadedMod(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_Mods$LoadedMod(jcontext ctx);
void init_mindustry_mod_Mods$LoadedMod_arc_files_Fi_arc_files_Fi_mindustry_mod_Mod_java_lang_ClassLoader_mindustry_mod_Mods$ModMeta(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jbool M_mindustry_mod_Mods$LoadedMod_isJava_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_mod_Mods$LoadedMod_setRepo_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_mod_Mods$LoadedMod_enabled_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_mod_Mods$LoadedMod_shouldBeEnabled_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_mod_Mods$LoadedMod_failed_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_mod_Mods$LoadedMod_hasUnmetDependencies_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_mod_Mods$LoadedMod_hasContentErrors_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_mod_Mods$LoadedMod_isBlacklisted_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_mod_Mods$LoadedMod_isOutdated_R_boolean(jcontext ctx, jobject self);
jint M_mindustry_mod_Mods$LoadedMod_getMinMajor_R_int(jcontext ctx, jobject self);
void M_mindustry_mod_Mods$LoadedMod_dispose(jcontext ctx, jobject self);
jobject M_mindustry_mod_Mods$LoadedMod_getSteamID_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_mod_Mods$LoadedMod_addSteamID_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_Mods$LoadedMod_removeSteamID(jcontext ctx, jobject self);
jobject M_mindustry_mod_Mods$LoadedMod_steamTitle_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_mod_Mods$LoadedMod_steamDescription_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_mod_Mods$LoadedMod_steamTag_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_mod_Mods$LoadedMod_createSteamFolder_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_Mods$LoadedMod_createSteamPreview_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_mod_Mods$LoadedMod_prePublish_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_mod_Mods$LoadedMod_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
