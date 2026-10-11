#ifndef HEADER_mindustry_ui_builder_UiHotReload
#define HEADER_mindustry_ui_builder_UiHotReload

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_builder_UiHotReload {
	java_lang_Object parent;
} mindustry_ui_builder_UiHotReload;

extern Class class_mindustry_ui_builder_UiHotReload;


#define VTABLE_mindustry_ui_builder_UiHotReload_hashCode_R_int 0
typedef jint (*func_mindustry_ui_builder_UiHotReload_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiHotReload_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_builder_UiHotReload_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_builder_UiHotReload_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_builder_UiHotReload_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiHotReload_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_builder_UiHotReload_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiHotReload_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_builder_UiHotReload_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiHotReload_finalize 5
typedef void (*func_mindustry_ui_builder_UiHotReload_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiHotReload_notify 6
typedef void (*func_mindustry_ui_builder_UiHotReload_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiHotReload_notifyAll 7
typedef void (*func_mindustry_ui_builder_UiHotReload_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiHotReload_wait 8
typedef void (*func_mindustry_ui_builder_UiHotReload_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_builder_UiHotReload_wait_long 9
typedef void (*func_mindustry_ui_builder_UiHotReload_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_builder_UiHotReload_wait_long_int 10
typedef void (*func_mindustry_ui_builder_UiHotReload_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ui_builder_UiHotReload(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_builder_UiHotReload(jcontext ctx);
void init_mindustry_ui_builder_UiHotReload(jcontext ctx, jobject self);
void SM_mindustry_ui_builder_UiHotReload_show(jcontext ctx);
void SM_mindustry_ui_builder_UiHotReload_reload_arc_files_Fi_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_ui_builder_UiHotReload_lambda$reload$0_mindustry_ui_builder_MenuResult(jcontext ctx, jobject param0);
void SM_mindustry_ui_builder_UiHotReload_lambda$show$0_arc_files_Fi(jcontext ctx, jobject param0);
void SM_mindustry_ui_builder_UiHotReload_lambda$show$1_Array1_long_arc_files_Fi_Array1_boolean_Array1_long_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);

#ifdef __cplusplus
}
#endif

#endif
