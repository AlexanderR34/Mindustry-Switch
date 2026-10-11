#ifndef HEADER_mindustry_game_Objectives$Objective
#define HEADER_mindustry_game_Objectives$Objective

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Objectives$Objective {
	java_lang_Object parent;
} mindustry_game_Objectives$Objective;

extern Class class_mindustry_game_Objectives$Objective;


#define INDEX_mindustry_game_Objectives$Objective_complete_R_boolean 0
typedef jbool (*func_mindustry_game_Objectives$Objective_complete_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_game_Objectives$Objective_display_R_java_lang_String 1
typedef jobject (*func_mindustry_game_Objectives$Objective_display_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_mindustry_game_Objectives$Objective_build_arc_scene_ui_layout_Table 2
typedef void (*func_mindustry_game_Objectives$Objective_build_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_game_Objectives$Objective(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Objectives$Objective(jcontext ctx);
void M_mindustry_game_Objectives$Objective_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
