#ifndef HEADER_arc_backend_sdl_SdlGraphics$SdlCursor
#define HEADER_arc_backend_sdl_SdlGraphics$SdlCursor

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/Graphics_Cursor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_backend_sdl_SdlGraphics$SdlCursor {
	java_lang_Object parent;
	jlong F_surfaceHandle;
	jlong F_cursorHandle;
} arc_backend_sdl_SdlGraphics$SdlCursor;

extern Class class_arc_backend_sdl_SdlGraphics$SdlCursor;


#define VTABLE_arc_backend_sdl_SdlGraphics$SdlCursor_hashCode_R_int 0
typedef jint (*func_arc_backend_sdl_SdlGraphics$SdlCursor_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGraphics$SdlCursor_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_backend_sdl_SdlGraphics$SdlCursor_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlGraphics$SdlCursor_clone_R_java_lang_Object 2
typedef jobject (*func_arc_backend_sdl_SdlGraphics$SdlCursor_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGraphics$SdlCursor_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_backend_sdl_SdlGraphics$SdlCursor_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGraphics$SdlCursor_toString_R_java_lang_String 4
typedef jobject (*func_arc_backend_sdl_SdlGraphics$SdlCursor_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGraphics$SdlCursor_finalize 5
typedef void (*func_arc_backend_sdl_SdlGraphics$SdlCursor_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGraphics$SdlCursor_notify 6
typedef void (*func_arc_backend_sdl_SdlGraphics$SdlCursor_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGraphics$SdlCursor_notifyAll 7
typedef void (*func_arc_backend_sdl_SdlGraphics$SdlCursor_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGraphics$SdlCursor_wait 8
typedef void (*func_arc_backend_sdl_SdlGraphics$SdlCursor_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGraphics$SdlCursor_wait_long 9
typedef void (*func_arc_backend_sdl_SdlGraphics$SdlCursor_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_backend_sdl_SdlGraphics$SdlCursor_wait_long_int 10
typedef void (*func_arc_backend_sdl_SdlGraphics$SdlCursor_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlGraphics$SdlCursor_dispose 11
typedef void (*func_arc_backend_sdl_SdlGraphics$SdlCursor_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlGraphics$SdlCursor_isDisposed_R_boolean 12
typedef jbool (*func_arc_backend_sdl_SdlGraphics$SdlCursor_isDisposed_R_boolean)(jcontext ctx, jobject self);

void mark_arc_backend_sdl_SdlGraphics$SdlCursor(jobject object, jint mark, jint depth);
void clinit_arc_backend_sdl_SdlGraphics$SdlCursor(jcontext ctx);
void init_arc_backend_sdl_SdlGraphics$SdlCursor_long_long(jcontext ctx, jobject self, jlong param0, jlong param1);
void M_arc_backend_sdl_SdlGraphics$SdlCursor_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
