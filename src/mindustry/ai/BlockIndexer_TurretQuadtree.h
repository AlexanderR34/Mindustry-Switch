#ifndef HEADER_mindustry_ai_BlockIndexer$TurretQuadtree
#define HEADER_mindustry_ai_BlockIndexer$TurretQuadtree

#include "Clearwing.h"
#include "arc/math/geom/QuadTree.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_BlockIndexer$TurretQuadtree {
	arc_math_geom_QuadTree parent;
} mindustry_ai_BlockIndexer$TurretQuadtree;

extern Class class_mindustry_ai_BlockIndexer$TurretQuadtree;


#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_hashCode_R_int 0
typedef jint (*func_mindustry_ai_BlockIndexer$TurretQuadtree_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_BlockIndexer$TurretQuadtree_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_BlockIndexer$TurretQuadtree_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_BlockIndexer$TurretQuadtree_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_BlockIndexer$TurretQuadtree_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_finalize 5
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_notify 6
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_notifyAll 7
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_wait 8
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_wait_long 9
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_wait_long_int 10
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_split 11
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_split)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_unsplit 12
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_unsplit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_insert_arc_math_geom_QuadTree$QuadTreeObject 13
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_insert_arc_math_geom_QuadTree$QuadTreeObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_fill_arc_struct_Seq 14
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_fill_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean 15
typedef jbool (*func_mindustry_ai_BlockIndexer$TurretQuadtree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_clear 16
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree 17
typedef jobject (*func_mindustry_ai_BlockIndexer$TurretQuadtree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_intersect_float_float_float_float_arc_func_Cons 18
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_intersect_float_float_float_float_arc_func_Cons)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_intersect_float_float_float_float_arc_func_Boolf_R_boolean 19
typedef jbool (*func_mindustry_ai_BlockIndexer$TurretQuadtree_intersect_float_float_float_float_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject 20
typedef jobject (*func_mindustry_ai_BlockIndexer$TurretQuadtree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_any_float_float_float_float_R_boolean 21
typedef jbool (*func_mindustry_ai_BlockIndexer$TurretQuadtree_any_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_intersect_arc_math_geom_Rect_arc_func_Cons 22
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_intersect_arc_math_geom_Rect_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_intersect_arc_math_geom_Rect_arc_struct_Seq 23
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_intersect_arc_math_geom_Rect_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_intersect_float_float_float_float_arc_struct_Seq 24
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_intersect_float_float_float_float_arc_struct_Seq)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_getObjects_arc_struct_Seq 25
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_getObjects_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree 26
typedef jobject (*func_mindustry_ai_BlockIndexer$TurretQuadtree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_hitbox_arc_math_geom_QuadTree$QuadTreeObject 27
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_hitbox_arc_math_geom_QuadTree$QuadTreeObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_BlockIndexer$TurretQuadtree_hitbox_mindustry_gen_Building 28
typedef void (*func_mindustry_ai_BlockIndexer$TurretQuadtree_hitbox_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ai_BlockIndexer$TurretQuadtree(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_BlockIndexer$TurretQuadtree(jcontext ctx);
void init_mindustry_ai_BlockIndexer$TurretQuadtree_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_BlockIndexer$TurretQuadtree_hitbox_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_ai_BlockIndexer$TurretQuadtree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_BlockIndexer$TurretQuadtree_hitbox_arc_math_geom_QuadTree$QuadTreeObject(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
