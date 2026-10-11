#ifndef HEADER_mindustry_world_blocks_defense_turrets_Turret$BulletEntry
#define HEADER_mindustry_world_blocks_defense_turrets_Turret$BulletEntry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_defense_turrets_Turret$BulletEntry {
	java_lang_Object parent;
	jref F_bullet;
	jfloat F_x;
	jfloat F_y;
	jfloat F_rotation;
	jfloat F_life;
} mindustry_world_blocks_defense_turrets_Turret$BulletEntry;

extern Class class_mindustry_world_blocks_defense_turrets_Turret$BulletEntry;


#define VTABLE_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_hashCode_R_int 0
typedef jint (*func_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_finalize 5
typedef void (*func_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_notify 6
typedef void (*func_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_notifyAll 7
typedef void (*func_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_wait 8
typedef void (*func_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_wait_long 9
typedef void (*func_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_wait_long_int 10
typedef void (*func_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_world_blocks_defense_turrets_Turret$BulletEntry(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_defense_turrets_Turret$BulletEntry(jcontext ctx);
void init_mindustry_world_blocks_defense_turrets_Turret$BulletEntry_mindustry_gen_Bullet_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);

#ifdef __cplusplus
}
#endif

#endif
