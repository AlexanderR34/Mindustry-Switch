#ifndef HEADER_arc_scene_ui_TextButton$TextButtonStyle
#define HEADER_arc_scene_ui_TextButton$TextButtonStyle

#include "Clearwing.h"
#include "arc/scene/ui/Button_ButtonStyle.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_TextButton$TextButtonStyle {
	arc_scene_ui_Button$ButtonStyle parent;
	jref F_font;
	jref F_fontColor;
	jref F_downFontColor;
	jref F_overFontColor;
	jref F_checkedFontColor;
	jref F_checkedOverFontColor;
	jref F_disabledFontColor;
} arc_scene_ui_TextButton$TextButtonStyle;

extern Class class_arc_scene_ui_TextButton$TextButtonStyle;


#define VTABLE_arc_scene_ui_TextButton$TextButtonStyle_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_TextButton$TextButtonStyle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextButton$TextButtonStyle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_TextButton$TextButtonStyle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextButton$TextButtonStyle_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_TextButton$TextButtonStyle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextButton$TextButtonStyle_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_TextButton$TextButtonStyle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextButton$TextButtonStyle_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_TextButton$TextButtonStyle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextButton$TextButtonStyle_finalize 5
typedef void (*func_arc_scene_ui_TextButton$TextButtonStyle_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextButton$TextButtonStyle_notify 6
typedef void (*func_arc_scene_ui_TextButton$TextButtonStyle_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextButton$TextButtonStyle_notifyAll 7
typedef void (*func_arc_scene_ui_TextButton$TextButtonStyle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextButton$TextButtonStyle_wait 8
typedef void (*func_arc_scene_ui_TextButton$TextButtonStyle_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextButton$TextButtonStyle_wait_long 9
typedef void (*func_arc_scene_ui_TextButton$TextButtonStyle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_TextButton$TextButtonStyle_wait_long_int 10
typedef void (*func_arc_scene_ui_TextButton$TextButtonStyle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_scene_ui_TextButton$TextButtonStyle(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_TextButton$TextButtonStyle(jcontext ctx);
void init_arc_scene_ui_TextButton$TextButtonStyle(jcontext ctx, jobject self);
void init_arc_scene_ui_TextButton$TextButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_graphics_g2d_Font(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void init_arc_scene_ui_TextButton$TextButtonStyle_arc_scene_ui_TextButton$TextButtonStyle(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
