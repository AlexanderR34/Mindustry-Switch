#ifndef HEADER_mindustry_core_NetServer$TeamAssigner
#define HEADER_mindustry_core_NetServer$TeamAssigner

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_NetServer$TeamAssigner {
	java_lang_Object parent;
} mindustry_core_NetServer$TeamAssigner;

extern Class class_mindustry_core_NetServer$TeamAssigner;


#define INDEX_mindustry_core_NetServer$TeamAssigner_assign_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team 0
typedef jobject (*func_mindustry_core_NetServer$TeamAssigner_assign_mindustry_gen_Player_java_lang_Iterable_R_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_core_NetServer$TeamAssigner(jobject object, jint mark, jint depth);
void clinit_mindustry_core_NetServer$TeamAssigner(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
