#ifndef HEADER_mindustry_ai_UnitGroup
#define HEADER_mindustry_ai_UnitGroup

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_UnitGroup {
	java_lang_Object parent;
	jref F_units;
	jint F_collisionLayer;
	volatile jref F_positions;
	volatile jref F_originalPositions;
	volatile jbool F_valid;
} mindustry_ai_UnitGroup;

extern Class class_mindustry_ai_UnitGroup;


#define VTABLE_mindustry_ai_UnitGroup_hashCode_R_int 0
typedef jint (*func_mindustry_ai_UnitGroup_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitGroup_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_UnitGroup_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_UnitGroup_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_UnitGroup_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitGroup_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_UnitGroup_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitGroup_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_UnitGroup_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitGroup_finalize 5
typedef void (*func_mindustry_ai_UnitGroup_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitGroup_notify 6
typedef void (*func_mindustry_ai_UnitGroup_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitGroup_notifyAll 7
typedef void (*func_mindustry_ai_UnitGroup_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitGroup_wait 8
typedef void (*func_mindustry_ai_UnitGroup_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_UnitGroup_wait_long 9
typedef void (*func_mindustry_ai_UnitGroup_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_UnitGroup_wait_long_int 10
typedef void (*func_mindustry_ai_UnitGroup_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_UnitGroup_calculateFormation_arc_math_geom_Vec2_int 11
typedef void (*func_mindustry_ai_UnitGroup_calculateFormation_arc_math_geom_Vec2_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2 12
typedef void (*func_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2_arc_math_geom_Vec2 13
typedef void (*func_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2_arc_math_geom_Vec2)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_mindustry_ai_UnitGroup_lambda$calculateFormation$0_arc_math_geom_Vec2 14
typedef void (*func_mindustry_ai_UnitGroup_lambda$calculateFormation$0_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_UnitGroup_lambda$calculateFormation$2_arc_math_geom_Vec2 15
typedef void (*func_mindustry_ai_UnitGroup_lambda$calculateFormation$2_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_UnitGroup_lambda$calculateFormation$1_int_arc_math_geom_Rect 16
typedef void (*func_mindustry_ai_UnitGroup_lambda$calculateFormation$1_int_arc_math_geom_Rect)(jcontext ctx, jobject self, jint param0, jobject param1);

void mark_mindustry_ai_UnitGroup(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_UnitGroup(jcontext ctx);
void init_mindustry_ai_UnitGroup(jcontext ctx, jobject self);
void M_mindustry_ai_UnitGroup_calculateFormation_arc_math_geom_Vec2_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2(jcontext ctx, jobject self, jint param0, jobject param1);
void M_mindustry_ai_UnitGroup_updateRaycast_int_arc_math_geom_Vec2_arc_math_geom_Vec2(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
void SM_mindustry_ai_UnitGroup_lambda$updateRaycast$0_mindustry_gen_Unit_arc_math_geom_Vec2_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3);
void M_mindustry_ai_UnitGroup_lambda$calculateFormation$0_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_UnitGroup_lambda$calculateFormation$2_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_UnitGroup_lambda$calculateFormation$1_int_arc_math_geom_Rect(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
