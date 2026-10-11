#ifndef HEADER_mindustry_logic_Controllable
#define HEADER_mindustry_logic_Controllable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_Controllable {
	java_lang_Object parent;
} mindustry_logic_Controllable;

extern Class class_mindustry_logic_Controllable;


#define INDEX_mindustry_logic_Controllable_control_mindustry_logic_LAccess_double_double_double_double 0
typedef void (*func_mindustry_logic_Controllable_control_mindustry_logic_LAccess_double_double_double_double)(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3, jdouble param4);
#define INDEX_mindustry_logic_Controllable_control_mindustry_logic_LAccess_java_lang_Object_double_double_double 1
typedef void (*func_mindustry_logic_Controllable_control_mindustry_logic_LAccess_java_lang_Object_double_double_double)(jcontext ctx, jobject self, jobject param0, jobject param1, jdouble param2, jdouble param3, jdouble param4);
#define INDEX_mindustry_logic_Controllable_team_R_mindustry_game_Team 2
typedef jobject (*func_mindustry_logic_Controllable_team_R_mindustry_game_Team)(jcontext ctx, jobject self);

void mark_mindustry_logic_Controllable(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_Controllable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
