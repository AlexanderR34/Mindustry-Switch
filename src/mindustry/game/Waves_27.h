#ifndef HEADER_mindustry_game_Waves$27
#define HEADER_mindustry_game_Waves$27

#include "Clearwing.h"
#include "mindustry/game/SpawnGroup.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Waves$27 {
	mindustry_game_SpawnGroup parent;
	jref F_this$0;
} mindustry_game_Waves$27;

extern Class class_mindustry_game_Waves$27;


#define VTABLE_mindustry_game_Waves$27_hashCode_R_int 0
typedef jint (*func_mindustry_game_Waves$27_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Waves$27_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Waves$27_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Waves$27_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Waves$27_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Waves$27_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Waves$27_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Waves$27_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Waves$27_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Waves$27_finalize 5
typedef void (*func_mindustry_game_Waves$27_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Waves$27_notify 6
typedef void (*func_mindustry_game_Waves$27_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Waves$27_notifyAll 7
typedef void (*func_mindustry_game_Waves$27_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Waves$27_wait 8
typedef void (*func_mindustry_game_Waves$27_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Waves$27_wait_long 9
typedef void (*func_mindustry_game_Waves$27_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Waves$27_wait_long_int 10
typedef void (*func_mindustry_game_Waves$27_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Waves$27_write_arc_util_serialization_Json 11
typedef void (*func_mindustry_game_Waves$27_write_arc_util_serialization_Json)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Waves$27_read_arc_util_serialization_Json_arc_util_serialization_JsonValue 12
typedef void (*func_mindustry_game_Waves$27_read_arc_util_serialization_Json_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_Waves$27_canSpawn_int_R_boolean 13
typedef jbool (*func_mindustry_game_Waves$27_canSpawn_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_game_Waves$27_getSpawned_int_R_int 14
typedef jint (*func_mindustry_game_Waves$27_getSpawned_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_game_Waves$27_getShield_int_R_float 15
typedef jfloat (*func_mindustry_game_Waves$27_getShield_int_R_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_game_Waves$27_createUnit_mindustry_game_Team_float_float_float_int_arc_func_Cons_R_mindustry_gen_Unit 16
typedef jobject (*func_mindustry_game_Waves$27_createUnit_mindustry_game_Team_float_float_float_int_arc_func_Cons_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jobject param5);
#define VTABLE_mindustry_game_Waves$27_createUnit_mindustry_game_Team_int_R_mindustry_gen_Unit 17
typedef jobject (*func_mindustry_game_Waves$27_createUnit_mindustry_game_Team_int_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_game_Waves$27_copy_R_mindustry_game_SpawnGroup 18
typedef jobject (*func_mindustry_game_Waves$27_copy_R_mindustry_game_SpawnGroup)(jcontext ctx, jobject self);

void mark_mindustry_game_Waves$27(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Waves$27(jcontext ctx);
void init_mindustry_game_Waves$27_mindustry_game_Waves_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
