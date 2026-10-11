#ifndef HEADER_arc_scene_ui_TextField$TextFieldStyle
#define HEADER_arc_scene_ui_TextField$TextFieldStyle

#include "Clearwing.h"
#include "arc/scene/style/Style.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_TextField$TextFieldStyle {
	arc_scene_style_Style parent;
	jref F_font;
	jref F_fontColor;
	jref F_focusedFontColor;
	jref F_disabledFontColor;
	jref F_background;
	jref F_focusedBackground;
	jref F_disabledBackground;
	jref F_invalidBackground;
	jref F_cursor;
	jref F_selection;
	jref F_messageFont;
	jref F_messageFontColor;
} arc_scene_ui_TextField$TextFieldStyle;

extern Class class_arc_scene_ui_TextField$TextFieldStyle;


#define VTABLE_arc_scene_ui_TextField$TextFieldStyle_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_TextField$TextFieldStyle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$TextFieldStyle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_TextField$TextFieldStyle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField$TextFieldStyle_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_TextField$TextFieldStyle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$TextFieldStyle_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_TextField$TextFieldStyle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$TextFieldStyle_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_TextField$TextFieldStyle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$TextFieldStyle_finalize 5
typedef void (*func_arc_scene_ui_TextField$TextFieldStyle_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$TextFieldStyle_notify 6
typedef void (*func_arc_scene_ui_TextField$TextFieldStyle_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$TextFieldStyle_notifyAll 7
typedef void (*func_arc_scene_ui_TextField$TextFieldStyle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$TextFieldStyle_wait 8
typedef void (*func_arc_scene_ui_TextField$TextFieldStyle_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$TextFieldStyle_wait_long 9
typedef void (*func_arc_scene_ui_TextField$TextFieldStyle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_TextField$TextFieldStyle_wait_long_int 10
typedef void (*func_arc_scene_ui_TextField$TextFieldStyle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_scene_ui_TextField$TextFieldStyle(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_TextField$TextFieldStyle(jcontext ctx);
void init_arc_scene_ui_TextField$TextFieldStyle(jcontext ctx, jobject self);
void init_arc_scene_ui_TextField$TextFieldStyle_arc_scene_ui_TextField$TextFieldStyle(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
