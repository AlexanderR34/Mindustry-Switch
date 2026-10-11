#ifndef HEADER_mindustry_core_UI
#define HEADER_mindustry_core_UI

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/ApplicationListener.h"
#include "arc/assets/Loadable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_UI {
	java_lang_Object parent;
	jref F_menufrag;
	jref F_hudfrag;
	jref F_chatfrag;
	jref F_consolefrag;
	jref F_minimapfrag;
	jref F_listfrag;
	jref F_loadfrag;
	jref F_hints;
	jref F_perffrag;
	jref F_menuGroup;
	jref F_hudGroup;
	jref F_about;
	jref F_restart;
	jref F_custom;
	jref F_maps;
	jref F_load;
	jref F_discord;
	jref F_join;
	jref F_host;
	jref F_paused;
	jref F_settings;
	jref F_controls;
	jref F_editor;
	jref F_language;
	jref F_bans;
	jref F_admins;
	jref F_traces;
	jref F_database;
	jref F_content;
	jref F_planet;
	jref F_research;
	jref F_schematics;
	jref F_mods;
	jref F_picker;
	jref F_effects;
	jref F_logic;
	jref F_fullText;
	jref F_campaignComplete;
	jref F_campaignRules;
	jref F_drillCursor;
	jref F_unloadCursor;
	jref F_targetCursor;
	jref F_repairCursor;
	jref F_lastAnnouncement;
	jref F_popups;
	jref F_labels;
} mindustry_core_UI;

extern Class class_mindustry_core_UI;

extern jobject SF_mindustry_core_UI_buffer;
extern jobject SF_mindustry_core_UI_billions;
extern jobject SF_mindustry_core_UI_millions;
extern jobject SF_mindustry_core_UI_thousands;
extern jobject SF_mindustry_core_UI_packer;

