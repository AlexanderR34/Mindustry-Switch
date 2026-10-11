#ifndef HEADER_arc_scene_ui_ButtonGroup
#define HEADER_arc_scene_ui_ButtonGroup

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_ButtonGroup {
	java_lang_Object parent;
	jref F_buttons;
	jref F_checkedButtons;
	jint F_minCheckCount;
	jint F_maxCheckCount;
	jbool F_uncheckLast;
	jref F_lastChecked;
} arc_scene_ui_ButtonGroup;

extern Class class_arc_scene_ui_ButtonGroup;


#define VTABLE_arc_scene_ui_ButtonGroup_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_ButtonGroup_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ButtonGroup_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_ButtonGroup_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ButtonGroup_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_ButtonGroup_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ButtonGroup_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_ButtonGroup_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ButtonGroup_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_ButtonGroup_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ButtonGroup_finalize 5
typedef void (*func_arc_scene_ui_ButtonGroup_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ButtonGroup_notify 6
typedef void (*func_arc_scene_ui_ButtonGroup_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ButtonGroup_notifyAll 7
typedef void (*func_arc_scene_ui_ButtonGroup_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ButtonGroup_wait 8
typedef void (*func_arc_scene_ui_ButtonGroup_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ButtonGroup_wait_long 9
typedef void (*func_arc_scene_ui_ButtonGroup_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_ButtonGroup_wait_long_int 10
typedef void (*func_arc_scene_ui_ButtonGroup_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button 11
typedef void (*func_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ButtonGroup_add_Array1_arc_scene_ui_Button 12
typedef void (*func_arc_scene_ui_ButtonGroup_add_Array1_arc_scene_ui_Button)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ButtonGroup_remove_arc_scene_ui_Button 13
typedef void (*func_arc_scene_ui_ButtonGroup_remove_arc_scene_ui_Button)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ButtonGroup_remove_Array1_arc_scene_ui_Button 14
typedef void (*func_arc_scene_ui_ButtonGroup_remove_Array1_arc_scene_ui_Button)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ButtonGroup_clear 15
typedef void (*func_arc_scene_ui_ButtonGroup_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ButtonGroup_canCheck_arc_scene_ui_Button_boolean_R_boolean 16
typedef jbool (*func_arc_scene_ui_ButtonGroup_canCheck_arc_scene_ui_Button_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_scene_ui_ButtonGroup_uncheckAll 17
typedef void (*func_arc_scene_ui_ButtonGroup_uncheckAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ButtonGroup_getChecked_R_arc_scene_ui_Button 18
typedef jobject (*func_arc_scene_ui_ButtonGroup_getChecked_R_arc_scene_ui_Button)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ButtonGroup_setChecked_java_lang_String 19
typedef void (*func_arc_scene_ui_ButtonGroup_setChecked_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_ButtonGroup_getCheckedIndex_R_int 20
typedef jint (*func_arc_scene_ui_ButtonGroup_getCheckedIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ButtonGroup_getAllChecked_R_arc_struct_Seq 21
typedef jobject (*func_arc_scene_ui_ButtonGroup_getAllChecked_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ButtonGroup_getButtons_R_arc_struct_Seq 22
typedef jobject (*func_arc_scene_ui_ButtonGroup_getButtons_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_ButtonGroup_setMinCheckCount_int 23
typedef void (*func_arc_scene_ui_ButtonGroup_setMinCheckCount_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_ButtonGroup_setMaxCheckCount_int 24
typedef void (*func_arc_scene_ui_ButtonGroup_setMaxCheckCount_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_scene_ui_ButtonGroup_setUncheckLast_boolean 25
typedef void (*func_arc_scene_ui_ButtonGroup_setUncheckLast_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_arc_scene_ui_ButtonGroup(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_ButtonGroup(jcontext ctx);
void init_arc_scene_ui_ButtonGroup(jcontext ctx, jobject self);
void init_arc_scene_ui_ButtonGroup_Array1_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_ButtonGroup_add_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_ButtonGroup_add_Array1_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_ButtonGroup_remove_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_ButtonGroup_remove_Array1_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_ButtonGroup_clear(jcontext ctx, jobject self);
jbool M_arc_scene_ui_ButtonGroup_canCheck_arc_scene_ui_Button_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_scene_ui_ButtonGroup_uncheckAll(jcontext ctx, jobject self);
jobject M_arc_scene_ui_ButtonGroup_getChecked_R_arc_scene_ui_Button(jcontext ctx, jobject self);
void M_arc_scene_ui_ButtonGroup_setChecked_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_arc_scene_ui_ButtonGroup_getCheckedIndex_R_int(jcontext ctx, jobject self);
jobject M_arc_scene_ui_ButtonGroup_getAllChecked_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_scene_ui_ButtonGroup_getButtons_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_arc_scene_ui_ButtonGroup_setMinCheckCount_int(jcontext ctx, jobject self, jint param0);
void M_arc_scene_ui_ButtonGroup_setMaxCheckCount_int(jcontext ctx, jobject self, jint param0);
void M_arc_scene_ui_ButtonGroup_setUncheckLast_boolean(jcontext ctx, jobject self, jbool param0);

#ifdef __cplusplus
}
#endif

#endif
