#ifndef HEADER_arc_scene_actions_SequenceAction
#define HEADER_arc_scene_actions_SequenceAction

#include "Clearwing.h"
#include "arc/scene/actions/ParallelAction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_actions_SequenceAction {
	arc_scene_actions_ParallelAction parent;
	jint F_index;
} arc_scene_actions_SequenceAction;

extern Class class_arc_scene_actions_SequenceAction;


#define VTABLE_arc_scene_actions_SequenceAction_hashCode_R_int 0
typedef jint (*func_arc_scene_actions_SequenceAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_SequenceAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_actions_SequenceAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_SequenceAction_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_actions_SequenceAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_SequenceAction_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_actions_SequenceAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_SequenceAction_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_actions_SequenceAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_SequenceAction_finalize 5
typedef void (*func_arc_scene_actions_SequenceAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_SequenceAction_notify 6
typedef void (*func_arc_scene_actions_SequenceAction_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_SequenceAction_notifyAll 7
typedef void (*func_arc_scene_actions_SequenceAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_SequenceAction_wait 8
typedef void (*func_arc_scene_actions_SequenceAction_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_SequenceAction_wait_long 9
typedef void (*func_arc_scene_actions_SequenceAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_actions_SequenceAction_wait_long_int 10
typedef void (*func_arc_scene_actions_SequenceAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_actions_SequenceAction_reset 11
typedef void (*func_arc_scene_actions_SequenceAction_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_SequenceAction_act_float_R_boolean 12
typedef jbool (*func_arc_scene_actions_SequenceAction_act_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_SequenceAction_restart 13
typedef void (*func_arc_scene_actions_SequenceAction_restart)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_SequenceAction_getActor_R_arc_scene_Element 14
typedef jobject (*func_arc_scene_actions_SequenceAction_getActor_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_SequenceAction_setActor_arc_scene_Element 15
typedef void (*func_arc_scene_actions_SequenceAction_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_SequenceAction_getTarget_R_arc_scene_Element 16
typedef jobject (*func_arc_scene_actions_SequenceAction_getTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_SequenceAction_setTarget_arc_scene_Element 17
typedef void (*func_arc_scene_actions_SequenceAction_setTarget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_SequenceAction_getPool_R_arc_util_pooling_Pool 18
typedef jobject (*func_arc_scene_actions_SequenceAction_getPool_R_arc_util_pooling_Pool)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_SequenceAction_setPool_arc_util_pooling_Pool 19
typedef void (*func_arc_scene_actions_SequenceAction_setPool_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_SequenceAction_addAction_arc_scene_Action 20
typedef void (*func_arc_scene_actions_SequenceAction_addAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_SequenceAction_getActions_R_arc_struct_Seq 21
typedef jobject (*func_arc_scene_actions_SequenceAction_getActions_R_arc_struct_Seq)(jcontext ctx, jobject self);

void mark_arc_scene_actions_SequenceAction(jobject object, jint mark, jint depth);
void clinit_arc_scene_actions_SequenceAction(jcontext ctx);
void init_arc_scene_actions_SequenceAction(jcontext ctx, jobject self);
void init_arc_scene_actions_SequenceAction_arc_scene_Action(jcontext ctx, jobject self, jobject param0);
void init_arc_scene_actions_SequenceAction_arc_scene_Action_arc_scene_Action(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_arc_scene_actions_SequenceAction_arc_scene_Action_arc_scene_Action_arc_scene_Action(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_arc_scene_actions_SequenceAction_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void init_arc_scene_actions_SequenceAction_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action_arc_scene_Action(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jbool M_arc_scene_actions_SequenceAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_actions_SequenceAction_restart(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
