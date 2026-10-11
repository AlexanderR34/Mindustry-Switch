#ifndef HEADER_mindustry_maps_Map
#define HEADER_mindustry_maps_Map

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"
#include "mindustry/type/Publishable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_Map {
	java_lang_Object parent;
	jbool F_custom;
	jref F_tags;
	jref F_file;
	jint F_version;
	jbool F_workshop;
	jint F_width;
	jint F_height;
	jref F_texture;
	jint F_build;
	jref F_teams;
	jint F_spawns;
	jref F_mod;
} mindustry_maps_Map;

extern Class class_mindustry_maps_Map;


#define VTABLE_mindustry_maps_Map_hashCode_R_int 0
typedef jint (*func_mindustry_maps_Map_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_Map_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Map_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_Map_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_Map_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_Map_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_finalize 5
typedef void (*func_mindustry_maps_Map_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_notify 6
typedef void (*func_mindustry_maps_Map_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_notifyAll 7
typedef void (*func_mindustry_maps_Map_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_wait 8
typedef void (*func_mindustry_maps_Map_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_wait_long 9
typedef void (*func_mindustry_maps_Map_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_Map_wait_long_int 10
typedef void (*func_mindustry_maps_Map_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_maps_Map_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_maps_Map_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Map_getSteamID_R_java_lang_String 12
typedef jobject (*func_mindustry_maps_Map_getSteamID_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_addSteamID_java_lang_String 13
typedef void (*func_mindustry_maps_Map_addSteamID_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Map_removeSteamID 14
typedef void (*func_mindustry_maps_Map_removeSteamID)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_steamTitle_R_java_lang_String 15
typedef jobject (*func_mindustry_maps_Map_steamTitle_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_steamDescription_R_java_lang_String 16
typedef jobject (*func_mindustry_maps_Map_steamDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_steamTag_R_java_lang_String 17
typedef jobject (*func_mindustry_maps_Map_steamTag_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_createSteamFolder_java_lang_String_R_arc_files_Fi 18
typedef jobject (*func_mindustry_maps_Map_createSteamFolder_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Map_createSteamPreview_java_lang_String_R_arc_files_Fi 19
typedef jobject (*func_mindustry_maps_Map_createSteamPreview_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Map_extraTags_R_arc_struct_Seq 20
typedef jobject (*func_mindustry_maps_Map_extraTags_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_hasSteamID_R_boolean 21
typedef jbool (*func_mindustry_maps_Map_hasSteamID_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_prePublish_R_boolean 22
typedef jbool (*func_mindustry_maps_Map_prePublish_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_getHighScore_R_int 23
typedef jint (*func_mindustry_maps_Map_getHighScore_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_safeTexture_R_arc_graphics_Texture 24
typedef jobject (*func_mindustry_maps_Map_safeTexture_R_arc_graphics_Texture)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_previewFile_R_arc_files_Fi 25
typedef jobject (*func_mindustry_maps_Map_previewFile_R_arc_files_Fi)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_cacheFile_R_arc_files_Fi 26
typedef jobject (*func_mindustry_maps_Map_cacheFile_R_arc_files_Fi)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_setHighScore_int 27
typedef void (*func_mindustry_maps_Map_setHighScore_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_maps_Map_applyRules_mindustry_game_Gamemode_R_mindustry_game_Rules 28
typedef jobject (*func_mindustry_maps_Map_applyRules_mindustry_game_Gamemode_R_mindustry_game_Rules)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Map_rules_R_mindustry_game_Rules 29
typedef jobject (*func_mindustry_maps_Map_rules_R_mindustry_game_Rules)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_rules_mindustry_game_Rules_R_mindustry_game_Rules 30
typedef jobject (*func_mindustry_maps_Map_rules_mindustry_game_Rules_R_mindustry_game_Rules)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Map_filters_R_arc_struct_Seq 31
typedef jobject (*func_mindustry_maps_Map_filters_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_name_R_java_lang_String 32
typedef jobject (*func_mindustry_maps_Map_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_author_R_java_lang_String 33
typedef jobject (*func_mindustry_maps_Map_author_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_description_R_java_lang_String 34
typedef jobject (*func_mindustry_maps_Map_description_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_plainName_R_java_lang_String 35
typedef jobject (*func_mindustry_maps_Map_plainName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_plainAuthor_R_java_lang_String 36
typedef jobject (*func_mindustry_maps_Map_plainAuthor_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_plainDescription_R_java_lang_String 37
typedef jobject (*func_mindustry_maps_Map_plainDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Map_tag_java_lang_String_R_java_lang_String 38
typedef jobject (*func_mindustry_maps_Map_tag_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Map_hasTag_java_lang_String_R_boolean 39
typedef jbool (*func_mindustry_maps_Map_hasTag_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Map_compareTo_mindustry_maps_Map_R_int 40
typedef jint (*func_mindustry_maps_Map_compareTo_mindustry_maps_Map_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_maps_Map(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_Map(jcontext ctx);
void init_mindustry_maps_Map_arc_files_Fi_int_int_arc_struct_StringMap_boolean_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jbool param4, jint param5, jint param6);
void init_mindustry_maps_Map_arc_files_Fi_int_int_arc_struct_StringMap_boolean_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jbool param4, jint param5);
void init_mindustry_maps_Map_arc_files_Fi_int_int_arc_struct_StringMap_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jbool param4);
void init_mindustry_maps_Map_arc_struct_StringMap(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_maps_Map_getHighScore_R_int(jcontext ctx, jobject self);
jobject M_mindustry_maps_Map_safeTexture_R_arc_graphics_Texture(jcontext ctx, jobject self);
jobject M_mindustry_maps_Map_previewFile_R_arc_files_Fi(jcontext ctx, jobject self);
jobject M_mindustry_maps_Map_cacheFile_R_arc_files_Fi(jcontext ctx, jobject self);
void M_mindustry_maps_Map_setHighScore_int(jcontext ctx, jobject self, jint param0);
jobject M_mindustry_maps_Map_applyRules_mindustry_game_Gamemode_R_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_Map_rules_R_mindustry_game_Rules(jcontext ctx, jobject self);
jobject M_mindustry_maps_Map_rules_mindustry_game_Rules_R_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_Map_filters_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_maps_Map_name_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_maps_Map_author_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_maps_Map_description_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_maps_Map_plainName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_maps_Map_plainAuthor_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_maps_Map_plainDescription_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_maps_Map_tag_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_maps_Map_hasTag_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_Map_getSteamID_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_maps_Map_addSteamID_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_Map_removeSteamID(jcontext ctx, jobject self);
jobject M_mindustry_maps_Map_steamTitle_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_maps_Map_steamDescription_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_maps_Map_steamTag_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_maps_Map_createSteamFolder_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_Map_createSteamPreview_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_Map_extraTags_R_arc_struct_Seq(jcontext ctx, jobject self);
jbool M_mindustry_maps_Map_prePublish_R_boolean(jcontext ctx, jobject self);
jint M_mindustry_maps_Map_compareTo_mindustry_maps_Map_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_Map_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_mindustry_maps_Map_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
