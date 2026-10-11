#ifndef HEADER_arc_scene_actions_ColorAction
#define HEADER_arc_scene_actions_ColorAction

#include "Clearwing.h"
#include "arc/scene/actions/TemporalAction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_actions_ColorAction {
	arc_scene_actions_TemporalAction parent;
	jref F_end;
	jfloat F_startR;
	jfloat F_startG;
	jfloat F_startB;
	jfloat F_startA;
	jref F_color;
} arc_scene_actions_ColorAction;

extern Class class_arc_scene_actions_ColorAction;


#define VTABLE_arc_scene_actions_ColorAction_hashCode_R_int 0
typedef jint (*func_arc_scene_actions_ColorAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_actions_ColorAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_ColorAction_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_actions_ColorAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_actions_ColorAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_actions_ColorAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_finalize 5
typedef void (*func_arc_scene_actions_ColorAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_notify 6
typedef void (*func_arc_scene_actions_ColorAction_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_notifyAll 7
typedef void (*func_arc_scene_actions_ColorAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_wait 8
typedef void (*func_arc_scene_actions_ColorAction_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_wait_long 9
typedef void (*func_arc_scene_actions_ColorAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_actions_ColorAction_wait_long_int 10
typedef void (*func_arc_scene_actions_ColorAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_actions_ColorAction_reset 11
typedef void (*func_arc_scene_actions_ColorAction_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_act_float_R_boolean 12
typedef jbool (*func_arc_scene_actions_ColorAction_act_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_ColorAction_restart 13
typedef void (*func_arc_scene_actions_ColorAction_restart)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_getActor_R_arc_scene_Element 14
typedef jobject (*func_arc_scene_actions_ColorAction_getActor_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_setActor_arc_scene_Element 15
typedef void (*func_arc_scene_actions_ColorAction_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_ColorAction_getTarget_R_arc_scene_Element 16
typedef jobject (*func_arc_scene_actions_ColorAction_getTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_setTarget_arc_scene_Element 17
typedef void (*func_arc_scene_actions_ColorAction_setTarget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_ColorAction_getPool_R_arc_util_pooling_Pool 18
typedef jobject (*func_arc_scene_actions_ColorAction_getPool_R_arc_util_pooling_Pool)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_setPool_arc_util_pooling_Pool 19
typedef void (*func_arc_scene_actions_ColorAction_setPool_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_ColorAction_begin 20
typedef void (*func_arc_scene_actions_ColorAction_begin)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_end 21
typedef void (*func_arc_scene_actions_ColorAction_end)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_update_float 22
typedef void (*func_arc_scene_actions_ColorAction_update_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_ColorAction_finish 23
typedef void (*func_arc_scene_actions_ColorAction_finish)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_getTime_R_float 24
typedef jfloat (*func_arc_scene_actions_ColorAction_getTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_setTime_float 25
typedef void (*func_arc_scene_actions_ColorAction_setTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_ColorAction_getDuration_R_float 26
typedef jfloat (*func_arc_scene_actions_ColorAction_getDuration_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_setDuration_float 27
typedef void (*func_arc_scene_actions_ColorAction_setDuration_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_ColorAction_getInterpolation_R_arc_math_Interp 28
typedef jobject (*func_arc_scene_actions_ColorAction_getInterpolation_R_arc_math_Interp)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_setInterpolation_arc_math_Interp 29
typedef void (*func_arc_scene_actions_ColorAction_setInterpolation_arc_math_Interp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_ColorAction_isReverse_R_boolean 30
typedef jbool (*func_arc_scene_actions_ColorAction_isReverse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_setReverse_boolean 31
typedef void (*func_arc_scene_actions_ColorAction_setReverse_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_actions_ColorAction_getColor_R_arc_graphics_Color 32
typedef jobject (*func_arc_scene_actions_ColorAction_getColor_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_setColor_arc_graphics_Color 33
typedef void (*func_arc_scene_actions_ColorAction_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_ColorAction_getEndColor_R_arc_graphics_Color 34
typedef jobject (*func_arc_scene_actions_ColorAction_getEndColor_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_ColorAction_setEndColor_arc_graphics_Color 35
typedef void (*func_arc_scene_actions_ColorAction_setEndColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_actions_ColorAction(jobject object, jint mark, jint depth);
void clinit_arc_scene_actions_ColorAction(jcontext ctx);
void init_arc_scene_actions_ColorAction(jcontext ctx, jobject self);
void M_arc_scene_actions_ColorAction_begin(jcontext ctx, jobject self);
void M_arc_scene_actions_ColorAction_update_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_actions_ColorAction_reset(jcontext ctx, jobject self);
jobject M_arc_scene_actions_ColorAction_getColor_R_arc_graphics_Color(jcontext ctx, jobject self);
void M_arc_scene_actions_ColorAction_setColor_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_actions_ColorAction_getEndColor_R_arc_graphics_Color(jcontext ctx, jobject self);
void M_arc_scene_actions_ColorAction_setEndColor_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
