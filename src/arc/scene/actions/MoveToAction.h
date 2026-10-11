#ifndef HEADER_arc_scene_actions_MoveToAction
#define HEADER_arc_scene_actions_MoveToAction

#include "Clearwing.h"
#include "arc/scene/actions/TemporalAction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_actions_MoveToAction {
	arc_scene_actions_TemporalAction parent;
	jfloat F_startX;
	jfloat F_startY;
	jfloat F_endX;
	jfloat F_endY;
	jint F_alignment;
} arc_scene_actions_MoveToAction;

extern Class class_arc_scene_actions_MoveToAction;


#define VTABLE_arc_scene_actions_MoveToAction_hashCode_R_int 0
typedef jint (*func_arc_scene_actions_MoveToAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_actions_MoveToAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_MoveToAction_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_actions_MoveToAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_actions_MoveToAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_actions_MoveToAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_finalize 5
typedef void (*func_arc_scene_actions_MoveToAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_notify 6
typedef void (*func_arc_scene_actions_MoveToAction_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_notifyAll 7
typedef void (*func_arc_scene_actions_MoveToAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_wait 8
typedef void (*func_arc_scene_actions_MoveToAction_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_wait_long 9
typedef void (*func_arc_scene_actions_MoveToAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_actions_MoveToAction_wait_long_int 10
typedef void (*func_arc_scene_actions_MoveToAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_actions_MoveToAction_reset 11
typedef void (*func_arc_scene_actions_MoveToAction_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_act_float_R_boolean 12
typedef jbool (*func_arc_scene_actions_MoveToAction_act_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_MoveToAction_restart 13
typedef void (*func_arc_scene_actions_MoveToAction_restart)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_getActor_R_arc_scene_Element 14
typedef jobject (*func_arc_scene_actions_MoveToAction_getActor_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_setActor_arc_scene_Element 15
typedef void (*func_arc_scene_actions_MoveToAction_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_MoveToAction_getTarget_R_arc_scene_Element 16
typedef jobject (*func_arc_scene_actions_MoveToAction_getTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_setTarget_arc_scene_Element 17
typedef void (*func_arc_scene_actions_MoveToAction_setTarget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_MoveToAction_getPool_R_arc_util_pooling_Pool 18
typedef jobject (*func_arc_scene_actions_MoveToAction_getPool_R_arc_util_pooling_Pool)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_setPool_arc_util_pooling_Pool 19
typedef void (*func_arc_scene_actions_MoveToAction_setPool_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_MoveToAction_begin 20
typedef void (*func_arc_scene_actions_MoveToAction_begin)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_end 21
typedef void (*func_arc_scene_actions_MoveToAction_end)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_update_float 22
typedef void (*func_arc_scene_actions_MoveToAction_update_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_MoveToAction_finish 23
typedef void (*func_arc_scene_actions_MoveToAction_finish)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_getTime_R_float 24
typedef jfloat (*func_arc_scene_actions_MoveToAction_getTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_setTime_float 25
typedef void (*func_arc_scene_actions_MoveToAction_setTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_MoveToAction_getDuration_R_float 26
typedef jfloat (*func_arc_scene_actions_MoveToAction_getDuration_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_setDuration_float 27
typedef void (*func_arc_scene_actions_MoveToAction_setDuration_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_MoveToAction_getInterpolation_R_arc_math_Interp 28
typedef jobject (*func_arc_scene_actions_MoveToAction_getInterpolation_R_arc_math_Interp)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_setInterpolation_arc_math_Interp 29
typedef void (*func_arc_scene_actions_MoveToAction_setInterpolation_arc_math_Interp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_MoveToAction_isReverse_R_boolean 30
typedef jbool (*func_arc_scene_actions_MoveToAction_isReverse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_setReverse_boolean 31
typedef void (*func_arc_scene_actions_MoveToAction_setReverse_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_actions_MoveToAction_setPosition_float_float 32
typedef void (*func_arc_scene_actions_MoveToAction_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_actions_MoveToAction_setPosition_float_float_int 33
typedef void (*func_arc_scene_actions_MoveToAction_setPosition_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_arc_scene_actions_MoveToAction_getX_R_float 34
typedef jfloat (*func_arc_scene_actions_MoveToAction_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_setX_float 35
typedef void (*func_arc_scene_actions_MoveToAction_setX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_MoveToAction_getY_R_float 36
typedef jfloat (*func_arc_scene_actions_MoveToAction_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_setY_float 37
typedef void (*func_arc_scene_actions_MoveToAction_setY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_MoveToAction_getAlignment_R_int 38
typedef jint (*func_arc_scene_actions_MoveToAction_getAlignment_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_MoveToAction_setAlignment_int 39
typedef void (*func_arc_scene_actions_MoveToAction_setAlignment_int)(jcontext ctx, jobject self, jint param0);

void mark_arc_scene_actions_MoveToAction(jobject object, jint mark, jint depth);
void clinit_arc_scene_actions_MoveToAction(jcontext ctx);
void init_arc_scene_actions_MoveToAction(jcontext ctx, jobject self);
void M_arc_scene_actions_MoveToAction_begin(jcontext ctx, jobject self);
void M_arc_scene_actions_MoveToAction_update_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_actions_MoveToAction_reset(jcontext ctx, jobject self);
void M_arc_scene_actions_MoveToAction_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_scene_actions_MoveToAction_setPosition_float_float_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
jfloat M_arc_scene_actions_MoveToAction_getX_R_float(jcontext ctx, jobject self);
void M_arc_scene_actions_MoveToAction_setX_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_scene_actions_MoveToAction_getY_R_float(jcontext ctx, jobject self);
void M_arc_scene_actions_MoveToAction_setY_float(jcontext ctx, jobject self, jfloat param0);
jint M_arc_scene_actions_MoveToAction_getAlignment_R_int(jcontext ctx, jobject self);
void M_arc_scene_actions_MoveToAction_setAlignment_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
