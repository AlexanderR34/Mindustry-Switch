#ifndef HEADER_arc_scene_ui_ScrollPane$ScrollPaneStyle
#define HEADER_arc_scene_ui_ScrollPane$ScrollPaneStyle

#include "Clearwing.h"
#include "arc/scene/style/Style.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_ScrollPane$ScrollPaneStyle {
	arc_scene_style_Style parent;
	jref F_background;
	jref F_corner;
	jref F_hScroll;
	jref F_hScrollKnob;
	jref F_vScroll;
	jref F_vScrollKnob;
} arc_scene_ui_ScrollPane$ScrollPaneStyle;

extern Class class_arc_scene_ui_ScrollPane$ScrollPaneStyle;


#define VTABLE_arc_scene_ui_ScrollPane$ScrollPaneStyle_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_ScrollPane$ScrollPaneStyle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane$ScrollPaneStyle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_ScrollPane$ScrollPaneStyle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ScrollPane$ScrollPaneStyle_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_ScrollPane$ScrollPaneStyle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane$ScrollPaneStyle_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_ScrollPane$ScrollPaneStyle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane$ScrollPaneStyle_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_ScrollPane$ScrollPaneStyle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane$ScrollPaneStyle_finalize 5
typedef void (*func_arc_scene_ui_ScrollPane$ScrollPaneStyle_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane$ScrollPaneStyle_notify 6
typedef void (*func_arc_scene_ui_ScrollPane$ScrollPaneStyle_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane$ScrollPaneStyle_notifyAll 7
typedef void (*func_arc_scene_ui_ScrollPane$ScrollPaneStyle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane$ScrollPaneStyle_wait 8
typedef void (*func_arc_scene_ui_ScrollPane$ScrollPaneStyle_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ScrollPane$ScrollPaneStyle_wait_long 9
typedef void (*func_arc_scene_ui_ScrollPane$ScrollPaneStyle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_ScrollPane$ScrollPaneStyle_wait_long_int 10
typedef void (*func_arc_scene_ui_ScrollPane$ScrollPaneStyle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_scene_ui_ScrollPane$ScrollPaneStyle(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_ScrollPane$ScrollPaneStyle(jcontext ctx);
void init_arc_scene_ui_ScrollPane$ScrollPaneStyle(jcontext ctx, jobject self);
void init_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_ui_ScrollPane$ScrollPaneStyle(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
