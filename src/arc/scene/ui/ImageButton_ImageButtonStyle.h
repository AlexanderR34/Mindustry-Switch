#ifndef HEADER_arc_scene_ui_ImageButton$ImageButtonStyle
#define HEADER_arc_scene_ui_ImageButton$ImageButtonStyle

#include "Clearwing.h"
#include "arc/scene/ui/Button_ButtonStyle.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_ImageButton$ImageButtonStyle {
	arc_scene_ui_Button$ButtonStyle parent;
	jref F_imageUp;
	jref F_imageDown;
	jref F_imageOver;
	jref F_imageChecked;
	jref F_imageCheckedOver;
	jref F_imageDisabled;
	jref F_imageUpColor;
	jref F_imageCheckedColor;
	jref F_imageDownColor;
	jref F_imageOverColor;
	jref F_imageDisabledColor;
} arc_scene_ui_ImageButton$ImageButtonStyle;

extern Class class_arc_scene_ui_ImageButton$ImageButtonStyle;


#define VTABLE_arc_scene_ui_ImageButton$ImageButtonStyle_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_ImageButton$ImageButtonStyle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ImageButton$ImageButtonStyle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_ImageButton$ImageButtonStyle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ImageButton$ImageButtonStyle_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_ImageButton$ImageButtonStyle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ImageButton$ImageButtonStyle_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_ImageButton$ImageButtonStyle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ImageButton$ImageButtonStyle_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_ImageButton$ImageButtonStyle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ImageButton$ImageButtonStyle_finalize 5
typedef void (*func_arc_scene_ui_ImageButton$ImageButtonStyle_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ImageButton$ImageButtonStyle_notify 6
typedef void (*func_arc_scene_ui_ImageButton$ImageButtonStyle_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ImageButton$ImageButtonStyle_notifyAll 7
typedef void (*func_arc_scene_ui_ImageButton$ImageButtonStyle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ImageButton$ImageButtonStyle_wait 8
typedef void (*func_arc_scene_ui_ImageButton$ImageButtonStyle_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ImageButton$ImageButtonStyle_wait_long 9
typedef void (*func_arc_scene_ui_ImageButton$ImageButtonStyle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_ImageButton$ImageButtonStyle_wait_long_int 10
typedef void (*func_arc_scene_ui_ImageButton$ImageButtonStyle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_scene_ui_ImageButton$ImageButtonStyle(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_ImageButton$ImageButtonStyle(jcontext ctx);
void init_arc_scene_ui_ImageButton$ImageButtonStyle(jcontext ctx, jobject self);
void init_arc_scene_ui_ImageButton$ImageButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5);
void init_arc_scene_ui_ImageButton$ImageButtonStyle_arc_scene_ui_ImageButton$ImageButtonStyle(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
