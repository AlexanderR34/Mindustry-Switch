#ifndef HEADER_mindustry_world_Edges
#define HEADER_mindustry_world_Edges

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_Edges {
	java_lang_Object parent;
} mindustry_world_Edges;

extern Class class_mindustry_world_Edges;

extern jint SF_mindustry_world_Edges_maxRadius;
extern jobject SF_mindustry_world_Edges_edges;
extern jobject SF_mindustry_world_Edges_edgeInside;
extern jobject SF_mindustry_world_Edges_polygons;

#define VTABLE_mindustry_world_Edges_hashCode_R_int 0
typedef jint (*func_mindustry_world_Edges_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Edges_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_Edges_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Edges_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_Edges_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Edges_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_Edges_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Edges_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_Edges_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Edges_finalize 5
typedef void (*func_mindustry_world_Edges_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Edges_notify 6
typedef void (*func_mindustry_world_Edges_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Edges_notifyAll 7
typedef void (*func_mindustry_world_Edges_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Edges_wait 8
typedef void (*func_mindustry_world_Edges_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Edges_wait_long 9
typedef void (*func_mindustry_world_Edges_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_Edges_wait_long_int 10
typedef void (*func_mindustry_world_Edges_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_world_Edges(jobject object, jint mark, jint depth);
void clinit_mindustry_world_Edges(jcontext ctx);
void init_mindustry_world_Edges(jcontext ctx, jobject self);
jobject SM_mindustry_world_Edges_getFacingEdge_mindustry_gen_Building_mindustry_gen_Building_R_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Tile_mindustry_world_Tile_R_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Block_int_int_mindustry_world_Tile_R_mindustry_world_Tile(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
jobject SM_mindustry_world_Edges_getPixelPolygon_float_R_Array1_arc_math_geom_Vec2(jcontext ctx, jfloat param0);
jobject SM_mindustry_world_Edges_getEdges_int_R_Array1_arc_math_geom_Point2(jcontext ctx, jint param0);
jobject SM_mindustry_world_Edges_getInsideEdges_int_R_Array1_arc_math_geom_Point2(jcontext ctx, jint param0);
jint SM_mindustry_world_Edges_lambda$static$0_arc_math_geom_Point2_arc_math_geom_Point2_R_int(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
