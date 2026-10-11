#ifndef HEADER_arc_scene_event_ElementGestureListener$1
#define HEADER_arc_scene_event_ElementGestureListener$1

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/input/GestureDetector_GestureListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_event_ElementGestureListener$1 {
	java_lang_Object parent;
	jref F_initialPointer1;
	jref F_initialPointer2;
	jref F_pointer1;
	jref F_pointer2;
	jref F_this$0;
} arc_scene_event_ElementGestureListener$1;

extern Class class_arc_scene_event_ElementGestureListener$1;


#define VTABLE_arc_scene_event_ElementGestureListener$1_hashCode_R_int 0
typedef jint (*func_arc_scene_event_ElementGestureListener$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ElementGestureListener$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_event_ElementGestureListener$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_ElementGestureListener$1_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_event_ElementGestureListener$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ElementGestureListener$1_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_event_ElementGestureListener$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ElementGestureListener$1_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_event_ElementGestureListener$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ElementGestureListener$1_finalize 5
typedef void (*func_arc_scene_event_ElementGestureListener$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ElementGestureListener$1_notify 6
typedef void (*func_arc_scene_event_ElementGestureListener$1_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ElementGestureListener$1_notifyAll 7
typedef void (*func_arc_scene_event_ElementGestureListener$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ElementGestureListener$1_wait 8
typedef void (*func_arc_scene_event_ElementGestureListener$1_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ElementGestureListener$1_wait_long 9
typedef void (*func_arc_scene_event_ElementGestureListener$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_event_ElementGestureListener$1_wait_long_int 10
typedef void (*func_arc_scene_event_ElementGestureListener$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_event_ElementGestureListener$1_touchDown_float_float_int_arc_input_KeyCode_R_boolean 11
typedef jbool (*func_arc_scene_event_ElementGestureListener$1_touchDown_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_arc_scene_event_ElementGestureListener$1_tap_float_float_int_arc_input_KeyCode_R_boolean 12
typedef jbool (*func_arc_scene_event_ElementGestureListener$1_tap_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_arc_scene_event_ElementGestureListener$1_longPress_float_float_R_boolean 13
typedef jbool (*func_arc_scene_event_ElementGestureListener$1_longPress_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_event_ElementGestureListener$1_fling_float_float_arc_input_KeyCode_R_boolean 14
typedef jbool (*func_arc_scene_event_ElementGestureListener$1_fling_float_float_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
#define VTABLE_arc_scene_event_ElementGestureListener$1_pan_float_float_float_float_R_boolean 15
typedef jbool (*func_arc_scene_event_ElementGestureListener$1_pan_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_scene_event_ElementGestureListener$1_panStop_float_float_int_arc_input_KeyCode_R_boolean 16
typedef jbool (*func_arc_scene_event_ElementGestureListener$1_panStop_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_arc_scene_event_ElementGestureListener$1_zoom_float_float_R_boolean 17
typedef jbool (*func_arc_scene_event_ElementGestureListener$1_zoom_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_scene_event_ElementGestureListener$1_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean 18
typedef jbool (*func_arc_scene_event_ElementGestureListener$1_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_arc_scene_event_ElementGestureListener$1_pinchStop 19
typedef void (*func_arc_scene_event_ElementGestureListener$1_pinchStop)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ElementGestureListener$1_stageToLocalAmount_arc_math_geom_Vec2 20
typedef void (*func_arc_scene_event_ElementGestureListener$1_stageToLocalAmount_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_event_ElementGestureListener$1(jobject object, jint mark, jint depth);
void clinit_arc_scene_event_ElementGestureListener$1(jcontext ctx);
void init_arc_scene_event_ElementGestureListener$1_arc_scene_event_ElementGestureListener(jcontext ctx, jobject self, jobject param0);
jbool M_arc_scene_event_ElementGestureListener$1_tap_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
jbool M_arc_scene_event_ElementGestureListener$1_longPress_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_arc_scene_event_ElementGestureListener$1_fling_float_float_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
jbool M_arc_scene_event_ElementGestureListener$1_pan_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jbool M_arc_scene_event_ElementGestureListener$1_zoom_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_arc_scene_event_ElementGestureListener$1_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_arc_scene_event_ElementGestureListener$1_stageToLocalAmount_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
