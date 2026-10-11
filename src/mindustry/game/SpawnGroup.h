#ifndef HEADER_mindustry_game_SpawnGroup
#define HEADER_mindustry_game_SpawnGroup

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/Json_JsonSerializable.h"
#include "java/lang/Cloneable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_SpawnGroup {
	java_lang_Object parent;
	jref F_type;
	jint F_end;
	jint F_begin;
	jint F_spacing;
	jint F_max;
	jfloat F_unitScaling;
	jfloat F_shields;
	jfloat F_shieldScaling;
	jint F_unitAmount;
	jint F_spawn;
	jref F_payloads;
	jref F_effect;
	jref F_items;
	jref F_team;
} mindustry_game_SpawnGroup;

extern Class class_mindustry_game_SpawnGroup;

extern jint SF_mindustry_game_SpawnGroup_never;

#define VTABLE_mindustry_game_SpawnGroup_hashCode_R_int 0
typedef jint (*func_mindustry_game_SpawnGroup_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SpawnGroup_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_SpawnGroup_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_SpawnGroup_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_SpawnGroup_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SpawnGroup_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_SpawnGroup_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SpawnGroup_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_SpawnGroup_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SpawnGroup_finalize 5
typedef void (*func_mindustry_game_SpawnGroup_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SpawnGroup_notify 6
typedef void (*func_mindustry_game_SpawnGroup_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SpawnGroup_notifyAll 7
typedef void (*func_mindustry_game_SpawnGroup_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SpawnGroup_wait 8
typedef void (*func_mindustry_game_SpawnGroup_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SpawnGroup_wait_long 9
typedef void (*func_mindustry_game_SpawnGroup_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_SpawnGroup_wait_long_int 10
typedef void (*func_mindustry_game_SpawnGroup_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_SpawnGroup_write_arc_util_serialization_Json 11
typedef void (*func_mindustry_game_SpawnGroup_write_arc_util_serialization_Json)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_SpawnGroup_read_arc_util_serialization_Json_arc_util_serialization_JsonValue 12
typedef void (*func_mindustry_game_SpawnGroup_read_arc_util_serialization_Json_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_SpawnGroup_canSpawn_int_R_boolean 13
typedef jbool (*func_mindustry_game_SpawnGroup_canSpawn_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_game_SpawnGroup_getSpawned_int_R_int 14
typedef jint (*func_mindustry_game_SpawnGroup_getSpawned_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_game_SpawnGroup_getShield_int_R_float 15
typedef jfloat (*func_mindustry_game_SpawnGroup_getShield_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_float_float_float_int_arc_func_Cons_R_mindustry_gen_Unit 16
typedef jobject (*func_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_float_float_float_int_arc_func_Cons_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jobject param5);
#define VTABLE_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_int_R_mindustry_gen_Unit 17
typedef jobject (*func_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_int_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_game_SpawnGroup_copy_R_mindustry_game_SpawnGroup 18
typedef jobject (*func_mindustry_game_SpawnGroup_copy_R_mindustry_game_SpawnGroup)(jcontext ctx, jobject self);

void mark_mindustry_game_SpawnGroup(jobject object, jint mark, jint depth);
void clinit_mindustry_game_SpawnGroup(jcontext ctx);
void init_mindustry_game_SpawnGroup_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0);
void init_mindustry_game_SpawnGroup(jcontext ctx, jobject self);
jbool M_mindustry_game_SpawnGroup_canSpawn_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint M_mindustry_game_SpawnGroup_getSpawned_int_R_int(jcontext ctx, jobject self, jint param0);
jfloat M_mindustry_game_SpawnGroup_getShield_int_R_float(jcontext ctx, jobject self, jint param0);
jobject M_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_float_float_float_int_arc_func_Cons_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jobject param5);
jobject M_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_int_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_game_SpawnGroup_write_arc_util_serialization_Json(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_SpawnGroup_read_arc_util_serialization_Json_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_game_SpawnGroup_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_game_SpawnGroup_copy_R_mindustry_game_SpawnGroup(jcontext ctx, jobject self);
jbool M_mindustry_game_SpawnGroup_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_game_SpawnGroup_hashCode_R_int(jcontext ctx, jobject self);
jbool SM_mindustry_game_SpawnGroup_lambda$read$0_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject param0);
jobject SM_mindustry_game_SpawnGroup_lambda$write$0_mindustry_type_UnitType_R_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_game_SpawnGroup_lambda$createUnit$0_mindustry_gen_Unit(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
