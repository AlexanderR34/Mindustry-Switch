#ifndef HEADER_arc_scene_actions_TouchableAction
#define HEADER_arc_scene_actions_TouchableAction

#include "Clearwing.h"
#include "arc/scene/Action.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_actions_TouchableAction {
	arc_scene_Action parent;
	jref F_touchable;
} arc_scene_actions_TouchableAction;

extern Class class_arc_scene_actions_TouchableAction;


#define VTABLE_arc_scene_actions_TouchableAction_hashCode_R_int 0
typedef jint (*func_arc_scene_actions_TouchableAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TouchableAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_actions_TouchableAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TouchableAction_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_actions_TouchableAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TouchableAction_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_actions_TouchableAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TouchableAction_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_actions_TouchableAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TouchableAction_finalize 5
typedef void (*func_arc_scene_actions_TouchableAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TouchableAction_notify 6
typedef void (*func_arc_scene_actions_TouchableAction_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TouchableAction_notifyAll 7
typedef void (*func_arc_scene_actions_TouchableAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TouchableAction_wait 8
typedef void (*func_arc_scene_actions_TouchableAction_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TouchableAction_wait_long 9
typedef void (*func_arc_scene_actions_TouchableAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_actions_TouchableAction_wait_long_int 10
typedef void (*func_arc_scene_actions_TouchableAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_actions_TouchableAction_reset 11
typedef void (*func_arc_scene_actions_TouchableAction_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TouchableAction_act_float_R_boolean 12
typedef jbool (*func_arc_scene_actions_TouchableAction_act_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_TouchableAction_restart 13
typedef void (*func_arc_scene_actions_TouchableAction_restart)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TouchableAction_getActor_R_arc_scene_Element 14
typedef jobject (*func_arc_scene_actions_TouchableAction_getActor_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TouchableAction_setActor_arc_scene_Element 15
typedef void (*func_arc_scene_actions_TouchableAction_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TouchableAction_getTarget_R_arc_scene_Element 16
typedef jobject (*func_arc_scene_actions_TouchableAction_getTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TouchableAction_setTarget_arc_scene_Element 17
typedef void (*func_arc_scene_actions_TouchableAction_setTarget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TouchableAction_getPool_R_arc_util_pooling_Pool 18
typedef jobject (*func_arc_scene_actions_TouchableAction_getPool_R_arc_util_pooling_Pool)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TouchableAction_setPool_arc_util_pooling_Pool 19
typedef void (*func_arc_scene_actions_TouchableAction_setPool_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TouchableAction_getTouchable_R_arc_scene_event_Touchable 20
typedef jobject (*func_arc_scene_actions_TouchableAction_getTouchable_R_arc_scene_event_Touchable)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TouchableAction_touchable_arc_scene_event_Touchable 21
typedef void (*func_arc_scene_actions_TouchableAction_touchable_arc_scene_event_Touchable)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_actions_TouchableAction(jobject object, jint mark, jint depth);
void clinit_arc_scene_actions_TouchableAction(jcontext ctx);
void init_arc_scene_actions_TouchableAction(jcontext ctx, jobject self);
jbool M_arc_scene_actions_TouchableAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_scene_actions_TouchableAction_getTouchable_R_arc_scene_event_Touchable(jcontext ctx, jobject self);
void M_arc_scene_actions_TouchableAction_touchable_arc_scene_event_Touchable(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
