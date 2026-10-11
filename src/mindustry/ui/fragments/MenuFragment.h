#ifndef HEADER_mindustry_ui_fragments_MenuFragment
#define HEADER_mindustry_ui_fragments_MenuFragment

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_fragments_MenuFragment {
	java_lang_Object parent;
	jref F_container;
	jref F_submenu;
	jref F_currentMenu;
	jref F_renderer;
	jref F_customButtons;
	jref F_desktopButtons;
} mindustry_ui_fragments_MenuFragment;

extern Class class_mindustry_ui_fragments_MenuFragment;


#define VTABLE_mindustry_ui_fragments_MenuFragment_hashCode_R_int 0
typedef jint (*func_mindustry_ui_fragments_MenuFragment_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_fragments_MenuFragment_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_MenuFragment_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_fragments_MenuFragment_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_fragments_MenuFragment_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_fragments_MenuFragment_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_finalize 5
typedef void (*func_mindustry_ui_fragments_MenuFragment_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_notify 6
typedef void (*func_mindustry_ui_fragments_MenuFragment_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_notifyAll 7
typedef void (*func_mindustry_ui_fragments_MenuFragment_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_wait 8
typedef void (*func_mindustry_ui_fragments_MenuFragment_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_wait_long 9
typedef void (*func_mindustry_ui_fragments_MenuFragment_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_fragments_MenuFragment_wait_long_int 10
typedef void (*func_mindustry_ui_fragments_MenuFragment_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_fragments_MenuFragment_build_arc_scene_Group 11
typedef void (*func_mindustry_ui_fragments_MenuFragment_build_arc_scene_Group)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_MenuFragment_buildMobile 12
typedef void (*func_mindustry_ui_fragments_MenuFragment_buildMobile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_buildDesktop 13
typedef void (*func_mindustry_ui_fragments_MenuFragment_buildDesktop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable 14
typedef void (*func_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_MenuFragment_fadeInMenu 15
typedef void (*func_mindustry_ui_fragments_MenuFragment_fadeInMenu)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_fadeOutMenu 16
typedef void (*func_mindustry_ui_fragments_MenuFragment_fadeOutMenu)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_buttons_arc_scene_ui_layout_Table_Array1_mindustry_ui_fragments_MenuFragment$MenuButton 17
typedef void (*func_mindustry_ui_fragments_MenuFragment_buttons_arc_scene_ui_layout_Table_Array1_mindustry_ui_fragments_MenuFragment$MenuButton)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_fragments_MenuFragment_addButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable 18
typedef void (*func_mindustry_ui_fragments_MenuFragment_addButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_ui_fragments_MenuFragment_addButton_java_lang_String_java_lang_Runnable 19
typedef void (*func_mindustry_ui_fragments_MenuFragment_addButton_java_lang_String_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_fragments_MenuFragment_addButton_mindustry_ui_fragments_MenuFragment$MenuButton 20
typedef void (*func_mindustry_ui_fragments_MenuFragment_addButton_mindustry_ui_fragments_MenuFragment$MenuButton)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buttons$1_Array1_arc_scene_ui_Button 21
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$buttons$1_Array1_arc_scene_ui_Button)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buttons$0_Array1_arc_scene_ui_Button_mindustry_ui_fragments_MenuFragment$MenuButton 22
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$buttons$0_Array1_arc_scene_ui_Button_mindustry_ui_fragments_MenuFragment$MenuButton)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$fadeOutMenu$0 23
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$fadeOutMenu$0)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$6_float_arc_scene_ui_layout_Table 24
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$6_float_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0, jobject param1);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$0_float_arc_scene_ui_layout_Table 25
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$0_float_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jfloat param0, jobject param1);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$5 26
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$5)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$4 27
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$4)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$3 28
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$3)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$2 29
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$1 30
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$1)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$4 31
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$4)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$3 32
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$3)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$2 33
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$1 34
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$1)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$0 35
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$0)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$build$10_arc_scene_ui_layout_Table 36
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$build$10_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$build$7_arc_scene_ui_layout_Table 37
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$build$7_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$build$2_arc_scene_ui_layout_Table 38
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$build$2_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$build$3_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table 39
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$build$3_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$build$5_mindustry_game_EventType$ResizeEvent 40
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$build$5_mindustry_game_EventType$ResizeEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$build$4_mindustry_game_EventType$ResizeEvent 41
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$build$4_mindustry_game_EventType$ResizeEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_MenuFragment_lambda$build$1_float_float_float_float 42
typedef void (*func_mindustry_ui_fragments_MenuFragment_lambda$build$1_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);

