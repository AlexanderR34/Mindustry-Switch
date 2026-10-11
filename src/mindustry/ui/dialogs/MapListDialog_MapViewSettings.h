#ifndef HEADER_mindustry_ui_dialogs_MapListDialog$MapViewSettings
#define HEADER_mindustry_ui_dialogs_MapListDialog$MapViewSettings

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_dialogs_MapListDialog$MapViewSettings {
	java_lang_Object parent;
	jbool F_showBuiltIn;
	jbool F_showCustom;
	jbool F_showModded;
	jbool F_searchAuthor;
	jbool F_searchDescription;
	jbool F_searchModname;
	jref F_priority;
	jref F_planets;
} mindustry_ui_dialogs_MapListDialog$MapViewSettings;

extern Class class_mindustry_ui_dialogs_MapListDialog$MapViewSettings;


#define VTABLE_mindustry_ui_dialogs_MapListDialog$MapViewSettings_hashCode_R_int 0
typedef jint (*func_mindustry_ui_dialogs_MapListDialog$MapViewSettings_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$MapViewSettings_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_dialogs_MapListDialog$MapViewSettings_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$MapViewSettings_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_dialogs_MapListDialog$MapViewSettings_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$MapViewSettings_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_dialogs_MapListDialog$MapViewSettings_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$MapViewSettings_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_dialogs_MapListDialog$MapViewSettings_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$MapViewSettings_finalize 5
typedef void (*func_mindustry_ui_dialogs_MapListDialog$MapViewSettings_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$MapViewSettings_notify 6
typedef void (*func_mindustry_ui_dialogs_MapListDialog$MapViewSettings_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$MapViewSettings_notifyAll 7
typedef void (*func_mindustry_ui_dialogs_MapListDialog$MapViewSettings_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$MapViewSettings_wait 8
typedef void (*func_mindustry_ui_dialogs_MapListDialog$MapViewSettings_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$MapViewSettings_wait_long 9
typedef void (*func_mindustry_ui_dialogs_MapListDialog$MapViewSettings_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$MapViewSettings_wait_long_int 10
typedef void (*func_mindustry_ui_dialogs_MapListDialog$MapViewSettings_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$MapViewSettings_save 11
typedef void (*func_mindustry_ui_dialogs_MapListDialog$MapViewSettings_save)(jcontext ctx, jobject self);

void mark_mindustry_ui_dialogs_MapListDialog$MapViewSettings(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_dialogs_MapListDialog$MapViewSettings(jcontext ctx);
void init_mindustry_ui_dialogs_MapListDialog$MapViewSettings(jcontext ctx, jobject self);
void M_mindustry_ui_dialogs_MapListDialog$MapViewSettings_save(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
