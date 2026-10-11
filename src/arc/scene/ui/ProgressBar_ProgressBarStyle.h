#ifndef HEADER_arc_scene_ui_ProgressBar$ProgressBarStyle
#define HEADER_arc_scene_ui_ProgressBar$ProgressBarStyle

#include "Clearwing.h"
#include "arc/scene/style/Style.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_ProgressBar$ProgressBarStyle {
	arc_scene_style_Style parent;
	jref F_background;
	jref F_disabledBackground;
	jref F_knob;
	jref F_disabledKnob;
	jref F_knobBefore;
	jref F_knobAfter;
	jref F_disabledKnobBefore;
	jref F_disabledKnobAfter;
} arc_scene_ui_ProgressBar$ProgressBarStyle;

extern Class class_arc_scene_ui_ProgressBar$ProgressBarStyle;


#define VTABLE_arc_scene_ui_ProgressBar$ProgressBarStyle_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_ProgressBar$ProgressBarStyle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ProgressBar$ProgressBarStyle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_ProgressBar$ProgressBarStyle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ProgressBar$ProgressBarStyle_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_ProgressBar$ProgressBarStyle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ProgressBar$ProgressBarStyle_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_ProgressBar$ProgressBarStyle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ProgressBar$ProgressBarStyle_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_ProgressBar$ProgressBarStyle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ProgressBar$ProgressBarStyle_finalize 5
typedef void (*func_arc_scene_ui_ProgressBar$ProgressBarStyle_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ProgressBar$ProgressBarStyle_notify 6
typedef void (*func_arc_scene_ui_ProgressBar$ProgressBarStyle_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ProgressBar$ProgressBarStyle_notifyAll 7
typedef void (*func_arc_scene_ui_ProgressBar$ProgressBarStyle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ProgressBar$ProgressBarStyle_wait 8
typedef void (*func_arc_scene_ui_ProgressBar$ProgressBarStyle_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ProgressBar$ProgressBarStyle_wait_long 9
typedef void (*func_arc_scene_ui_ProgressBar$ProgressBarStyle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_ProgressBar$ProgressBarStyle_wait_long_int 10
typedef void (*func_arc_scene_ui_ProgressBar$ProgressBarStyle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_scene_ui_ProgressBar$ProgressBarStyle(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_ProgressBar$ProgressBarStyle(jcontext ctx);
void init_arc_scene_ui_ProgressBar$ProgressBarStyle(jcontext ctx, jobject self);
void init_arc_scene_ui_ProgressBar$ProgressBarStyle_arc_scene_style_Drawable_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_arc_scene_ui_ProgressBar$ProgressBarStyle_arc_scene_ui_ProgressBar$ProgressBarStyle(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
