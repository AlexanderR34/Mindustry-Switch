#ifndef HEADER_mindustry_core_Renderer$EnvRenderer
#define HEADER_mindustry_core_Renderer$EnvRenderer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_Renderer$EnvRenderer {
	java_lang_Object parent;
	jint F_env;
	jref F_renderer;
} mindustry_core_Renderer$EnvRenderer;

extern Class class_mindustry_core_Renderer$EnvRenderer;


#define VTABLE_mindustry_core_Renderer$EnvRenderer_hashCode_R_int 0
typedef jint (*func_mindustry_core_Renderer$EnvRenderer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer$EnvRenderer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_core_Renderer$EnvRenderer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Renderer$EnvRenderer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_core_Renderer$EnvRenderer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer$EnvRenderer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_core_Renderer$EnvRenderer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer$EnvRenderer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_core_Renderer$EnvRenderer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer$EnvRenderer_finalize 5
typedef void (*func_mindustry_core_Renderer$EnvRenderer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer$EnvRenderer_notify 6
typedef void (*func_mindustry_core_Renderer$EnvRenderer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer$EnvRenderer_notifyAll 7
typedef void (*func_mindustry_core_Renderer$EnvRenderer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer$EnvRenderer_wait 8
typedef void (*func_mindustry_core_Renderer$EnvRenderer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Renderer$EnvRenderer_wait_long 9
typedef void (*func_mindustry_core_Renderer$EnvRenderer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_Renderer$EnvRenderer_wait_long_int 10
typedef void (*func_mindustry_core_Renderer$EnvRenderer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_core_Renderer$EnvRenderer(jobject object, jint mark, jint depth);
void clinit_mindustry_core_Renderer$EnvRenderer(jcontext ctx);
void init_mindustry_core_Renderer$EnvRenderer_int_java_lang_Runnable(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
