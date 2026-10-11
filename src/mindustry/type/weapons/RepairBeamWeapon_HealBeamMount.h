#ifndef HEADER_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount
#define HEADER_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount

#include "Clearwing.h"
#include "mindustry/entities/units/WeaponMount.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_weapons_RepairBeamWeapon$HealBeamMount {
	mindustry_entities_units_WeaponMount parent;
	jref F_offset;
	jref F_lastEnd;
	jfloat F_strength;
	jfloat F_effectTimer;
} mindustry_type_weapons_RepairBeamWeapon$HealBeamMount;

extern Class class_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount;


#define VTABLE_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_hashCode_R_int 0
typedef jint (*func_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_finalize 5
typedef void (*func_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_notify 6
typedef void (*func_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_notifyAll 7
typedef void (*func_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_wait 8
typedef void (*func_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_wait_long 9
typedef void (*func_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_wait_long_int 10
typedef void (*func_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount(jobject object, jint mark, jint depth);
void clinit_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount(jcontext ctx);
void init_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount_mindustry_type_Weapon(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
