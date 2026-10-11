#ifndef HEADER_mindustry_ui_fragments_LoadingFragment
#define HEADER_mindustry_ui_fragments_LoadingFragment

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_fragments_LoadingFragment {
	java_lang_Object parent;
	jref F_table;
	jref F_button;
	jref F_bar;
	jref F_nameLabel;
	jref F_cancelListener;
	jfloat F_progValue;
} mindustry_ui_fragments_LoadingFragment;

extern Class class_mindustry_ui_fragments_LoadingFragment;


#define VTABLE_mindustry_ui_fragments_LoadingFragment_hashCode_R_int 0
typedef jint (*func_mindustry_ui_fragments_LoadingFragment_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_fragments_LoadingFragment_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_fragments_LoadingFragment_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_fragments_LoadingFragment_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_fragments_LoadingFragment_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_finalize 5
typedef void (*func_mindustry_ui_fragments_LoadingFragment_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_notify 6
typedef void (*func_mindustry_ui_fragments_LoadingFragment_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_notifyAll 7
typedef void (*func_mindustry_ui_fragments_LoadingFragment_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_wait 8
typedef void (*func_mindustry_ui_fragments_LoadingFragment_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_wait_long 9
typedef void (*func_mindustry_ui_fragments_LoadingFragment_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_wait_long_int 10
typedef void (*func_mindustry_ui_fragments_LoadingFragment_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_build_arc_scene_Group 11
typedef void (*func_mindustry_ui_fragments_LoadingFragment_build_arc_scene_Group)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_toFront 12
typedef void (*func_mindustry_ui_fragments_LoadingFragment_toFront)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_setProgress_arc_func_Floatp 13
typedef void (*func_mindustry_ui_fragments_LoadingFragment_setProgress_arc_func_Floatp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_snapProgress 14
typedef void (*func_mindustry_ui_fragments_LoadingFragment_snapProgress)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_setProgress_float 15
typedef void (*func_mindustry_ui_fragments_LoadingFragment_setProgress_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_showProgressBar 16
typedef void (*func_mindustry_ui_fragments_LoadingFragment_showProgressBar)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_showingProgress_R_boolean 17
typedef jbool (*func_mindustry_ui_fragments_LoadingFragment_showingProgress_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable 18
typedef void (*func_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_setText_java_lang_String 19
typedef void (*func_mindustry_ui_fragments_LoadingFragment_setText_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_setText_java_lang_String_arc_graphics_Color 20
typedef void (*func_mindustry_ui_fragments_LoadingFragment_setText_java_lang_String_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_show 21
typedef void (*func_mindustry_ui_fragments_LoadingFragment_show)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_show_java_lang_String 22
typedef void (*func_mindustry_ui_fragments_LoadingFragment_show_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_shown_R_boolean 23
typedef jbool (*func_mindustry_ui_fragments_LoadingFragment_shown_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_hide 24
typedef void (*func_mindustry_ui_fragments_LoadingFragment_hide)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_lambda$showProgressBar$0_R_float 25
typedef jfloat (*func_mindustry_ui_fragments_LoadingFragment_lambda$showProgressBar$0_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_lambda$setProgress$1_R_float 26
typedef jfloat (*func_mindustry_ui_fragments_LoadingFragment_lambda$setProgress$1_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_lambda$build$0_arc_scene_ui_layout_Table 27
typedef void (*func_mindustry_ui_fragments_LoadingFragment_lambda$build$0_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_lambda$build$3_arc_input_KeyCode 28
typedef void (*func_mindustry_ui_fragments_LoadingFragment_lambda$build$3_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_LoadingFragment_lambda$build$2 29
typedef void (*func_mindustry_ui_fragments_LoadingFragment_lambda$build$2)(jcontext ctx, jobject self);

void mark_mindustry_ui_fragments_LoadingFragment(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_fragments_LoadingFragment(jcontext ctx);
void init_mindustry_ui_fragments_LoadingFragment(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_LoadingFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_LoadingFragment_toFront(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_LoadingFragment_setProgress_arc_func_Floatp(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_LoadingFragment_snapProgress(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_LoadingFragment_setProgress_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_ui_fragments_LoadingFragment_showProgressBar(jcontext ctx, jobject self);
jbool M_mindustry_ui_fragments_LoadingFragment_showingProgress_R_boolean(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_LoadingFragment_setButton_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_LoadingFragment_setText_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_LoadingFragment_setText_java_lang_String_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_ui_fragments_LoadingFragment_show(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_LoadingFragment_show_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_ui_fragments_LoadingFragment_shown_R_boolean(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_LoadingFragment_hide(jcontext ctx, jobject self);
jfloat M_mindustry_ui_fragments_LoadingFragment_lambda$showProgressBar$0_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_ui_fragments_LoadingFragment_lambda$setProgress$1_R_float(jcontext ctx, jobject self);
jobject SM_mindustry_ui_fragments_LoadingFragment_lambda$setProgress$0_arc_func_Floatp_R_java_lang_String(jcontext ctx, jobject param0);
void M_mindustry_ui_fragments_LoadingFragment_lambda$build$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_LoadingFragment_lambda$build$3_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_LoadingFragment_lambda$build$2(jcontext ctx, jobject self);
void SM_mindustry_ui_fragments_LoadingFragment_lambda$build$1_arc_scene_ui_layout_Table_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);

#ifdef __cplusplus
}
#endif

#endif
