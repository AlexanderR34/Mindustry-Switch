#ifndef HEADER_mindustry_ai_Pathfinder$PathCost
#define HEADER_mindustry_ai_Pathfinder$PathCost

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_Pathfinder$PathCost {
	java_lang_Object parent;
} mindustry_ai_Pathfinder$PathCost;

extern Class class_mindustry_ai_Pathfinder$PathCost;


#define INDEX_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int 0
typedef jint (*func_mindustry_ai_Pathfinder$PathCost_getCost_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_mindustry_ai_Pathfinder$PathCost(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_Pathfinder$PathCost(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
