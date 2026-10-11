#ifndef HEADER_mindustry_graphics_CacheLayer$ShaderLayer
#define HEADER_mindustry_graphics_CacheLayer$ShaderLayer

#include "Clearwing.h"
#include "mindustry/graphics/CacheLayer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_CacheLayer$ShaderLayer {
	mindustry_graphics_CacheLayer parent;
	jref F_shader;
} mindustry_graphics_CacheLayer$ShaderLayer;

extern Class class_mindustry_graphics_CacheLayer$ShaderLayer;


#define VTABLE_mindustry_graphics_CacheLayer$ShaderLayer_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_CacheLayer$ShaderLayer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer$ShaderLayer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_CacheLayer$ShaderLayer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_CacheLayer$ShaderLayer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_CacheLayer$ShaderLayer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer$ShaderLayer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_CacheLayer$ShaderLayer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer$ShaderLayer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_CacheLayer$ShaderLayer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer$ShaderLayer_finalize 5
typedef void (*func_mindustry_graphics_CacheLayer$ShaderLayer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer$ShaderLayer_notify 6
typedef void (*func_mindustry_graphics_CacheLayer$ShaderLayer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer$ShaderLayer_notifyAll 7
typedef void (*func_mindustry_graphics_CacheLayer$ShaderLayer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer$ShaderLayer_wait 8
typedef void (*func_mindustry_graphics_CacheLayer$ShaderLayer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer$ShaderLayer_wait_long 9
typedef void (*func_mindustry_graphics_CacheLayer$ShaderLayer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_CacheLayer$ShaderLayer_wait_long_int 10
typedef void (*func_mindustry_graphics_CacheLayer$ShaderLayer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_CacheLayer$ShaderLayer_begin 11
typedef void (*func_mindustry_graphics_CacheLayer$ShaderLayer_begin)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_CacheLayer$ShaderLayer_end 12
typedef void (*func_mindustry_graphics_CacheLayer$ShaderLayer_end)(jcontext ctx, jobject self);

void mark_mindustry_graphics_CacheLayer$ShaderLayer(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_CacheLayer$ShaderLayer(jcontext ctx);
void init_mindustry_graphics_CacheLayer$ShaderLayer_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0);
void init_mindustry_graphics_CacheLayer$ShaderLayer_arc_graphics_gl_Shader_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_graphics_CacheLayer$ShaderLayer_begin(jcontext ctx, jobject self);
void M_mindustry_graphics_CacheLayer$ShaderLayer_end(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
