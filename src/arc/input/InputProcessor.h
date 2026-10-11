#ifndef HEADER_arc_input_InputProcessor
#define HEADER_arc_input_InputProcessor

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_input_InputProcessor {
	java_lang_Object parent;
} arc_input_InputProcessor;

extern Class class_arc_input_InputProcessor;


#define INDEX_arc_input_InputProcessor_keyDown_arc_input_KeyCode_R_boolean 0
typedef jbool (*func_arc_input_InputProcessor_keyDown_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_input_InputProcessor_keyUp_arc_input_KeyCode_R_boolean 1
typedef jbool (*func_arc_input_InputProcessor_keyUp_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_input_InputProcessor_keyTyped_char_R_boolean 2
typedef jbool (*func_arc_input_InputProcessor_keyTyped_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define INDEX_arc_input_InputProcessor_touchDown_int_int_int_arc_input_KeyCode_R_boolean 3
typedef jbool (*func_arc_input_InputProcessor_touchDown_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define INDEX_arc_input_InputProcessor_touchUp_int_int_int_arc_input_KeyCode_R_boolean 4
typedef jbool (*func_arc_input_InputProcessor_touchUp_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define INDEX_arc_input_InputProcessor_touchDragged_int_int_int_R_boolean 5
typedef jbool (*func_arc_input_InputProcessor_touchDragged_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define INDEX_arc_input_InputProcessor_mouseMoved_int_int_R_boolean 6
typedef jbool (*func_arc_input_InputProcessor_mouseMoved_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_arc_input_InputProcessor_scrolled_float_float_R_boolean 7
typedef jbool (*func_arc_input_InputProcessor_scrolled_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);

void mark_arc_input_InputProcessor(jobject object, jint mark, jint depth);
void clinit_arc_input_InputProcessor(jcontext ctx);
jbool M_arc_input_InputProcessor_keyDown_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_input_InputProcessor_keyUp_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_input_InputProcessor_keyTyped_char_R_boolean(jcontext ctx, jobject self, jchar param0);
jbool M_arc_input_InputProcessor_touchDown_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jbool M_arc_input_InputProcessor_touchUp_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jbool M_arc_input_InputProcessor_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jbool M_arc_input_InputProcessor_mouseMoved_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_input_InputProcessor_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
