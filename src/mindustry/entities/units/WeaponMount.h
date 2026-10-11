#ifndef HEADER_mindustry_entities_units_WeaponMount
#define HEADER_mindustry_entities_units_WeaponMount

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_units_WeaponMount {
	java_lang_Object parent;
	jref F_weapon;
	jfloat F_reload;
	jfloat F_rotation;
	jfloat F_recoil;
	jref F_recoils;
	jfloat F_targetRotation;
	jfloat F_heat;
	jfloat F_warmup;
	jbool F_charging;
	jfloat F_charge;
	jfloat F_smoothReload;
	jfloat F_aimX;
	jfloat F_aimY;
	jbool F_shoot;
	jbool F_allowShootEffects;
	jbool F_rotate;
	jbool F_side;
	jint F_totalShots;
	jint F_barrelCounter;
	jfloat F_lastLength;
	jref F_bullet;
	jref F_sound;
	jref F_target;
	jfloat F_retarget;
} mindustry_entities_units_WeaponMount;

extern Class class_mindustry_entities_units_WeaponMount;


#define VTABLE_mindustry_entities_units_WeaponMount_hashCode_R_int 0
typedef jint (*func_mindustry_entities_units_WeaponMount_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_WeaponMount_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_units_WeaponMount_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_units_WeaponMount_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_units_WeaponMount_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_WeaponMount_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_units_WeaponMount_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_WeaponMount_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_units_WeaponMount_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_WeaponMount_finalize 5
typedef void (*func_mindustry_entities_units_WeaponMount_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_WeaponMount_notify 6
typedef void (*func_mindustry_entities_units_WeaponMount_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_WeaponMount_notifyAll 7
typedef void (*func_mindustry_entities_units_WeaponMount_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_WeaponMount_wait 8
typedef void (*func_mindustry_entities_units_WeaponMount_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_units_WeaponMount_wait_long 9
typedef void (*func_mindustry_entities_units_WeaponMount_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_units_WeaponMount_wait_long_int 10
typedef void (*func_mindustry_entities_units_WeaponMount_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_entities_units_WeaponMount(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_units_WeaponMount(jcontext ctx);
void init_mindustry_entities_units_WeaponMount_mindustry_type_Weapon(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
