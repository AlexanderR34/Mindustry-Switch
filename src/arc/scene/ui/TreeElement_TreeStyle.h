#ifndef HEADER_arc_scene_ui_TreeElement$TreeStyle
#define HEADER_arc_scene_ui_TreeElement$TreeStyle

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_TreeElement$TreeStyle {
	java_lang_Object parent;
	jref F_plus;
	jref F_minus;
	jref F_over;
	jref F_selection;
	jref F_background;
} arc_scene_ui_TreeElement$TreeStyle;

extern Class class_arc_scene_ui_TreeElement$TreeStyle;


#define VTABLE_arc_scene_ui_TreeElement$TreeStyle_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_TreeElement$TreeStyle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeStyle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_TreeElement$TreeStyle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeStyle_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_TreeElement$TreeStyle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeStyle_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_TreeElement$TreeStyle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeStyle_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_TreeElement$TreeStyle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeStyle_finalize 5
typedef void (*func_arc_scene_ui_TreeElement$TreeStyle_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeStyle_notify 6
typedef void (*func_arc_scene_ui_TreeElement$TreeStyle_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeStyle_notifyAll 7
typedef void (*func_arc_scene_ui_TreeElement$TreeStyle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeStyle_wait 8
typedef void (*func_arc_scene_ui_TreeElement$TreeStyle_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TreeElement$TreeStyle_wait_long 9
typedef void (*func_arc_scene_ui_TreeElement$TreeStyle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_TreeElement$TreeStyle_wait_long_int 10
typedef void (*func_arc_scene_ui_TreeElement$TreeStyle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_scene_ui_TreeElement$TreeStyle(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_TreeElement$TreeStyle(jcontext ctx);
void init_arc_scene_ui_TreeElement$TreeStyle(jcontext ctx, jobject self);
void init_arc_scene_ui_TreeElement$TreeStyle_arc_scene_style_Drawable_arc_scene_style_Drawable_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_arc_scene_ui_TreeElement$TreeStyle_arc_scene_ui_TreeElement$TreeStyle(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
