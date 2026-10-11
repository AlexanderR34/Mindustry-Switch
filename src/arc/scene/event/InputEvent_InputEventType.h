#ifndef HEADER_arc_scene_event_InputEvent$InputEventType
#define HEADER_arc_scene_event_InputEvent$InputEventType

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_event_InputEvent$InputEventType {
	java_lang_Enum parent;
} arc_scene_event_InputEvent$InputEventType;

extern Class class_arc_scene_event_InputEvent$InputEventType;

extern jobject SF_arc_scene_event_InputEvent$InputEventType_touchDown;
extern jobject SF_arc_scene_event_InputEvent$InputEventType_touchUp;
extern jobject SF_arc_scene_event_InputEvent$InputEventType_touchDragged;
extern jobject SF_arc_scene_event_InputEvent$InputEventType_mouseMoved;
extern jobject SF_arc_scene_event_InputEvent$InputEventType_enter;
extern jobject SF_arc_scene_event_InputEvent$InputEventType_exit;
extern jobject SF_arc_scene_event_InputEvent$InputEventType_scrolled;
extern jobject SF_arc_scene_event_InputEvent$InputEventType_keyDown;
extern jobject SF_arc_scene_event_InputEvent$InputEventType_keyUp;
extern jobject SF_arc_scene_event_InputEvent$InputEventType_keyTyped;
extern jobject SF_arc_scene_event_InputEvent$InputEventType_$VALUES;

#define VTABLE_arc_scene_event_InputEvent$InputEventType_hashCode_R_int 0
typedef jint (*func_arc_scene_event_InputEvent$InputEventType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent$InputEventType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_event_InputEvent$InputEventType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_InputEvent$InputEventType_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_event_InputEvent$InputEventType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent$InputEventType_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_event_InputEvent$InputEventType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent$InputEventType_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_event_InputEvent$InputEventType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent$InputEventType_finalize 5
typedef void (*func_arc_scene_event_InputEvent$InputEventType_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent$InputEventType_notify 6
typedef void (*func_arc_scene_event_InputEvent$InputEventType_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent$InputEventType_notifyAll 7
typedef void (*func_arc_scene_event_InputEvent$InputEventType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent$InputEventType_wait 8
typedef void (*func_arc_scene_event_InputEvent$InputEventType_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent$InputEventType_wait_long 9
typedef void (*func_arc_scene_event_InputEvent$InputEventType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_event_InputEvent$InputEventType_wait_long_int 10
typedef void (*func_arc_scene_event_InputEvent$InputEventType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_event_InputEvent$InputEventType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_scene_event_InputEvent$InputEventType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_InputEvent$InputEventType_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_scene_event_InputEvent$InputEventType_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_InputEvent$InputEventType_name_R_java_lang_String 13
typedef jobject (*func_arc_scene_event_InputEvent$InputEventType_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent$InputEventType_ordinal_R_int 14
typedef jint (*func_arc_scene_event_InputEvent$InputEventType_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent$InputEventType_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_scene_event_InputEvent$InputEventType_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_scene_event_InputEvent$InputEventType(jobject object, jint mark, jint depth);
void clinit_arc_scene_event_InputEvent$InputEventType(jcontext ctx);
jobject SM_arc_scene_event_InputEvent$InputEventType_values_R_Array1_arc_scene_event_InputEvent$InputEventType(jcontext ctx);
jobject SM_arc_scene_event_InputEvent$InputEventType_valueOf_java_lang_String_R_arc_scene_event_InputEvent$InputEventType(jcontext ctx, jobject param0);
void init_arc_scene_event_InputEvent$InputEventType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_arc_scene_event_InputEvent$InputEventType_$values_R_Array1_arc_scene_event_InputEvent$InputEventType(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
