#ifndef HEADER_arc_scene_event_VisibilityEvent
#define HEADER_arc_scene_event_VisibilityEvent

#include "Clearwing.h"
#include "arc/scene/event/SceneEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_event_VisibilityEvent {
	arc_scene_event_SceneEvent parent;
	jbool F_hide;
} arc_scene_event_VisibilityEvent;

extern Class class_arc_scene_event_VisibilityEvent;


#define VTABLE_arc_scene_event_VisibilityEvent_hashCode_R_int 0
typedef jint (*func_arc_scene_event_VisibilityEvent_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_VisibilityEvent_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_event_VisibilityEvent_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_VisibilityEvent_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_event_VisibilityEvent_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_VisibilityEvent_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_event_VisibilityEvent_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_VisibilityEvent_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_event_VisibilityEvent_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_VisibilityEvent_finalize 5
typedef void (*func_arc_scene_event_VisibilityEvent_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_VisibilityEvent_notify 6
typedef void (*func_arc_scene_event_VisibilityEvent_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_VisibilityEvent_notifyAll 7
typedef void (*func_arc_scene_event_VisibilityEvent_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_VisibilityEvent_wait 8
typedef void (*func_arc_scene_event_VisibilityEvent_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_VisibilityEvent_wait_long 9
typedef void (*func_arc_scene_event_VisibilityEvent_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_event_VisibilityEvent_wait_long_int 10
typedef void (*func_arc_scene_event_VisibilityEvent_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_event_VisibilityEvent_reset 11
typedef void (*func_arc_scene_event_VisibilityEvent_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_VisibilityEvent_handle 12
typedef void (*func_arc_scene_event_VisibilityEvent_handle)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_VisibilityEvent_cancel 13
typedef void (*func_arc_scene_event_VisibilityEvent_cancel)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_VisibilityEvent_stop 14
typedef void (*func_arc_scene_event_VisibilityEvent_stop)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_VisibilityEvent_isHide_R_boolean 15
typedef jbool (*func_arc_scene_event_VisibilityEvent_isHide_R_boolean)(jcontext ctx, jobject self);

void mark_arc_scene_event_VisibilityEvent(jobject object, jint mark, jint depth);
void clinit_arc_scene_event_VisibilityEvent(jcontext ctx);
void init_arc_scene_event_VisibilityEvent(jcontext ctx, jobject self);
void init_arc_scene_event_VisibilityEvent_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_arc_scene_event_VisibilityEvent_isHide_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
