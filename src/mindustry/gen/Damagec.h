#ifndef HEADER_mindustry_gen_Damagec
#define HEADER_mindustry_gen_Damagec

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Damagec {
	java_lang_Object parent;
} mindustry_gen_Damagec;

extern Class class_mindustry_gen_Damagec;


#define INDEX_mindustry_gen_Damagec_damage_R_float 0
typedef jfloat (*func_mindustry_gen_Damagec_damage_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Damagec_damage_float 1
typedef void (*func_mindustry_gen_Damagec_damage_float)(jcontext ctx, jobject self, jfloat param0);

void mark_mindustry_gen_Damagec(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Damagec(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
