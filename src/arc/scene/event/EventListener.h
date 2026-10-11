#ifndef HEADER_arc_scene_event_EventListener
#define HEADER_arc_scene_event_EventListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_event_EventListener {
	java_lang_Object parent;
} arc_scene_event_EventListener;

extern Class class_arc_scene_event_EventListener;


#define INDEX_arc_scene_event_EventListener_handle_arc_scene_event_SceneEvent_R_boolean 0
typedef jbool (*func_arc_scene_event_EventListener_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_event_EventListener(jobject object, jint mark, jint depth);
void clinit_arc_scene_event_EventListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
