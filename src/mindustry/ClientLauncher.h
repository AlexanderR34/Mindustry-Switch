#ifndef HEADER_mindustry_ClientLauncher
#define HEADER_mindustry_ClientLauncher

#include "Clearwing.h"
#include "arc/ApplicationCore.h"
#include "mindustry/core/Platform.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ClientLauncher {
	arc_ApplicationCore parent;
	jlong F_nextFrame;
	jlong F_beginTime;
	jlong F_lastTargetFps;
	jbool F_finished;
	jref F_loader;
} mindustry_ClientLauncher;

extern Class class_mindustry_ClientLauncher;

extern jint SF_mindustry_ClientLauncher_loadingFPS;

#define VTABLE_mindustry_ClientLauncher_hashCode_R_int 0
typedef jint (*func_mindustry_ClientLauncher_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ClientLauncher_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ClientLauncher_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ClientLauncher_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ClientLauncher_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ClientLauncher_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_finalize 5
typedef void (*func_mindustry_ClientLauncher_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_notify 6
typedef void (*func_mindustry_ClientLauncher_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_notifyAll 7
typedef void (*func_mindustry_ClientLauncher_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_wait 8
typedef void (*func_mindustry_ClientLauncher_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_wait_long 9
typedef void (*func_mindustry_ClientLauncher_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ClientLauncher_wait_long_int 10
typedef void (*func_mindustry_ClientLauncher_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ClientLauncher_init 11
typedef void (*func_mindustry_ClientLauncher_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_resize_int_int 12
typedef void (*func_mindustry_ClientLauncher_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_ClientLauncher_update 13
typedef void (*func_mindustry_ClientLauncher_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_pause 14
typedef void (*func_mindustry_ClientLauncher_pause)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_resume 15
typedef void (*func_mindustry_ClientLauncher_resume)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_dispose 16
typedef void (*func_mindustry_ClientLauncher_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_exit 17
typedef void (*func_mindustry_ClientLauncher_exit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_fileDropped_arc_files_Fi 18
typedef void (*func_mindustry_ClientLauncher_fileDropped_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ClientLauncher_add_arc_ApplicationListener 19
typedef void (*func_mindustry_ClientLauncher_add_arc_ApplicationListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ClientLauncher_setup 20
typedef void (*func_mindustry_ClientLauncher_setup)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_loadJar_arc_files_Fi_java_lang_ClassLoader_R_java_lang_ClassLoader 21
typedef jobject (*func_mindustry_ClientLauncher_loadJar_arc_files_Fi_java_lang_ClassLoader_R_java_lang_ClassLoader)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ClientLauncher_updateLobby 22
typedef void (*func_mindustry_ClientLauncher_updateLobby)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_inviteFriends 23
typedef void (*func_mindustry_ClientLauncher_inviteFriends)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_publish_mindustry_type_Publishable 24
typedef void (*func_mindustry_ClientLauncher_publish_mindustry_type_Publishable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ClientLauncher_viewListing_mindustry_type_Publishable 25
typedef void (*func_mindustry_ClientLauncher_viewListing_mindustry_type_Publishable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ClientLauncher_viewListingID_java_lang_String 26
typedef void (*func_mindustry_ClientLauncher_viewListingID_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ClientLauncher_getWorkshopContent_java_lang_Class_R_arc_struct_Seq 27
typedef jobject (*func_mindustry_ClientLauncher_getWorkshopContent_java_lang_Class_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ClientLauncher_openWorkshop 28
typedef void (*func_mindustry_ClientLauncher_openWorkshop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_getNet_R_mindustry_net_Net$NetProvider 29
typedef jobject (*func_mindustry_ClientLauncher_getNet_R_mindustry_net_Net$NetProvider)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_createScripts_R_mindustry_mod_Scripts 30
typedef jobject (*func_mindustry_ClientLauncher_createScripts_R_mindustry_mod_Scripts)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_getScriptContext_R_rhino_Context 31
typedef jobject (*func_mindustry_ClientLauncher_getScriptContext_R_rhino_Context)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_updateRPC 32
typedef void (*func_mindustry_ClientLauncher_updateRPC)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_getUUID_R_java_lang_String 33
typedef jobject (*func_mindustry_ClientLauncher_getUUID_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_shareFile_arc_files_Fi 34
typedef void (*func_mindustry_ClientLauncher_shareFile_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ClientLauncher_showFileChooser_mindustry_ui_FileChooser$FileChooserParams 35
typedef void (*func_mindustry_ClientLauncher_showFileChooser_mindustry_ui_FileChooser$FileChooserParams)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ClientLauncher_hide 36
typedef void (*func_mindustry_ClientLauncher_hide)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_beginForceLandscape 37
typedef void (*func_mindustry_ClientLauncher_beginForceLandscape)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_endForceLandscape 38
typedef void (*func_mindustry_ClientLauncher_endForceLandscape)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_lambda$update$0 39
typedef void (*func_mindustry_ClientLauncher_lambda$update$0)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_lambda$update$1 40
typedef void (*func_mindustry_ClientLauncher_lambda$update$1)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_lambda$update$2 41
typedef void (*func_mindustry_ClientLauncher_lambda$update$2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ClientLauncher_lambda$update$3 42
typedef void (*func_mindustry_ClientLauncher_lambda$update$3)(jcontext ctx, jobject self);

void mark_mindustry_ClientLauncher(jobject object, jint mark, jint depth);
void clinit_mindustry_ClientLauncher(jcontext ctx);
void init_mindustry_ClientLauncher(jcontext ctx, jobject self);
void M_mindustry_ClientLauncher_setup(jcontext ctx, jobject self);
void M_mindustry_ClientLauncher_add_arc_ApplicationListener(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ClientLauncher_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_ClientLauncher_update(jcontext ctx, jobject self);
void M_mindustry_ClientLauncher_exit(jcontext ctx, jobject self);
void M_mindustry_ClientLauncher_init(jcontext ctx, jobject self);
void M_mindustry_ClientLauncher_resume(jcontext ctx, jobject self);
void M_mindustry_ClientLauncher_pause(jcontext ctx, jobject self);
void M_mindustry_ClientLauncher_fileDropped_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_ClientLauncher_runOnClientLoad_java_lang_Runnable(jcontext ctx, jobject param0);
void SM_mindustry_ClientLauncher_handleFileImport_arc_files_Fi(jcontext ctx, jobject param0);
void SM_mindustry_ClientLauncher_lambda$handleFileImport$0_arc_files_Fi(jcontext ctx, jobject param0);
void SM_mindustry_ClientLauncher_lambda$handleFileImport$1_mindustry_maps_Map(jcontext ctx, jobject param0);
void SM_mindustry_ClientLauncher_lambda$runOnClientLoad$0_java_lang_Runnable_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_ClientLauncher_lambda$update$0(jcontext ctx, jobject self);
void M_mindustry_ClientLauncher_lambda$update$1(jcontext ctx, jobject self);
void M_mindustry_ClientLauncher_lambda$update$2(jcontext ctx, jobject self);
void M_mindustry_ClientLauncher_lambda$update$3(jcontext ctx, jobject self);
void SM_mindustry_ClientLauncher_lambda$setup$11_arc_graphics_Texture(jcontext ctx, jobject param0);
void SM_mindustry_ClientLauncher_lambda$setup$10(jcontext ctx);
void SM_mindustry_ClientLauncher_lambda$setup$9(jcontext ctx);
void SM_mindustry_ClientLauncher_lambda$setup$8(jcontext ctx);
void SM_mindustry_ClientLauncher_lambda$setup$7(jcontext ctx);
void SM_mindustry_ClientLauncher_lambda$setup$6(jcontext ctx);
void SM_mindustry_ClientLauncher_lambda$setup$5(jcontext ctx);
void SM_mindustry_ClientLauncher_lambda$setup$4(jcontext ctx);
void SM_mindustry_ClientLauncher_lambda$setup$3(jcontext ctx);
void SM_mindustry_ClientLauncher_lambda$setup$2(jcontext ctx);
void SM_mindustry_ClientLauncher_lambda$setup$1_arc_graphics_g2d_TextureAtlas(jcontext ctx, jobject param0);
jfloat SM_mindustry_ClientLauncher_lambda$setup$0_R_float(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
