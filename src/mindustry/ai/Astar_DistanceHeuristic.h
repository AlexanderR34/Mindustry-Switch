#ifndef HEADER_mindustry_ai_Astar$DistanceHeuristic
#define HEADER_mindustry_ai_Astar$DistanceHeuristic

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_Astar$DistanceHeuristic {
	java_lang_Object parent;
} mindustry_ai_Astar$DistanceHeuristic;

extern Class class_mindustry_ai_Astar$DistanceHeuristic;


#define INDEX_mindustry_ai_Astar$DistanceHeuristic_cost_int_int_int_int_R_float 0
typedef jfloat (*func_mindustry_ai_Astar$DistanceHeuristic_cost_int_int_int_int_R_float)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);

void mark_mindustry_ai_Astar$DistanceHeuristic(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_Astar$DistanceHeuristic(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
