#ifndef HEADER_mindustry_ui_dialogs_MapListDialog$3
#define HEADER_mindustry_ui_dialogs_MapListDialog$3

#include "Clearwing.h"
#include "arc/scene/event/ElementGestureListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_dialogs_MapListDialog$3 {
	arc_scene_event_ElementGestureListener parent;
	jref F_this$0;
} mindustry_ui_dialogs_MapListDialog$3;

extern Class class_mindustry_ui_dialogs_MapListDialog$3;


#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_hashCode_R_int 0
typedef jint (*func_mindustry_ui_dialogs_MapListDialog$3_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_dialogs_MapListDialog$3_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_dialogs_MapListDialog$3_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_dialogs_MapListDialog$3_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_dialogs_MapListDialog$3_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_finalize 5
typedef void (*func_mindustry_ui_dialogs_MapListDialog$3_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_notify 6
typedef void (*func_mindustry_ui_dialogs_MapListDialog$3_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_notifyAll 7
typedef void (*func_mindustry_ui_dialogs_MapListDialog$3_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_wait 8
typedef void (*func_mindustry_ui_dialogs_MapListDialog$3_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_wait_long 9
typedef void (*func_mindustry_ui_dialogs_MapListDialog$3_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_wait_long_int 10
typedef void (*func_mindustry_ui_dialogs_MapListDialog$3_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_handle_arc_scene_event_SceneEvent_R_boolean 11
typedef jbool (*func_mindustry_ui_dialogs_MapListDialog$3_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode 12
typedef void (*func_mindustry_ui_dialogs_MapListDialog$3_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode 13
typedef void (*func_mindustry_ui_dialogs_MapListDialog$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode 14
typedef void (*func_mindustry_ui_dialogs_MapListDialog$3_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_longPress_arc_scene_Element_float_float_R_boolean 15
typedef jbool (*func_mindustry_ui_dialogs_MapListDialog$3_longPress_arc_scene_Element_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode 16
typedef void (*func_mindustry_ui_dialogs_MapListDialog$3_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_pan_arc_scene_event_InputEvent_float_float_float_float 17
typedef void (*func_mindustry_ui_dialogs_MapListDialog$3_pan_arc_scene_event_InputEvent_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_zoom_arc_scene_event_InputEvent_float_float 18
typedef void (*func_mindustry_ui_dialogs_MapListDialog$3_zoom_arc_scene_event_InputEvent_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_pinch_arc_scene_event_InputEvent_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2 19
typedef void (*func_mindustry_ui_dialogs_MapListDialog$3_pinch_arc_scene_event_InputEvent_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_getGestureDetector_R_arc_input_GestureDetector 20
typedef jobject (*func_mindustry_ui_dialogs_MapListDialog$3_getGestureDetector_R_arc_input_GestureDetector)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_getTouchDownTarget_R_arc_scene_Element 21
typedef jobject (*func_mindustry_ui_dialogs_MapListDialog$3_getTouchDownTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_MapListDialog$3_lambda$longPress$0_java_lang_String_R_boolean 22
typedef jbool (*func_mindustry_ui_dialogs_MapListDialog$3_lambda$longPress$0_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ui_dialogs_MapListDialog$3(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_dialogs_MapListDialog$3(jcontext ctx);
void init_mindustry_ui_dialogs_MapListDialog$3_mindustry_ui_dialogs_MapListDialog(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_ui_dialogs_MapListDialog$3_longPress_arc_scene_Element_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jbool M_mindustry_ui_dialogs_MapListDialog$3_lambda$longPress$0_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