#define VTABLE_mindustry_core_UI_hashCode_R_int 0
typedef jint (*func_mindustry_core_UI_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_core_UI_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_core_UI_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_core_UI_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_core_UI_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_finalize 5
typedef void (*func_mindustry_core_UI_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_notify 6
typedef void (*func_mindustry_core_UI_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_notifyAll 7
typedef void (*func_mindustry_core_UI_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_wait 8
typedef void (*func_mindustry_core_UI_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_wait_long 9
typedef void (*func_mindustry_core_UI_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_UI_wait_long_int 10
typedef void (*func_mindustry_core_UI_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_core_UI_init 11
typedef void (*func_mindustry_core_UI_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_resize_int_int 12
typedef void (*func_mindustry_core_UI_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_UI_update 13
typedef void (*func_mindustry_core_UI_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_pause 14
typedef void (*func_mindustry_core_UI_pause)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_resume 15
typedef void (*func_mindustry_core_UI_resume)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_dispose 16
typedef void (*func_mindustry_core_UI_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_exit 17
typedef void (*func_mindustry_core_UI_exit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_fileDropped_arc_files_Fi 18
typedef void (*func_mindustry_core_UI_fileDropped_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI_loadAsync 19
typedef void (*func_mindustry_core_UI_loadAsync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_loadSync 20
typedef void (*func_mindustry_core_UI_loadSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_getName_R_java_lang_String 21
typedef jobject (*func_mindustry_core_UI_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_getDependencies_R_arc_struct_Seq 22
typedef jobject (*func_mindustry_core_UI_getDependencies_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_updateMargins 23
typedef void (*func_mindustry_core_UI_updateMargins)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable 24
typedef jobject (*func_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI_getIcon_java_lang_String_java_lang_String_R_arc_scene_style_TextureRegionDrawable 25
typedef jobject (*func_mindustry_core_UI_getIcon_java_lang_String_java_lang_String_R_arc_scene_style_TextureRegionDrawable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI_loadAnd_java_lang_Runnable 26
typedef void (*func_mindustry_core_UI_loadAnd_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI_loadAnd_java_lang_String_java_lang_Runnable 27
typedef void (*func_mindustry_core_UI_loadAnd_java_lang_String_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons_java_lang_Runnable 28
typedef void (*func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jbool param4, jobject param5, jobject param6);
#define VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean_arc_func_Cons_java_lang_Runnable 29
typedef void (*func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean_arc_func_Cons_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jbool param4, jbool param5, jobject param6, jobject param7);
#define VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons 30
typedef void (*func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons 31
typedef void (*func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jobject param4);
#define VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons 32
typedef void (*func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jbool param4, jobject param5);
#define VTABLE_mindustry_core_UI_showInfoFade_java_lang_String 33
typedef void (*func_mindustry_core_UI_showInfoFade_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI_showInfoFade_java_lang_String_float 34
typedef void (*func_mindustry_core_UI_showInfoFade_java_lang_String_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_core_UI_addDescTooltip_arc_scene_Element_java_lang_String 35
typedef void (*func_mindustry_core_UI_addDescTooltip_arc_scene_Element_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI_showInfoToast_java_lang_String_float 36
typedef void (*func_mindustry_core_UI_showInfoToast_java_lang_String_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_core_UI_showInfoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int 37
typedef void (*func_mindustry_core_UI_showInfoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jint param3, jint param4, jint param5, jint param6, jint param7);
#define VTABLE_mindustry_core_UI_showLabel_java_lang_String_int_float_float_float_int 38
typedef void (*func_mindustry_core_UI_showLabel_java_lang_String_int_float_float_float_int)(jcontext ctx, jobject self, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jint param5);
#define VTABLE_mindustry_core_UI_showInfo_java_lang_String 39
typedef void (*func_mindustry_core_UI_showInfo_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI_showInfoOnHidden_java_lang_String_java_lang_Runnable 40
typedef void (*func_mindustry_core_UI_showInfoOnHidden_java_lang_String_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI_showStartupInfo_java_lang_String 41
typedef void (*func_mindustry_core_UI_showStartupInfo_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String 42
typedef void (*func_mindustry_core_UI_showErrorMessage_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI_showException_java_lang_Throwable 43
typedef void (*func_mindustry_core_UI_showException_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable 44
typedef void (*func_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI_showText_java_lang_String_java_lang_String 45
typedef void (*func_mindustry_core_UI_showText_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI_showText_java_lang_String_java_lang_String_int 46
typedef void (*func_mindustry_core_UI_showText_java_lang_String_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_mindustry_core_UI_showInfoText_java_lang_String_java_lang_String 47
typedef void (*func_mindustry_core_UI_showInfoText_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI_showSmall_java_lang_String_java_lang_String 48
typedef void (*func_mindustry_core_UI_showSmall_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable 49
typedef void (*func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable 50
typedef void (*func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_arc_func_Boolp_java_lang_Runnable 51
typedef void (*func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_arc_func_Boolp_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_core_UI_showCustomConfirm_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_Runnable_java_lang_Runnable 52
typedef void (*func_mindustry_core_UI_showCustomConfirm_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_Runnable_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5);
#define VTABLE_mindustry_core_UI_hasAnnouncement_R_boolean 53
typedef jbool (*func_mindustry_core_UI_hasAnnouncement_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_announce_java_lang_String 54
typedef void (*func_mindustry_core_UI_announce_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI_announce_java_lang_String_float 55
typedef void (*func_mindustry_core_UI_announce_java_lang_String_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_core_UI_showOkText_java_lang_String_java_lang_String_java_lang_Runnable 56
typedef void (*func_mindustry_core_UI_showOkText_java_lang_String_java_lang_String_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_core_UI_lambda$showLabel$0_int 57
typedef void (*func_mindustry_core_UI_lambda$showLabel$0_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_core_UI_lambda$showInfoPopup$1_java_lang_String 58
typedef void (*func_mindustry_core_UI_lambda$showInfoPopup$1_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI_lambda$showInfoPopup$0_arc_scene_ui_layout_Table_java_lang_String_R_boolean 59
typedef jbool (*func_mindustry_core_UI_lambda$showInfoPopup$0_arc_scene_ui_layout_Table_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_UI_lambda$loadAnd$0_java_lang_Runnable 60
typedef void (*func_mindustry_core_UI_lambda$loadAnd$0_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI_lambda$loadSync$5_java_lang_Throwable 61
typedef void (*func_mindustry_core_UI_lambda$loadSync$5_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_UI_lambda$loadSync$6 62
typedef void (*func_mindustry_core_UI_lambda$loadSync$6)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_UI_lambda$new$0_mindustry_game_EventType$ResetEvent 63
typedef void (*func_mindustry_core_UI_lambda$new$0_mindustry_game_EventType$ResetEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_core_UI(jobject object, jint mark, jint depth);
void clinit_mindustry_core_UI(jcontext ctx);
void init_mindustry_core_UI(jcontext ctx, jobject self);
void SM_mindustry_core_UI_loadColors(jcontext ctx);
void M_mindustry_core_UI_loadAsync(jcontext ctx, jobject self);
void M_mindustry_core_UI_loadSync(jcontext ctx, jobject self);
jobject M_mindustry_core_UI_getDependencies_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_mindustry_core_UI_update(jcontext ctx, jobject self);
void M_mindustry_core_UI_init(jcontext ctx, jobject self);
void M_mindustry_core_UI_updateMargins(jcontext ctx, jobject self);
void M_mindustry_core_UI_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_core_UI_getIcon_java_lang_String_R_arc_scene_style_TextureRegionDrawable(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_core_UI_getIcon_java_lang_String_java_lang_String_R_arc_scene_style_TextureRegionDrawable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_UI_loadAnd_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_UI_loadAnd_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jbool param4, jobject param5, jobject param6);
void M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean_arc_func_Cons_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jbool param4, jbool param5, jobject param6, jobject param7);
void M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jobject param4);
void M_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_boolean_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jbool param4, jobject param5);
void M_mindustry_core_UI_showInfoFade_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_UI_showInfoFade_java_lang_String_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_core_UI_addDescTooltip_arc_scene_Element_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_UI_showInfoToast_java_lang_String_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_core_UI_showInfoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jint param3, jint param4, jint param5, jint param6, jint param7);
void M_mindustry_core_UI_showLabel_java_lang_String_int_float_float_float_int(jcontext ctx, jobject self, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jint param5);
void M_mindustry_core_UI_showInfo_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_UI_showInfoOnHidden_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_UI_showStartupInfo_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_UI_showErrorMessage_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_UI_showException_java_lang_Throwable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_UI_showException_java_lang_String_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_UI_showText_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_UI_showText_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void M_mindustry_core_UI_showInfoText_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_UI_showSmall_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_UI_showConfirm_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_arc_func_Boolp_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_mindustry_core_UI_showCustomConfirm_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_Runnable_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5);
jbool M_mindustry_core_UI_hasAnnouncement_R_boolean(jcontext ctx, jobject self);
void M_mindustry_core_UI_announce_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_UI_announce_java_lang_String_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_core_UI_showOkText_java_lang_String_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_core_UI_formatIcons_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_mindustry_core_UI_formatTime_float_R_java_lang_String(jcontext ctx, jfloat param0);
jobject SM_mindustry_core_UI_formatAmount_long_R_java_lang_String(jcontext ctx, jlong param0);
jint SM_mindustry_core_UI_roundAmount_int_R_int(jcontext ctx, jint param0);
void SM_mindustry_core_UI_lambda$showOkText$0_mindustry_ui_dialogs_BaseDialog_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_UI_lambda$announce$0_arc_scene_ui_layout_Table(jcontext ctx, jobject param0);
void SM_mindustry_core_UI_lambda$showCustomConfirm$1_mindustry_ui_dialogs_BaseDialog_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_UI_lambda$showCustomConfirm$0_mindustry_ui_dialogs_BaseDialog_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_UI_lambda$showConfirm$2_mindustry_ui_dialogs_BaseDialog_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_UI_lambda$showConfirm$1_arc_func_Boolp_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_UI_lambda$showConfirm$0_mindustry_ui_dialogs_BaseDialog_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_core_UI_lambda$showLabel$0_int(jcontext ctx, jobject self, jint param0);
void SM_mindustry_core_UI_lambda$showInfoPopup$2_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_core_UI_lambda$showInfoPopup$1_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_core_UI_lambda$showInfoPopup$0_arc_scene_ui_layout_Table_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_core_UI_lambda$showInfoToast$1_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_core_UI_lambda$showInfoToast$0_arc_scene_ui_layout_Table_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_core_UI_lambda$addDescTooltip$0_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_UI_lambda$showTextInput$0(jcontext ctx);
void M_mindustry_core_UI_lambda$loadAnd$0_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_core_UI_lambda$init$1_R_boolean(jcontext ctx);
jbool SM_mindustry_core_UI_lambda$init$0_R_boolean(jcontext ctx);
void SM_mindustry_core_UI_lambda$loadSync$7(jcontext ctx);
void M_mindustry_core_UI_lambda$loadSync$5_java_lang_Throwable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_UI_lambda$loadSync$6(jcontext ctx, jobject self);
jobject SM_mindustry_core_UI_lambda$loadSync$3_java_lang_String_R_arc_scene_ui_Tooltip(jcontext ctx, jobject param0);
void SM_mindustry_core_UI_lambda$loadSync$4_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_core_UI_lambda$loadSync$2_R_arc_scene_Action(jcontext ctx);
jobject SM_mindustry_core_UI_lambda$loadSync$1_R_arc_scene_Action(jcontext ctx);
void SM_mindustry_core_UI_lambda$loadSync$0_arc_graphics_g2d_Font(jcontext ctx, jobject param0);
void M_mindustry_core_UI_lambda$new$0_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
