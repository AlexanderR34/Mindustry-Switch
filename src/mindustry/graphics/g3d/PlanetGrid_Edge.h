#ifndef HEADER_mindustry_graphics_g3d_PlanetGrid$Edge
#define HEADER_mindustry_graphics_g3d_PlanetGrid$Edge

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_g3d_PlanetGrid$Edge {
	java_lang_Object parent;
	jint F_id;
	jref F_tiles;
	jref F_corners;
} mindustry_graphics_g3d_PlanetGrid$Edge;

extern Class class_mindustry_graphics_g3d_PlanetGrid$Edge;


#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Edge_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_g3d_PlanetGrid$Edge_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Edge_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_g3d_PlanetGrid$Edge_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Edge_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_g3d_PlanetGrid$Edge_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Edge_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_g3d_PlanetGrid$Edge_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Edge_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_g3d_PlanetGrid$Edge_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Edge_finalize 5
typedef void (*func_mindustry_graphics_g3d_PlanetGrid$Edge_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Edge_notify 6
typedef void (*func_mindustry_graphics_g3d_PlanetGrid$Edge_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Edge_notifyAll 7
typedef void (*func_mindustry_graphics_g3d_PlanetGrid$Edge_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Edge_wait 8
typedef void (*func_mindustry_graphics_g3d_PlanetGrid$Edge_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Edge_wait_long 9
typedef void (*func_mindustry_graphics_g3d_PlanetGrid$Edge_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Edge_wait_long_int 10
typedef void (*func_mindustry_graphics_g3d_PlanetGrid$Edge_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_g3d_PlanetGrid$Edge(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_g3d_PlanetGrid$Edge(jcontext ctx);
void init_mindustry_graphics_g3d_PlanetGrid$Edge_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
