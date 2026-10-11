#ifndef HEADER_mindustry_mod_Mods
#define HEADER_mindustry_mod_Mods

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/assets/Loadable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_Mods {
	java_lang_Object parent;
	jref F_json;
	jref F_scripts;
	jref F_parser;
	jref F_bundles;
	jref F_specialFolders;
	jref F_lastOrderedMods;
	jref F_mainLoader;
	jref F_mods;
	jref F_newImports;
	jref F_metas;
	jbool F_requiresReload;
} mindustry_mod_Mods;

extern Class class_mindustry_mod_Mods;

extern jobject SF_mindustry_mod_Mods_metaFiles;
extern jobject SF_mindustry_mod_Mods_blacklistedMods;

#define VTABLE_mindustry_mod_Mods_hashCode_R_int 0
typedef jint (*func_mindustry_mod_Mods_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_Mods_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_Mods_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_Mods_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_Mods_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_finalize 5
typedef void (*func_mindustry_mod_Mods_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_notify 6
typedef void (*func_mindustry_mod_Mods_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_notifyAll 7
typedef void (*func_mindustry_mod_Mods_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_wait 8
typedef void (*func_mindustry_mod_Mods_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_wait_long 9
typedef void (*func_mindustry_mod_Mods_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_Mods_wait_long_int 10
typedef void (*func_mindustry_mod_Mods_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_Mods_loadAsync 11
typedef void (*func_mindustry_mod_Mods_loadAsync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_loadSync 12
typedef void (*func_mindustry_mod_Mods_loadSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_getName_R_java_lang_String 13
typedef jobject (*func_mindustry_mod_Mods_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_getDependencies_R_arc_struct_Seq 14
typedef jobject (*func_mindustry_mod_Mods_getDependencies_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_mainLoader_R_java_lang_ClassLoader 15
typedef jobject (*func_mindustry_mod_Mods_mainLoader_R_java_lang_ClassLoader)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_getConfigFolder_mindustry_mod_Mod_R_arc_files_Fi 16
typedef jobject (*func_mindustry_mod_Mods_getConfigFolder_mindustry_mod_Mod_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_getConfig_mindustry_mod_Mod_R_arc_files_Fi 17
typedef jobject (*func_mindustry_mod_Mods_getConfig_mindustry_mod_Mod_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_listFiles_java_lang_String_arc_func_Cons2 18
typedef void (*func_mindustry_mod_Mods_listFiles_java_lang_String_arc_func_Cons2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods_getMod_java_lang_String_R_mindustry_mod_Mods$LoadedMod 19
typedef jobject (*func_mindustry_mod_Mods_getMod_java_lang_String_R_mindustry_mod_Mods$LoadedMod)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_getMod_java_lang_Class_R_mindustry_mod_Mods$LoadedMod 20
typedef jobject (*func_mindustry_mod_Mods_getMod_java_lang_Class_R_mindustry_mod_Mods$LoadedMod)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_importMod_arc_files_Fi_R_mindustry_mod_Mods$LoadedMod 21
typedef jobject (*func_mindustry_mod_Mods_importMod_arc_files_Fi_R_mindustry_mod_Mods$LoadedMod)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_importMod_arc_files_Fi_boolean_R_mindustry_mod_Mods$LoadedMod 22
typedef jobject (*func_mindustry_mod_Mods_importMod_arc_files_Fi_boolean_R_mindustry_mod_Mods$LoadedMod)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_mod_Mods_loadIcons 23
typedef void (*func_mindustry_mod_Mods_loadIcons)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_loadIcon_mindustry_mod_Mods$LoadedMod 24
typedef void (*func_mindustry_mod_Mods_loadIcon_mindustry_mod_Mods$LoadedMod)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_packSprites_mindustry_graphics_MultiPacker_arc_struct_Seq_mindustry_mod_Mods$LoadedMod_boolean_arc_struct_Seq_arc_struct_ObjectFloatMap 25
typedef void (*func_mindustry_mod_Mods_packSprites_mindustry_graphics_MultiPacker_arc_struct_Seq_mindustry_mod_Mods$LoadedMod_boolean_arc_struct_Seq_arc_struct_ObjectFloatMap)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jobject param5);
#define VTABLE_mindustry_mod_Mods_waitForMain_java_lang_Runnable 26
typedef void (*func_mindustry_mod_Mods_waitForMain_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_getPage_arc_files_Fi_R_mindustry_graphics_MultiPacker$PageType 27
typedef jobject (*func_mindustry_mod_Mods_getPage_arc_files_Fi_R_mindustry_graphics_MultiPacker$PageType)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_removeMod_mindustry_mod_Mods$LoadedMod 28
typedef void (*func_mindustry_mod_Mods_removeMod_mindustry_mod_Mods$LoadedMod)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_getScripts_R_mindustry_mod_Scripts 29
typedef jobject (*func_mindustry_mod_Mods_getScripts_R_mindustry_mod_Scripts)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_hasScripts_R_boolean 30
typedef jbool (*func_mindustry_mod_Mods_hasScripts_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_requiresReload_R_boolean 31
typedef jbool (*func_mindustry_mod_Mods_requiresReload_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_skipModLoading_R_boolean 32
typedef jbool (*func_mindustry_mod_Mods_skipModLoading_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_load 33
typedef void (*func_mindustry_mod_Mods_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_sortMods 34
typedef void (*func_mindustry_mod_Mods_sortMods)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_updateDependencies_mindustry_mod_Mods$LoadedMod 35
typedef void (*func_mindustry_mod_Mods_updateDependencies_mindustry_mod_Mods$LoadedMod)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_orderedMods_R_arc_struct_Seq 36
typedef jobject (*func_mindustry_mod_Mods_orderedMods_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_locateMod_java_lang_String_R_mindustry_mod_Mods$LoadedMod 37
typedef jobject (*func_mindustry_mod_Mods_locateMod_java_lang_String_R_mindustry_mod_Mods$LoadedMod)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_buildFiles 38
typedef void (*func_mindustry_mod_Mods_buildFiles)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_checkWarnings 39
typedef void (*func_mindustry_mod_Mods_checkWarnings)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_checkDependencies_arc_struct_Seq_boolean 40
typedef void (*func_mindustry_mod_Mods_checkDependencies_arc_struct_Seq_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_mod_Mods_downloadDependencies_arc_struct_Seq 41
typedef void (*func_mindustry_mod_Mods_downloadDependencies_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_reload 42
typedef void (*func_mindustry_mod_Mods_reload)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_hasContentErrors_R_boolean 43
typedef jbool (*func_mindustry_mod_Mods_hasContentErrors_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_loadScripts 44
typedef void (*func_mindustry_mod_Mods_loadScripts)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_loadContent 45
typedef void (*func_mindustry_mod_Mods_loadContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_loadModPatches 46
typedef void (*func_mindustry_mod_Mods_loadModPatches)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_handleContentError_mindustry_ctype_Content_java_lang_Throwable 47
typedef void (*func_mindustry_mod_Mods_handleContentError_mindustry_ctype_Content_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods_addParseListener_mindustry_mod_ContentParser$ParseListener 48
typedef void (*func_mindustry_mod_Mods_addParseListener_mindustry_mod_ContentParser$ParseListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_getModStrings_R_arc_struct_Seq 49
typedef jobject (*func_mindustry_mod_Mods_getModStrings_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_setEnabled_mindustry_mod_Mods$LoadedMod_boolean 50
typedef void (*func_mindustry_mod_Mods_setEnabled_mindustry_mod_Mods$LoadedMod_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_mod_Mods_getIncompatibility_arc_struct_Seq_R_arc_struct_Seq 51
typedef jobject (*func_mindustry_mod_Mods_getIncompatibility_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_list_R_arc_struct_Seq 52
typedef jobject (*func_mindustry_mod_Mods_list_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_getMods_R_arc_struct_Seq 53
typedef jobject (*func_mindustry_mod_Mods_getMods_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods_eachClass_arc_func_Cons 54
typedef void (*func_mindustry_mod_Mods_eachClass_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_eachEnabled_arc_func_Cons 55
typedef void (*func_mindustry_mod_Mods_eachEnabled_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_contextRun_mindustry_mod_Mods$LoadedMod_java_lang_Runnable 56
typedef void (*func_mindustry_mod_Mods_contextRun_mindustry_mod_Mods$LoadedMod_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods_findMeta_arc_files_Fi_R_mindustry_mod_Mods$ModMeta 57
typedef jobject (*func_mindustry_mod_Mods_findMeta_arc_files_Fi_R_mindustry_mod_Mods$ModMeta)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_resolveDependencies_arc_struct_Seq_R_arc_struct_OrderedMap 58
typedef jobject (*func_mindustry_mod_Mods_resolveDependencies_arc_struct_Seq_R_arc_struct_OrderedMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_resolve_java_lang_String_mindustry_mod_Mods$ModResolutionContext_R_boolean 59
typedef jbool (*func_mindustry_mod_Mods_resolve_java_lang_String_mindustry_mod_Mods$ModResolutionContext_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods_resolveRoot_arc_files_Fi_R_arc_files_Fi 60
typedef jobject (*func_mindustry_mod_Mods_resolveRoot_arc_files_Fi_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_loadMod_arc_files_Fi_boolean_boolean_R_mindustry_mod_Mods$LoadedMod 61
typedef jobject (*func_mindustry_mod_Mods_loadMod_arc_files_Fi_boolean_boolean_R_mindustry_mod_Mods$LoadedMod)(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2);
#define VTABLE_mindustry_mod_Mods_lambda$eachClass$1_arc_func_Cons_mindustry_mod_Mods$LoadedMod 62
typedef void (*func_mindustry_mod_Mods_lambda$eachClass$1_arc_func_Cons_mindustry_mod_Mods$LoadedMod)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods_lambda$loadScripts$0_mindustry_mod_Mods$LoadedMod 63
typedef void (*func_mindustry_mod_Mods_lambda$loadScripts$0_mindustry_mod_Mods$LoadedMod)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_lambda$downloadDependencies$0_arc_struct_Seq 64
typedef void (*func_mindustry_mod_Mods_lambda$downloadDependencies$0_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_lambda$load$0_arc_files_Fi_R_boolean 65
typedef jbool (*func_mindustry_mod_Mods_lambda$load$0_arc_files_Fi_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_lambda$load$1_arc_files_Fi_java_lang_String_R_boolean 66
typedef jbool (*func_mindustry_mod_Mods_lambda$load$1_arc_files_Fi_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Mods_lambda$packSprites$0_arc_files_Fi_boolean_java_lang_String_boolean_mindustry_mod_Mods$LoadedMod_mindustry_graphics_MultiPacker_float_arc_struct_ObjectFloatMap_R_java_lang_Runnable 67
typedef jobject (*func_mindustry_mod_Mods_lambda$packSprites$0_arc_files_Fi_boolean_java_lang_String_boolean_mindustry_mod_Mods$LoadedMod_mindustry_graphics_MultiPacker_float_arc_struct_ObjectFloatMap_R_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3, jobject param4, jobject param5, jfloat param6, jobject param7);
#define VTABLE_mindustry_mod_Mods_lambda$packSprites$1_java_lang_String_boolean_mindustry_mod_Mods$LoadedMod_mindustry_graphics_MultiPacker_arc_files_Fi_arc_graphics_Pixmap_float_arc_struct_ObjectFloatMap 68
typedef void (*func_mindustry_mod_Mods_lambda$packSprites$1_java_lang_String_boolean_mindustry_mod_Mods$LoadedMod_mindustry_graphics_MultiPacker_arc_files_Fi_arc_graphics_Pixmap_float_arc_struct_ObjectFloatMap)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jobject param3, jobject param4, jobject param5, jfloat param6, jobject param7);
#define VTABLE_mindustry_mod_Mods_lambda$loadAsync$6_Array1_arc_graphics_Pixmap_Array1_arc_graphics_Texture_mindustry_graphics_MultiPacker_arc_graphics_Texture$TextureFilter_arc_struct_ObjectFloatMap_long 69
typedef void (*func_mindustry_mod_Mods_lambda$loadAsync$6_Array1_arc_graphics_Pixmap_Array1_arc_graphics_Texture_mindustry_graphics_MultiPacker_arc_graphics_Texture$TextureFilter_arc_struct_ObjectFloatMap_long)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jlong param5);
#define VTABLE_mindustry_mod_Mods_lambda$loadAsync$4_Array1_arc_graphics_Pixmap_Array1_arc_graphics_Texture_mindustry_graphics_MultiPacker 70
typedef void (*func_mindustry_mod_Mods_lambda$loadAsync$4_Array1_arc_graphics_Pixmap_Array1_arc_graphics_Texture_mindustry_graphics_MultiPacker)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_Mods_lambda$loadAsync$0_mindustry_graphics_MultiPacker_arc_struct_Seq_arc_struct_ObjectFloatMap_Array1_int_mindustry_mod_Mods$LoadedMod 71
typedef void (*func_mindustry_mod_Mods_lambda$loadAsync$0_mindustry_graphics_MultiPacker_arc_struct_Seq_arc_struct_ObjectFloatMap_Array1_int_mindustry_mod_Mods$LoadedMod)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_mindustry_mod_Mods_lambda$importMod$0_mindustry_mod_Mods$LoadedMod 72
typedef void (*func_mindustry_mod_Mods_lambda$importMod$0_mindustry_mod_Mods$LoadedMod)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods_lambda$new$0_mindustry_game_EventType$ClientLoadEvent 73
typedef void (*func_mindustry_mod_Mods_lambda$new$0_mindustry_game_EventType$ClientLoadEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_mod_Mods(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_Mods(jcontext ctx);
void init_mindustry_mod_Mods(jcontext ctx, jobject self);
jobject M_mindustry_mod_Mods_mainLoader_R_java_lang_ClassLoader(jcontext ctx, jobject self);
jobject M_mindustry_mod_Mods_getConfigFolder_mindustry_mod_Mod_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_Mods_getConfig_mindustry_mod_Mod_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_Mods_listFiles_java_lang_String_arc_func_Cons2(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_mod_Mods_getMod_java_lang_String_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_Mods_getMod_java_lang_Class_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_Mods_importMod_arc_files_Fi_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_Mods_importMod_arc_files_Fi_boolean_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_mod_Mods_loadAsync(jcontext ctx, jobject self);
void M_mindustry_mod_Mods_loadIcons(jcontext ctx, jobject self);
void M_mindustry_mod_Mods_loadIcon_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_Mods_packSprites_mindustry_graphics_MultiPacker_arc_struct_Seq_mindustry_mod_Mods$LoadedMod_boolean_arc_struct_Seq_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jobject param5);
void M_mindustry_mod_Mods_waitForMain_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_Mods_loadSync(jcontext ctx, jobject self);
jobject M_mindustry_mod_Mods_getPage_arc_files_Fi_R_mindustry_graphics_MultiPacker$PageType(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_Mods_removeMod_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_Mods_getScripts_R_mindustry_mod_Scripts(jcontext ctx, jobject self);
jbool M_mindustry_mod_Mods_hasScripts_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_mod_Mods_requiresReload_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_mod_Mods_skipModLoading_R_boolean(jcontext ctx, jobject self);
void M_mindustry_mod_Mods_load(jcontext ctx, jobject self);
void M_mindustry_mod_Mods_sortMods(jcontext ctx, jobject self);
void M_mindustry_mod_Mods_updateDependencies_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_Mods_orderedMods_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_mod_Mods_locateMod_java_lang_String_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_Mods_buildFiles(jcontext ctx, jobject self);
void M_mindustry_mod_Mods_checkWarnings(jcontext ctx, jobject self);
void M_mindustry_mod_Mods_checkDependencies_arc_struct_Seq_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_mod_Mods_downloadDependencies_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_Mods_reload(jcontext ctx, jobject self);
jbool M_mindustry_mod_Mods_hasContentErrors_R_boolean(jcontext ctx, jobject self);
void M_mindustry_mod_Mods_loadScripts(jcontext ctx, jobject self);
void M_mindustry_mod_Mods_loadContent(jcontext ctx, jobject self);
void M_mindustry_mod_Mods_loadModPatches(jcontext ctx, jobject self);
void M_mindustry_mod_Mods_handleContentError_mindustry_ctype_Content_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_mod_Mods_addParseListener_mindustry_mod_ContentParser$ParseListener(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_Mods_getModStrings_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_mindustry_mod_Mods_setEnabled_mindustry_mod_Mods$LoadedMod_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_mindustry_mod_Mods_getIncompatibility_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_Mods_list_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_mod_Mods_getMods_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_mindustry_mod_Mods_eachClass_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_Mods_eachEnabled_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_Mods_contextRun_mindustry_mod_Mods$LoadedMod_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_mod_Mods_findMeta_arc_files_Fi_R_mindustry_mod_Mods$ModMeta(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_Mods_resolveDependencies_arc_struct_Seq_R_arc_struct_OrderedMap(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_mod_Mods_resolve_java_lang_String_mindustry_mod_Mods$ModResolutionContext_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_mod_Mods_resolveRoot_arc_files_Fi_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_Mods_loadMod_arc_files_Fi_boolean_boolean_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2);
jbool SM_mindustry_mod_Mods_lambda$loadMod$0_java_lang_String_mindustry_mod_Mods$LoadedMod_R_boolean(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_mod_Mods_lambda$eachClass$1_arc_func_Cons_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_mod_Mods_lambda$eachClass$2_arc_func_Cons_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_mod_Mods_lambda$eachClass$0_mindustry_mod_Mods$LoadedMod_R_boolean(jcontext ctx, jobject param0);
jobject SM_mindustry_mod_Mods_lambda$getModStrings$1_mindustry_mod_Mods$LoadedMod_R_java_lang_String(jcontext ctx, jobject param0);
jbool SM_mindustry_mod_Mods_lambda$getModStrings$0_mindustry_mod_Mods$LoadedMod_R_boolean(jcontext ctx, jobject param0);
jobject SM_mindustry_mod_Mods_lambda$loadModPatches$1_arc_files_Fi_R_mindustry_mod_data_PatchAsset(jcontext ctx, jobject param0);
jbool SM_mindustry_mod_Mods_lambda$loadModPatches$0_arc_files_Fi_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_mod_Mods_lambda$loadContent$0_arc_files_Fi_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_mod_Mods_lambda$loadScripts$0_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_mod_Mods_lambda$loadScripts$3_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject param0);
void SM_mindustry_mod_Mods_lambda$loadScripts$2_arc_files_Fi_mindustry_mod_Mods$LoadedMod_java_lang_Throwable(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_mindustry_mod_Mods_lambda$loadScripts$1_arc_files_Fi_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_mod_Mods_lambda$reload$2(jcontext ctx);
jbool SM_mindustry_mod_Mods_lambda$reload$1_mindustry_mod_Mods$LoadedMod_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_mod_Mods_lambda$reload$0_mindustry_mod_Mods$LoadedMod_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_mod_Mods_lambda$downloadDependencies$0_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_mod_Mods_lambda$checkWarnings$0_mindustry_mod_Mods$LoadedMod_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_mod_Mods_lambda$buildFiles$0_mindustry_mod_Mods$LoadedMod_boolean_java_lang_String_arc_files_Fi(jcontext ctx, jobject param0, jbool param1, jobject param2, jobject param3);
jbool SM_mindustry_mod_Mods_lambda$locateMod$0_java_lang_String_mindustry_mod_Mods$LoadedMod_R_boolean(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_mod_Mods_lambda$orderedMods$1_mindustry_mod_Mods$LoadedMod_R_mindustry_mod_Mods$ModMeta(jcontext ctx, jobject param0);
jobject SM_mindustry_mod_Mods_lambda$orderedMods$0_mindustry_mod_Mods$LoadedMod_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_mindustry_mod_Mods_lambda$sortMods$1_mindustry_mod_Mods$LoadedMod_R_java_lang_String(jcontext ctx, jobject param0);
jint SM_mindustry_mod_Mods_lambda$sortMods$0_mindustry_mod_Mods$LoadedMod_R_int(jcontext ctx, jobject param0);
jbool M_mindustry_mod_Mods_lambda$load$0_arc_files_Fi_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_mod_Mods_lambda$load$1_arc_files_Fi_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_mod_Mods_lambda$waitForMain$0_java_lang_Runnable_java_util_concurrent_CountDownLatch(jcontext ctx, jobject param0, jobject param1);
jobject M_mindustry_mod_Mods_lambda$packSprites$0_arc_files_Fi_boolean_java_lang_String_boolean_mindustry_mod_Mods$LoadedMod_mindustry_graphics_MultiPacker_float_arc_struct_ObjectFloatMap_R_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jbool param3, jobject param4, jobject param5, jfloat param6, jobject param7);
void M_mindustry_mod_Mods_lambda$packSprites$1_java_lang_String_boolean_mindustry_mod_Mods$LoadedMod_mindustry_graphics_MultiPacker_arc_files_Fi_arc_graphics_Pixmap_float_arc_struct_ObjectFloatMap(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jobject param3, jobject param4, jobject param5, jfloat param6, jobject param7);
void M_mindustry_mod_Mods_lambda$loadAsync$6_Array1_arc_graphics_Pixmap_Array1_arc_graphics_Texture_mindustry_graphics_MultiPacker_arc_graphics_Texture$TextureFilter_arc_struct_ObjectFloatMap_long(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jlong param5);
void SM_mindustry_mod_Mods_lambda$loadAsync$7_arc_struct_ObjectFloatMap$Entry(jcontext ctx, jobject param0);
void SM_mindustry_mod_Mods_lambda$loadAsync$5_mindustry_graphics_MultiPacker_mindustry_ctype_Content(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_mod_Mods_lambda$loadAsync$4_Array1_arc_graphics_Pixmap_Array1_arc_graphics_Texture_mindustry_graphics_MultiPacker(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jint SM_mindustry_mod_Mods_lambda$loadAsync$3_mindustry_mod_Mods$1RegionEntry_R_int(jcontext ctx, jobject param0);
void M_mindustry_mod_Mods_lambda$loadAsync$0_mindustry_graphics_MultiPacker_arc_struct_Seq_arc_struct_ObjectFloatMap_Array1_int_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jbool SM_mindustry_mod_Mods_lambda$loadAsync$2_arc_files_Fi_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_mod_Mods_lambda$loadAsync$1_arc_files_Fi_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_mod_Mods_lambda$importMod$0_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_mod_Mods_lambda$getMod$1_java_lang_Class_mindustry_mod_Mods$LoadedMod_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_mod_Mods_lambda$getMod$0_java_lang_String_mindustry_mod_Mods$LoadedMod_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_mod_Mods_lambda$listFiles$0_java_lang_String_arc_func_Cons2_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject param0, jobject param1, jobject param2);
void M_mindustry_mod_Mods_lambda$new$0_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
