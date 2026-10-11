#ifndef HEADER_arc_scene_actions_RotateToAction
#define HEADER_arc_scene_actions_RotateToAction

#include "Clearwing.h"
#include "arc/scene/actions/TemporalAction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_actions_RotateToAction {
	arc_scene_actions_TemporalAction parent;
	jfloat F_start;
	jfloat F_end;
	jbool F_useShortestDirection;
} arc_scene_actions_RotateToAction;

extern Class class_arc_scene_actions_RotateToAction;


#define VTABLE_arc_scene_actions_RotateToAction_hashCode_R_int 0
typedef jint (*func_arc_scene_actions_RotateToAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_actions_RotateToAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_RotateToAction_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_actions_RotateToAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_actions_RotateToAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_actions_RotateToAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_finalize 5
typedef void (*func_arc_scene_actions_RotateToAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_notify 6
typedef void (*func_arc_scene_actions_RotateToAction_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_notifyAll 7
typedef void (*func_arc_scene_actions_RotateToAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_wait 8
typedef void (*func_arc_scene_actions_RotateToAction_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_wait_long 9
typedef void (*func_arc_scene_actions_RotateToAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_actions_RotateToAction_wait_long_int 10
typedef void (*func_arc_scene_actions_RotateToAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_actions_RotateToAction_reset 11
typedef void (*func_arc_scene_actions_RotateToAction_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_act_float_R_boolean 12
typedef jbool (*func_arc_scene_actions_RotateToAction_act_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_RotateToAction_restart 13
typedef void (*func_arc_scene_actions_RotateToAction_restart)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_getActor_R_arc_scene_Element 14
typedef jobject (*func_arc_scene_actions_RotateToAction_getActor_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_setActor_arc_scene_Element 15
typedef void (*func_arc_scene_actions_RotateToAction_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_RotateToAction_getTarget_R_arc_scene_Element 16
typedef jobject (*func_arc_scene_actions_RotateToAction_getTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_setTarget_arc_scene_Element 17
typedef void (*func_arc_scene_actions_RotateToAction_setTarget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_RotateToAction_getPool_R_arc_util_pooling_Pool 18
typedef jobject (*func_arc_scene_actions_RotateToAction_getPool_R_arc_util_pooling_Pool)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_setPool_arc_util_pooling_Pool 19
typedef void (*func_arc_scene_actions_RotateToAction_setPool_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_RotateToAction_begin 20
typedef void (*func_arc_scene_actions_RotateToAction_begin)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_end 21
typedef void (*func_arc_scene_actions_RotateToAction_end)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_update_float 22
typedef void (*func_arc_scene_actions_RotateToAction_update_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_RotateToAction_finish 23
typedef void (*func_arc_scene_actions_RotateToAction_finish)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_getTime_R_float 24
typedef jfloat (*func_arc_scene_actions_RotateToAction_getTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_setTime_float 25
typedef void (*func_arc_scene_actions_RotateToAction_setTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_RotateToAction_getDuration_R_float 26
typedef jfloat (*func_arc_scene_actions_RotateToAction_getDuration_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_setDuration_float 27
typedef void (*func_arc_scene_actions_RotateToAction_setDuration_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_RotateToAction_getInterpolation_R_arc_math_Interp 28
typedef jobject (*func_arc_scene_actions_RotateToAction_getInterpolation_R_arc_math_Interp)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_setInterpolation_arc_math_Interp 29
typedef void (*func_arc_scene_actions_RotateToAction_setInterpolation_arc_math_Interp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_RotateToAction_isReverse_R_boolean 30
typedef jbool (*func_arc_scene_actions_RotateToAction_isReverse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_setReverse_boolean 31
typedef void (*func_arc_scene_actions_RotateToAction_setReverse_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_actions_RotateToAction_getRotation_R_float 32
typedef jfloat (*func_arc_scene_actions_RotateToAction_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_setRotation_float 33
typedef void (*func_arc_scene_actions_RotateToAction_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_RotateToAction_isUseShortestDirection_R_boolean 34
typedef jbool (*func_arc_scene_actions_RotateToAction_isUseShortestDirection_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateToAction_setUseShortestDirection_boolean 35
typedef void (*func_arc_scene_actions_RotateToAction_setUseShortestDirection_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_arc_scene_actions_RotateToAction(jobject object, jint mark, jint depth);
void clinit_arc_scene_actions_RotateToAction(jcontext ctx);
void init_arc_scene_actions_RotateToAction(jcontext ctx, jobject self);
void init_arc_scene_actions_RotateToAction_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_scene_actions_RotateToAction_begin(jcontext ctx, jobject self);
void M_arc_scene_actions_RotateToAction_update_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_scene_actions_RotateToAction_getRotation_R_float(jcontext ctx, jobject self);
void M_arc_scene_actions_RotateToAction_setRotation_float(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_scene_actions_RotateToAction_isUseShortestDirection_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_actions_RotateToAction_setUseShortestDirection_boolean(jcontext ctx, jobject self, jbool param0);

#ifdef __cplusplus
}
#endif

#endif
