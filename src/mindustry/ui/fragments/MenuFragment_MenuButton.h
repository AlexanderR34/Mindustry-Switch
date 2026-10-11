#ifndef HEADER_mindustry_ui_fragments_MenuFragment$MenuButton
#define HEADER_mindustry_ui_fragments_MenuFragment$MenuButton

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_fragments_MenuFragment$MenuButton {
	java_lang_Object parent;
	jref F_icon;
	jref F_text;
	jref F_runnable;
	jref F_submenu;
} mindustry_ui_fragments_MenuFragment$MenuButton;

extern Class class_mindustry_ui_fragments_MenuFragment$MenuButton;


#define VTABLE_mindustry_ui_fragments_MenuFragment$MenuButton_hashCode_R_int 0
typedef jint (*func_mindustry_ui_fragments_MenuFragment$MenuButton_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment$MenuButton_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_fragments_MenuFragment$MenuButton_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_MenuFragment$MenuButton_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_fragments_MenuFragment$MenuButton_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment$MenuButton_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_fragments_MenuFragment$MenuButton_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment$MenuButton_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_fragments_MenuFragment$MenuButton_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment$MenuButton_finalize 5
typedef void (*func_mindustry_ui_fragments_MenuFragment$MenuButton_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment$MenuButton_notify 6
typedef void (*func_mindustry_ui_fragments_MenuFragment$MenuButton_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment$MenuButton_notifyAll 7
typedef void (*func_mindustry_ui_fragments_MenuFragment$MenuButton_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment$MenuButton_wait 8
typedef void (*func_mindustry_ui_fragments_MenuFragment$MenuButton_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment$MenuButton_wait_long 9
typedef void (*func_mindustry_ui_fragments_MenuFragment$MenuButton_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_fragments_MenuFragment$MenuButton_wait_long_int 10
typedef void (*func_mindustry_ui_fragments_MenuFragment$MenuButton_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ui_fragments_MenuFragment$MenuButton(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_fragments_MenuFragment$MenuButton(jcontext ctx);
void init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_Array1_mindustry_ui_fragments_MenuFragment$MenuButton(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void init_mindustry_ui_fragments_MenuFragment$MenuButton_java_lang_String_arc_scene_style_Drawable_Array1_mindustry_ui_fragments_MenuFragment$MenuButton(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void SM_mindustry_ui_fragments_MenuFragment$MenuButton_lambda$new$0(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
