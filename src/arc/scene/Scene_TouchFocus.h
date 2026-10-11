#ifndef HEADER_arc_scene_Scene$TouchFocus
#define HEADER_arc_scene_Scene$TouchFocus

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_Scene$TouchFocus {
	java_lang_Object parent;
	jref F_listener;
	jref F_listenerActor;
	jref F_target;
	jint F_pointer;
	jref F_button;
} arc_scene_Scene$TouchFocus;

extern Class class_arc_scene_Scene$TouchFocus;


#define VTABLE_arc_scene_Scene$TouchFocus_hashCode_R_int 0
typedef jint (*func_arc_scene_Scene$TouchFocus_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$TouchFocus_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_Scene$TouchFocus_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Scene$TouchFocus_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_Scene$TouchFocus_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$TouchFocus_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_Scene$TouchFocus_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$TouchFocus_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_Scene$TouchFocus_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$TouchFocus_finalize 5
typedef void (*func_arc_scene_Scene$TouchFocus_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$TouchFocus_notify 6
typedef void (*func_arc_scene_Scene$TouchFocus_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$TouchFocus_notifyAll 7
typedef void (*func_arc_scene_Scene$TouchFocus_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$TouchFocus_wait 8
typedef void (*func_arc_scene_Scene$TouchFocus_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Scene$TouchFocus_wait_long 9
typedef void (*func_arc_scene_Scene$TouchFocus_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_Scene$TouchFocus_wait_long_int 10
typedef void (*func_arc_scene_Scene$TouchFocus_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_Scene$TouchFocus_reset 11
typedef void (*func_arc_scene_Scene$TouchFocus_reset)(jcontext ctx, jobject self);

void mark_arc_scene_Scene$TouchFocus(jobject object, jint mark, jint depth);
void clinit_arc_scene_Scene$TouchFocus(jcontext ctx);
void init_arc_scene_Scene$TouchFocus(jcontext ctx, jobject self);
void M_arc_scene_Scene$TouchFocus_reset(jcontext ctx, jobject self);
void init_arc_scene_Scene$TouchFocus_arc_scene_Scene$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
