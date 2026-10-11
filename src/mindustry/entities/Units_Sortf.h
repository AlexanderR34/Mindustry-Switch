#ifndef HEADER_mindustry_entities_Units$Sortf
#define HEADER_mindustry_entities_Units$Sortf

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_Units$Sortf {
	java_lang_Object parent;
} mindustry_entities_Units$Sortf;

extern Class class_mindustry_entities_Units$Sortf;


#define INDEX_mindustry_entities_Units$Sortf_cost_mindustry_gen_Unit_float_float_R_float 0
typedef jfloat (*func_mindustry_entities_Units$Sortf_cost_mindustry_gen_Unit_float_float_R_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);

void mark_mindustry_entities_Units$Sortf(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_Units$Sortf(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
