#ifndef HEADER_arc_scene_event_InputEvent
#define HEADER_arc_scene_event_InputEvent

#include "Clearwing.h"
#include "arc/scene/event/SceneEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_event_InputEvent {
	arc_scene_event_SceneEvent parent;
	jref F_type;
	jfloat F_stageX;
	jfloat F_stageY;
	jint F_pointer;
	jfloat F_scrollAmountX;
	jfloat F_scrollAmountY;
	jref F_keyCode;
	jchar F_character;
	jref F_relatedActor;
} arc_scene_event_InputEvent;

extern Class class_arc_scene_event_InputEvent;


#define VTABLE_arc_scene_event_InputEvent_hashCode_R_int 0
typedef jint (*func_arc_scene_event_InputEvent_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_event_InputEvent_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_event_InputEvent_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_event_InputEvent_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_event_InputEvent_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_event_InputEvent_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent_finalize 5
typedef void (*func_arc_scene_event_InputEvent_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent_notify 6
typedef void (*func_arc_scene_event_InputEvent_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent_notifyAll 7
typedef void (*func_arc_scene_event_InputEvent_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent_wait 8
typedef void (*func_arc_scene_event_InputEvent_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent_wait_long 9
typedef void (*func_arc_scene_event_InputEvent_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_event_InputEvent_wait_long_int 10
typedef void (*func_arc_scene_event_InputEvent_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_event_InputEvent_reset 11
typedef void (*func_arc_scene_event_InputEvent_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent_handle 12
typedef void (*func_arc_scene_event_InputEvent_handle)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent_cancel 13
typedef void (*func_arc_scene_event_InputEvent_cancel)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent_stop 14
typedef void (*func_arc_scene_event_InputEvent_stop)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_event_InputEvent_toCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2 15
typedef jobject (*func_arc_scene_event_InputEvent_toCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_scene_event_InputEvent_isTouchFocusCancel_R_boolean 16
typedef jbool (*func_arc_scene_event_InputEvent_isTouchFocusCancel_R_boolean)(jcontext ctx, jobject self);

void mark_arc_scene_event_InputEvent(jobject object, jint mark, jint depth);
void clinit_arc_scene_event_InputEvent(jcontext ctx);
void init_arc_scene_event_InputEvent(jcontext ctx, jobject self);
void M_arc_scene_event_InputEvent_reset(jcontext ctx, jobject self);
jobject M_arc_scene_event_InputEvent_toCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_arc_scene_event_InputEvent_isTouchFocusCancel_R_boolean(jcontext ctx, jobject self);
jobject M_arc_scene_event_InputEvent_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
