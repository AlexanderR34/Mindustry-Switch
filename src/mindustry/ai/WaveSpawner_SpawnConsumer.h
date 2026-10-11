#ifndef HEADER_mindustry_ai_WaveSpawner$SpawnConsumer
#define HEADER_mindustry_ai_WaveSpawner$SpawnConsumer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_WaveSpawner$SpawnConsumer {
	java_lang_Object parent;
} mindustry_ai_WaveSpawner$SpawnConsumer;

extern Class class_mindustry_ai_WaveSpawner$SpawnConsumer;


#define INDEX_mindustry_ai_WaveSpawner$SpawnConsumer_accept_float_float_boolean 0
typedef void (*func_mindustry_ai_WaveSpawner$SpawnConsumer_accept_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);

void mark_mindustry_ai_WaveSpawner$SpawnConsumer(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_WaveSpawner$SpawnConsumer(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
