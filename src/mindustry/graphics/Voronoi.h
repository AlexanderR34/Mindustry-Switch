#ifndef HEADER_mindustry_graphics_Voronoi
#define HEADER_mindustry_graphics_Voronoi

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_Voronoi {
	java_lang_Object parent;
	jint F_siteidx;
	jref F_sites;
	jint F_nsites;
	jfloat F_borderMinX;
	jfloat F_borderMaxX;
	jfloat F_borderMinY;
	jfloat F_borderMaxY;
	jfloat F_ymin;
	jfloat F_deltay;
	jint F_nvertices;
	jint F_nedges;
	jref F_bottomsite;
	jint F_PQcount;
	jint F_PQmin;
	jint F_PQhashsize;
	jref F_PQhash;
	jint F_ELhashsize;
	jref F_ELhash;
	jref F_allEdges;
	jfloat F_minDistanceBetweenSites;
} mindustry_graphics_Voronoi;

extern Class class_mindustry_graphics_Voronoi;

extern jint SF_mindustry_graphics_Voronoi_LE;
extern jint SF_mindustry_graphics_Voronoi_RE;

#define VTABLE_mindustry_graphics_Voronoi_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_Voronoi_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_Voronoi_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Voronoi_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_Voronoi_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_Voronoi_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_Voronoi_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi_finalize 5
typedef void (*func_mindustry_graphics_Voronoi_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi_notify 6
typedef void (*func_mindustry_graphics_Voronoi_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi_notifyAll 7
typedef void (*func_mindustry_graphics_Voronoi_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi_wait 8
typedef void (*func_mindustry_graphics_Voronoi_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi_wait_long 9
typedef void (*func_mindustry_graphics_Voronoi_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_Voronoi_wait_long_int 10
typedef void (*func_mindustry_graphics_Voronoi_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_Voronoi_generateVoronoi_Array1_arc_math_geom_Vec2_float_float_float_float_R_arc_struct_Seq 11
typedef jobject (*func_mindustry_graphics_Voronoi_generateVoronoi_Array1_arc_math_geom_Vec2_float_float_float_float_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_graphics_Voronoi_next_R_mindustry_graphics_Voronoi$Site 12
typedef jobject (*func_mindustry_graphics_Voronoi_next_R_mindustry_graphics_Voronoi$Site)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi_bisect_mindustry_graphics_Voronoi$Site_mindustry_graphics_Voronoi$Site_R_mindustry_graphics_Voronoi$Edge 13
typedef jobject (*func_mindustry_graphics_Voronoi_bisect_mindustry_graphics_Voronoi$Site_mindustry_graphics_Voronoi$Site_R_mindustry_graphics_Voronoi$Edge)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Voronoi_pqbucket_mindustry_graphics_Voronoi$Halfedge_R_int 14
typedef jint (*func_mindustry_graphics_Voronoi_pqbucket_mindustry_graphics_Voronoi$Halfedge_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Voronoi_pqinsert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Site_float 15
typedef void (*func_mindustry_graphics_Voronoi_pqinsert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Site_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_graphics_Voronoi_pqdelete_mindustry_graphics_Voronoi$Halfedge 16
typedef void (*func_mindustry_graphics_Voronoi_pqdelete_mindustry_graphics_Voronoi$Halfedge)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge 17
typedef jobject (*func_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_graphics_Voronoi_leftReg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site 18
typedef jobject (*func_mindustry_graphics_Voronoi_leftReg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Voronoi_insert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge 19
typedef void (*func_mindustry_graphics_Voronoi_insert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Voronoi_delete_mindustry_graphics_Voronoi$Halfedge 20
typedef void (*func_mindustry_graphics_Voronoi_delete_mindustry_graphics_Voronoi$Halfedge)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Voronoi_getHash_int_R_mindustry_graphics_Voronoi$Halfedge 21
typedef jobject (*func_mindustry_graphics_Voronoi_getHash_int_R_mindustry_graphics_Voronoi$Halfedge)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_graphics_Voronoi_clipLine_mindustry_graphics_Voronoi$Edge 22
typedef void (*func_mindustry_graphics_Voronoi_clipLine_mindustry_graphics_Voronoi$Edge)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Voronoi_endpoint_mindustry_graphics_Voronoi$Edge_int_mindustry_graphics_Voronoi$Site 23
typedef void (*func_mindustry_graphics_Voronoi_endpoint_mindustry_graphics_Voronoi$Edge_int_mindustry_graphics_Voronoi$Site)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_mindustry_graphics_Voronoi_right_mindustry_graphics_Voronoi$Halfedge_arc_math_geom_Vec2_R_boolean 24
typedef jbool (*func_mindustry_graphics_Voronoi_right_mindustry_graphics_Voronoi$Halfedge_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_Voronoi_rightreg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site 25
typedef jobject (*func_mindustry_graphics_Voronoi_rightreg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Voronoi_intersect_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site 26
typedef jobject (*func_mindustry_graphics_Voronoi_intersect_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_graphics_Voronoi(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_Voronoi(jcontext ctx);
void init_mindustry_graphics_Voronoi(jcontext ctx, jobject self);
jobject SM_mindustry_graphics_Voronoi_generate_Array1_arc_math_geom_Vec2_float_float_float_float_R_arc_struct_Seq(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jobject M_mindustry_graphics_Voronoi_generateVoronoi_Array1_arc_math_geom_Vec2_float_float_float_float_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jobject M_mindustry_graphics_Voronoi_next_R_mindustry_graphics_Voronoi$Site(jcontext ctx, jobject self);
jobject M_mindustry_graphics_Voronoi_bisect_mindustry_graphics_Voronoi$Site_mindustry_graphics_Voronoi$Site_R_mindustry_graphics_Voronoi$Edge(jcontext ctx, jobject self, jobject param0, jobject param1);
jint M_mindustry_graphics_Voronoi_pqbucket_mindustry_graphics_Voronoi$Halfedge_R_int(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_Voronoi_pqinsert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Site_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
void M_mindustry_graphics_Voronoi_pqdelete_mindustry_graphics_Voronoi$Halfedge(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_mindustry_graphics_Voronoi_leftReg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_Voronoi_insert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_graphics_Voronoi_delete_mindustry_graphics_Voronoi$Halfedge(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_graphics_Voronoi_getHash_int_R_mindustry_graphics_Voronoi$Halfedge(jcontext ctx, jobject self, jint param0);
void M_mindustry_graphics_Voronoi_clipLine_mindustry_graphics_Voronoi$Edge(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_Voronoi_endpoint_mindustry_graphics_Voronoi$Edge_int_mindustry_graphics_Voronoi$Site(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jbool M_mindustry_graphics_Voronoi_right_mindustry_graphics_Voronoi$Halfedge_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_graphics_Voronoi_rightreg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_graphics_Voronoi_intersect_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site(jcontext ctx, jobject self, jobject param0, jobject param1);
jint SM_mindustry_graphics_Voronoi_lambda$generateVoronoi$0_mindustry_graphics_Voronoi$Site_mindustry_graphics_Voronoi$Site_R_int(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
