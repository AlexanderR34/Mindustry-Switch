#ifndef HEADER_arc_scene_actions_RunnableAction
#define HEADER_arc_scene_actions_RunnableAction

#include "Clearwing.h"
#include "arc/scene/Action.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_actions_RunnableAction {
	arc_scene_Action parent;
	jref F_runnable;
	jbool F_ran;
} arc_scene_actions_RunnableAction;

extern Class class_arc_scene_actions_RunnableAction;


#define VTABLE_arc_scene_actions_RunnableAction_hashCode_R_int 0
typedef jint (*func_arc_scene_actions_RunnableAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RunnableAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_actions_RunnableAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_RunnableAction_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_actions_RunnableAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RunnableAction_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_actions_RunnableAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RunnableAction_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_actions_RunnableAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RunnableAction_finalize 5
typedef void (*func_arc_scene_actions_RunnableAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RunnableAction_notify 6
typedef void (*func_arc_scene_actions_RunnableAction_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RunnableAction_notifyAll 7
typedef void (*func_arc_scene_actions_RunnableAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RunnableAction_wait 8
typedef void (*func_arc_scene_actions_RunnableAction_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RunnableAction_wait_long 9
typedef void (*func_arc_scene_actions_RunnableAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_actions_RunnableAction_wait_long_int 10
typedef void (*func_arc_scene_actions_RunnableAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_actions_RunnableAction_reset 11
typedef void (*func_arc_scene_actions_RunnableAction_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RunnableAction_act_float_R_boolean 12
typedef jbool (*func_arc_scene_actions_RunnableAction_act_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_RunnableAction_restart 13
typedef void (*func_arc_scene_actions_RunnableAction_restart)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RunnableAction_getActor_R_arc_scene_Element 14
typedef jobject (*func_arc_scene_actions_RunnableAction_getActor_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RunnableAction_setActor_arc_scene_Element 15
typedef void (*func_arc_scene_actions_RunnableAction_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_RunnableAction_getTarget_R_arc_scene_Element 16
typedef jobject (*func_arc_scene_actions_RunnableAction_getTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RunnableAction_setTarget_arc_scene_Element 17
typedef void (*func_arc_scene_actions_RunnableAction_setTarget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_RunnableAction_getPool_R_arc_util_pooling_Pool 18
typedef jobject (*func_arc_scene_actions_RunnableAction_getPool_R_arc_util_pooling_Pool)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RunnableAction_setPool_arc_util_pooling_Pool 19
typedef void (*func_arc_scene_actions_RunnableAction_setPool_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_RunnableAction_run 20
typedef void (*func_arc_scene_actions_RunnableAction_run)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RunnableAction_getRunnable_R_java_lang_Runnable 21
typedef jobject (*func_arc_scene_actions_RunnableAction_getRunnable_R_java_lang_Runnable)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RunnableAction_setRunnable_java_lang_Runnable 22
typedef void (*func_arc_scene_actions_RunnableAction_setRunnable_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_actions_RunnableAction(jobject object, jint mark, jint depth);
void clinit_arc_scene_actions_RunnableAction(jcontext ctx);
void init_arc_scene_actions_RunnableAction(jcontext ctx, jobject self);
jbool M_arc_scene_actions_RunnableAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_actions_RunnableAction_run(jcontext ctx, jobject self);
void M_arc_scene_actions_RunnableAction_restart(jcontext ctx, jobject self);
void M_arc_scene_actions_RunnableAction_reset(jcontext ctx, jobject self);
jobject M_arc_scene_actions_RunnableAction_getRunnable_R_java_lang_Runnable(jcontext ctx, jobject self);
void M_arc_scene_actions_RunnableAction_setRunnable_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
