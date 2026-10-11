#ifndef HEADER_mindustry_core_Platform
#define HEADER_mindustry_core_Platform

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_Platform {
	java_lang_Object parent;
} mindustry_core_Platform;

extern Class class_mindustry_core_Platform;


#define INDEX_mindustry_core_Platform_loadJar_arc_files_Fi_java_lang_ClassLoader_R_java_lang_ClassLoader 0
typedef jobject (*func_mindustry_core_Platform_loadJar_arc_files_Fi_java_lang_ClassLoader_R_java_lang_ClassLoader)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_mindustry_core_Platform_updateLobby 1
typedef void (*func_mindustry_core_Platform_updateLobby)(jcontext ctx, jobject self);
#define INDEX_mindustry_core_Platform_inviteFriends 2
typedef void (*func_mindustry_core_Platform_inviteFriends)(jcontext ctx, jobject self);
#define INDEX_mindustry_core_Platform_publish_mindustry_type_Publishable 3
typedef void (*func_mindustry_core_Platform_publish_mindustry_type_Publishable)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_core_Platform_viewListing_mindustry_type_Publishable 4
typedef void (*func_mindustry_core_Platform_viewListing_mindustry_type_Publishable)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_core_Platform_viewListingID_java_lang_String 5
typedef void (*func_mindustry_core_Platform_viewListingID_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_core_Platform_getWorkshopContent_java_lang_Class_R_arc_struct_Seq 6
typedef jobject (*func_mindustry_core_Platform_getWorkshopContent_java_lang_Class_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_core_Platform_openWorkshop 7
typedef void (*func_mindustry_core_Platform_openWorkshop)(jcontext ctx, jobject self);
#define INDEX_mindustry_core_Platform_getNet_R_mindustry_net_Net$NetProvider 8
typedef jobject (*func_mindustry_core_Platform_getNet_R_mindustry_net_Net$NetProvider)(jcontext ctx, jobject self);
#define INDEX_mindustry_core_Platform_createScripts_R_mindustry_mod_Scripts 9
typedef jobject (*func_mindustry_core_Platform_createScripts_R_mindustry_mod_Scripts)(jcontext ctx, jobject self);
#define INDEX_mindustry_core_Platform_getScriptContext_R_rhino_Context 10
typedef jobject (*func_mindustry_core_Platform_getScriptContext_R_rhino_Context)(jcontext ctx, jobject self);
#define INDEX_mindustry_core_Platform_updateRPC 11
typedef void (*func_mindustry_core_Platform_updateRPC)(jcontext ctx, jobject self);
#define INDEX_mindustry_core_Platform_getUUID_R_java_lang_String 12
typedef jobject (*func_mindustry_core_Platform_getUUID_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_core_Platform_shareFile_arc_files_Fi 13
typedef void (*func_mindustry_core_Platform_shareFile_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_core_Platform_showFileChooser_mindustry_ui_FileChooser$FileChooserParams 14
typedef void (*func_mindustry_core_Platform_showFileChooser_mindustry_ui_FileChooser$FileChooserParams)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_core_Platform_hide 15
typedef void (*func_mindustry_core_Platform_hide)(jcontext ctx, jobject self);
#define INDEX_mindustry_core_Platform_beginForceLandscape 16
typedef void (*func_mindustry_core_Platform_beginForceLandscape)(jcontext ctx, jobject self);
#define INDEX_mindustry_core_Platform_endForceLandscape 17
typedef void (*func_mindustry_core_Platform_endForceLandscape)(jcontext ctx, jobject self);

void mark_mindustry_core_Platform(jobject object, jint mark, jint depth);
void clinit_mindustry_core_Platform(jcontext ctx);
jobject M_mindustry_core_Platform_loadJar_arc_files_Fi_java_lang_ClassLoader_R_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_Platform_updateLobby(jcontext ctx, jobject self);
void M_mindustry_core_Platform_inviteFriends(jcontext ctx, jobject self);
void M_mindustry_core_Platform_publish_mindustry_type_Publishable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Platform_viewListing_mindustry_type_Publishable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Platform_viewListingID_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_core_Platform_getWorkshopContent_java_lang_Class_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Platform_openWorkshop(jcontext ctx, jobject self);
jobject M_mindustry_core_Platform_getNet_R_mindustry_net_Net$NetProvider(jcontext ctx, jobject self);
jobject M_mindustry_core_Platform_createScripts_R_mindustry_mod_Scripts(jcontext ctx, jobject self);
jobject M_mindustry_core_Platform_getScriptContext_R_rhino_Context(jcontext ctx, jobject self);
void M_mindustry_core_Platform_updateRPC(jcontext ctx, jobject self);
jobject M_mindustry_core_Platform_getUUID_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_core_Platform_shareFile_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Platform_showFileChooser_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Platform_hide(jcontext ctx, jobject self);
void M_mindustry_core_Platform_beginForceLandscape(jcontext ctx, jobject self);
void M_mindustry_core_Platform_endForceLandscape(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
