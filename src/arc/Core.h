#ifndef HEADER_arc_Core
#define HEADER_arc_Core

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_Core {
	java_lang_Object parent;
} arc_Core;

extern Class class_arc_Core;

extern jobject SF_arc_Core_app;
extern jobject SF_arc_Core_graphics;
extern jobject SF_arc_Core_audio;
extern jobject SF_arc_Core_input;
extern jobject SF_arc_Core_files;
extern jobject SF_arc_Core_settings;
extern jobject SF_arc_Core_bundle;
extern jobject SF_arc_Core_camera;
extern jobject SF_arc_Core_batch;
extern jobject SF_arc_Core_scene;
extern jobject SF_arc_Core_assets;
extern jobject SF_arc_Core_atlas;
extern jobject SF_arc_Core_executor;
extern jobject SF_arc_Core_gl;
extern jobject SF_arc_Core_gl20;
extern jobject SF_arc_Core_gl30;

#define VTABLE_arc_Core_hashCode_R_int 0
typedef jint (*func_arc_Core_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Core_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_Core_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Core_clone_R_java_lang_Object 2
typedef jobject (*func_arc_Core_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_Core_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_Core_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_Core_toString_R_java_lang_String 4
typedef jobject (*func_arc_Core_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_Core_finalize 5
typedef void (*func_arc_Core_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_Core_notify 6
typedef void (*func_arc_Core_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_Core_notifyAll 7
typedef void (*func_arc_Core_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_Core_wait 8
typedef void (*func_arc_Core_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_Core_wait_long 9
typedef void (*func_arc_Core_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_Core_wait_long_int 10
typedef void (*func_arc_Core_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_Core(jobject object, jint mark, jint depth);
void clinit_arc_Core(jcontext ctx);
void init_arc_Core(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
