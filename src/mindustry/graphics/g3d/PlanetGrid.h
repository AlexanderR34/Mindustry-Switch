#ifndef HEADER_mindustry_graphics_g3d_PlanetGrid
#define HEADER_mindustry_graphics_g3d_PlanetGrid

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_g3d_PlanetGrid {
	java_lang_Object parent;
	jint F_size;
	jref F_tiles;
	jref F_corners;
	jref F_edges;
} mindustry_graphics_g3d_PlanetGrid;

extern Class class_mindustry_graphics_g3d_PlanetGrid;

extern jobject SF_mindustry_graphics_g3d_PlanetGrid_cache;
extern jfloat SF_mindustry_graphics_g3d_PlanetGrid_x;
extern jfloat SF_mindustry_graphics_g3d_PlanetGrid_z;
extern jobject SF_mindustry_graphics_g3d_PlanetGrid_iTiles;
extern jobject SF_mindustry_graphics_g3d_PlanetGrid_iTilesP;

#define VTABLE_mindustry_graphics_g3d_PlanetGrid_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_g3d_PlanetGrid_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_g3d_PlanetGrid_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_g3d_PlanetGrid_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_g3d_PlanetGrid_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_g3d_PlanetGrid_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid_finalize 5
typedef void (*func_mindustry_graphics_g3d_PlanetGrid_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid_notify 6
typedef void (*func_mindustry_graphics_g3d_PlanetGrid_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid_notifyAll 7
typedef void (*func_mindustry_graphics_g3d_PlanetGrid_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid_wait 8
typedef void (*func_mindustry_graphics_g3d_PlanetGrid_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid_wait_long 9
typedef void (*func_mindustry_graphics_g3d_PlanetGrid_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_g3d_PlanetGrid_wait_long_int 10
typedef void (*func_mindustry_graphics_g3d_PlanetGrid_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_g3d_PlanetGrid(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_g3d_PlanetGrid(jcontext ctx);
void init_mindustry_graphics_g3d_PlanetGrid_int(jcontext ctx, jobject self, jint param0);
jobject SM_mindustry_graphics_g3d_PlanetGrid_create_int_R_mindustry_graphics_g3d_PlanetGrid(jcontext ctx, jint param0);
jobject SM_mindustry_graphics_g3d_PlanetGrid_initialGrid_R_mindustry_graphics_g3d_PlanetGrid(jcontext ctx);
jobject SM_mindustry_graphics_g3d_PlanetGrid_subdividedGrid_mindustry_graphics_g3d_PlanetGrid_R_mindustry_graphics_g3d_PlanetGrid(jcontext ctx, jobject param0);
void SM_mindustry_graphics_g3d_PlanetGrid_addCorner_int_mindustry_graphics_g3d_PlanetGrid_int_int_int(jcontext ctx, jint param0, jobject param1, jint param2, jint param3, jint param4);
void SM_mindustry_graphics_g3d_PlanetGrid_addEdge_int_mindustry_graphics_g3d_PlanetGrid_int_int(jcontext ctx, jint param0, jobject param1, jint param2, jint param3);
jint SM_mindustry_graphics_g3d_PlanetGrid_pos_mindustry_graphics_g3d_PlanetGrid$Ptile_mindustry_graphics_g3d_PlanetGrid$Ptile_R_int(jcontext ctx, jobject param0, jobject param1);
jint SM_mindustry_graphics_g3d_PlanetGrid_pos_mindustry_graphics_g3d_PlanetGrid$Ptile_mindustry_graphics_g3d_PlanetGrid$Corner_R_int(jcontext ctx, jobject param0, jobject param1);
jint SM_mindustry_graphics_g3d_PlanetGrid_pos_mindustry_graphics_g3d_PlanetGrid$Corner_mindustry_graphics_g3d_PlanetGrid$Corner_R_int(jcontext ctx, jobject param0, jobject param1);
jint SM_mindustry_graphics_g3d_PlanetGrid_tileCount_int_R_int(jcontext ctx, jint param0);
jint SM_mindustry_graphics_g3d_PlanetGrid_cornerCount_int_R_int(jcontext ctx, jint param0);
jint SM_mindustry_graphics_g3d_PlanetGrid_edgeCount_int_R_int(jcontext ctx, jint param0);

#ifdef __cplusplus
}
#endif

#endif
