#ifndef HEADER_mindustry_game_Objectives$SectorComplete
#define HEADER_mindustry_game_Objectives$SectorComplete

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/game/Objectives_Objective.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Objectives$SectorComplete {
	java_lang_Object parent;
	jref F_preset;
} mindustry_game_Objectives$SectorComplete;

extern Class class_mindustry_game_Objectives$SectorComplete;


#define VTABLE_mindustry_game_Objectives$SectorComplete_hashCode_R_int 0
typedef jint (*func_mindustry_game_Objectives$SectorComplete_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Objectives$SectorComplete_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Objectives$SectorComplete_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Objectives$SectorComplete_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Objectives$SectorComplete_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Objectives$SectorComplete_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Objectives$SectorComplete_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Objectives$SectorComplete_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Objectives$SectorComplete_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Objectives$SectorComplete_finalize 5
typedef void (*func_mindustry_game_Objectives$SectorComplete_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Objectives$SectorComplete_notify 6
typedef void (*func_mindustry_game_Objectives$SectorComplete_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Objectives$SectorComplete_notifyAll 7
typedef void (*func_mindustry_game_Objectives$SectorComplete_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Objectives$SectorComplete_wait 8
typedef void (*func_mindustry_game_Objectives$SectorComplete_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Objectives$SectorComplete_wait_long 9
typedef void (*func_mindustry_game_Objectives$SectorComplete_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Objectives$SectorComplete_wait_long_int 10
typedef void (*func_mindustry_game_Objectives$SectorComplete_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Objectives$SectorComplete_complete_R_boolean 11
typedef jbool (*func_mindustry_game_Objectives$SectorComplete_complete_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Objectives$SectorComplete_display_R_java_lang_String 12
typedef jobject (*func_mindustry_game_Objectives$SectorComplete_display_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Objectives$SectorComplete_build_arc_scene_ui_layout_Table 13
typedef void (*func_mindustry_game_Objectives$SectorComplete_build_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_game_Objectives$SectorComplete(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Objectives$SectorComplete(jcontext ctx);
void init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(jcontext ctx, jobject self, jobject param0);
void init_mindustry_game_Objectives$SectorComplete(jcontext ctx, jobject self);
jbool M_mindustry_game_Objectives$SectorComplete_complete_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_game_Objectives$SectorComplete_display_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_game_Objectives$SectorComplete_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
