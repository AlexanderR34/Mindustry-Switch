#ifndef HEADER_arc_input_InputMultiplexer
#define HEADER_arc_input_InputMultiplexer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/input/InputProcessor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_input_InputMultiplexer {
	java_lang_Object parent;
	jref F_processors;
} arc_input_InputMultiplexer;

extern Class class_arc_input_InputMultiplexer;


#define VTABLE_arc_input_InputMultiplexer_hashCode_R_int 0
typedef jint (*func_arc_input_InputMultiplexer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputMultiplexer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_input_InputMultiplexer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_InputMultiplexer_clone_R_java_lang_Object 2
typedef jobject (*func_arc_input_InputMultiplexer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputMultiplexer_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_input_InputMultiplexer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputMultiplexer_toString_R_java_lang_String 4
typedef jobject (*func_arc_input_InputMultiplexer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputMultiplexer_finalize 5
typedef void (*func_arc_input_InputMultiplexer_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputMultiplexer_notify 6
typedef void (*func_arc_input_InputMultiplexer_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputMultiplexer_notifyAll 7
typedef void (*func_arc_input_InputMultiplexer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputMultiplexer_wait 8
typedef void (*func_arc_input_InputMultiplexer_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputMultiplexer_wait_long 9
typedef void (*func_arc_input_InputMultiplexer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_input_InputMultiplexer_wait_long_int 10
typedef void (*func_arc_input_InputMultiplexer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_input_InputMultiplexer_keyDown_arc_input_KeyCode_R_boolean 11
typedef jbool (*func_arc_input_InputMultiplexer_keyDown_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_InputMultiplexer_keyUp_arc_input_KeyCode_R_boolean 12
typedef jbool (*func_arc_input_InputMultiplexer_keyUp_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_InputMultiplexer_keyTyped_char_R_boolean 13
typedef jbool (*func_arc_input_InputMultiplexer_keyTyped_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_input_InputMultiplexer_touchDown_int_int_int_arc_input_KeyCode_R_boolean 14
typedef jbool (*func_arc_input_InputMultiplexer_touchDown_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_input_InputMultiplexer_touchUp_int_int_int_arc_input_KeyCode_R_boolean 15
typedef jbool (*func_arc_input_InputMultiplexer_touchUp_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_arc_input_InputMultiplexer_touchDragged_int_int_int_R_boolean 16
typedef jbool (*func_arc_input_InputMultiplexer_touchDragged_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_input_InputMultiplexer_mouseMoved_int_int_R_boolean 17
typedef jbool (*func_arc_input_InputMultiplexer_mouseMoved_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_input_InputMultiplexer_scrolled_float_float_R_boolean 18
typedef jbool (*func_arc_input_InputMultiplexer_scrolled_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_input_InputMultiplexer_addProcessor_int_arc_input_InputProcessor 19
typedef void (*func_arc_input_InputMultiplexer_addProcessor_int_arc_input_InputProcessor)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_input_InputMultiplexer_removeProcessor_int 20
typedef void (*func_arc_input_InputMultiplexer_removeProcessor_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_input_InputMultiplexer_addProcessor_arc_input_InputProcessor 21
typedef void (*func_arc_input_InputMultiplexer_addProcessor_arc_input_InputProcessor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_InputMultiplexer_removeProcessor_arc_input_InputProcessor 22
typedef void (*func_arc_input_InputMultiplexer_removeProcessor_arc_input_InputProcessor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_InputMultiplexer_size_R_int 23
typedef jint (*func_arc_input_InputMultiplexer_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputMultiplexer_clear 24
typedef void (*func_arc_input_InputMultiplexer_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputMultiplexer_getProcessors_R_arc_struct_SnapshotSeq 25
typedef jobject (*func_arc_input_InputMultiplexer_getProcessors_R_arc_struct_SnapshotSeq)(jcontext ctx, jobject self);
#define VTABLE_arc_input_InputMultiplexer_setProcessors_Array1_arc_input_InputProcessor 26
typedef void (*func_arc_input_InputMultiplexer_setProcessors_Array1_arc_input_InputProcessor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_InputMultiplexer_setProcessors_arc_struct_Seq 27
typedef void (*func_arc_input_InputMultiplexer_setProcessors_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);

void mark_arc_input_InputMultiplexer(jobject object, jint mark, jint depth);
void clinit_arc_input_InputMultiplexer(jcontext ctx);
void init_arc_input_InputMultiplexer(jcontext ctx, jobject self);
void init_arc_input_InputMultiplexer_Array1_arc_input_InputProcessor(jcontext ctx, jobject self, jobject param0);
void M_arc_input_InputMultiplexer_addProcessor_int_arc_input_InputProcessor(jcontext ctx, jobject self, jint param0, jobject param1);
void M_arc_input_InputMultiplexer_removeProcessor_int(jcontext ctx, jobject self, jint param0);
void M_arc_input_InputMultiplexer_addProcessor_arc_input_InputProcessor(jcontext ctx, jobject self, jobject param0);
void M_arc_input_InputMultiplexer_removeProcessor_arc_input_InputProcessor(jcontext ctx, jobject self, jobject param0);
jint M_arc_input_InputMultiplexer_size_R_int(jcontext ctx, jobject self);
void M_arc_input_InputMultiplexer_clear(jcontext ctx, jobject self);
jobject M_arc_input_InputMultiplexer_getProcessors_R_arc_struct_SnapshotSeq(jcontext ctx, jobject self);
void M_arc_input_InputMultiplexer_setProcessors_Array1_arc_input_InputProcessor(jcontext ctx, jobject self, jobject param0);
void M_arc_input_InputMultiplexer_setProcessors_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jbool M_arc_input_InputMultiplexer_keyDown_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_input_InputMultiplexer_keyUp_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_input_InputMultiplexer_keyTyped_char_R_boolean(jcontext ctx, jobject self, jchar param0);
jbool M_arc_input_InputMultiplexer_touchDown_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jbool M_arc_input_InputMultiplexer_touchUp_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jbool M_arc_input_InputMultiplexer_touchDragged_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jbool M_arc_input_InputMultiplexer_mouseMoved_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_input_InputMultiplexer_scrolled_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
