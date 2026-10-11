#ifndef HEADER_arc_scene_ui_CheckBox$CheckBoxStyle
#define HEADER_arc_scene_ui_CheckBox$CheckBoxStyle

#include "Clearwing.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_CheckBox$CheckBoxStyle {
	arc_scene_ui_TextButton$TextButtonStyle parent;
	jref F_checkboxOn;
	jref F_checkboxOff;
	jref F_checkboxOver;
	jref F_checkboxOnDisabled;
	jref F_checkboxOffDisabled;
	jref F_checkboxOnOver;
} arc_scene_ui_CheckBox$CheckBoxStyle;

extern Class class_arc_scene_ui_CheckBox$CheckBoxStyle;


#define VTABLE_arc_scene_ui_CheckBox$CheckBoxStyle_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_CheckBox$CheckBoxStyle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_CheckBox$CheckBoxStyle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_CheckBox$CheckBoxStyle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_CheckBox$CheckBoxStyle_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_CheckBox$CheckBoxStyle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_CheckBox$CheckBoxStyle_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_CheckBox$CheckBoxStyle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_CheckBox$CheckBoxStyle_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_CheckBox$CheckBoxStyle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_CheckBox$CheckBoxStyle_finalize 5
typedef void (*func_arc_scene_ui_CheckBox$CheckBoxStyle_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_CheckBox$CheckBoxStyle_notify 6
typedef void (*func_arc_scene_ui_CheckBox$CheckBoxStyle_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_CheckBox$CheckBoxStyle_notifyAll 7
typedef void (*func_arc_scene_ui_CheckBox$CheckBoxStyle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_CheckBox$CheckBoxStyle_wait 8
typedef void (*func_arc_scene_ui_CheckBox$CheckBoxStyle_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_CheckBox$CheckBoxStyle_wait_long 9
typedef void (*func_arc_scene_ui_CheckBox$CheckBoxStyle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_CheckBox$CheckBoxStyle_wait_long_int 10
typedef void (*func_arc_scene_ui_CheckBox$CheckBoxStyle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_scene_ui_CheckBox$CheckBoxStyle(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_CheckBox$CheckBoxStyle(jcontext ctx);
void init_arc_scene_ui_CheckBox$CheckBoxStyle(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
