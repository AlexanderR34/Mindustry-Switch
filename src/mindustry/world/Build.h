#ifndef HEADER_mindustry_world_Build
#define HEADER_mindustry_world_Build

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_Build {
	java_lang_Object parent;
} mindustry_world_Build;

extern Class class_mindustry_world_Build;

extern jobject SF_mindustry_world_Build_tmp;

#define VTABLE_mindustry_world_Build_hashCode_R_int 0
typedef jint (*func_mindustry_world_Build_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Build_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_Build_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Build_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_Build_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Build_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_Build_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Build_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_Build_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Build_finalize 5
typedef void (*func_mindustry_world_Build_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Build_notify 6
typedef void (*func_mindustry_world_Build_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Build_notifyAll 7
typedef void (*func_mindustry_world_Build_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Build_wait 8
typedef void (*func_mindustry_world_Build_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Build_wait_long 9
typedef void (*func_mindustry_world_Build_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_Build_wait_long_int 10
typedef void (*func_mindustry_world_Build_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_world_Build(jobject object, jint mark, jint depth);
void clinit_mindustry_world_Build(jcontext ctx);
void init_mindustry_world_Build(jcontext ctx, jobject self);
void SM_mindustry_world_Build_beginBreak_mindustry_gen_Unit_mindustry_game_Team_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
void SM_mindustry_world_Build_beginPlace_mindustry_gen_Unit_mindustry_world_Block_mindustry_game_Team_int_int_int_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jint param4, jint param5, jobject param6);
jbool SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4);
jbool SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jbool param5);
jbool SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_boolean_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jbool param5, jbool param6);
jbool SM_mindustry_world_Build_checkNoUnitOverlap_mindustry_world_Block_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2);
jbool SM_mindustry_world_Build_validPlaceIgnoreUnits_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_boolean_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jbool param5, jbool param6);
jobject SM_mindustry_world_Build_getEnemyOverlap_mindustry_world_Block_mindustry_game_Team_int_int_R_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
jbool SM_mindustry_world_Build_contactsGround_int_int_mindustry_world_Block_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2);
jbool SM_mindustry_world_Build_contactsShallows_int_int_mindustry_world_Block_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2);
jbool SM_mindustry_world_Build_validBreak_mindustry_game_Team_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2);
jbool SM_mindustry_world_Build_lambda$getEnemyOverlap$0_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_world_Build_lambda$beginPlace$1_mindustry_game_Team_arc_struct_Seq_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_world_Build_lambda$beginPlace$0_mindustry_world_Tile(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
