#ifndef HEADER_arc_math_geom_IntQuadTree
#define HEADER_arc_math_geom_IntQuadTree

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_IntQuadTree {
	java_lang_Object parent;
	jref F_tmp;
	jref F_prov;
	jref F_bounds;
	jref F_objects;
	jref F_botLeft;
	jref F_botRight;
	jref F_topLeft;
	jref F_topRight;
	jbool F_leaf;
	jint F_totalObjects;
} arc_math_geom_IntQuadTree;

extern Class class_arc_math_geom_IntQuadTree;

extern jint SF_arc_math_geom_IntQuadTree_maxObjectsPerNode;

#define VTABLE_arc_math_geom_IntQuadTree_hashCode_R_int 0
typedef jint (*func_arc_math_geom_IntQuadTree_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_IntQuadTree_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_IntQuadTree_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_IntQuadTree_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_IntQuadTree_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_IntQuadTree_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_IntQuadTree_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_IntQuadTree_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_IntQuadTree_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_IntQuadTree_finalize 5
typedef void (*func_arc_math_geom_IntQuadTree_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_IntQuadTree_notify 6
typedef void (*func_arc_math_geom_IntQuadTree_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_IntQuadTree_notifyAll 7
typedef void (*func_arc_math_geom_IntQuadTree_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_IntQuadTree_wait 8
typedef void (*func_arc_math_geom_IntQuadTree_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_IntQuadTree_wait_long 9
typedef void (*func_arc_math_geom_IntQuadTree_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_IntQuadTree_wait_long_int 10
typedef void (*func_arc_math_geom_IntQuadTree_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_IntQuadTree_split 11
typedef void (*func_arc_math_geom_IntQuadTree_split)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_IntQuadTree_unsplit 12
typedef void (*func_arc_math_geom_IntQuadTree_unsplit)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_IntQuadTree_insert_int 13
typedef void (*func_arc_math_geom_IntQuadTree_insert_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_math_geom_IntQuadTree_remove_int_R_boolean 14
typedef jbool (*func_arc_math_geom_IntQuadTree_remove_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_math_geom_IntQuadTree_clear 15
typedef void (*func_arc_math_geom_IntQuadTree_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_IntQuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree 16
typedef jobject (*func_arc_math_geom_IntQuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc 17
typedef void (*func_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_arc_math_geom_IntQuadTree_any_float_float_float_float_R_boolean 18
typedef jbool (*func_arc_math_geom_IntQuadTree_any_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_math_geom_IntQuadTree_intersect_arc_math_geom_Rect_arc_func_Intc 19
typedef void (*func_arc_math_geom_IntQuadTree_intersect_arc_math_geom_Rect_arc_func_Intc)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_IntQuadTree_intersect_arc_math_geom_Rect_arc_struct_IntSeq 20
typedef void (*func_arc_math_geom_IntQuadTree_intersect_arc_math_geom_Rect_arc_struct_IntSeq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq 21
typedef void (*func_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_arc_math_geom_IntQuadTree_getObjects_arc_struct_IntSeq 22
typedef void (*func_arc_math_geom_IntQuadTree_getObjects_arc_struct_IntSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_IntQuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree 23
typedef jobject (*func_arc_math_geom_IntQuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_IntQuadTree_hitbox_int 24
typedef void (*func_arc_math_geom_IntQuadTree_hitbox_int)(jcontext ctx, jobject self, jint param0);

void mark_arc_math_geom_IntQuadTree(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_IntQuadTree(jcontext ctx);
void init_arc_math_geom_IntQuadTree_arc_math_geom_Rect_arc_math_geom_IntQuadTree$IntQuadTreeProvider(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_math_geom_IntQuadTree_split(jcontext ctx, jobject self);
void M_arc_math_geom_IntQuadTree_unsplit(jcontext ctx, jobject self);
void M_arc_math_geom_IntQuadTree_insert_int(jcontext ctx, jobject self, jint param0);
jbool M_arc_math_geom_IntQuadTree_remove_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_arc_math_geom_IntQuadTree_clear(jcontext ctx, jobject self);
jobject M_arc_math_geom_IntQuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree(jcontext ctx, jobject self, jobject param0);
void M_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jbool M_arc_math_geom_IntQuadTree_any_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_math_geom_IntQuadTree_intersect_arc_math_geom_Rect_arc_func_Intc(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_math_geom_IntQuadTree_intersect_arc_math_geom_Rect_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
void M_arc_math_geom_IntQuadTree_getObjects_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_IntQuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree(jcontext ctx, jobject self, jobject param0);
void M_arc_math_geom_IntQuadTree_hitbox_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
