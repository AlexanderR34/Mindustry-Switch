#ifndef HEADER_arc_scene_actions_TimeScaleAction
#define HEADER_arc_scene_actions_TimeScaleAction

#include "Clearwing.h"
#include "arc/scene/actions/DelegateAction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_actions_TimeScaleAction {
	arc_scene_actions_DelegateAction parent;
	jfloat F_scale;
} arc_scene_actions_TimeScaleAction;

extern Class class_arc_scene_actions_TimeScaleAction;


#define VTABLE_arc_scene_actions_TimeScaleAction_hashCode_R_int 0
typedef jint (*func_arc_scene_actions_TimeScaleAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TimeScaleAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_actions_TimeScaleAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TimeScaleAction_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_actions_TimeScaleAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TimeScaleAction_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_actions_TimeScaleAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TimeScaleAction_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_actions_TimeScaleAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TimeScaleAction_finalize 5
typedef void (*func_arc_scene_actions_TimeScaleAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TimeScaleAction_notify 6
typedef void (*func_arc_scene_actions_TimeScaleAction_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TimeScaleAction_notifyAll 7
typedef void (*func_arc_scene_actions_TimeScaleAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TimeScaleAction_wait 8
typedef void (*func_arc_scene_actions_TimeScaleAction_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TimeScaleAction_wait_long 9
typedef void (*func_arc_scene_actions_TimeScaleAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_actions_TimeScaleAction_wait_long_int 10
typedef void (*func_arc_scene_actions_TimeScaleAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_actions_TimeScaleAction_reset 11
typedef void (*func_arc_scene_actions_TimeScaleAction_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TimeScaleAction_act_float_R_boolean 12
typedef jbool (*func_arc_scene_actions_TimeScaleAction_act_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_TimeScaleAction_restart 13
typedef void (*func_arc_scene_actions_TimeScaleAction_restart)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TimeScaleAction_getActor_R_arc_scene_Element 14
typedef jobject (*func_arc_scene_actions_TimeScaleAction_getActor_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TimeScaleAction_setActor_arc_scene_Element 15
typedef void (*func_arc_scene_actions_TimeScaleAction_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TimeScaleAction_getTarget_R_arc_scene_Element 16
typedef jobject (*func_arc_scene_actions_TimeScaleAction_getTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TimeScaleAction_setTarget_arc_scene_Element 17
typedef void (*func_arc_scene_actions_TimeScaleAction_setTarget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TimeScaleAction_getPool_R_arc_util_pooling_Pool 18
typedef jobject (*func_arc_scene_actions_TimeScaleAction_getPool_R_arc_util_pooling_Pool)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TimeScaleAction_setPool_arc_util_pooling_Pool 19
typedef void (*func_arc_scene_actions_TimeScaleAction_setPool_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TimeScaleAction_getAction_R_arc_scene_Action 20
typedef jobject (*func_arc_scene_actions_TimeScaleAction_getAction_R_arc_scene_Action)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TimeScaleAction_setAction_arc_scene_Action 21
typedef void (*func_arc_scene_actions_TimeScaleAction_setAction_arc_scene_Action)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TimeScaleAction_delegate_float_R_boolean 22
typedef jbool (*func_arc_scene_actions_TimeScaleAction_delegate_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_TimeScaleAction_getScale_R_float 23
typedef jfloat (*func_arc_scene_actions_TimeScaleAction_getScale_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TimeScaleAction_setScale_float 24
typedef void (*func_arc_scene_actions_TimeScaleAction_setScale_float)(jcontext ctx, jobject self, jfloat param0);

void mark_arc_scene_actions_TimeScaleAction(jobject object, jint mark, jint depth);
void clinit_arc_scene_actions_TimeScaleAction(jcontext ctx);
void init_arc_scene_actions_TimeScaleAction(jcontext ctx, jobject self);
jbool M_arc_scene_actions_TimeScaleAction_delegate_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_scene_actions_TimeScaleAction_getScale_R_float(jcontext ctx, jobject self);
void M_arc_scene_actions_TimeScaleAction_setScale_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
