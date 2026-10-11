#ifndef HEADER_arc_scene_event_FocusListener$FocusEvent
#define HEADER_arc_scene_event_FocusListener$FocusEvent

#include "Clearwing.h"
#include "arc/scene/event/SceneEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_event_FocusListener$FocusEvent {
	arc_scene_event_SceneEvent parent;
	jbool F_focused;
	jref F_type;
	jref F_relatedActor;
} arc_scene_event_FocusListener$FocusEvent;

extern Class class_arc_scene_event_FocusListener$FocusEvent;


#define VTABLE_arc_scene_event_FocusListener$FocusEvent_hashCode_R_int 0
typedef jint (*func_arc_scene_event_FocusListener$FocusEvent_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener$FocusEvent_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_event_FocusListener$FocusEvent_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_FocusListener$FocusEvent_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_event_FocusListener$FocusEvent_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener$FocusEvent_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_event_FocusListener$FocusEvent_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener$FocusEvent_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_event_FocusListener$FocusEvent_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener$FocusEvent_finalize 5
typedef void (*func_arc_scene_event_FocusListener$FocusEvent_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener$FocusEvent_notify 6
typedef void (*func_arc_scene_event_FocusListener$FocusEvent_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener$FocusEvent_notifyAll 7
typedef void (*func_arc_scene_event_FocusListener$FocusEvent_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener$FocusEvent_wait 8
typedef void (*func_arc_scene_event_FocusListener$FocusEvent_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener$FocusEvent_wait_long 9
typedef void (*func_arc_scene_event_FocusListener$FocusEvent_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_event_FocusListener$FocusEvent_wait_long_int 10
typedef void (*func_arc_scene_event_FocusListener$FocusEvent_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_event_FocusListener$FocusEvent_reset 11
typedef void (*func_arc_scene_event_FocusListener$FocusEvent_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener$FocusEvent_handle 12
typedef void (*func_arc_scene_event_FocusListener$FocusEvent_handle)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener$FocusEvent_cancel 13
typedef void (*func_arc_scene_event_FocusListener$FocusEvent_cancel)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_FocusListener$FocusEvent_stop 14
typedef void (*func_arc_scene_event_FocusListener$FocusEvent_stop)(jcontext ctx, jobject self);

void mark_arc_scene_event_FocusListener$FocusEvent(jobject object, jint mark, jint depth);
void clinit_arc_scene_event_FocusListener$FocusEvent(jcontext ctx);
void init_arc_scene_event_FocusListener$FocusEvent(jcontext ctx, jobject self);
void M_arc_scene_event_FocusListener$FocusEvent_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
