#ifndef HEADER_mindustry_ui_Styles
#define HEADER_mindustry_ui_Styles

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Styles {
	java_lang_Object parent;
} mindustry_ui_Styles;

extern Class class_mindustry_ui_Styles;

extern jobject SF_mindustry_ui_Styles_black;
extern jobject SF_mindustry_ui_Styles_black9;
extern jobject SF_mindustry_ui_Styles_black8;
extern jobject SF_mindustry_ui_Styles_black6;
extern jobject SF_mindustry_ui_Styles_black3;
extern jobject SF_mindustry_ui_Styles_black5;
extern jobject SF_mindustry_ui_Styles_grayPanel;
extern jobject SF_mindustry_ui_Styles_grayPanelDark;
extern jobject SF_mindustry_ui_Styles_none;
extern jobject SF_mindustry_ui_Styles_flatDown;
extern jobject SF_mindustry_ui_Styles_flatOver;
extern jobject SF_mindustry_ui_Styles_accentDrawable;
extern jobject SF_mindustry_ui_Styles_defaultb;
extern jobject SF_mindustry_ui_Styles_underlineb;
extern jobject SF_mindustry_ui_Styles_defaultt;
extern jobject SF_mindustry_ui_Styles_flatt;
extern jobject SF_mindustry_ui_Styles_grayt;
extern jobject SF_mindustry_ui_Styles_flatTogglet;
extern jobject SF_mindustry_ui_Styles_flatBordert;
extern jobject SF_mindustry_ui_Styles_nonet;
extern jobject SF_mindustry_ui_Styles_logicTogglet;
extern jobject SF_mindustry_ui_Styles_flatToggleMenut;
extern jobject SF_mindustry_ui_Styles_togglet;
extern jobject SF_mindustry_ui_Styles_cleart;
extern jobject SF_mindustry_ui_Styles_clearTogglet;
extern jobject SF_mindustry_ui_Styles_fullTogglet;
extern jobject SF_mindustry_ui_Styles_squareTogglet;
extern jobject SF_mindustry_ui_Styles_logict;
extern jobject SF_mindustry_ui_Styles_defaulti;
extern jobject SF_mindustry_ui_Styles_nodei;
extern jobject SF_mindustry_ui_Styles_emptyi;
extern jobject SF_mindustry_ui_Styles_emptyTogglei;
extern jobject SF_mindustry_ui_Styles_selecti;
extern jobject SF_mindustry_ui_Styles_logici;
extern jobject SF_mindustry_ui_Styles_geni;
extern jobject SF_mindustry_ui_Styles_grayi;
extern jobject SF_mindustry_ui_Styles_graySquarei;
extern jobject SF_mindustry_ui_Styles_flati;
extern jobject SF_mindustry_ui_Styles_squarei;
extern jobject SF_mindustry_ui_Styles_squareTogglei;
extern jobject SF_mindustry_ui_Styles_grayTogglei;
extern jobject SF_mindustry_ui_Styles_clearNonei;
extern jobject SF_mindustry_ui_Styles_cleari;
extern jobject SF_mindustry_ui_Styles_clearTogglei;
extern jobject SF_mindustry_ui_Styles_clearNoneTogglei;
extern jobject SF_mindustry_ui_Styles_defaultPane;
extern jobject SF_mindustry_ui_Styles_horizontalPane;
extern jobject SF_mindustry_ui_Styles_smallPane;
extern jobject SF_mindustry_ui_Styles_noBarPane;
extern jobject SF_mindustry_ui_Styles_defaultSlider;
extern jobject SF_mindustry_ui_Styles_defaultLabel;
extern jobject SF_mindustry_ui_Styles_outlineLabel;
extern jobject SF_mindustry_ui_Styles_techLabel;
extern jobject SF_mindustry_ui_Styles_monoLabel;
extern jobject SF_mindustry_ui_Styles_defaultField;
extern jobject SF_mindustry_ui_Styles_nodeField;
extern jobject SF_mindustry_ui_Styles_areaField;
extern jobject SF_mindustry_ui_Styles_nodeArea;
extern jobject SF_mindustry_ui_Styles_defaultCheck;
extern jobject SF_mindustry_ui_Styles_defaultDialog;
extern jobject SF_mindustry_ui_Styles_fullDialog;
extern jobject SF_mindustry_ui_Styles_defaultTree;

#define VTABLE_mindustry_ui_Styles_hashCode_R_int 0
typedef jint (*func_mindustry_ui_Styles_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_Styles_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Styles_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_Styles_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_Styles_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_Styles_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles_finalize 5
typedef void (*func_mindustry_ui_Styles_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles_notify 6
typedef void (*func_mindustry_ui_Styles_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles_notifyAll 7
typedef void (*func_mindustry_ui_Styles_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles_wait 8
typedef void (*func_mindustry_ui_Styles_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles_wait_long 9
typedef void (*func_mindustry_ui_Styles_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_Styles_wait_long_int 10
typedef void (*func_mindustry_ui_Styles_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ui_Styles(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Styles(jcontext ctx);
void init_mindustry_ui_Styles(jcontext ctx, jobject self);
void SM_mindustry_ui_Styles_load(jcontext ctx);
jobject SM_mindustry_ui_Styles_createFlatDown_R_arc_scene_style_Drawable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
