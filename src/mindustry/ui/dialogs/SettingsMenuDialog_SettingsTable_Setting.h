#ifndef HEADER_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting
#define HEADER_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting {
	java_lang_Object parent;
	jref F_name;
	jref F_title;
	jref F_description;
} mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting;

extern Class class_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting;


#define VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_hashCode_R_int 0
typedef jint (*func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_finalize 5
typedef void (*func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_notify 6
typedef void (*func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_notifyAll 7
typedef void (*func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_wait 8
typedef void (*func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_wait_long 9
typedef void (*func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_wait_long_int 10
typedef void (*func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable 11
typedef void (*func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_add_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_addDesc_arc_scene_Element 12
typedef void (*func_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_addDesc_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting(jcontext ctx);
void init_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_dialogs_SettingsMenuDialog$SettingsTable$Setting_addDesc_arc_scene_Element(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
