#ifndef HEADER_arc_input_GestureDetector$GestureListener
#define HEADER_arc_input_GestureDetector$GestureListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_input_GestureDetector$GestureListener {
	java_lang_Object parent;
} arc_input_GestureDetector$GestureListener;

extern Class class_arc_input_GestureDetector$GestureListener;


#define INDEX_arc_input_GestureDetector$GestureListener_touchDown_float_float_int_arc_input_KeyCode_R_boolean 0
typedef jbool (*func_arc_input_GestureDetector$GestureListener_touchDown_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define INDEX_arc_input_GestureDetector$GestureListener_tap_float_float_int_arc_input_KeyCode_R_boolean 1
typedef jbool (*func_arc_input_GestureDetector$GestureListener_tap_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define INDEX_arc_input_GestureDetector$GestureListener_longPress_float_float_R_boolean 2
typedef jbool (*func_arc_input_GestureDetector$GestureListener_longPress_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_arc_input_GestureDetector$GestureListener_fling_float_float_arc_input_KeyCode_R_boolean 3
typedef jbool (*func_arc_input_GestureDetector$GestureListener_fling_float_float_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
#define INDEX_arc_input_GestureDetector$GestureListener_pan_float_float_float_float_R_boolean 4
typedef jbool (*func_arc_input_GestureDetector$GestureListener_pan_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define INDEX_arc_input_GestureDetector$GestureListener_panStop_float_float_int_arc_input_KeyCode_R_boolean 5
typedef jbool (*func_arc_input_GestureDetector$GestureListener_panStop_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define INDEX_arc_input_GestureDetector$GestureListener_zoom_float_float_R_boolean 6
typedef jbool (*func_arc_input_GestureDetector$GestureListener_zoom_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_arc_input_GestureDetector$GestureListener_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean 7
typedef jbool (*func_arc_input_GestureDetector$GestureListener_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define INDEX_arc_input_GestureDetector$GestureListener_pinchStop 8
typedef void (*func_arc_input_GestureDetector$GestureListener_pinchStop)(jcontext ctx, jobject self);

void mark_arc_input_GestureDetector$GestureListener(jobject object, jint mark, jint depth);
void clinit_arc_input_GestureDetector$GestureListener(jcontext ctx);
jbool M_arc_input_GestureDetector$GestureListener_touchDown_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
jbool M_arc_input_GestureDetector$GestureListener_tap_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
jbool M_arc_input_GestureDetector$GestureListener_longPress_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_arc_input_GestureDetector$GestureListener_fling_float_float_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
jbool M_arc_input_GestureDetector$GestureListener_pan_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jbool M_arc_input_GestureDetector$GestureListener_panStop_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
jbool M_arc_input_GestureDetector$GestureListener_zoom_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_arc_input_GestureDetector$GestureListener_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void M_arc_input_GestureDetector$GestureListener_pinchStop(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
