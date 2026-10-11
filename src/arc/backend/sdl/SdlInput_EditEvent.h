#ifndef HEADER_arc_backend_sdl_SdlInput$EditEvent
#define HEADER_arc_backend_sdl_SdlInput$EditEvent

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_backend_sdl_SdlInput$EditEvent {
	java_lang_Object parent;
	jint F_start;
	jint F_length;
	jref F_text;
	jref F_this$0;
} arc_backend_sdl_SdlInput$EditEvent;

extern Class class_arc_backend_sdl_SdlInput$EditEvent;


#define VTABLE_arc_backend_sdl_SdlInput$EditEvent_hashCode_R_int 0
typedef jint (*func_arc_backend_sdl_SdlInput$EditEvent_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlInput$EditEvent_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_backend_sdl_SdlInput$EditEvent_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlInput$EditEvent_clone_R_java_lang_Object 2
typedef jobject (*func_arc_backend_sdl_SdlInput$EditEvent_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlInput$EditEvent_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_backend_sdl_SdlInput$EditEvent_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlInput$EditEvent_toString_R_java_lang_String 4
typedef jobject (*func_arc_backend_sdl_SdlInput$EditEvent_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlInput$EditEvent_finalize 5
typedef void (*func_arc_backend_sdl_SdlInput$EditEvent_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlInput$EditEvent_notify 6
typedef void (*func_arc_backend_sdl_SdlInput$EditEvent_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlInput$EditEvent_notifyAll 7
typedef void (*func_arc_backend_sdl_SdlInput$EditEvent_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlInput$EditEvent_wait 8
typedef void (*func_arc_backend_sdl_SdlInput$EditEvent_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlInput$EditEvent_wait_long 9
typedef void (*func_arc_backend_sdl_SdlInput$EditEvent_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_backend_sdl_SdlInput$EditEvent_wait_long_int 10
typedef void (*func_arc_backend_sdl_SdlInput$EditEvent_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_backend_sdl_SdlInput$EditEvent(jobject object, jint mark, jint depth);
void clinit_arc_backend_sdl_SdlInput$EditEvent(jcontext ctx);
void init_arc_backend_sdl_SdlInput$EditEvent_arc_backend_sdl_SdlInput(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
