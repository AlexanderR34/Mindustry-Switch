#ifndef HEADER_mindustry_graphics_Shaders
#define HEADER_mindustry_graphics_Shaders

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_Shaders {
	java_lang_Object parent;
} mindustry_graphics_Shaders;

extern Class class_mindustry_graphics_Shaders;

extern jobject SF_mindustry_graphics_Shaders_blockbuild;
extern jobject SF_mindustry_graphics_Shaders_shield;
extern jobject SF_mindustry_graphics_Shaders_buildBeam;
extern jobject SF_mindustry_graphics_Shaders_build;
extern jobject SF_mindustry_graphics_Shaders_armor;
extern jobject SF_mindustry_graphics_Shaders_darkness;
extern jobject SF_mindustry_graphics_Shaders_fog;
extern jobject SF_mindustry_graphics_Shaders_light;
extern jobject SF_mindustry_graphics_Shaders_water;
extern jobject SF_mindustry_graphics_Shaders_mud;
extern jobject SF_mindustry_graphics_Shaders_tar;
extern jobject SF_mindustry_graphics_Shaders_slag;
extern jobject SF_mindustry_graphics_Shaders_cryofluid;
extern jobject SF_mindustry_graphics_Shaders_space;
extern jobject SF_mindustry_graphics_Shaders_caustics;
extern jobject SF_mindustry_graphics_Shaders_arkycite;
extern jobject SF_mindustry_graphics_Shaders_planet;
extern jobject SF_mindustry_graphics_Shaders_clouds;
extern jobject SF_mindustry_graphics_Shaders_planetGrid;
extern jobject SF_mindustry_graphics_Shaders_atmosphere;
extern jobject SF_mindustry_graphics_Shaders_shockwave;
extern jobject SF_mindustry_graphics_Shaders_mesh;
extern jobject SF_mindustry_graphics_Shaders_unlit;
extern jobject SF_mindustry_graphics_Shaders_unlitWhite;
extern jobject SF_mindustry_graphics_Shaders_screenspace;

#define VTABLE_mindustry_graphics_Shaders_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_Shaders_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_Shaders_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Shaders_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_Shaders_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_Shaders_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_Shaders_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders_finalize 5
typedef void (*func_mindustry_graphics_Shaders_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders_notify 6
typedef void (*func_mindustry_graphics_Shaders_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders_notifyAll 7
typedef void (*func_mindustry_graphics_Shaders_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders_wait 8
typedef void (*func_mindustry_graphics_Shaders_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Shaders_wait_long 9
typedef void (*func_mindustry_graphics_Shaders_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_Shaders_wait_long_int 10
typedef void (*func_mindustry_graphics_Shaders_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_Shaders(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_Shaders(jcontext ctx);
void init_mindustry_graphics_Shaders(jcontext ctx, jobject self);
void SM_mindustry_graphics_Shaders_init(jcontext ctx);
jobject SM_mindustry_graphics_Shaders_getShaderFi_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
