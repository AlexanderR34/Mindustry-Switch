#ifndef HEADER_arc_scene_ui_Button$ButtonStyle
#define HEADER_arc_scene_ui_Button$ButtonStyle

#include "Clearwing.h"
#include "arc/scene/style/Style.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_Button$ButtonStyle {
	arc_scene_style_Style parent;
	jref F_up;
	jref F_down;
	jref F_over;
	jref F_checked;
	jref F_checkedOver;
	jref F_disabled;
	jfloat F_pressedOffsetX;
	jfloat F_pressedOffsetY;
	jfloat F_unpressedOffsetX;
	jfloat F_unpressedOffsetY;
	jfloat F_checkedOffsetX;
	jfloat F_checkedOffsetY;
} arc_scene_ui_Button$ButtonStyle;

extern Class class_arc_scene_ui_Button$ButtonStyle;


#define VTABLE_arc_scene_ui_Button$ButtonStyle_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_Button$ButtonStyle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$ButtonStyle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_Button$ButtonStyle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Button$ButtonStyle_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_Button$ButtonStyle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$ButtonStyle_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_Button$ButtonStyle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$ButtonStyle_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_Button$ButtonStyle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$ButtonStyle_finalize 5
typedef void (*func_arc_scene_ui_Button$ButtonStyle_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$ButtonStyle_notify 6
typedef void (*func_arc_scene_ui_Button$ButtonStyle_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$ButtonStyle_notifyAll 7
typedef void (*func_arc_scene_ui_Button$ButtonStyle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$ButtonStyle_wait 8
typedef void (*func_arc_scene_ui_Button$ButtonStyle_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Button$ButtonStyle_wait_long 9
typedef void (*func_arc_scene_ui_Button$ButtonStyle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_Button$ButtonStyle_wait_long_int 10
typedef void (*func_arc_scene_ui_Button$ButtonStyle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_scene_ui_Button$ButtonStyle(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_Button$ButtonStyle(jcontext ctx);
void init_arc_scene_ui_Button$ButtonStyle(jcontext ctx, jobject self);
void init_arc_scene_ui_Button$ButtonStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_arc_scene_ui_Button$ButtonStyle_arc_scene_ui_Button$ButtonStyle(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
