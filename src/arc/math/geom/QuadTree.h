#ifndef HEADER_arc_math_geom_QuadTree
#define HEADER_arc_math_geom_QuadTree

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_QuadTree {
	java_lang_Object parent;
	jref F_tmp;
	jref F_bounds;
	jref F_objects;
	jref F_botLeft;
	jref F_botRight;
	jref F_topLeft;
	jref F_topRight;
	jbool F_leaf;
	jint F_totalObjects;
	jref F_fillBL;
	jref F_fillBR;
	jref F_fillTL;
	jref F_fillTR;
} arc_math_geom_QuadTree;

extern Class class_arc_math_geom_QuadTree;

extern jfloat SF_arc_math_geom_QuadTree_minNodeSize;
extern jint SF_arc_math_geom_QuadTree_maxObjectsPerNode;

#define VTABLE_arc_math_geom_QuadTree_hashCode_R_int 0
typedef jint (*func_arc_math_geom_QuadTree_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_QuadTree_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_QuadTree_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_QuadTree_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_QuadTree_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_QuadTree_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_QuadTree_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_QuadTree_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_QuadTree_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_QuadTree_finalize 5
typedef void (*func_arc_math_geom_QuadTree_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_QuadTree_notify 6
typedef void (*func_arc_math_geom_QuadTree_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_QuadTree_notifyAll 7
typedef void (*func_arc_math_geom_QuadTree_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_QuadTree_wait 8
typedef void (*func_arc_math_geom_QuadTree_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_QuadTree_wait_long 9
typedef void (*func_arc_math_geom_QuadTree_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_QuadTree_wait_long_int 10
typedef void (*func_arc_math_geom_QuadTree_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_QuadTree_split 11
typedef void (*func_arc_math_geom_QuadTree_split)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_QuadTree_unsplit 12
typedef void (*func_arc_math_geom_QuadTree_unsplit)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject 13
typedef void (*func_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_QuadTree_fill_arc_struct_Seq 14
typedef void (*func_arc_math_geom_QuadTree_fill_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_QuadTree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean 15
typedef jbool (*func_arc_math_geom_QuadTree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_QuadTree_clear 16
typedef void (*func_arc_math_geom_QuadTree_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_QuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree 17
typedef jobject (*func_arc_math_geom_QuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons 18
typedef void (*func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean 19
typedef jbool (*func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject 20
typedef jobject (*func_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean 21
typedef jbool (*func_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_func_Cons 22
typedef void (*func_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq 23
typedef void (*func_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq 24
typedef void (*func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_arc_math_geom_QuadTree_getObjects_arc_struct_Seq 25
typedef void (*func_arc_math_geom_QuadTree_getObjects_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree 26
typedef jobject (*func_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject 27
typedef void (*func_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject)(jcontext ctx, jobject self, jobject param0);

void mark_arc_math_geom_QuadTree(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_QuadTree(jcontext ctx);
void init_arc_math_geom_QuadTree_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
void M_arc_math_geom_QuadTree_split(jcontext ctx, jobject self);
void M_arc_math_geom_QuadTree_unsplit(jcontext ctx, jobject self);
void M_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject(jcontext ctx, jobject self, jobject param0);
void M_arc_math_geom_QuadTree_fill_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jbool M_arc_math_geom_QuadTree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_arc_math_geom_QuadTree_clear(jcontext ctx, jobject self);
jobject M_arc_math_geom_QuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree(jcontext ctx, jobject self, jobject param0);
void M_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jbool M_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jobject M_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jbool M_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
void M_arc_math_geom_QuadTree_getObjects_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree(jcontext ctx, jobject self, jobject param0);
void M_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
