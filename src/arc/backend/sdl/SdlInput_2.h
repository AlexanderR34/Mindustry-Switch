#ifndef HEADER_arc_backend_sdl_SdlInput$2
#define HEADER_arc_backend_sdl_SdlInput$2

#include "Clearwing.h"
#include "arc/backend/sdl/SdlInput_1ImeData.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_backend_sdl_SdlInput$2 {
	arc_backend_sdl_SdlInput$1ImeData parent;
	jref F_val$field;
	jref F_this$0;
} arc_backend_sdl_SdlInput$2;

extern Class class_arc_backend_sdl_SdlInput$2;


#define VTABLE_arc_backend_sdl_SdlInput$2_hashCode_R_int 0
typedef jint (*func_arc_backend_sdl_SdlInput$2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlInput$2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_backend_sdl_SdlInput$2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlInput$2_clone_R_java_lang_Object 2
typedef jobject (*func_arc_backend_sdl_SdlInput$2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlInput$2_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_backend_sdl_SdlInput$2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlInput$2_toString_R_java_lang_String 4
typedef jobject (*func_arc_backend_sdl_SdlInput$2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlInput$2_finalize 5
typedef void (*func_arc_backend_sdl_SdlInput$2_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlInput$2_notify 6
typedef void (*func_arc_backend_sdl_SdlInput$2_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlInput$2_notifyAll 7
typedef void (*func_arc_backend_sdl_SdlInput$2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlInput$2_wait 8
typedef void (*func_arc_backend_sdl_SdlInput$2_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlInput$2_wait_long 9
typedef void (*func_arc_backend_sdl_SdlInput$2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_backend_sdl_SdlInput$2_wait_long_int 10
typedef void (*func_arc_backend_sdl_SdlInput$2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_backend_sdl_SdlInput$2(jobject object, jint mark, jint depth);
void clinit_arc_backend_sdl_SdlInput$2(jcontext ctx);
void init_arc_backend_sdl_SdlInput$2_arc_backend_sdl_SdlInput_arc_scene_ui_TextField(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
