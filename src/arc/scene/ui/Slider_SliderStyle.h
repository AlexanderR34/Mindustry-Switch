#ifndef HEADER_arc_scene_ui_Slider$SliderStyle
#define HEADER_arc_scene_ui_Slider$SliderStyle

#include "Clearwing.h"
#include "arc/scene/ui/ProgressBar_ProgressBarStyle.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_Slider$SliderStyle {
	arc_scene_ui_ProgressBar$ProgressBarStyle parent;
	jref F_knobOver;
	jref F_knobDown;
} arc_scene_ui_Slider$SliderStyle;

extern Class class_arc_scene_ui_Slider$SliderStyle;


#define VTABLE_arc_scene_ui_Slider$SliderStyle_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_Slider$SliderStyle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Slider$SliderStyle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_Slider$SliderStyle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Slider$SliderStyle_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_Slider$SliderStyle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Slider$SliderStyle_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_Slider$SliderStyle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Slider$SliderStyle_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_Slider$SliderStyle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Slider$SliderStyle_finalize 5
typedef void (*func_arc_scene_ui_Slider$SliderStyle_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Slider$SliderStyle_notify 6
typedef void (*func_arc_scene_ui_Slider$SliderStyle_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Slider$SliderStyle_notifyAll 7
typedef void (*func_arc_scene_ui_Slider$SliderStyle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Slider$SliderStyle_wait 8
typedef void (*func_arc_scene_ui_Slider$SliderStyle_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Slider$SliderStyle_wait_long 9
typedef void (*func_arc_scene_ui_Slider$SliderStyle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_Slider$SliderStyle_wait_long_int 10
typedef void (*func_arc_scene_ui_Slider$SliderStyle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_scene_ui_Slider$SliderStyle(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_Slider$SliderStyle(jcontext ctx);
void init_arc_scene_ui_Slider$SliderStyle(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
