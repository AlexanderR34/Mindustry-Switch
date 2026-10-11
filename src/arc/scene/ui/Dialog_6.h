#ifndef HEADER_arc_scene_ui_Dialog$6
#define HEADER_arc_scene_ui_Dialog$6

#include "Clearwing.h"
#include "arc/scene/event/VisibilityListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_Dialog$6 {
	arc_scene_event_VisibilityListener parent;
	jref F_val$run;
	jref F_this$0;
} arc_scene_ui_Dialog$6;

extern Class class_arc_scene_ui_Dialog$6;


#define VTABLE_arc_scene_ui_Dialog$6_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_Dialog$6_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$6_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_Dialog$6_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Dialog$6_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_Dialog$6_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$6_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_Dialog$6_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$6_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_Dialog$6_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$6_finalize 5
typedef void (*func_arc_scene_ui_Dialog$6_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$6_notify 6
typedef void (*func_arc_scene_ui_Dialog$6_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$6_notifyAll 7
typedef void (*func_arc_scene_ui_Dialog$6_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$6_wait 8
typedef void (*func_arc_scene_ui_Dialog$6_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$6_wait_long 9
typedef void (*func_arc_scene_ui_Dialog$6_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_Dialog$6_wait_long_int 10
typedef void (*func_arc_scene_ui_Dialog$6_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_ui_Dialog$6_handle_arc_scene_event_SceneEvent_R_boolean 11
typedef jbool (*func_arc_scene_ui_Dialog$6_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Dialog$6_shown_R_boolean 12
typedef jbool (*func_arc_scene_ui_Dialog$6_shown_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$6_hidden_R_boolean 13
typedef jbool (*func_arc_scene_ui_Dialog$6_hidden_R_boolean)(jcontext ctx, jobject self);

void mark_arc_scene_ui_Dialog$6(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_Dialog$6(jcontext ctx);
void init_arc_scene_ui_Dialog$6_arc_scene_ui_Dialog_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_arc_scene_ui_Dialog$6_hidden_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
