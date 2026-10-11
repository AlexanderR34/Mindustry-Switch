#ifndef HEADER_mindustry_game_Teams$BlockPlan
#define HEADER_mindustry_game_Teams$BlockPlan

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Teams$BlockPlan {
	java_lang_Object parent;
	jshort F_x;
	jshort F_y;
	jshort F_rotation;
	jref F_block;
	jref F_config;
	jbool F_removed;
} mindustry_game_Teams$BlockPlan;

extern Class class_mindustry_game_Teams$BlockPlan;


#define VTABLE_mindustry_game_Teams$BlockPlan_hashCode_R_int 0
typedef jint (*func_mindustry_game_Teams$BlockPlan_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$BlockPlan_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Teams$BlockPlan_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams$BlockPlan_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Teams$BlockPlan_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$BlockPlan_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Teams$BlockPlan_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$BlockPlan_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Teams$BlockPlan_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$BlockPlan_finalize 5
typedef void (*func_mindustry_game_Teams$BlockPlan_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$BlockPlan_notify 6
typedef void (*func_mindustry_game_Teams$BlockPlan_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$BlockPlan_notifyAll 7
typedef void (*func_mindustry_game_Teams$BlockPlan_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$BlockPlan_wait 8
typedef void (*func_mindustry_game_Teams$BlockPlan_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$BlockPlan_wait_long 9
typedef void (*func_mindustry_game_Teams$BlockPlan_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Teams$BlockPlan_wait_long_int 10
typedef void (*func_mindustry_game_Teams$BlockPlan_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_game_Teams$BlockPlan(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Teams$BlockPlan(jcontext ctx);
void init_mindustry_game_Teams$BlockPlan_int_int_short_mindustry_world_Block_java_lang_Object(jcontext ctx, jobject self, jint param0, jint param1, jshort param2, jobject param3, jobject param4);
jobject M_mindustry_game_Teams$BlockPlan_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
