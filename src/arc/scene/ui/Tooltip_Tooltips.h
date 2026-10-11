#ifndef HEADER_arc_scene_ui_Tooltip$Tooltips
#define HEADER_arc_scene_ui_Tooltip$Tooltips

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_Tooltip$Tooltips {
	java_lang_Object parent;
	jref F_textProvider;
	jfloat F_initialTime;
	jfloat F_subsequentTime;
	jfloat F_resetTime;
	jbool F_enabled;
	jbool F_animations;
	jfloat F_offsetX;
	jfloat F_offsetY;
	jfloat F_edgeDistance;
	jfloat F_time;
	jref F_resetTask;
	jref F_showTooltip;
	jref F_showTask;
} arc_scene_ui_Tooltip$Tooltips;

extern Class class_arc_scene_ui_Tooltip$Tooltips;

extern jobject SF_arc_scene_ui_Tooltip$Tooltips_instance;

#define VTABLE_arc_scene_ui_Tooltip$Tooltips_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_Tooltip$Tooltips_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_Tooltip$Tooltips_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_Tooltip$Tooltips_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_Tooltip$Tooltips_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_Tooltip$Tooltips_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_finalize 5
typedef void (*func_arc_scene_ui_Tooltip$Tooltips_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_notify 6
typedef void (*func_arc_scene_ui_Tooltip$Tooltips_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_notifyAll 7
typedef void (*func_arc_scene_ui_Tooltip$Tooltips_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_wait 8
typedef void (*func_arc_scene_ui_Tooltip$Tooltips_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_wait_long 9
typedef void (*func_arc_scene_ui_Tooltip$Tooltips_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_wait_long_int 10
typedef void (*func_arc_scene_ui_Tooltip$Tooltips_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_R_arc_scene_ui_Tooltip 11
typedef jobject (*func_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_R_arc_scene_ui_Tooltip)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_boolean_R_arc_scene_ui_Tooltip 12
typedef jobject (*func_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_boolean_R_arc_scene_ui_Tooltip)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_touchDown_arc_scene_ui_Tooltip 13
typedef void (*func_arc_scene_ui_Tooltip$Tooltips_touchDown_arc_scene_ui_Tooltip)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_enter_arc_scene_ui_Tooltip 14
typedef void (*func_arc_scene_ui_Tooltip$Tooltips_enter_arc_scene_ui_Tooltip)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_hide_arc_scene_ui_Tooltip 15
typedef void (*func_arc_scene_ui_Tooltip$Tooltips_hide_arc_scene_ui_Tooltip)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_showAction_arc_scene_ui_Tooltip 16
typedef void (*func_arc_scene_ui_Tooltip$Tooltips_showAction_arc_scene_ui_Tooltip)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_hideAction_arc_scene_ui_Tooltip 17
typedef void (*func_arc_scene_ui_Tooltip$Tooltips_hideAction_arc_scene_ui_Tooltip)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Tooltip$Tooltips_instant 18
typedef void (*func_arc_scene_ui_Tooltip$Tooltips_instant)(jcontext ctx, jobject self);

void mark_arc_scene_ui_Tooltip$Tooltips(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_Tooltip$Tooltips(jcontext ctx);
void init_arc_scene_ui_Tooltip$Tooltips(jcontext ctx, jobject self);
jobject SM_arc_scene_ui_Tooltip$Tooltips_getInstance_R_arc_scene_ui_Tooltip$Tooltips(jcontext ctx);
jobject M_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_R_arc_scene_ui_Tooltip(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_ui_Tooltip$Tooltips_create_java_lang_String_boolean_R_arc_scene_ui_Tooltip(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_scene_ui_Tooltip$Tooltips_touchDown_arc_scene_ui_Tooltip(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_Tooltip$Tooltips_enter_arc_scene_ui_Tooltip(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_Tooltip$Tooltips_hide_arc_scene_ui_Tooltip(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_Tooltip$Tooltips_showAction_arc_scene_ui_Tooltip(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_Tooltip$Tooltips_hideAction_arc_scene_ui_Tooltip(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_Tooltip$Tooltips_instant(jcontext ctx, jobject self);
jobject SM_arc_scene_ui_Tooltip$Tooltips_lambda$new$0_java_lang_String_R_arc_scene_ui_Tooltip(jcontext ctx, jobject param0);
void SM_arc_scene_ui_Tooltip$Tooltips_lambda$new$1_java_lang_String_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
