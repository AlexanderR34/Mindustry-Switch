#ifndef HEADER_arc_scene_actions_TranslateByAction
#define HEADER_arc_scene_actions_TranslateByAction

#include "Clearwing.h"
#include "arc/scene/actions/RelativeTemporalAction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_actions_TranslateByAction {
	arc_scene_actions_RelativeTemporalAction parent;
	jfloat F_amountX;
	jfloat F_amountY;
} arc_scene_actions_TranslateByAction;

extern Class class_arc_scene_actions_TranslateByAction;


#define VTABLE_arc_scene_actions_TranslateByAction_hashCode_R_int 0
typedef jint (*func_arc_scene_actions_TranslateByAction_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_actions_TranslateByAction_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TranslateByAction_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_actions_TranslateByAction_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_actions_TranslateByAction_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_actions_TranslateByAction_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_finalize 5
typedef void (*func_arc_scene_actions_TranslateByAction_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_notify 6
typedef void (*func_arc_scene_actions_TranslateByAction_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_notifyAll 7
typedef void (*func_arc_scene_actions_TranslateByAction_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_wait 8
typedef void (*func_arc_scene_actions_TranslateByAction_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_wait_long 9
typedef void (*func_arc_scene_actions_TranslateByAction_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_actions_TranslateByAction_wait_long_int 10
typedef void (*func_arc_scene_actions_TranslateByAction_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_actions_TranslateByAction_reset 11
typedef void (*func_arc_scene_actions_TranslateByAction_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_act_float_R_boolean 12
typedef jbool (*func_arc_scene_actions_TranslateByAction_act_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_TranslateByAction_restart 13
typedef void (*func_arc_scene_actions_TranslateByAction_restart)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_getActor_R_arc_scene_Element 14
typedef jobject (*func_arc_scene_actions_TranslateByAction_getActor_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_setActor_arc_scene_Element 15
typedef void (*func_arc_scene_actions_TranslateByAction_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TranslateByAction_getTarget_R_arc_scene_Element 16
typedef jobject (*func_arc_scene_actions_TranslateByAction_getTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_setTarget_arc_scene_Element 17
typedef void (*func_arc_scene_actions_TranslateByAction_setTarget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TranslateByAction_getPool_R_arc_util_pooling_Pool 18
typedef jobject (*func_arc_scene_actions_TranslateByAction_getPool_R_arc_util_pooling_Pool)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_setPool_arc_util_pooling_Pool 19
typedef void (*func_arc_scene_actions_TranslateByAction_setPool_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TranslateByAction_begin 20
typedef void (*func_arc_scene_actions_TranslateByAction_begin)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_end 21
typedef void (*func_arc_scene_actions_TranslateByAction_end)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_update_float 22
typedef void (*func_arc_scene_actions_TranslateByAction_update_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_TranslateByAction_finish 23
typedef void (*func_arc_scene_actions_TranslateByAction_finish)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_getTime_R_float 24
typedef jfloat (*func_arc_scene_actions_TranslateByAction_getTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_setTime_float 25
typedef void (*func_arc_scene_actions_TranslateByAction_setTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_TranslateByAction_getDuration_R_float 26
typedef jfloat (*func_arc_scene_actions_TranslateByAction_getDuration_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_setDuration_float 27
typedef void (*func_arc_scene_actions_TranslateByAction_setDuration_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_TranslateByAction_getInterpolation_R_arc_math_Interp 28
typedef jobject (*func_arc_scene_actions_TranslateByAction_getInterpolation_R_arc_math_Interp)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_setInterpolation_arc_math_Interp 29
typedef void (*func_arc_scene_actions_TranslateByAction_setInterpolation_arc_math_Interp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_actions_TranslateByAction_isReverse_R_boolean 30
typedef jbool (*func_arc_scene_actions_TranslateByAction_isReverse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_setReverse_boolean 31
typedef void (*func_arc_scene_actions_TranslateByAction_setReverse_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_scene_actions_TranslateByAction_updateRelative_float 32
typedef void (*func_arc_scene_actions_TranslateByAction_updateRelative_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_TranslateByAction_setAmount_float_float 33
typedef void (*func_arc_scene_actions_TranslateByAction_setAmount_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_actions_TranslateByAction_getAmountX_R_float 34
typedef jfloat (*func_arc_scene_actions_TranslateByAction_getAmountX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_setAmountX_float 35
typedef void (*func_arc_scene_actions_TranslateByAction_setAmountX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_actions_TranslateByAction_getAmountY_R_float 36
typedef jfloat (*func_arc_scene_actions_TranslateByAction_getAmountY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_actions_TranslateByAction_setAmountY_float 37
typedef void (*func_arc_scene_actions_TranslateByAction_setAmountY_float)(jcontext ctx, jobject self, jfloat param0);

void mark_arc_scene_actions_TranslateByAction(jobject object, jint mark, jint depth);
void clinit_arc_scene_actions_TranslateByAction(jcontext ctx);
void init_arc_scene_actions_TranslateByAction(jcontext ctx, jobject self);
void M_arc_scene_actions_TranslateByAction_updateRelative_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_scene_actions_TranslateByAction_setAmount_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jfloat M_arc_scene_actions_TranslateByAction_getAmountX_R_float(jcontext ctx, jobject self);
void M_arc_scene_actions_TranslateByAction_setAmountX_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_scene_actions_TranslateByAction_getAmountY_R_float(jcontext ctx, jobject self);
void M_arc_scene_actions_TranslateByAction_setAmountY_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
