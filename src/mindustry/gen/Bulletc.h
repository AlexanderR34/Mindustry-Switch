#ifndef HEADER_mindustry_gen_Bulletc
#define HEADER_mindustry_gen_Bulletc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Damagec.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/gen/Ownerc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Shielderc.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Timedc.h"
#include "mindustry/gen/Timerc.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/logic/Settable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Bulletc {
	java_lang_Object parent;
} mindustry_gen_Bulletc;

extern Class class_mindustry_gen_Bulletc;


#define INDEX_mindustry_gen_Bulletc_rotation_R_float 0
typedef jfloat (*func_mindustry_gen_Bulletc_rotation_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_rotation_float 1
typedef void (*func_mindustry_gen_Bulletc_rotation_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Bulletc_shooter_R_mindustry_gen_Entityc 2
typedef jobject (*func_mindustry_gen_Bulletc_shooter_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_shooter_mindustry_gen_Entityc 3
typedef void (*func_mindustry_gen_Bulletc_shooter_mindustry_gen_Entityc)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Bulletc_mover_R_mindustry_entities_Mover 4
typedef jobject (*func_mindustry_gen_Bulletc_mover_R_mindustry_entities_Mover)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_trail_R_mindustry_graphics_Trail 5
typedef jobject (*func_mindustry_gen_Bulletc_trail_R_mindustry_graphics_Trail)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_aimTile_R_mindustry_world_Tile 6
typedef jobject (*func_mindustry_gen_Bulletc_aimTile_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_stickyTarget_R_mindustry_gen_Posc 7
typedef jobject (*func_mindustry_gen_Bulletc_stickyTarget_R_mindustry_gen_Posc)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_vel_R_arc_math_geom_Vec2 8
typedef jobject (*func_mindustry_gen_Bulletc_vel_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_collided_R_arc_struct_IntSeq 9
typedef jobject (*func_mindustry_gen_Bulletc_collided_R_arc_struct_IntSeq)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_absorbed_R_boolean 10
typedef jbool (*func_mindustry_gen_Bulletc_absorbed_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean 11
typedef jbool (*func_mindustry_gen_Bulletc_checkUnderBuild_mindustry_gen_Building_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define INDEX_mindustry_gen_Bulletc_collides_mindustry_gen_Hitboxc_R_boolean 12
typedef jbool (*func_mindustry_gen_Bulletc_collides_mindustry_gen_Hitboxc_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Bulletc_hasCollided_int_R_boolean 13
typedef jbool (*func_mindustry_gen_Bulletc_hasCollided_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_mindustry_gen_Bulletc_hit_R_boolean 14
typedef jbool (*func_mindustry_gen_Bulletc_hit_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_isLocal_R_boolean 15
typedef jbool (*func_mindustry_gen_Bulletc_isLocal_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_justSpawned_R_boolean 16
typedef jbool (*func_mindustry_gen_Bulletc_justSpawned_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_keepAlive_R_boolean 17
typedef jbool (*func_mindustry_gen_Bulletc_keepAlive_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_sense_mindustry_logic_LAccess_R_double 18
typedef jdouble (*func_mindustry_gen_Bulletc_sense_mindustry_logic_LAccess_R_double)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Bulletc_aimX_R_float 19
typedef jfloat (*func_mindustry_gen_Bulletc_aimX_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_aimY_R_float 20
typedef jfloat (*func_mindustry_gen_Bulletc_aimY_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_buildingDamageMultiplier_R_float 21
typedef jfloat (*func_mindustry_gen_Bulletc_buildingDamageMultiplier_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_clipSize_R_float 22
typedef jfloat (*func_mindustry_gen_Bulletc_clipSize_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_damageMultiplier_R_float 23
typedef jfloat (*func_mindustry_gen_Bulletc_damageMultiplier_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_fdata_R_float 24
typedef jfloat (*func_mindustry_gen_Bulletc_fdata_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_originX_R_float 25
typedef jfloat (*func_mindustry_gen_Bulletc_originX_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_originY_R_float 26
typedef jfloat (*func_mindustry_gen_Bulletc_originY_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_stickyRotation_R_float 27
typedef jfloat (*func_mindustry_gen_Bulletc_stickyRotation_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_stickyRotationOffset_R_float 28
typedef jfloat (*func_mindustry_gen_Bulletc_stickyRotationOffset_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_stickyX_R_float 29
typedef jfloat (*func_mindustry_gen_Bulletc_stickyX_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_stickyY_R_float 30
typedef jfloat (*func_mindustry_gen_Bulletc_stickyY_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_frags_R_int 31
typedef jint (*func_mindustry_gen_Bulletc_frags_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_data_R_java_lang_Object 32
typedef jobject (*func_mindustry_gen_Bulletc_data_R_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_type_R_mindustry_entities_bullet_BulletType 33
typedef jobject (*func_mindustry_gen_Bulletc_type_R_mindustry_entities_bullet_BulletType)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_absorb 34
typedef void (*func_mindustry_gen_Bulletc_absorb)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_absorbed_boolean 35
typedef void (*func_mindustry_gen_Bulletc_absorbed_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Bulletc_add 36
typedef void (*func_mindustry_gen_Bulletc_add)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_aimTile_mindustry_world_Tile 37
typedef void (*func_mindustry_gen_Bulletc_aimTile_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Bulletc_aimX_float 38
typedef void (*func_mindustry_gen_Bulletc_aimX_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Bulletc_aimY_float 39
typedef void (*func_mindustry_gen_Bulletc_aimY_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Bulletc_buildingDamageMultiplier_float 40
typedef void (*func_mindustry_gen_Bulletc_buildingDamageMultiplier_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Bulletc_collided_arc_struct_IntSeq 41
typedef void (*func_mindustry_gen_Bulletc_collided_arc_struct_IntSeq)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Bulletc_collision_mindustry_gen_Hitboxc_float_float 42
typedef void (*func_mindustry_gen_Bulletc_collision_mindustry_gen_Hitboxc_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define INDEX_mindustry_gen_Bulletc_data_java_lang_Object 43
typedef void (*func_mindustry_gen_Bulletc_data_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Bulletc_draw 44
typedef void (*func_mindustry_gen_Bulletc_draw)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_fdata_float 45
typedef void (*func_mindustry_gen_Bulletc_fdata_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Bulletc_frags_int 46
typedef void (*func_mindustry_gen_Bulletc_frags_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_mindustry_gen_Bulletc_getCollisions_arc_func_Cons 47
typedef void (*func_mindustry_gen_Bulletc_getCollisions_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Bulletc_hit_boolean 48
typedef void (*func_mindustry_gen_Bulletc_hit_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Bulletc_initVel_float_float 49
typedef void (*func_mindustry_gen_Bulletc_initVel_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_mindustry_gen_Bulletc_justSpawned_boolean 50
typedef void (*func_mindustry_gen_Bulletc_justSpawned_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Bulletc_keepAlive_boolean 51
typedef void (*func_mindustry_gen_Bulletc_keepAlive_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Bulletc_moveRelative_float_float 52
typedef void (*func_mindustry_gen_Bulletc_moveRelative_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_mindustry_gen_Bulletc_mover_mindustry_entities_Mover 53
typedef void (*func_mindustry_gen_Bulletc_mover_mindustry_entities_Mover)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Bulletc_originX_float 54
typedef void (*func_mindustry_gen_Bulletc_originX_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Bulletc_originY_float 55
typedef void (*func_mindustry_gen_Bulletc_originY_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Bulletc_remove 56
typedef void (*func_mindustry_gen_Bulletc_remove)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_setProp_mindustry_ctype_UnlockableContent_double 57
typedef void (*func_mindustry_gen_Bulletc_setProp_mindustry_ctype_UnlockableContent_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define INDEX_mindustry_gen_Bulletc_setProp_mindustry_logic_LAccess_double 58
typedef void (*func_mindustry_gen_Bulletc_setProp_mindustry_logic_LAccess_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);
#define INDEX_mindustry_gen_Bulletc_setProp_mindustry_logic_LAccess_java_lang_Object 59
typedef void (*func_mindustry_gen_Bulletc_setProp_mindustry_logic_LAccess_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_mindustry_gen_Bulletc_stickTo_mindustry_gen_Posc 60
typedef void (*func_mindustry_gen_Bulletc_stickTo_mindustry_gen_Posc)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Bulletc_stickyRotation_float 61
typedef void (*func_mindustry_gen_Bulletc_stickyRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Bulletc_stickyRotationOffset_float 62
typedef void (*func_mindustry_gen_Bulletc_stickyRotationOffset_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Bulletc_stickyTarget_mindustry_gen_Posc 63
typedef void (*func_mindustry_gen_Bulletc_stickyTarget_mindustry_gen_Posc)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Bulletc_stickyX_float 64
typedef void (*func_mindustry_gen_Bulletc_stickyX_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Bulletc_stickyY_float 65
typedef void (*func_mindustry_gen_Bulletc_stickyY_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Bulletc_tileRaycast_int_int_int_int 66
typedef void (*func_mindustry_gen_Bulletc_tileRaycast_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define INDEX_mindustry_gen_Bulletc_trail_mindustry_graphics_Trail 67
typedef void (*func_mindustry_gen_Bulletc_trail_mindustry_graphics_Trail)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Bulletc_turn_float_float 68
typedef void (*func_mindustry_gen_Bulletc_turn_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_mindustry_gen_Bulletc_type_mindustry_entities_bullet_BulletType 69
typedef void (*func_mindustry_gen_Bulletc_type_mindustry_entities_bullet_BulletType)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Bulletc_update 70
typedef void (*func_mindustry_gen_Bulletc_update)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Bulletc_vel_arc_math_geom_Vec2 71
typedef void (*func_mindustry_gen_Bulletc_vel_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_Bulletc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Bulletc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
