#ifndef HEADER_mindustry_entities_EntityGroup
#define HEADER_mindustry_entities_EntityGroup

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_EntityGroup {
	java_lang_Object parent;
	jref F_array;
	jref F_intersectArray;
	jref F_viewport;
	jref F_intersectRect;
	jref F_indexer;
	jref F_map;
	jref F_tree;
	jbool F_clearing;
	jint F_index;
	jdouble F_fixedCounter;
	jdouble F_timeCounter;
	jlong F_lastTimeAccess;
	jref F_timeRuns;
} mindustry_entities_EntityGroup;

extern Class class_mindustry_entities_EntityGroup;

extern jint SF_mindustry_entities_EntityGroup_lastId;

#define VTABLE_mindustry_entities_EntityGroup_hashCode_R_int 0
typedef jint (*func_mindustry_entities_EntityGroup_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_EntityGroup_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityGroup_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_EntityGroup_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_EntityGroup_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_EntityGroup_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_finalize 5
typedef void (*func_mindustry_entities_EntityGroup_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_notify 6
typedef void (*func_mindustry_entities_EntityGroup_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_notifyAll 7
typedef void (*func_mindustry_entities_EntityGroup_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_wait 8
typedef void (*func_mindustry_entities_EntityGroup_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_wait_long 9
typedef void (*func_mindustry_entities_EntityGroup_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_EntityGroup_wait_long_int 10
typedef void (*func_mindustry_entities_EntityGroup_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator 11
typedef jobject (*func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_forEach_java_util_function_Consumer 12
typedef void (*func_mindustry_entities_EntityGroup_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityGroup_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_mindustry_entities_EntityGroup_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_checkIDCollisions_R_arc_struct_Seq 14
typedef jobject (*func_mindustry_entities_EntityGroup_checkIDCollisions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_sort_java_util_Comparator 15
typedef void (*func_mindustry_entities_EntityGroup_sort_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityGroup_collide 16
typedef void (*func_mindustry_entities_EntityGroup_collide)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_updatePhysics 17
typedef void (*func_mindustry_entities_EntityGroup_updatePhysics)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_update 18
typedef void (*func_mindustry_entities_EntityGroup_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_update_arc_func_Boolf 19
typedef void (*func_mindustry_entities_EntityGroup_update_arc_func_Boolf)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityGroup_fixedUpdate_int 20
typedef void (*func_mindustry_entities_EntityGroup_fixedUpdate_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_EntityGroup_fixedUpdate_int_int 21
typedef void (*func_mindustry_entities_EntityGroup_fixedUpdate_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_entities_EntityGroup_copy_R_arc_struct_Seq 22
typedef jobject (*func_mindustry_entities_EntityGroup_copy_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_copy_arc_struct_Seq_R_arc_struct_Seq 23
typedef jobject (*func_mindustry_entities_EntityGroup_copy_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons 24
typedef void (*func_mindustry_entities_EntityGroup_each_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons 25
typedef void (*func_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_entities_EntityGroup_draw_arc_func_Cons 26
typedef void (*func_mindustry_entities_EntityGroup_draw_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityGroup_useTree_R_boolean 27
typedef jbool (*func_mindustry_entities_EntityGroup_useTree_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_mappingEnabled_R_boolean 28
typedef jbool (*func_mindustry_entities_EntityGroup_mappingEnabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc 29
typedef jobject (*func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_EntityGroup_removeByID_int 30
typedef void (*func_mindustry_entities_EntityGroup_removeByID_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Cons 31
typedef void (*func_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Cons)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Boolf_R_boolean 32
typedef jbool (*func_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_entities_EntityGroup_intersect_float_float_float_float_R_arc_struct_Seq 33
typedef jobject (*func_mindustry_entities_EntityGroup_intersect_float_float_float_float_R_arc_struct_Seq)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_entities_EntityGroup_tree_R_arc_math_geom_QuadTree 34
typedef jobject (*func_mindustry_entities_EntityGroup_tree_R_arc_math_geom_QuadTree)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_rawSeq_R_arc_struct_Seq 35
typedef jobject (*func_mindustry_entities_EntityGroup_rawSeq_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_resize_float_float_float_float 36
typedef void (*func_mindustry_entities_EntityGroup_resize_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_entities_EntityGroup_isEmpty_R_boolean 37
typedef jbool (*func_mindustry_entities_EntityGroup_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_index_int_R_mindustry_gen_Entityc 38
typedef jobject (*func_mindustry_entities_EntityGroup_index_int_R_mindustry_gen_Entityc)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_EntityGroup_size_R_int 39
typedef jint (*func_mindustry_entities_EntityGroup_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_contains_arc_func_Boolf_R_boolean 40
typedef jbool (*func_mindustry_entities_EntityGroup_contains_arc_func_Boolf_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int 41
typedef jint (*func_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityGroup_add_mindustry_gen_Entityc 42
typedef void (*func_mindustry_entities_EntityGroup_add_mindustry_gen_Entityc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int 43
typedef jint (*func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc 44
typedef void (*func_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int 45
typedef void (*func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_entities_EntityGroup_clear 46
typedef void (*func_mindustry_entities_EntityGroup_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc 47
typedef jobject (*func_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityGroup_first_R_mindustry_gen_Entityc 48
typedef jobject (*func_mindustry_entities_EntityGroup_first_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);

void mark_mindustry_entities_EntityGroup(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_EntityGroup(jcontext ctx);
jint SM_mindustry_entities_EntityGroup_nextId_R_int(jcontext ctx);
void SM_mindustry_entities_EntityGroup_checkNextId_int(jcontext ctx, jint param0);
void init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2);
void init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean_mindustry_entities_EntityIndexer(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2, jobject param3);
jobject M_mindustry_entities_EntityGroup_checkIDCollisions_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_mindustry_entities_EntityGroup_sort_java_util_Comparator(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_EntityGroup_collide(jcontext ctx, jobject self);
void M_mindustry_entities_EntityGroup_updatePhysics(jcontext ctx, jobject self);
void M_mindustry_entities_EntityGroup_update(jcontext ctx, jobject self);
void M_mindustry_entities_EntityGroup_update_arc_func_Boolf(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_EntityGroup_fixedUpdate_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_entities_EntityGroup_fixedUpdate_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_entities_EntityGroup_copy_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_entities_EntityGroup_copy_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_EntityGroup_each_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_entities_EntityGroup_draw_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_entities_EntityGroup_useTree_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_EntityGroup_mappingEnabled_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc(jcontext ctx, jobject self, jint param0);
void M_mindustry_entities_EntityGroup_removeByID_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Cons(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jbool M_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Boolf_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jobject M_mindustry_entities_EntityGroup_intersect_float_float_float_float_R_arc_struct_Seq(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_mindustry_entities_EntityGroup_tree_R_arc_math_geom_QuadTree(jcontext ctx, jobject self);
jobject M_mindustry_entities_EntityGroup_rawSeq_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_mindustry_entities_EntityGroup_resize_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jbool M_mindustry_entities_EntityGroup_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_entities_EntityGroup_index_int_R_mindustry_gen_Entityc(jcontext ctx, jobject self, jint param0);
jint M_mindustry_entities_EntityGroup_size_R_int(jcontext ctx, jobject self);
jbool M_mindustry_entities_EntityGroup_contains_arc_func_Boolf_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_EntityGroup_add_mindustry_gen_Entityc(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_entities_EntityGroup_clear(jcontext ctx, jobject self);
jobject M_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_entities_EntityGroup_first_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject M_mindustry_entities_EntityGroup_toString_R_java_lang_String(jcontext ctx, jobject self);
void SM_mindustry_entities_EntityGroup_lambda$checkIDCollisions$0_arc_struct_IntSet_arc_struct_Seq_mindustry_gen_Entityc(jcontext ctx, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
