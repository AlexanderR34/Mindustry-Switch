#ifndef HEADER_mindustry_ui_dialogs_ResearchDialog$View$1
#define HEADER_mindustry_ui_dialogs_ResearchDialog$View$1

#include "Clearwing.h"
#include "arc/scene/actions/RelativeTemporalAction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_dialogs_ResearchDialog$View$1 {
	arc_scene_actions_RelativeTemporalAction parent;
	jfloat F_val$moveBy;
	jref F_this$1;
} mindustry_ui_dialogs_ResearchDialog$View$1;

extern Class class_mindustry_ui_dialogs_ResearchDialog$View$1;


#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_hashCode_R_int 0
typedef jint (*func_mindustry_ui_dialogs_ResearchDialog$View$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_dialogs_ResearchDialog$View$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_dialogs_ResearchDialog$View$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_dialogs_ResearchDialog$View$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_dialogs_ResearchDialog$View$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_finalize 5
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_notify 6
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_notifyAll 7
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_wait 8
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_wait_long 9
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_wait_long_int 10
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_reset 11
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_act_float_R_boolean 12
typedef jbool (*func_mindustry_ui_dialogs_ResearchDialog$View$1_act_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_restart 13
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_restart)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_getActor_R_arc_scene_Element 14
typedef jobject (*func_mindustry_ui_dialogs_ResearchDialog$View$1_getActor_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_setActor_arc_scene_Element 15
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_getTarget_R_arc_scene_Element 16
typedef jobject (*func_mindustry_ui_dialogs_ResearchDialog$View$1_getTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_setTarget_arc_scene_Element 17
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_setTarget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_getPool_R_arc_util_pooling_Pool 18
typedef jobject (*func_mindustry_ui_dialogs_ResearchDialog$View$1_getPool_R_arc_util_pooling_Pool)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_setPool_arc_util_pooling_Pool 19
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_setPool_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_begin 20
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_begin)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_end 21
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_end)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_update_float 22
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_update_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_finish 23
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_finish)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_getTime_R_float 24
typedef jfloat (*func_mindustry_ui_dialogs_ResearchDialog$View$1_getTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_setTime_float 25
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_setTime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_getDuration_R_float 26
typedef jfloat (*func_mindustry_ui_dialogs_ResearchDialog$View$1_getDuration_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_setDuration_float 27
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_setDuration_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_getInterpolation_R_arc_math_Interp 28
typedef jobject (*func_mindustry_ui_dialogs_ResearchDialog$View$1_getInterpolation_R_arc_math_Interp)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_setInterpolation_arc_math_Interp 29
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_setInterpolation_arc_math_Interp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_isReverse_R_boolean 30
typedef jbool (*func_mindustry_ui_dialogs_ResearchDialog$View$1_isReverse_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_setReverse_boolean 31
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_setReverse_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_dialogs_ResearchDialog$View$1_updateRelative_float 32
typedef void (*func_mindustry_ui_dialogs_ResearchDialog$View$1_updateRelative_float)(jcontext ctx, jobject self, jfloat param0);

void mark_mindustry_ui_dialogs_ResearchDialog$View$1(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_dialogs_ResearchDialog$View$1(jcontext ctx);
void init_mindustry_ui_dialogs_ResearchDialog$View$1_mindustry_ui_dialogs_ResearchDialog$View_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_ui_dialogs_ResearchDialog$View$1_updateRelative_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
