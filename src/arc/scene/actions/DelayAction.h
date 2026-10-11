#ifndef HEADER_arc_scene_actions_DelayAction
#define HEADER_arc_scene_actions_DelayAction

#include "Clearwing.h"
#include "arc/scene/actions/DelegateAction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_actions_DelayAction {
	arc_scene_actions_DelegateAction parent;
	jfloat F_duration;
	jfloat F_time;
} arc_scene_actions_DelayAction;

extern Class class_arc_scene_actions_DelayAction;


#define VTABLE_arc_scene_actions_DelayAction_hashCode_R_int 0
typedef jint (*func_arc_scene_actions_DelayAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_actions_DelayAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_DelayAction_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_actions_DelayAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_actions_DelayAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_actions_DelayAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_finalize 5
typedef void (*func_arc_scene_actions_DelayAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_notify 6
typedef void (*func_arc_scene_actions_DelayAction_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_notifyAll 7
typedef void (*func_arc_scene_actions_DelayAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_wait 8
typedef void (*func_arc_scene_actions_DelayAction_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_wait_long 9
typedef void (*func_arc_scene_actions_DelayAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_actions_DelayAction_wait_long_int 10
typedef void (*func_arc_scene_actions_DelayAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_actions_DelayAction_reset 11
typedef void (*func_arc_scene_actions_DelayAction_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_act_float_R_boolean 12
typedef jbool (*func_arc_scene_actions_DelayAction_act_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_DelayAction_restart 13
typedef void (*func_arc_scene_actions_DelayAction_restart)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_getActor_R_arc_scene_Element 14
typedef jobject (*func_arc_scene_actions_DelayAction_getActor_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_setActor_arc_scene_Element 15
typedef void (*func_arc_scene_actions_DelayAction_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_DelayAction_getTarget_R_arc_scene_Element 16
typedef jobject (*func_arc_scene_actions_DelayAction_getTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_setTarget_arc_scene_Element 17
typedef void (*func_arc_scene_actions_DelayAction_setTarget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_DelayAction_getPool_R_arc_util_pooling_Pool 18
typedef jobject (*func_arc_scene_actions_DelayAction_getPool_R_arc_util_pooling_Pool)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_setPool_arc_util_pooling_Pool 19
typedef void (*func_arc_scene_actions_DelayAction_setPool_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_DelayAction_getAction_R_arc_scene_Action 20
typedef jobject (*func_arc_scene_actions_DelayAction_getAction_R_arc_scene_Action)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_setAction_arc_scene_Action 21
typedef void (*func_arc_scene_actions_DelayAction_setAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_DelayAction_delegate_float_R_boolean 22
typedef jbool (*func_arc_scene_actions_DelayAction_delegate_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_DelayAction_finish 23
typedef void (*func_arc_scene_actions_DelayAction_finish)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_getTime_R_float 24
typedef jfloat (*func_arc_scene_actions_DelayAction_getTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_setTime_float 25
typedef void (*func_arc_scene_actions_DelayAction_setTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_DelayAction_getDuration_R_float 26
typedef jfloat (*func_arc_scene_actions_DelayAction_getDuration_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_DelayAction_setDuration_float 27
typedef void (*func_arc_scene_actions_DelayAction_setDuration_float)(jcontext ctx, jobject self, jfloat param0);

void mark_arc_scene_actions_DelayAction(jobject object, jint mark, jint depth);
void clinit_arc_scene_actions_DelayAction(jcontext ctx);
void init_arc_scene_actions_DelayAction(jcontext ctx, jobject self);
void init_arc_scene_actions_DelayAction_float(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_scene_actions_DelayAction_delegate_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_actions_DelayAction_finish(jcontext ctx, jobject self);
void M_arc_scene_actions_DelayAction_restart(jcontext ctx, jobject self);
jfloat M_arc_scene_actions_DelayAction_getTime_R_float(jcontext ctx, jobject self);
void M_arc_scene_actions_DelayAction_setTime_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_scene_actions_DelayAction_getDuration_R_float(jcontext ctx, jobject self);
void M_arc_scene_actions_DelayAction_setDuration_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
