#ifndef HEADER_arc_scene_actions_RotateByAction
#define HEADER_arc_scene_actions_RotateByAction

#include "Clearwing.h"
#include "arc/scene/actions/RelativeTemporalAction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_actions_RotateByAction {
	arc_scene_actions_RelativeTemporalAction parent;
	jfloat F_amount;
} arc_scene_actions_RotateByAction;

extern Class class_arc_scene_actions_RotateByAction;


#define VTABLE_arc_scene_actions_RotateByAction_hashCode_R_int 0
typedef jint (*func_arc_scene_actions_RotateByAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_actions_RotateByAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_RotateByAction_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_actions_RotateByAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_actions_RotateByAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_actions_RotateByAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_finalize 5
typedef void (*func_arc_scene_actions_RotateByAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_notify 6
typedef void (*func_arc_scene_actions_RotateByAction_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_notifyAll 7
typedef void (*func_arc_scene_actions_RotateByAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_wait 8
typedef void (*func_arc_scene_actions_RotateByAction_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_wait_long 9
typedef void (*func_arc_scene_actions_RotateByAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_actions_RotateByAction_wait_long_int 10
typedef void (*func_arc_scene_actions_RotateByAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_actions_RotateByAction_reset 11
typedef void (*func_arc_scene_actions_RotateByAction_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_act_float_R_boolean 12
typedef jbool (*func_arc_scene_actions_RotateByAction_act_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_RotateByAction_restart 13
typedef void (*func_arc_scene_actions_RotateByAction_restart)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_getActor_R_arc_scene_Element 14
typedef jobject (*func_arc_scene_actions_RotateByAction_getActor_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_setActor_arc_scene_Element 15
typedef void (*func_arc_scene_actions_RotateByAction_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_RotateByAction_getTarget_R_arc_scene_Element 16
typedef jobject (*func_arc_scene_actions_RotateByAction_getTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_setTarget_arc_scene_Element 17
typedef void (*func_arc_scene_actions_RotateByAction_setTarget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_RotateByAction_getPool_R_arc_util_pooling_Pool 18
typedef jobject (*func_arc_scene_actions_RotateByAction_getPool_R_arc_util_pooling_Pool)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_setPool_arc_util_pooling_Pool 19
typedef void (*func_arc_scene_actions_RotateByAction_setPool_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_RotateByAction_begin 20
typedef void (*func_arc_scene_actions_RotateByAction_begin)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_end 21
typedef void (*func_arc_scene_actions_RotateByAction_end)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_update_float 22
typedef void (*func_arc_scene_actions_RotateByAction_update_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_RotateByAction_finish 23
typedef void (*func_arc_scene_actions_RotateByAction_finish)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_getTime_R_float 24
typedef jfloat (*func_arc_scene_actions_RotateByAction_getTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_setTime_float 25
typedef void (*func_arc_scene_actions_RotateByAction_setTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_RotateByAction_getDuration_R_float 26
typedef jfloat (*func_arc_scene_actions_RotateByAction_getDuration_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_setDuration_float 27
typedef void (*func_arc_scene_actions_RotateByAction_setDuration_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_RotateByAction_getInterpolation_R_arc_math_Interp 28
typedef jobject (*func_arc_scene_actions_RotateByAction_getInterpolation_R_arc_math_Interp)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_setInterpolation_arc_math_Interp 29
typedef void (*func_arc_scene_actions_RotateByAction_setInterpolation_arc_math_Interp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_RotateByAction_isReverse_R_boolean 30
typedef jbool (*func_arc_scene_actions_RotateByAction_isReverse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_setReverse_boolean 31
typedef void (*func_arc_scene_actions_RotateByAction_setReverse_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_actions_RotateByAction_updateRelative_float 32
typedef void (*func_arc_scene_actions_RotateByAction_updateRelative_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_RotateByAction_getAmount_R_float 33
typedef jfloat (*func_arc_scene_actions_RotateByAction_getAmount_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_RotateByAction_setAmount_float 34
typedef void (*func_arc_scene_actions_RotateByAction_setAmount_float)(jcontext ctx, jobject self, jfloat param0);

void mark_arc_scene_actions_RotateByAction(jobject object, jint mark, jint depth);
void clinit_arc_scene_actions_RotateByAction(jcontext ctx);
void init_arc_scene_actions_RotateByAction(jcontext ctx, jobject self);
void M_arc_scene_actions_RotateByAction_updateRelative_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_scene_actions_RotateByAction_getAmount_R_float(jcontext ctx, jobject self);
void M_arc_scene_actions_RotateByAction_setAmount_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
