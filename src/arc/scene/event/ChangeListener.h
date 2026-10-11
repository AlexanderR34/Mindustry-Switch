#ifndef HEADER_arc_scene_event_ChangeListener
#define HEADER_arc_scene_event_ChangeListener

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/scene/event/EventListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_event_ChangeListener {
	java_lang_Object parent;
} arc_scene_event_ChangeListener;

extern Class class_arc_scene_event_ChangeListener;


#define VTABLE_arc_scene_event_ChangeListener_hashCode_R_int 0
typedef jint (*func_arc_scene_event_ChangeListener_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ChangeListener_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_event_ChangeListener_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_ChangeListener_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_event_ChangeListener_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ChangeListener_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_event_ChangeListener_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ChangeListener_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_event_ChangeListener_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ChangeListener_finalize 5
typedef void (*func_arc_scene_event_ChangeListener_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ChangeListener_notify 6
typedef void (*func_arc_scene_event_ChangeListener_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ChangeListener_notifyAll 7
typedef void (*func_arc_scene_event_ChangeListener_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ChangeListener_wait 8
typedef void (*func_arc_scene_event_ChangeListener_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_ChangeListener_wait_long 9
typedef void (*func_arc_scene_event_ChangeListener_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_event_ChangeListener_wait_long_int 10
typedef void (*func_arc_scene_event_ChangeListener_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_event_ChangeListener_handle_arc_scene_event_SceneEvent_R_boolean 11
typedef jbool (*func_arc_scene_event_ChangeListener_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_ChangeListener_changed_arc_scene_event_ChangeListener$ChangeEvent_arc_scene_Element 12
typedef void (*func_arc_scene_event_ChangeListener_changed_arc_scene_event_ChangeListener$ChangeEvent_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_scene_event_ChangeListener(jobject object, jint mark, jint depth);
void clinit_arc_scene_event_ChangeListener(jcontext ctx);
void init_arc_scene_event_ChangeListener(jcontext ctx, jobject self);
jbool M_arc_scene_event_ChangeListener_handle_arc_scene_event_SceneEvent_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
