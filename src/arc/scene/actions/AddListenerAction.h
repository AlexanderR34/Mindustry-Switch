#ifndef HEADER_arc_scene_actions_AddListenerAction
#define HEADER_arc_scene_actions_AddListenerAction

#include "Clearwing.h"
#include "arc/scene/Action.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_actions_AddListenerAction {
	arc_scene_Action parent;
	jref F_listener;
	jbool F_capture;
} arc_scene_actions_AddListenerAction;

extern Class class_arc_scene_actions_AddListenerAction;


#define VTABLE_arc_scene_actions_AddListenerAction_hashCode_R_int 0
typedef jint (*func_arc_scene_actions_AddListenerAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AddListenerAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_actions_AddListenerAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_AddListenerAction_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_actions_AddListenerAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AddListenerAction_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_actions_AddListenerAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AddListenerAction_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_actions_AddListenerAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AddListenerAction_finalize 5
typedef void (*func_arc_scene_actions_AddListenerAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AddListenerAction_notify 6
typedef void (*func_arc_scene_actions_AddListenerAction_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AddListenerAction_notifyAll 7
typedef void (*func_arc_scene_actions_AddListenerAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AddListenerAction_wait 8
typedef void (*func_arc_scene_actions_AddListenerAction_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AddListenerAction_wait_long 9
typedef void (*func_arc_scene_actions_AddListenerAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_actions_AddListenerAction_wait_long_int 10
typedef void (*func_arc_scene_actions_AddListenerAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_actions_AddListenerAction_reset 11
typedef void (*func_arc_scene_actions_AddListenerAction_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AddListenerAction_act_float_R_boolean 12
typedef jbool (*func_arc_scene_actions_AddListenerAction_act_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_AddListenerAction_restart 13
typedef void (*func_arc_scene_actions_AddListenerAction_restart)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AddListenerAction_getActor_R_arc_scene_Element 14
typedef jobject (*func_arc_scene_actions_AddListenerAction_getActor_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AddListenerAction_setActor_arc_scene_Element 15
typedef void (*func_arc_scene_actions_AddListenerAction_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_AddListenerAction_getTarget_R_arc_scene_Element 16
typedef jobject (*func_arc_scene_actions_AddListenerAction_getTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AddListenerAction_setTarget_arc_scene_Element 17
typedef void (*func_arc_scene_actions_AddListenerAction_setTarget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_AddListenerAction_getPool_R_arc_util_pooling_Pool 18
typedef jobject (*func_arc_scene_actions_AddListenerAction_getPool_R_arc_util_pooling_Pool)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AddListenerAction_setPool_arc_util_pooling_Pool 19
typedef void (*func_arc_scene_actions_AddListenerAction_setPool_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_AddListenerAction_getListener_R_arc_scene_event_EventListener 20
typedef jobject (*func_arc_scene_actions_AddListenerAction_getListener_R_arc_scene_event_EventListener)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AddListenerAction_setListener_arc_scene_event_EventListener 21
typedef void (*func_arc_scene_actions_AddListenerAction_setListener_arc_scene_event_EventListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_AddListenerAction_getCapture_R_boolean 22
typedef jbool (*func_arc_scene_actions_AddListenerAction_getCapture_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AddListenerAction_setCapture_boolean 23
typedef void (*func_arc_scene_actions_AddListenerAction_setCapture_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_arc_scene_actions_AddListenerAction(jobject object, jint mark, jint depth);
void clinit_arc_scene_actions_AddListenerAction(jcontext ctx);
void init_arc_scene_actions_AddListenerAction(jcontext ctx, jobject self);
jbool M_arc_scene_actions_AddListenerAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_scene_actions_AddListenerAction_getListener_R_arc_scene_event_EventListener(jcontext ctx, jobject self);
void M_arc_scene_actions_AddListenerAction_setListener_arc_scene_event_EventListener(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_actions_AddListenerAction_getCapture_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_actions_AddListenerAction_setCapture_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_actions_AddListenerAction_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
