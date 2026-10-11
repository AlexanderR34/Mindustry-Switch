#ifndef HEADER_mindustry_entities_EntityCollisions
#define HEADER_mindustry_entities_EntityCollisions

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_EntityCollisions {
	java_lang_Object parent;
	jref F_vector;
	jref F_l1;
	jref F_r1;
	jref F_r2;
	jref F_tmp;
	jref F_arrOut;
	jref F_hitCons;
	jref F_treeCons;
} mindustry_entities_EntityCollisions;

extern Class class_mindustry_entities_EntityCollisions;

extern jfloat SF_mindustry_entities_EntityCollisions_seg;
extern jfloat SF_mindustry_entities_EntityCollisions_maxDelta;

#define VTABLE_mindustry_entities_EntityCollisions_hashCode_R_int 0
typedef jint (*func_mindustry_entities_EntityCollisions_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityCollisions_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_EntityCollisions_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityCollisions_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_EntityCollisions_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityCollisions_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_EntityCollisions_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityCollisions_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_EntityCollisions_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityCollisions_finalize 5
typedef void (*func_mindustry_entities_EntityCollisions_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityCollisions_notify 6
typedef void (*func_mindustry_entities_EntityCollisions_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityCollisions_notifyAll 7
typedef void (*func_mindustry_entities_EntityCollisions_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityCollisions_wait 8
typedef void (*func_mindustry_entities_EntityCollisions_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_EntityCollisions_wait_long 9
typedef void (*func_mindustry_entities_EntityCollisions_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_EntityCollisions_wait_long_int 10
typedef void (*func_mindustry_entities_EntityCollisions_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_EntityCollisions_moveCheck_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred 11
typedef void (*func_mindustry_entities_EntityCollisions_moveCheck_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float 12
typedef void (*func_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred 13
typedef void (*func_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3);
#define VTABLE_mindustry_entities_EntityCollisions_moveDelta_mindustry_gen_Hitboxc_float_float_int_boolean_mindustry_entities_EntityCollisions$SolidPred 14
typedef void (*func_mindustry_entities_EntityCollisions_moveDelta_mindustry_gen_Hitboxc_float_float_int_boolean_mindustry_entities_EntityCollisions$SolidPred)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jbool param4, jobject param5);
#define VTABLE_mindustry_entities_EntityCollisions_overlapsTile_arc_math_geom_Rect_mindustry_entities_EntityCollisions$SolidPred_R_boolean 15
typedef jbool (*func_mindustry_entities_EntityCollisions_overlapsTile_arc_math_geom_Rect_mindustry_entities_EntityCollisions$SolidPred_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_entities_EntityCollisions_updatePhysics_mindustry_entities_EntityGroup 16
typedef void (*func_mindustry_entities_EntityCollisions_updatePhysics_mindustry_entities_EntityGroup)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityCollisions_checkCollide_mindustry_gen_Hitboxc_mindustry_gen_Hitboxc 17
typedef void (*func_mindustry_entities_EntityCollisions_checkCollide_mindustry_gen_Hitboxc_mindustry_gen_Hitboxc)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_entities_EntityCollisions_collide_mindustry_entities_EntityGroup 18
typedef void (*func_mindustry_entities_EntityCollisions_collide_mindustry_entities_EntityGroup)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityCollisions_updateCollision_mindustry_gen_Hitboxc 19
typedef void (*func_mindustry_entities_EntityCollisions_updateCollision_mindustry_gen_Hitboxc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_EntityCollisions_lambda$new$0_arc_math_geom_QuadTree 20
typedef void (*func_mindustry_entities_EntityCollisions_lambda$new$0_arc_math_geom_QuadTree)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_entities_EntityCollisions(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_EntityCollisions(jcontext ctx);
void init_mindustry_entities_EntityCollisions(jcontext ctx, jobject self);
void M_mindustry_entities_EntityCollisions_moveCheck_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3);
void M_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_mindustry_entities_EntityCollisions_move_mindustry_gen_Hitboxc_float_float_mindustry_entities_EntityCollisions$SolidPred(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3);
void M_mindustry_entities_EntityCollisions_moveDelta_mindustry_gen_Hitboxc_float_float_int_boolean_mindustry_entities_EntityCollisions$SolidPred(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jbool param4, jobject param5);
jbool M_mindustry_entities_EntityCollisions_overlapsTile_arc_math_geom_Rect_mindustry_entities_EntityCollisions$SolidPred_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_entities_EntityCollisions_updatePhysics_mindustry_entities_EntityGroup(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_entities_EntityCollisions_legsSolid_int_int_R_boolean(jcontext ctx, jint param0, jint param1);
jbool SM_mindustry_entities_EntityCollisions_waterSolid_int_int_R_boolean(jcontext ctx, jint param0, jint param1);
jbool SM_mindustry_entities_EntityCollisions_solid_int_int_R_boolean(jcontext ctx, jint param0, jint param1);
void M_mindustry_entities_EntityCollisions_checkCollide_mindustry_gen_Hitboxc_mindustry_gen_Hitboxc(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool SM_mindustry_entities_EntityCollisions_collide_float_float_float_float_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jfloat param11, jobject param12);
void M_mindustry_entities_EntityCollisions_collide_mindustry_entities_EntityGroup(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_EntityCollisions_updateCollision_mindustry_gen_Hitboxc(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_EntityCollisions_lambda$new$0_arc_math_geom_QuadTree(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
