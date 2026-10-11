#ifndef HEADER_arc_scene_event_FocusListener
#define HEADER_arc_scene_event_FocusListener

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/scene/event/EventListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_event_FocusListener {
	java_lang_Object parent;
} arc_scene_event_FocusListener;

extern Class class_arc_scene_event_FocusListener;


#define VTABLE_arc_scene_event_FocusListener_hashCode_R_int 0
typedef jint (*func_arc_scene_event_FocusListener_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_event_FocusListener_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_FocusListener_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_event_FocusListener_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_event_FocusListener_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_event_FocusListener_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener_finalize 5
typedef void (*func_arc_scene_event_FocusListener_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener_notify 6
typedef void (*func_arc_scene_event_FocusListener_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener_notifyAll 7
typedef void (*func_arc_scene_event_FocusListener_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener_wait 8
typedef void (*func_arc_scene_event_FocusListener_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener_wait_long 9
typedef void (*func_arc_scene_event_FocusListener_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_event_FocusListener_wait_long_int 10
typedef void (*func_arc_scene_event_FocusListener_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_event_FocusListener_handle_arc_scene_event_SceneEvent_R_boolean 11
typedef jbool (*func_arc_scene_event_FocusListener_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_FocusListener_keyboardFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean 12
typedef void (*func_arc_scene_event_FocusListener_keyboardFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_arc_scene_event_FocusListener_scrollFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean 13
typedef void (*func_arc_scene_event_FocusListener_scrollFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);

void mark_arc_scene_event_FocusListener(jobject object, jint mark, jint depth);
void clinit_arc_scene_event_FocusListener(jcontext ctx);
void init_arc_scene_event_FocusListener(jcontext ctx, jobject self);
jbool M_arc_scene_event_FocusListener_handle_arc_scene_event_SceneEvent_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_event_FocusListener_keyboardFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_arc_scene_event_FocusListener_scrollFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);

#ifdef __cplusplus
}
#endif

#endif
