#ifndef HEADER_arc_scene_Element$9
#define HEADER_arc_scene_Element$9

#include "Clearwing.h"
#include "arc/scene/event/ChangeListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_Element$9 {
	arc_scene_event_ChangeListener parent;
	jref F_val$elem;
	jref F_val$r;
	jref F_this$0;
} arc_scene_Element$9;

extern Class class_arc_scene_Element$9;


#define VTABLE_arc_scene_Element$9_hashCode_R_int 0
typedef jint (*func_arc_scene_Element$9_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element$9_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_Element$9_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element$9_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_Element$9_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element$9_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_Element$9_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element$9_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_Element$9_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element$9_finalize 5
typedef void (*func_arc_scene_Element$9_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element$9_notify 6
typedef void (*func_arc_scene_Element$9_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element$9_notifyAll 7
typedef void (*func_arc_scene_Element$9_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element$9_wait 8
typedef void (*func_arc_scene_Element$9_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Element$9_wait_long 9
typedef void (*func_arc_scene_Element$9_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_Element$9_wait_long_int 10
typedef void (*func_arc_scene_Element$9_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_Element$9_handle_arc_scene_event_SceneEvent_R_boolean 11
typedef jbool (*func_arc_scene_Element$9_handle_arc_scene_event_SceneEvent_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Element$9_changed_arc_scene_event_ChangeListener$ChangeEvent_arc_scene_Element 12
typedef void (*func_arc_scene_Element$9_changed_arc_scene_event_ChangeListener$ChangeEvent_arc_scene_Element)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_scene_Element$9(jobject object, jint mark, jint depth);
void clinit_arc_scene_Element$9(jcontext ctx);
void init_arc_scene_Element$9_arc_scene_Element_arc_scene_Element_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_arc_scene_Element$9_changed_arc_scene_event_ChangeListener$ChangeEvent_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
