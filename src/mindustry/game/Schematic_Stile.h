#ifndef HEADER_mindustry_game_Schematic$Stile
#define HEADER_mindustry_game_Schematic$Stile

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Schematic$Stile {
	java_lang_Object parent;
	jref F_block;
	jshort F_x;
	jshort F_y;
	jref F_config;
	jbyte F_rotation;
} mindustry_game_Schematic$Stile;

extern Class class_mindustry_game_Schematic$Stile;


#define VTABLE_mindustry_game_Schematic$Stile_hashCode_R_int 0
typedef jint (*func_mindustry_game_Schematic$Stile_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic$Stile_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Schematic$Stile_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematic$Stile_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Schematic$Stile_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic$Stile_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Schematic$Stile_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic$Stile_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Schematic$Stile_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic$Stile_finalize 5
typedef void (*func_mindustry_game_Schematic$Stile_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic$Stile_notify 6
typedef void (*func_mindustry_game_Schematic$Stile_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic$Stile_notifyAll 7
typedef void (*func_mindustry_game_Schematic$Stile_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic$Stile_wait 8
typedef void (*func_mindustry_game_Schematic$Stile_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic$Stile_wait_long 9
typedef void (*func_mindustry_game_Schematic$Stile_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Schematic$Stile_wait_long_int 10
typedef void (*func_mindustry_game_Schematic$Stile_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Schematic$Stile_set_mindustry_game_Schematic$Stile_R_mindustry_game_Schematic$Stile 11
typedef jobject (*func_mindustry_game_Schematic$Stile_set_mindustry_game_Schematic$Stile_R_mindustry_game_Schematic$Stile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematic$Stile_copy_R_mindustry_game_Schematic$Stile 12
typedef jobject (*func_mindustry_game_Schematic$Stile_copy_R_mindustry_game_Schematic$Stile)(jcontext ctx, jobject self);

void mark_mindustry_game_Schematic$Stile(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Schematic$Stile(jcontext ctx);
void init_mindustry_game_Schematic$Stile_mindustry_world_Block_int_int_java_lang_Object_byte(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jbyte param4);
void init_mindustry_game_Schematic$Stile(jcontext ctx, jobject self);
jobject M_mindustry_game_Schematic$Stile_set_mindustry_game_Schematic$Stile_R_mindustry_game_Schematic$Stile(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Schematic$Stile_copy_R_mindustry_game_Schematic$Stile(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