void mark_mindustry_ui_fragments_MenuFragment(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_fragments_MenuFragment(jcontext ctx);
void init_mindustry_ui_fragments_MenuFragment(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MenuFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_MenuFragment_buildMobile(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MenuFragment_buildDesktop(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MenuFragment_checkPlay_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_MenuFragment_fadeInMenu(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MenuFragment_fadeOutMenu(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MenuFragment_buttons_arc_scene_ui_layout_Table_Array1_mindustry_ui_fragments_MenuFragment$MenuButton(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_ui_fragments_MenuFragment_addButton_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_ui_fragments_MenuFragment_addButton_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_ui_fragments_MenuFragment_addButton_mindustry_ui_fragments_MenuFragment$MenuButton(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_MenuFragment_lambda$buttons$1_Array1_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_MenuFragment_lambda$buttons$0_Array1_arc_scene_ui_Button_mindustry_ui_fragments_MenuFragment$MenuButton(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_ui_fragments_MenuFragment_lambda$fadeOutMenu$0(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$6_float_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jfloat param0, jobject param1);
jbool SM_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$7_arc_scene_ui_layout_Table_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$0_float_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jfloat param0, jobject param1);
void M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$5(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$4(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$3(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$2(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MenuFragment_lambda$buildDesktop$1(jcontext ctx, jobject self);
jobject SM_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$6_mindustry_ui_fragments_MenuFragment$MenuButton_R_mindustry_ui_MobileButton(jcontext ctx, jobject param0);
void SM_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$7(jcontext ctx);
void SM_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$5(jcontext ctx);
void M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$4(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$3(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$2(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$1(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_MenuFragment_lambda$buildMobile$0(jcontext ctx, jobject self);
void SM_mindustry_ui_fragments_MenuFragment_lambda$build$18_java_lang_String_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_ui_fragments_MenuFragment_lambda$build$14_arc_scene_ui_layout_Table(jcontext ctx, jobject param0);
void SM_mindustry_ui_fragments_MenuFragment_lambda$build$17_arc_scene_ui_TextButton(jcontext ctx, jobject param0);
void SM_mindustry_ui_fragments_MenuFragment_lambda$build$15(jcontext ctx);
void SM_mindustry_ui_fragments_MenuFragment_lambda$build$16_boolean(jcontext ctx, jbool param0);
void M_mindustry_ui_fragments_MenuFragment_lambda$build$10_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_ui_fragments_MenuFragment_lambda$build$13_R_boolean(jcontext ctx);
jbool SM_mindustry_ui_fragments_MenuFragment_lambda$build$12_R_boolean(jcontext ctx);
void SM_mindustry_ui_fragments_MenuFragment_lambda$build$11(jcontext ctx);
void SM_mindustry_ui_fragments_MenuFragment_lambda$build$9_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_mindustry_ui_fragments_MenuFragment_lambda$build$7_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_ui_fragments_MenuFragment_lambda$build$8_R_boolean(jcontext ctx);
void M_mindustry_ui_fragments_MenuFragment_lambda$build$2_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_ui_fragments_MenuFragment_lambda$build$6_arc_scene_ui_ScrollPane(jcontext ctx, jobject param0);
void M_mindustry_ui_fragments_MenuFragment_lambda$build$3_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_ui_fragments_MenuFragment_lambda$build$5_mindustry_game_EventType$ResizeEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_MenuFragment_lambda$build$4_mindustry_game_EventType$ResizeEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_fragments_MenuFragment_lambda$build$1_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jbool SM_mindustry_ui_fragments_MenuFragment_lambda$build$0_R_boolean(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
