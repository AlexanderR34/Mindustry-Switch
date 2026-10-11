#ifndef HEADER_arc_scene_event_ResizeListener
#define HEADER_arc_scene_event_ResizeListener

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/scene/event/EventListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_event_ResizeListener {
	java_lang_Object parent;
} arc_scene_event_ResizeListener;

extern Class class_arc_scene_event_ResizeListener;


#define VTABLE_arc_scene_event_ResizeListener_hashCode_R_int 0
typedef jint (*func_arc_scene_event_ResizeListener_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ResizeListener_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_event_ResizeListener_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_ResizeListener_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_event_ResizeListener_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ResizeListener_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_event_ResizeListener_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ResizeListener_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_event_ResizeListener_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ResizeListener_finalize 5
typedef void (*func_arc_scene_event_ResizeListener_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ResizeListener_notify 6
typedef void (*func_arc_scene_event_ResizeListener_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ResizeListener_notifyAll 7
typedef void (*func_arc_scene_event_ResizeListener_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ResizeListener_wait 8
typedef void (*func_arc_scene_event_ResizeListener_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ResizeListener_wait_long 9
typedef void (*func_arc_scene_event_ResizeListener_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_event_ResizeListener_wait_long_int 10
typedef void (*func_arc_scene_event_ResizeListener_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_event_ResizeListener_handle_arc_scene_event_SceneEvent_R_boolean 11
typedef jbool (*func_arc_scene_event_ResizeListener_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_ResizeListener_resized 12
typedef void (*func_arc_scene_event_ResizeListener_resized)(jcontext ctx, jobject self);

void mark_arc_scene_event_ResizeListener(jobject object, jint mark, jint depth);
void clinit_arc_scene_event_ResizeListener(jcontext ctx);
void init_arc_scene_event_ResizeListener(jcontext ctx, jobject self);
jbool M_arc_scene_event_ResizeListener_handle_arc_scene_event_SceneEvent_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_event_ResizeListener_resized(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
