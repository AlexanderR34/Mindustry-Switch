#ifndef HEADER_mindustry_graphics_g3d_PlanetGrid$Ptile
#define HEADER_mindustry_graphics_g3d_PlanetGrid$Ptile

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_g3d_PlanetGrid$Ptile {
	java_lang_Object parent;
	jint F_id;
	jint F_edgeCount;
	jref F_tiles;
	jref F_corners;
	jref F_edges;
	jref F_v;
} mindustry_graphics_g3d_PlanetGrid$Ptile;

extern Class class_mindustry_graphics_g3d_PlanetGrid$Ptile;

extern jobject SF_mindustry_graphics_g3d_PlanetGrid$Ptile_empty;

#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Ptile_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_g3d_PlanetGrid$Ptile_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Ptile_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_g3d_PlanetGrid$Ptile_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Ptile_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_g3d_PlanetGrid$Ptile_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Ptile_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_g3d_PlanetGrid$Ptile_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Ptile_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_g3d_PlanetGrid$Ptile_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Ptile_finalize 5
typedef void (*func_mindustry_graphics_g3d_PlanetGrid$Ptile_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Ptile_notify 6
typedef void (*func_mindustry_graphics_g3d_PlanetGrid$Ptile_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Ptile_notifyAll 7
typedef void (*func_mindustry_graphics_g3d_PlanetGrid$Ptile_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Ptile_wait 8
typedef void (*func_mindustry_graphics_g3d_PlanetGrid$Ptile_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Ptile_wait_long 9
typedef void (*func_mindustry_graphics_g3d_PlanetGrid$Ptile_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid$Ptile_wait_long_int 10
typedef void (*func_mindustry_graphics_g3d_PlanetGrid$Ptile_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_g3d_PlanetGrid$Ptile(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_g3d_PlanetGrid$Ptile(jcontext ctx);
void init_mindustry_graphics_g3d_PlanetGrid$Ptile_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_graphics_g3d_PlanetGrid$Ptile_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
