#ifndef HEADER_arc_input_GestureDetector
#define HEADER_arc_input_GestureDetector

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/input/InputProcessor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_input_GestureDetector {
	java_lang_Object parent;
	jref F_listener;
	jref F_tracker;
	jref F_pointer2;
	jref F_initialPointer1;
	jref F_initialPointer2;
	jbool F_longPressFired;
	jref F_pointer1;
	jref F_longPressTask;
	jfloat F_tapRectangleWidth;
	jfloat F_tapRectangleHeight;
	jlong F_tapCountInterval;
	jfloat F_longPressSeconds;
	jlong F_maxFlingDelay;
	jbool F_inTapRectangle;
	jint F_tapCount;
	jlong F_lastTapTime;
	jfloat F_lastTapX;
	jfloat F_lastTapY;
	jint F_lastTapPointer;
	jref F_lastTapButton;
	jbool F_pinching;
	jbool F_panning;
	jfloat F_tapRectangleCenterX;
	jfloat F_tapRectangleCenterY;
	jlong F_gestureStartTime;
} arc_input_GestureDetector;

extern Class class_arc_input_GestureDetector;


#define VTABLE_arc_input_GestureDetector_hashCode_R_int 0
typedef jint (*func_arc_input_GestureDetector_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_input_GestureDetector_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_GestureDetector_clone_R_java_lang_Object 2
typedef jobject (*func_arc_input_GestureDetector_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_input_GestureDetector_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector_toString_R_java_lang_String 4
typedef jobject (*func_arc_input_GestureDetector_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector_finalize 5
typedef void (*func_arc_input_GestureDetector_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector_notify 6
typedef void (*func_arc_input_GestureDetector_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector_notifyAll 7
typedef void (*func_arc_input_GestureDetector_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector_wait 8
typedef void (*func_arc_input_GestureDetector_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector_wait_long 9
typedef void (*func_arc_input_GestureDetector_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_input_GestureDetector_wait_long_int 10
typedef void (*func_arc_input_GestureDetector_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_input_GestureDetector_keyDown_arc_input_KeyCode_R_boolean 11
typedef jbool (*func_arc_input_GestureDetector_keyDown_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_GestureDetector_keyUp_arc_input_KeyCode_R_boolean 12
typedef jbool (*func_arc_input_GestureDetector_keyUp_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_GestureDetector_keyTyped_char_R_boolean 13
typedef jbool (*func_arc_input_GestureDetector_keyTyped_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_input_GestureDetector_touchDown_int_int_int_arc_input_KeyCode_R_boolean 14
typedef jbool (*func_arc_input_GestureDetector_touchDown_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_input_GestureDetector_touchUp_int_int_int_arc_input_KeyCode_R_boolean 15
typedef jbool (*func_arc_input_GestureDetector_touchUp_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_input_GestureDetector_touchDragged_int_int_int_R_boolean 16
typedef jbool (*func_arc_input_GestureDetector_touchDragged_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_input_GestureDetector_mouseMoved_int_int_R_boolean 17
typedef jbool (*func_arc_input_GestureDetector_mouseMoved_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_input_GestureDetector_scrolled_float_float_R_boolean 18
typedef jbool (*func_arc_input_GestureDetector_scrolled_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_input_GestureDetector_getListener_R_arc_input_GestureDetector$GestureListener 19
typedef jobject (*func_arc_input_GestureDetector_getListener_R_arc_input_GestureDetector$GestureListener)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector_touchDown_float_float_int_arc_input_KeyCode_R_boolean 20
typedef jbool (*func_arc_input_GestureDetector_touchDown_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_arc_input_GestureDetector_touchDragged_float_float_int_R_boolean 21
typedef jbool (*func_arc_input_GestureDetector_touchDragged_float_float_int_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_arc_input_GestureDetector_touchUp_float_float_int_arc_input_KeyCode_R_boolean 22
typedef jbool (*func_arc_input_GestureDetector_touchUp_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_arc_input_GestureDetector_cancel 23
typedef void (*func_arc_input_GestureDetector_cancel)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector_isLongPressed_R_boolean 24
typedef jbool (*func_arc_input_GestureDetector_isLongPressed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector_isLongPressed_float_R_boolean 25
typedef jbool (*func_arc_input_GestureDetector_isLongPressed_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_input_GestureDetector_isPanning_R_boolean 26
typedef jbool (*func_arc_input_GestureDetector_isPanning_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector_reset 27
typedef void (*func_arc_input_GestureDetector_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean 28
typedef jbool (*func_arc_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_input_GestureDetector_invalidateTapSquare 29
typedef void (*func_arc_input_GestureDetector_invalidateTapSquare)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector_setTapSquareSize_float 30
typedef void (*func_arc_input_GestureDetector_setTapSquareSize_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_input_GestureDetector_setTapRectangleSize_float_float 31
typedef void (*func_arc_input_GestureDetector_setTapRectangleSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_input_GestureDetector_setTapCountInterval_float 32
typedef void (*func_arc_input_GestureDetector_setTapCountInterval_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_input_GestureDetector_setLongPressSeconds_float 33
typedef void (*func_arc_input_GestureDetector_setLongPressSeconds_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_input_GestureDetector_setMaxFlingDelay_long 34
typedef void (*func_arc_input_GestureDetector_setMaxFlingDelay_long)(jcontext ctx, jobject self, jlong param0);

void mark_arc_input_GestureDetector(jobject object, jint mark, jint depth);
void clinit_arc_input_GestureDetector(jcontext ctx);
void init_arc_input_GestureDetector_arc_input_GestureDetector$GestureListener(jcontext ctx, jobject self, jobject param0);
void init_arc_input_GestureDetector_float_float_float_float_arc_input_GestureDetector$GestureListener(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
void init_arc_input_GestureDetector_float_float_float_float_float_arc_input_GestureDetector$GestureListener(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5);
jobject M_arc_input_GestureDetector_getListener_R_arc_input_GestureDetector$GestureListener(jcontext ctx, jobject self);
jbool M_arc_input_GestureDetector_touchDown_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jbool M_arc_input_GestureDetector_touchDown_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
jbool M_arc_input_GestureDetector_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jbool M_arc_input_GestureDetector_touchDragged_float_float_int_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
jbool M_arc_input_GestureDetector_touchUp_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jbool M_arc_input_GestureDetector_touchUp_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
void M_arc_input_GestureDetector_cancel(jcontext ctx, jobject self);
jbool M_arc_input_GestureDetector_isLongPressed_R_boolean(jcontext ctx, jobject self);
jbool M_arc_input_GestureDetector_isLongPressed_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
jbool M_arc_input_GestureDetector_isPanning_R_boolean(jcontext ctx, jobject self);
void M_arc_input_GestureDetector_reset(jcontext ctx, jobject self);
jbool M_arc_input_GestureDetector_isWithinTapRectangle_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_input_GestureDetector_invalidateTapSquare(jcontext ctx, jobject self);
void M_arc_input_GestureDetector_setTapSquareSize_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_input_GestureDetector_setTapRectangleSize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_input_GestureDetector_setTapCountInterval_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_input_GestureDetector_setLongPressSeconds_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_input_GestureDetector_setMaxFlingDelay_long(jcontext ctx, jobject self, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
