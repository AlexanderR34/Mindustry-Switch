#ifndef HEADER_mindustry_Vars$1
#define HEADER_mindustry_Vars$1

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/core/Platform.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_Vars$1 {
	java_lang_Object parent;
} mindustry_Vars$1;

extern Class class_mindustry_Vars$1;


#define VTABLE_mindustry_Vars$1_hashCode_R_int 0
typedef jint (*func_mindustry_Vars$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_Vars$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_Vars$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_Vars$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_Vars$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_Vars$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_finalize 5
typedef void (*func_mindustry_Vars$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_notify 6
typedef void (*func_mindustry_Vars$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_notifyAll 7
typedef void (*func_mindustry_Vars$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_wait 8
typedef void (*func_mindustry_Vars$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_wait_long 9
typedef void (*func_mindustry_Vars$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_Vars$1_wait_long_int 10
typedef void (*func_mindustry_Vars$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_Vars$1_loadJar_arc_files_Fi_java_lang_ClassLoader_R_java_lang_ClassLoader 11
typedef jobject (*func_mindustry_Vars$1_loadJar_arc_files_Fi_java_lang_ClassLoader_R_java_lang_ClassLoader)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_Vars$1_updateLobby 12
typedef void (*func_mindustry_Vars$1_updateLobby)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_inviteFriends 13
typedef void (*func_mindustry_Vars$1_inviteFriends)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_publish_mindustry_type_Publishable 14
typedef void (*func_mindustry_Vars$1_publish_mindustry_type_Publishable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_Vars$1_viewListing_mindustry_type_Publishable 15
typedef void (*func_mindustry_Vars$1_viewListing_mindustry_type_Publishable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_Vars$1_viewListingID_java_lang_String 16
typedef void (*func_mindustry_Vars$1_viewListingID_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_Vars$1_getWorkshopContent_java_lang_Class_R_arc_struct_Seq 17
typedef jobject (*func_mindustry_Vars$1_getWorkshopContent_java_lang_Class_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_Vars$1_openWorkshop 18
typedef void (*func_mindustry_Vars$1_openWorkshop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_getNet_R_mindustry_net_Net$NetProvider 19
typedef jobject (*func_mindustry_Vars$1_getNet_R_mindustry_net_Net$NetProvider)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_createScripts_R_mindustry_mod_Scripts 20
typedef jobject (*func_mindustry_Vars$1_createScripts_R_mindustry_mod_Scripts)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_getScriptContext_R_rhino_Context 21
typedef jobject (*func_mindustry_Vars$1_getScriptContext_R_rhino_Context)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_updateRPC 22
typedef void (*func_mindustry_Vars$1_updateRPC)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_getUUID_R_java_lang_String 23
typedef jobject (*func_mindustry_Vars$1_getUUID_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_shareFile_arc_files_Fi 24
typedef void (*func_mindustry_Vars$1_shareFile_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_Vars$1_showFileChooser_mindustry_ui_FileChooser$FileChooserParams 25
typedef void (*func_mindustry_Vars$1_showFileChooser_mindustry_ui_FileChooser$FileChooserParams)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_Vars$1_hide 26
typedef void (*func_mindustry_Vars$1_hide)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_beginForceLandscape 27
typedef void (*func_mindustry_Vars$1_beginForceLandscape)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars$1_endForceLandscape 28
typedef void (*func_mindustry_Vars$1_endForceLandscape)(jcontext ctx, jobject self);

void mark_mindustry_Vars$1(jobject object, jint mark, jint depth);
void clinit_mindustry_Vars$1(jcontext ctx);
void init_mindustry_Vars$1(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
