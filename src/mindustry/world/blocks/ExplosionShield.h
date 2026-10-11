#ifndef HEADER_mindustry_world_blocks_ExplosionShield
#define HEADER_mindustry_world_blocks_ExplosionShield

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_ExplosionShield {
	java_lang_Object parent;
} mindustry_world_blocks_ExplosionShield;

extern Class class_mindustry_world_blocks_ExplosionShield;


#define INDEX_mindustry_world_blocks_ExplosionShield_absorbExplosion_float_float_float_R_boolean 0
typedef jbool (*func_mindustry_world_blocks_ExplosionShield_absorbExplosion_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);

void mark_mindustry_world_blocks_ExplosionShield(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_ExplosionShield(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
