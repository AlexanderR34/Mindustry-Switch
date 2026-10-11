#ifndef HEADER_arc_scene_actions_TemporalAction
#define HEADER_arc_scene_actions_TemporalAction

#include "Clearwing.h"
#include "arc/scene/Action.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_actions_TemporalAction {
	arc_scene_Action parent;
	jfloat F_duration;
	jfloat F_time;
	jref F_interpolation;
	jbool F_reverse;
	jbool F_began;
	jbool F_complete;
} arc_scene_actions_TemporalAction;

extern Class class_arc_scene_actions_TemporalAction;


#define VTABLE_arc_scene_actions_TemporalAction_hashCode_R_int 0
typedef jint (*func_arc_scene_actions_TemporalAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_actions_TemporalAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TemporalAction_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_actions_TemporalAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_actions_TemporalAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_actions_TemporalAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_finalize 5
typedef void (*func_arc_scene_actions_TemporalAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_notify 6
typedef void (*func_arc_scene_actions_TemporalAction_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_notifyAll 7
typedef void (*func_arc_scene_actions_TemporalAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_wait 8
typedef void (*func_arc_scene_actions_TemporalAction_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_wait_long 9
typedef void (*func_arc_scene_actions_TemporalAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_actions_TemporalAction_wait_long_int 10
typedef void (*func_arc_scene_actions_TemporalAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_actions_TemporalAction_reset 11
typedef void (*func_arc_scene_actions_TemporalAction_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_act_float_R_boolean 12
typedef jbool (*func_arc_scene_actions_TemporalAction_act_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_TemporalAction_restart 13
typedef void (*func_arc_scene_actions_TemporalAction_restart)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_getActor_R_arc_scene_Element 14
typedef jobject (*func_arc_scene_actions_TemporalAction_getActor_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_setActor_arc_scene_Element 15
typedef void (*func_arc_scene_actions_TemporalAction_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TemporalAction_getTarget_R_arc_scene_Element 16
typedef jobject (*func_arc_scene_actions_TemporalAction_getTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_setTarget_arc_scene_Element 17
typedef void (*func_arc_scene_actions_TemporalAction_setTarget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TemporalAction_getPool_R_arc_util_pooling_Pool 18
typedef jobject (*func_arc_scene_actions_TemporalAction_getPool_R_arc_util_pooling_Pool)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_setPool_arc_util_pooling_Pool 19
typedef void (*func_arc_scene_actions_TemporalAction_setPool_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TemporalAction_begin 20
typedef void (*func_arc_scene_actions_TemporalAction_begin)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_end 21
typedef void (*func_arc_scene_actions_TemporalAction_end)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_update_float 22
typedef void (*func_arc_scene_actions_TemporalAction_update_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_TemporalAction_finish 23
typedef void (*func_arc_scene_actions_TemporalAction_finish)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_getTime_R_float 24
typedef jfloat (*func_arc_scene_actions_TemporalAction_getTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_setTime_float 25
typedef void (*func_arc_scene_actions_TemporalAction_setTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_TemporalAction_getDuration_R_float 26
typedef jfloat (*func_arc_scene_actions_TemporalAction_getDuration_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_setDuration_float 27
typedef void (*func_arc_scene_actions_TemporalAction_setDuration_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_TemporalAction_getInterpolation_R_arc_math_Interp 28
typedef jobject (*func_arc_scene_actions_TemporalAction_getInterpolation_R_arc_math_Interp)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_setInterpolation_arc_math_Interp 29
typedef void (*func_arc_scene_actions_TemporalAction_setInterpolation_arc_math_Interp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TemporalAction_isReverse_R_boolean 30
typedef jbool (*func_arc_scene_actions_TemporalAction_isReverse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TemporalAction_setReverse_boolean 31
typedef void (*func_arc_scene_actions_TemporalAction_setReverse_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_arc_scene_actions_TemporalAction(jobject object, jint mark, jint depth);
void clinit_arc_scene_actions_TemporalAction(jcontext ctx);
void init_arc_scene_actions_TemporalAction(jcontext ctx, jobject self);
void init_arc_scene_actions_TemporalAction_float(jcontext ctx, jobject self, jfloat param0);
void init_arc_scene_actions_TemporalAction_float_arc_math_Interp(jcontext ctx, jobject self, jfloat param0, jobject param1);
jbool M_arc_scene_actions_TemporalAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_actions_TemporalAction_begin(jcontext ctx, jobject self);
void M_arc_scene_actions_TemporalAction_end(jcontext ctx, jobject self);
void M_arc_scene_actions_TemporalAction_finish(jcontext ctx, jobject self);
void M_arc_scene_actions_TemporalAction_restart(jcontext ctx, jobject self);
void M_arc_scene_actions_TemporalAction_reset(jcontext ctx, jobject self);
jfloat M_arc_scene_actions_TemporalAction_getTime_R_float(jcontext ctx, jobject self);
void M_arc_scene_actions_TemporalAction_setTime_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_scene_actions_TemporalAction_getDuration_R_float(jcontext ctx, jobject self);
void M_arc_scene_actions_TemporalAction_setDuration_float(jcontext ctx, jobject self, jfloat param0);
jobject M_arc_scene_actions_TemporalAction_getInterpolation_R_arc_math_Interp(jcontext ctx, jobject self);
void M_arc_scene_actions_TemporalAction_setInterpolation_arc_math_Interp(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_actions_TemporalAction_isReverse_R_boolean(jcontext ctx, jobject self);
void M_arc_scene_actions_TemporalAction_setReverse_boolean(jcontext ctx, jobject self, jbool param0);

#ifdef __cplusplus
}
#endif

#endif
