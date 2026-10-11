#ifndef HEADER_arc_scene_ui_Dialog$4
#define HEADER_arc_scene_ui_Dialog$4

#include "Clearwing.h"
#include "arc/scene/event/FocusListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_ui_Dialog$4 {
	arc_scene_event_FocusListener parent;
	jref F_this$0;
} arc_scene_ui_Dialog$4;

extern Class class_arc_scene_ui_Dialog$4;


#define VTABLE_arc_scene_ui_Dialog$4_hashCode_R_int 0
typedef jint (*func_arc_scene_ui_Dialog$4_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$4_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_ui_Dialog$4_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Dialog$4_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_ui_Dialog$4_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$4_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_ui_Dialog$4_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$4_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_ui_Dialog$4_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$4_finalize 5
typedef void (*func_arc_scene_ui_Dialog$4_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$4_notify 6
typedef void (*func_arc_scene_ui_Dialog$4_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$4_notifyAll 7
typedef void (*func_arc_scene_ui_Dialog$4_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$4_wait 8
typedef void (*func_arc_scene_ui_Dialog$4_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_ui_Dialog$4_wait_long 9
typedef void (*func_arc_scene_ui_Dialog$4_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_ui_Dialog$4_wait_long_int 10
typedef void (*func_arc_scene_ui_Dialog$4_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_ui_Dialog$4_handle_arc_scene_event_SceneEvent_R_boolean 11
typedef jbool (*func_arc_scene_ui_Dialog$4_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_ui_Dialog$4_keyboardFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean 12
typedef void (*func_arc_scene_ui_Dialog$4_keyboardFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_arc_scene_ui_Dialog$4_scrollFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean 13
typedef void (*func_arc_scene_ui_Dialog$4_scrollFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_arc_scene_ui_Dialog$4_focusChanged_arc_scene_event_FocusListener$FocusEvent 14
typedef void (*func_arc_scene_ui_Dialog$4_focusChanged_arc_scene_event_FocusListener$FocusEvent)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_ui_Dialog$4(jobject object, jint mark, jint depth);
void clinit_arc_scene_ui_Dialog$4(jcontext ctx);
void init_arc_scene_ui_Dialog$4_arc_scene_ui_Dialog(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_ui_Dialog$4_keyboardFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_arc_scene_ui_Dialog$4_scrollFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_arc_scene_ui_Dialog$4_focusChanged_arc_scene_event_FocusListener$FocusEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
