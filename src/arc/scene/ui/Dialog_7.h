#ifndef HEADER_arc_scene_ui_Dialog$7
#define HEADER_arc_scene_ui_Dialog$7

#include "Clearwing.h"
#include "arc/scene/event/ResizeListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_Dialog$7 {
	arc_scene_event_ResizeListener parent;
	jref F_val$run;
	jref F_this$0;
} arc_scene_ui_Dialog$7;

extern Class class_arc_scene_ui_Dialog$7;


#define VTABLE_arc_scene_ui_Dialog$7_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_Dialog$7_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$7_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_Dialog$7_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Dialog$7_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_Dialog$7_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$7_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_Dialog$7_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$7_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_Dialog$7_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$7_finalize 5
typedef void (*func_arc_scene_ui_Dialog$7_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$7_notify 6
typedef void (*func_arc_scene_ui_Dialog$7_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$7_notifyAll 7
typedef void (*func_arc_scene_ui_Dialog$7_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$7_wait 8
typedef void (*func_arc_scene_ui_Dialog$7_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$7_wait_long 9
typedef void (*func_arc_scene_ui_Dialog$7_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_Dialog$7_wait_long_int 10
typedef void (*func_arc_scene_ui_Dialog$7_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_ui_Dialog$7_handle_arc_scene_event_SceneEvent_R_boolean 11
typedef jbool (*func_arc_scene_ui_Dialog$7_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Dialog$7_resized 12
typedef void (*func_arc_scene_ui_Dialog$7_resized)(jcontext ctx, jobject self);

void mark_arc_scene_ui_Dialog$7(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_Dialog$7(jcontext ctx);
void init_arc_scene_ui_Dialog$7_arc_scene_ui_Dialog_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_scene_ui_Dialog$7_resized(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
