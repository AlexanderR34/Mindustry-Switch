#ifndef HEADER_arc_scene_ui_TextField$KeyRepeatTask
#define HEADER_arc_scene_ui_TextField$KeyRepeatTask

#include "Clearwing.h"
#include "arc/util/Timer_Task.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_TextField$KeyRepeatTask {
	arc_util_Timer$Task parent;
	jref F_keycode;
	jref F_this$0;
} arc_scene_ui_TextField$KeyRepeatTask;

extern Class class_arc_scene_ui_TextField$KeyRepeatTask;


#define VTABLE_arc_scene_ui_TextField$KeyRepeatTask_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_TextField$KeyRepeatTask_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$KeyRepeatTask_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_TextField$KeyRepeatTask_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_TextField$KeyRepeatTask_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_TextField$KeyRepeatTask_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$KeyRepeatTask_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_TextField$KeyRepeatTask_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$KeyRepeatTask_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_TextField$KeyRepeatTask_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$KeyRepeatTask_finalize 5
typedef void (*func_arc_scene_ui_TextField$KeyRepeatTask_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$KeyRepeatTask_notify 6
typedef void (*func_arc_scene_ui_TextField$KeyRepeatTask_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$KeyRepeatTask_notifyAll 7
typedef void (*func_arc_scene_ui_TextField$KeyRepeatTask_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$KeyRepeatTask_wait 8
typedef void (*func_arc_scene_ui_TextField$KeyRepeatTask_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$KeyRepeatTask_wait_long 9
typedef void (*func_arc_scene_ui_TextField$KeyRepeatTask_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_TextField$KeyRepeatTask_wait_long_int 10
typedef void (*func_arc_scene_ui_TextField$KeyRepeatTask_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_ui_TextField$KeyRepeatTask_run 11
typedef void (*func_arc_scene_ui_TextField$KeyRepeatTask_run)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$KeyRepeatTask_cancel 12
typedef void (*func_arc_scene_ui_TextField$KeyRepeatTask_cancel)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$KeyRepeatTask_isScheduled_R_boolean 13
typedef jbool (*func_arc_scene_ui_TextField$KeyRepeatTask_isScheduled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_TextField$KeyRepeatTask_getExecuteTimeMillis_R_long 14
typedef jlong (*func_arc_scene_ui_TextField$KeyRepeatTask_getExecuteTimeMillis_R_long)(jcontext ctx, jobject self);

void mark_arc_scene_ui_TextField$KeyRepeatTask(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_TextField$KeyRepeatTask(jcontext ctx);
void init_arc_scene_ui_TextField$KeyRepeatTask_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_TextField$KeyRepeatTask_run(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
