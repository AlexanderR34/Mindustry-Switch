#ifndef HEADER_mindustry_entities_Mover
#define HEADER_mindustry_entities_Mover

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_Mover {
	java_lang_Object parent;
} mindustry_entities_Mover;

extern Class class_mindustry_entities_Mover;


#define INDEX_mindustry_entities_Mover_move_mindustry_gen_Bullet 0
typedef void (*func_mindustry_entities_Mover_move_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_entities_Mover(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_Mover(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
