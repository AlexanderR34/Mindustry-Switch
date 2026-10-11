#ifndef HEADER_arc_scene_event_SceneResizeEvent
#define HEADER_arc_scene_event_SceneResizeEvent

#include "Clearwing.h"
#include "arc/scene/event/SceneEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_event_SceneResizeEvent {
	arc_scene_event_SceneEvent parent;
} arc_scene_event_SceneResizeEvent;

extern Class class_arc_scene_event_SceneResizeEvent;


#define VTABLE_arc_scene_event_SceneResizeEvent_hashCode_R_int 0
typedef jint (*func_arc_scene_event_SceneResizeEvent_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneResizeEvent_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_event_SceneResizeEvent_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_SceneResizeEvent_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_event_SceneResizeEvent_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneResizeEvent_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_event_SceneResizeEvent_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneResizeEvent_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_event_SceneResizeEvent_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneResizeEvent_finalize 5
typedef void (*func_arc_scene_event_SceneResizeEvent_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneResizeEvent_notify 6
typedef void (*func_arc_scene_event_SceneResizeEvent_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneResizeEvent_notifyAll 7
typedef void (*func_arc_scene_event_SceneResizeEvent_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneResizeEvent_wait 8
typedef void (*func_arc_scene_event_SceneResizeEvent_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneResizeEvent_wait_long 9
typedef void (*func_arc_scene_event_SceneResizeEvent_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_event_SceneResizeEvent_wait_long_int 10
typedef void (*func_arc_scene_event_SceneResizeEvent_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_event_SceneResizeEvent_reset 11
typedef void (*func_arc_scene_event_SceneResizeEvent_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneResizeEvent_handle 12
typedef void (*func_arc_scene_event_SceneResizeEvent_handle)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneResizeEvent_cancel 13
typedef void (*func_arc_scene_event_SceneResizeEvent_cancel)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneResizeEvent_stop 14
typedef void (*func_arc_scene_event_SceneResizeEvent_stop)(jcontext ctx, jobject self);

void mark_arc_scene_event_SceneResizeEvent(jobject object, jint mark, jint depth);
void clinit_arc_scene_event_SceneResizeEvent(jcontext ctx);
void init_arc_scene_event_SceneResizeEvent(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
