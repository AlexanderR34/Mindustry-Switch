#ifndef HEADER_arc_scene_actions_AlphaAction
#define HEADER_arc_scene_actions_AlphaAction

#include "Clearwing.h"
#include "arc/scene/actions/TemporalAction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_actions_AlphaAction {
	arc_scene_actions_TemporalAction parent;
	jfloat F_start;
	jfloat F_end;
	jref F_color;
} arc_scene_actions_AlphaAction;

extern Class class_arc_scene_actions_AlphaAction;


#define VTABLE_arc_scene_actions_AlphaAction_hashCode_R_int 0
typedef jint (*func_arc_scene_actions_AlphaAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_actions_AlphaAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_AlphaAction_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_actions_AlphaAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_actions_AlphaAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_actions_AlphaAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_finalize 5
typedef void (*func_arc_scene_actions_AlphaAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_notify 6
typedef void (*func_arc_scene_actions_AlphaAction_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_notifyAll 7
typedef void (*func_arc_scene_actions_AlphaAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_wait 8
typedef void (*func_arc_scene_actions_AlphaAction_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_wait_long 9
typedef void (*func_arc_scene_actions_AlphaAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_actions_AlphaAction_wait_long_int 10
typedef void (*func_arc_scene_actions_AlphaAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_actions_AlphaAction_reset 11
typedef void (*func_arc_scene_actions_AlphaAction_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_act_float_R_boolean 12
typedef jbool (*func_arc_scene_actions_AlphaAction_act_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_AlphaAction_restart 13
typedef void (*func_arc_scene_actions_AlphaAction_restart)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_getActor_R_arc_scene_Element 14
typedef jobject (*func_arc_scene_actions_AlphaAction_getActor_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_setActor_arc_scene_Element 15
typedef void (*func_arc_scene_actions_AlphaAction_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_AlphaAction_getTarget_R_arc_scene_Element 16
typedef jobject (*func_arc_scene_actions_AlphaAction_getTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_setTarget_arc_scene_Element 17
typedef void (*func_arc_scene_actions_AlphaAction_setTarget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_AlphaAction_getPool_R_arc_util_pooling_Pool 18
typedef jobject (*func_arc_scene_actions_AlphaAction_getPool_R_arc_util_pooling_Pool)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_setPool_arc_util_pooling_Pool 19
typedef void (*func_arc_scene_actions_AlphaAction_setPool_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_AlphaAction_begin 20
typedef void (*func_arc_scene_actions_AlphaAction_begin)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_end 21
typedef void (*func_arc_scene_actions_AlphaAction_end)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_update_float 22
typedef void (*func_arc_scene_actions_AlphaAction_update_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_AlphaAction_finish 23
typedef void (*func_arc_scene_actions_AlphaAction_finish)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_getTime_R_float 24
typedef jfloat (*func_arc_scene_actions_AlphaAction_getTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_setTime_float 25
typedef void (*func_arc_scene_actions_AlphaAction_setTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_AlphaAction_getDuration_R_float 26
typedef jfloat (*func_arc_scene_actions_AlphaAction_getDuration_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_setDuration_float 27
typedef void (*func_arc_scene_actions_AlphaAction_setDuration_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_AlphaAction_getInterpolation_R_arc_math_Interp 28
typedef jobject (*func_arc_scene_actions_AlphaAction_getInterpolation_R_arc_math_Interp)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_setInterpolation_arc_math_Interp 29
typedef void (*func_arc_scene_actions_AlphaAction_setInterpolation_arc_math_Interp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_AlphaAction_isReverse_R_boolean 30
typedef jbool (*func_arc_scene_actions_AlphaAction_isReverse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_setReverse_boolean 31
typedef void (*func_arc_scene_actions_AlphaAction_setReverse_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_actions_AlphaAction_getColor_R_arc_graphics_Color 32
typedef jobject (*func_arc_scene_actions_AlphaAction_getColor_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_setColor_arc_graphics_Color 33
typedef void (*func_arc_scene_actions_AlphaAction_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_AlphaAction_getAlpha_R_float 34
typedef jfloat (*func_arc_scene_actions_AlphaAction_getAlpha_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_AlphaAction_setAlpha_float 35
typedef void (*func_arc_scene_actions_AlphaAction_setAlpha_float)(jcontext ctx, jobject self, jfloat param0);

void mark_arc_scene_actions_AlphaAction(jobject object, jint mark, jint depth);
void clinit_arc_scene_actions_AlphaAction(jcontext ctx);
void init_arc_scene_actions_AlphaAction(jcontext ctx, jobject self);
void M_arc_scene_actions_AlphaAction_begin(jcontext ctx, jobject self);
void M_arc_scene_actions_AlphaAction_update_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_actions_AlphaAction_reset(jcontext ctx, jobject self);
jobject M_arc_scene_actions_AlphaAction_getColor_R_arc_graphics_Color(jcontext ctx, jobject self);
void M_arc_scene_actions_AlphaAction_setColor_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_scene_actions_AlphaAction_getAlpha_R_float(jcontext ctx, jobject self);
void M_arc_scene_actions_AlphaAction_setAlpha_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
