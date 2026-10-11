#ifndef HEADER_mindustry_graphics_EnvRenderers
#define HEADER_mindustry_graphics_EnvRenderers

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_EnvRenderers {
	java_lang_Object parent;
} mindustry_graphics_EnvRenderers;

extern Class class_mindustry_graphics_EnvRenderers;


#define VTABLE_mindustry_graphics_EnvRenderers_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_EnvRenderers_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_EnvRenderers_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_EnvRenderers_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_EnvRenderers_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_EnvRenderers_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_EnvRenderers_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_EnvRenderers_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_EnvRenderers_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_EnvRenderers_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_EnvRenderers_finalize 5
typedef void (*func_mindustry_graphics_EnvRenderers_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_EnvRenderers_notify 6
typedef void (*func_mindustry_graphics_EnvRenderers_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_EnvRenderers_notifyAll 7
typedef void (*func_mindustry_graphics_EnvRenderers_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_EnvRenderers_wait 8
typedef void (*func_mindustry_graphics_EnvRenderers_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_EnvRenderers_wait_long 9
typedef void (*func_mindustry_graphics_EnvRenderers_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_EnvRenderers_wait_long_int 10
typedef void (*func_mindustry_graphics_EnvRenderers_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_EnvRenderers(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_EnvRenderers(jcontext ctx);
void init_mindustry_graphics_EnvRenderers(jcontext ctx, jobject self);
void SM_mindustry_graphics_EnvRenderers_init(jcontext ctx);
void SM_mindustry_graphics_EnvRenderers_lambda$init$4(jcontext ctx);
void SM_mindustry_graphics_EnvRenderers_lambda$init$1_arc_graphics_Color_arc_math_Rand_arc_graphics_Color_float_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4);
void SM_mindustry_graphics_EnvRenderers_lambda$init$3_arc_graphics_Color_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
void SM_mindustry_graphics_EnvRenderers_lambda$init$2_arc_graphics_Color(jcontext ctx, jobject param0);
void SM_mindustry_graphics_EnvRenderers_lambda$init$0_arc_graphics_Texture(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
