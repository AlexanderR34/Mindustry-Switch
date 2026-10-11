#ifndef HEADER_arc_scene_utils_Elem
#define HEADER_arc_scene_utils_Elem

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_utils_Elem {
	java_lang_Object parent;
} arc_scene_utils_Elem;

extern Class class_arc_scene_utils_Elem;


#define VTABLE_arc_scene_utils_Elem_hashCode_R_int 0
typedef jint (*func_arc_scene_utils_Elem_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Elem_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_utils_Elem_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_utils_Elem_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_utils_Elem_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Elem_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_utils_Elem_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Elem_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_utils_Elem_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Elem_finalize 5
typedef void (*func_arc_scene_utils_Elem_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Elem_notify 6
typedef void (*func_arc_scene_utils_Elem_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Elem_notifyAll 7
typedef void (*func_arc_scene_utils_Elem_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Elem_wait 8
typedef void (*func_arc_scene_utils_Elem_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_utils_Elem_wait_long 9
typedef void (*func_arc_scene_utils_Elem_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_utils_Elem_wait_long_int 10
typedef void (*func_arc_scene_utils_Elem_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_scene_utils_Elem(jobject object, jint mark, jint depth);
void clinit_arc_scene_utils_Elem(jcontext ctx);
void init_arc_scene_utils_Elem(jcontext ctx, jobject self);
jobject SM_arc_scene_utils_Elem_newCheck_java_lang_String_arc_func_Boolc_R_arc_scene_ui_CheckBox(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_scene_utils_Elem_newButton_java_lang_String_java_lang_Runnable_R_arc_scene_ui_TextButton(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_scene_utils_Elem_newButton_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_TextButton(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_arc_scene_utils_Elem_newImageButton_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_scene_utils_Elem_newImageButton_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jfloat param1, jobject param2);
jobject SM_arc_scene_utils_Elem_newImageButton_arc_scene_ui_ImageButton$ImageButtonStyle_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jobject param1, jfloat param2, jobject param3);
jobject SM_arc_scene_utils_Elem_newImageButton_arc_scene_style_Drawable_float_arc_graphics_Color_java_lang_Runnable_R_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3);
jobject SM_arc_scene_utils_Elem_newField_java_lang_String_arc_func_Cons_R_arc_scene_ui_TextField(jcontext ctx, jobject param0, jobject param1);
void SM_arc_scene_utils_Elem_lambda$newField$0_arc_scene_ui_TextField_arc_func_Cons(jcontext ctx, jobject param0, jobject param1);
void SM_arc_scene_utils_Elem_lambda$newCheck$0_arc_func_Boolc_arc_scene_ui_CheckBox(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
