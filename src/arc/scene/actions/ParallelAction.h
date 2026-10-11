#ifndef HEADER_arc_scene_actions_ParallelAction
#define HEADER_arc_scene_actions_ParallelAction

#include "Clearwing.h"
#include "arc/scene/Action.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_actions_ParallelAction {
	arc_scene_Action parent;
	jref F_actions;
	jbool F_complete;
} arc_scene_actions_ParallelAction;

extern Class class_arc_scene_actions_ParallelAction;


#define VTABLE_arc_scene_actions_ParallelAction_hashCode_R_int 0
typedef jint (*func_arc_scene_actions_ParallelAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ParallelAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_actions_ParallelAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_ParallelAction_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_actions_ParallelAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ParallelAction_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_actions_ParallelAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ParallelAction_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_actions_ParallelAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ParallelAction_finalize 5
typedef void (*func_arc_scene_actions_ParallelAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ParallelAction_notify 6
typedef void (*func_arc_scene_actions_ParallelAction_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ParallelAction_notifyAll 7
typedef void (*func_arc_scene_actions_ParallelAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ParallelAction_wait 8
typedef void (*func_arc_scene_actions_ParallelAction_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ParallelAction_wait_long 9
typedef void (*func_arc_scene_actions_ParallelAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_actions_ParallelAction_wait_long_int 10
typedef void (*func_arc_scene_actions_ParallelAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_actions_ParallelAction_reset 11
typedef void (*func_arc_scene_actions_ParallelAction_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ParallelAction_act_float_R_boolean 12
typedef jbool (*func_arc_scene_actions_ParallelAction_act_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_ParallelAction_restart 13
typedef void (*func_arc_scene_actions_ParallelAction_restart)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ParallelAction_getActor_R_arc_scene_Element 14
typedef jobject (*func_arc_scene_actions_ParallelAction_getActor_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ParallelAction_setActor_arc_scene_Element 15
typedef void (*func_arc_scene_actions_ParallelAction_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_ParallelAction_getTarget_R_arc_scene_Element 16
typedef jobject (*func_arc_scene_actions_ParallelAction_getTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ParallelAction_setTarget_arc_scene_Element 17
typedef void (*func_arc_scene_actions_ParallelAction_setTarget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_ParallelAction_getPool_R_arc_util_pooling_Pool 18
typedef jobject (*func_arc_scene_actions_ParallelAction_getPool_R_arc_util_pooling_Pool)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ParallelAction_setPool_arc_util_pooling_Pool 19
typedef void (*func_arc_scene_actions_ParallelAction_setPool_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_ParallelAction_addAction_arc_scene_Action 20
typedef void (*func_arc_scene_actions_ParallelAction_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_ParallelAction_getActions_R_arc_struct_Seq 21
typedef jobject (*func_arc_scene_actions_ParallelAction_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);

void mark_arc_scene_actions_ParallelAction(jobject object, jint mark, jint depth);
void clinit_arc_scene_actions_ParallelAction(jcontext ctx);
void init_arc_scene_actions_ParallelAction(jcontext ctx, jobject self);
void init_arc_scene_actions_ParallelAction_arc_scene_Action(jcontext ctx, jobject self, jobject param0);
void init_arc_scene_actions_ParallelAction_arc_scene_Action_arc_scene_Action(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_arc_scene_actions_ParallelAction_arc_scene_Action_arc_scene_Action_arc_scene_Action(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_arc_scene_actions_ParallelAction_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void init_arc_scene_actions_ParallelAction_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jbool M_arc_scene_actions_ParallelAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_actions_ParallelAction_restart(jcontext ctx, jobject self);
void M_arc_scene_actions_ParallelAction_reset(jcontext ctx, jobject self);
void M_arc_scene_actions_ParallelAction_addAction_arc_scene_Action(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_actions_ParallelAction_setActor_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_actions_ParallelAction_getActions_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_scene_actions_ParallelAction_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
