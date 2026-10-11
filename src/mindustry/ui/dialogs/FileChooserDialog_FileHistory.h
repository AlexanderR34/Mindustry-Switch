#ifndef HEADER_mindustry_ui_dialogs_FileChooserDialog$FileHistory
#define HEADER_mindustry_ui_dialogs_FileChooserDialog$FileHistory

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_dialogs_FileChooserDialog$FileHistory {
	java_lang_Object parent;
	jref F_history;
	jint F_index;
	jref F_this$0;
} mindustry_ui_dialogs_FileChooserDialog$FileHistory;

extern Class class_mindustry_ui_dialogs_FileChooserDialog$FileHistory;


#define VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_hashCode_R_int 0
typedef jint (*func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_finalize 5
typedef void (*func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_notify 6
typedef void (*func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_notifyAll 7
typedef void (*func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_wait 8
typedef void (*func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_wait_long 9
typedef void (*func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_wait_long_int 10
typedef void (*func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_push_arc_files_Fi 11
typedef void (*func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_push_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_back 12
typedef void (*func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_back)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_forward 13
typedef void (*func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_forward)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canForward_R_boolean 14
typedef jbool (*func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canForward_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canBack_R_boolean 15
typedef jbool (*func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canBack_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_ui_dialogs_FileChooserDialog$FileHistory(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_dialogs_FileChooserDialog$FileHistory(jcontext ctx);
void init_mindustry_ui_dialogs_FileChooserDialog$FileHistory_mindustry_ui_dialogs_FileChooserDialog(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_push_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_back(jcontext ctx, jobject self);
void M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_forward(jcontext ctx, jobject self);
jbool M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canForward_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canBack_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
