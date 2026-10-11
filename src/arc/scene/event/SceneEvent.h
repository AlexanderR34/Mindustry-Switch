#ifndef HEADER_arc_scene_event_SceneEvent
#define HEADER_arc_scene_event_SceneEvent

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_event_SceneEvent {
	java_lang_Object parent;
	jref F_targetActor;
	jref F_listenerActor;
	jbool F_capture;
	jbool F_bubbles;
	jbool F_handled;
	jbool F_stopped;
	jbool F_cancelled;
} arc_scene_event_SceneEvent;

extern Class class_arc_scene_event_SceneEvent;


#define VTABLE_arc_scene_event_SceneEvent_hashCode_R_int 0
typedef jint (*func_arc_scene_event_SceneEvent_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneEvent_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_event_SceneEvent_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_SceneEvent_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_event_SceneEvent_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneEvent_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_event_SceneEvent_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneEvent_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_event_SceneEvent_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneEvent_finalize 5
typedef void (*func_arc_scene_event_SceneEvent_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneEvent_notify 6
typedef void (*func_arc_scene_event_SceneEvent_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneEvent_notifyAll 7
typedef void (*func_arc_scene_event_SceneEvent_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneEvent_wait 8
typedef void (*func_arc_scene_event_SceneEvent_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneEvent_wait_long 9
typedef void (*func_arc_scene_event_SceneEvent_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_event_SceneEvent_wait_long_int 10
typedef void (*func_arc_scene_event_SceneEvent_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_event_SceneEvent_reset 11
typedef void (*func_arc_scene_event_SceneEvent_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneEvent_handle 12
typedef void (*func_arc_scene_event_SceneEvent_handle)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneEvent_cancel 13
typedef void (*func_arc_scene_event_SceneEvent_cancel)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_SceneEvent_stop 14
typedef void (*func_arc_scene_event_SceneEvent_stop)(jcontext ctx, jobject self);

void mark_arc_scene_event_SceneEvent(jobject object, jint mark, jint depth);
void clinit_arc_scene_event_SceneEvent(jcontext ctx);
void init_arc_scene_event_SceneEvent(jcontext ctx, jobject self);
void M_arc_scene_event_SceneEvent_handle(jcontext ctx, jobject self);
void M_arc_scene_event_SceneEvent_cancel(jcontext ctx, jobject self);
void M_arc_scene_event_SceneEvent_stop(jcontext ctx, jobject self);
void M_arc_scene_event_SceneEvent_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
