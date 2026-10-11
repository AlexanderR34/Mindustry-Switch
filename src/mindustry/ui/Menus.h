#ifndef HEADER_mindustry_ui_Menus
#define HEADER_mindustry_ui_Menus

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Menus {
	java_lang_Object parent;
} mindustry_ui_Menus;

extern Class class_mindustry_ui_Menus;

extern jobject SF_mindustry_ui_Menus_followUpMenus;
extern jobject SF_mindustry_ui_Menus_menuDialogs;
extern jobject SF_mindustry_ui_Menus_menuListeners;
extern jobject SF_mindustry_ui_Menus_menuBuilderListeners;
extern jobject SF_mindustry_ui_Menus_textInputListeners;

#define VTABLE_mindustry_ui_Menus_hashCode_R_int 0
typedef jint (*func_mindustry_ui_Menus_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Menus_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_Menus_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Menus_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_Menus_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Menus_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_Menus_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Menus_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_Menus_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Menus_finalize 5
typedef void (*func_mindustry_ui_Menus_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Menus_notify 6
typedef void (*func_mindustry_ui_Menus_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Menus_notifyAll 7
typedef void (*func_mindustry_ui_Menus_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Menus_wait 8
typedef void (*func_mindustry_ui_Menus_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Menus_wait_long 9
typedef void (*func_mindustry_ui_Menus_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_Menus_wait_long_int 10
typedef void (*func_mindustry_ui_Menus_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ui_Menus(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Menus(jcontext ctx);
void init_mindustry_ui_Menus(jcontext ctx, jobject self);
jint SM_mindustry_ui_Menus_registerMenu_mindustry_ui_Menus$MenuListener_R_int(jcontext ctx, jobject param0);
jint SM_mindustry_ui_Menus_registerMenuBuilder_mindustry_ui_Menus$MenuBuilderListener_R_int(jcontext ctx, jobject param0);
jint SM_mindustry_ui_Menus_registerTextInput_mindustry_ui_Menus$TextInputListener_R_int(jcontext ctx, jobject param0);
void SM_mindustry_ui_Menus_menuBuilder_int_long_java_lang_String_boolean_boolean_boolean_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jint param0, jlong param1, jobject param2, jbool param3, jbool param4, jbool param5, jobject param6);
void SM_mindustry_ui_Menus_menuBuilderUpdate_int_java_lang_String_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jint param0, jobject param1, jobject param2);
void SM_mindustry_ui_Menus_hideMenuBuilder_int(jcontext ctx, jint param0);
void SM_mindustry_ui_Menus_menuBuilderChoose_mindustry_gen_Player_int_mindustry_ui_builder_MenuResult(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_mindustry_ui_Menus_menu_int_java_lang_String_java_lang_String_Array2_java_lang_String(jcontext ctx, jint param0, jobject param1, jobject param2, jobject param3);
void SM_mindustry_ui_Menus_followUpMenu_int_java_lang_String_java_lang_String_Array2_java_lang_String(jcontext ctx, jint param0, jobject param1, jobject param2, jobject param3);
void SM_mindustry_ui_Menus_hideFollowUpMenu_int(jcontext ctx, jint param0);
jobject SM_mindustry_ui_Menus_newMenuDialog_java_lang_String_java_lang_String_Array2_java_lang_String_arc_func_Cons2_R_arc_scene_ui_Dialog(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
void SM_mindustry_ui_Menus_showMenu_java_lang_String_java_lang_String_Array2_java_lang_String_arc_func_Intc(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
void SM_mindustry_ui_Menus_showFollowUpMenu_int_java_lang_String_java_lang_String_Array2_java_lang_String_arc_func_Intc(jcontext ctx, jint param0, jobject param1, jobject param2, jobject param3, jobject param4);
void SM_mindustry_ui_Menus_menuChoose_mindustry_gen_Player_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_mindustry_ui_Menus_textInput_int_java_lang_String_java_lang_String_int_java_lang_String_boolean(jcontext ctx, jint param0, jobject param1, jobject param2, jint param3, jobject param4, jbool param5);
void SM_mindustry_ui_Menus_textInput_int_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean(jcontext ctx, jint param0, jobject param1, jobject param2, jint param3, jobject param4, jbool param5, jbool param6);
void SM_mindustry_ui_Menus_textInputResult_mindustry_gen_Player_int_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_mindustry_ui_Menus_setHudText_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_ui_Menus_hideHudText(jcontext ctx);
void SM_mindustry_ui_Menus_setHudTextReliable_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_ui_Menus_announce_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_ui_Menus_infoMessage_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_ui_Menus_infoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jint param3, jint param4, jint param5, jint param6, jint param7);
void SM_mindustry_ui_Menus_infoPopupReliable_java_lang_String_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jint param3, jint param4, jint param5, jint param6, jint param7);
void SM_mindustry_ui_Menus_infoPopup_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jfloat param1, jint param2, jint param3, jint param4, jint param5, jint param6);
void SM_mindustry_ui_Menus_infoPopupReliable_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jfloat param1, jint param2, jint param3, jint param4, jint param5, jint param6);
void SM_mindustry_ui_Menus_label_java_lang_String_int_float_float_float_int(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jint param5);
void SM_mindustry_ui_Menus_labelReliable_java_lang_String_int_float_float_float_int(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jint param5);
void SM_mindustry_ui_Menus_label_java_lang_String_int_float_float_float(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_ui_Menus_labelReliable_java_lang_String_int_float_float_float(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_ui_Menus_label_java_lang_String_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_ui_Menus_labelReliable_java_lang_String_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_ui_Menus_infoToast_java_lang_String_float(jcontext ctx, jobject param0, jfloat param1);
void SM_mindustry_ui_Menus_warningToast_int_java_lang_String(jcontext ctx, jint param0, jobject param1);
void SM_mindustry_ui_Menus_openURI_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_ui_Menus_copyToClipboard_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_ui_Menus_removeWorldLabel_int(jcontext ctx, jint param0);
void SM_mindustry_ui_Menus_lambda$copyToClipboard$0_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_ui_Menus_lambda$openURI$0_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_ui_Menus_lambda$textInput$1_int(jcontext ctx, jint param0);
void SM_mindustry_ui_Menus_lambda$textInput$0_int_java_lang_String(jcontext ctx, jint param0, jobject param1);
void SM_mindustry_ui_Menus_lambda$showFollowUpMenu$1_int_arc_func_Intc(jcontext ctx, jint param0, jobject param1);
void SM_mindustry_ui_Menus_lambda$showFollowUpMenu$0_arc_func_Intc_java_lang_Integer_arc_scene_ui_Dialog(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_ui_Menus_lambda$showMenu$1_arc_func_Intc(jcontext ctx, jobject param0);
void SM_mindustry_ui_Menus_lambda$showMenu$0_arc_func_Intc_java_lang_Integer_arc_scene_ui_Dialog(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_ui_Menus_lambda$followUpMenu$0_int_int(jcontext ctx, jint param0, jint param1);
void SM_mindustry_ui_Menus_lambda$menu$0_int_int(jcontext ctx, jint param0, jint param1);
void SM_mindustry_ui_Menus_lambda$menuBuilderUpdate$0_mindustry_ui_Menus$MenuDialog_mindustry_ui_builder_MenuResult(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_ui_Menus_lambda$menuBuilder$2_long_int_boolean_mindustry_ui_Menus$MenuDialog_mindustry_ui_builder_MenuResult(jcontext ctx, jlong param0, jint param1, jbool param2, jobject param3, jobject param4);
void SM_mindustry_ui_Menus_lambda$menuBuilder$1_int_mindustry_ui_Menus$MenuDialog_long(jcontext ctx, jint param0, jobject param1, jlong param2);
void SM_mindustry_ui_Menus_lambda$menuBuilder$0_mindustry_ui_Menus$MenuDialog(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
