#ifndef HEADER_arc_backend_sdl_SdlConfig
#define HEADER_arc_backend_sdl_SdlConfig

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_backend_sdl_SdlConfig {
	java_lang_Object parent;
	jint F_r;
	jint F_g;
	jint F_b;
	jint F_a;
	jint F_depth;
	jint F_stencil;
	jint F_samples;
	jref F_hdpiMode;
	jint F_width;
	jint F_height;
	jbool F_resizable;
	jbool F_decorated;
	jbool F_maximized;
	jbool F_fullscreen;
	jbool F_disableAudio;
	jbool F_coreProfile;
	jref F_glVersions;
	jbool F_allowGl30;
	jref F_title;
	jref F_initialBackgroundColor;
	jbool F_initialVisible;
	jbool F_vSyncEnabled;
	jref F_windowIconFileType;
	jref F_windowIconPaths;
} arc_backend_sdl_SdlConfig;

extern Class class_arc_backend_sdl_SdlConfig;


#define VTABLE_arc_backend_sdl_SdlConfig_hashCode_R_int 0
typedef jint (*func_arc_backend_sdl_SdlConfig_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlConfig_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_backend_sdl_SdlConfig_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlConfig_clone_R_java_lang_Object 2
typedef jobject (*func_arc_backend_sdl_SdlConfig_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlConfig_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_backend_sdl_SdlConfig_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlConfig_toString_R_java_lang_String 4
typedef jobject (*func_arc_backend_sdl_SdlConfig_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlConfig_finalize 5
typedef void (*func_arc_backend_sdl_SdlConfig_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlConfig_notify 6
typedef void (*func_arc_backend_sdl_SdlConfig_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlConfig_notifyAll 7
typedef void (*func_arc_backend_sdl_SdlConfig_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlConfig_wait 8
typedef void (*func_arc_backend_sdl_SdlConfig_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlConfig_wait_long 9
typedef void (*func_arc_backend_sdl_SdlConfig_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_backend_sdl_SdlConfig_wait_long_int 10
typedef void (*func_arc_backend_sdl_SdlConfig_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlConfig_setWindowIcon_arc_Files$FileType_Array1_java_lang_String 11
typedef void (*func_arc_backend_sdl_SdlConfig_setWindowIcon_arc_Files$FileType_Array1_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_backend_sdl_SdlConfig(jobject object, jint mark, jint depth);
void clinit_arc_backend_sdl_SdlConfig(jcontext ctx);
void init_arc_backend_sdl_SdlConfig(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlConfig_setWindowIcon_arc_Files$FileType_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
