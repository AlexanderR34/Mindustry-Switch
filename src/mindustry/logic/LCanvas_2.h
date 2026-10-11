#ifndef HEADER_mindustry_logic_LCanvas$2
#define HEADER_mindustry_logic_LCanvas$2

#include "Clearwing.h"
#include "arc/scene/event/ElementGestureListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LCanvas$2 {
	arc_scene_event_ElementGestureListener parent;
	jref F_val$tip;
	jref F_val$cell;
} mindustry_logic_LCanvas$2;

extern Class class_mindustry_logic_LCanvas$2;


#define VTABLE_mindustry_logic_LCanvas$2_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LCanvas$2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LCanvas$2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$2_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LCanvas$2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$2_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LCanvas$2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$2_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LCanvas$2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$2_finalize 5
typedef void (*func_mindustry_logic_LCanvas$2_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$2_notify 6
typedef void (*func_mindustry_logic_LCanvas$2_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$2_notifyAll 7
typedef void (*func_mindustry_logic_LCanvas$2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$2_wait 8
typedef void (*func_mindustry_logic_LCanvas$2_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$2_wait_long 9
typedef void (*func_mindustry_logic_LCanvas$2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LCanvas$2_wait_long_int 10
typedef void (*func_mindustry_logic_LCanvas$2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LCanvas$2_handle_arc_scene_event_SceneEvent_R_boolean 11
typedef jbool (*func_mindustry_logic_LCanvas$2_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCanvas$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode 12
typedef void (*func_mindustry_logic_LCanvas$2_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_mindustry_logic_LCanvas$2_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode 13
typedef void (*func_mindustry_logic_LCanvas$2_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_mindustry_logic_LCanvas$2_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode 14
typedef void (*func_mindustry_logic_LCanvas$2_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4);
#define VTABLE_mindustry_logic_LCanvas$2_longPress_arc_scene_Element_float_float_R_boolean 15
typedef jbool (*func_mindustry_logic_LCanvas$2_longPress_arc_scene_Element_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_logic_LCanvas$2_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode 16
typedef void (*func_mindustry_logic_LCanvas$2_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_logic_LCanvas$2_pan_arc_scene_event_InputEvent_float_float_float_float 17
typedef void (*func_mindustry_logic_LCanvas$2_pan_arc_scene_event_InputEvent_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_logic_LCanvas$2_zoom_arc_scene_event_InputEvent_float_float 18
typedef void (*func_mindustry_logic_LCanvas$2_zoom_arc_scene_event_InputEvent_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_logic_LCanvas$2_pinch_arc_scene_event_InputEvent_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2 19
typedef void (*func_mindustry_logic_LCanvas$2_pinch_arc_scene_event_InputEvent_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_mindustry_logic_LCanvas$2_getGestureDetector_R_arc_input_GestureDetector 20
typedef jobject (*func_mindustry_logic_LCanvas$2_getGestureDetector_R_arc_input_GestureDetector)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCanvas$2_getTouchDownTarget_R_arc_scene_Element 21
typedef jobject (*func_mindustry_logic_LCanvas$2_getTouchDownTarget_R_arc_scene_Element)(jcontext ctx, jobject self);

void mark_mindustry_logic_LCanvas$2(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LCanvas$2(jcontext ctx);
void init_mindustry_logic_LCanvas$2_float_float_float_float_arc_scene_ui_Tooltip_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5);
jbool M_mindustry_logic_LCanvas$2_longPress_arc_scene_Element_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);

#ifdef __cplusplus
}
#endif

#endif
