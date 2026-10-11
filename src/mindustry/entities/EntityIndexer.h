#ifndef HEADER_mindustry_entities_EntityIndexer
#define HEADER_mindustry_entities_EntityIndexer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_EntityIndexer {
	java_lang_Object parent;
} mindustry_entities_EntityIndexer;

extern Class class_mindustry_entities_EntityIndexer;


#define INDEX_mindustry_entities_EntityIndexer_change_mindustry_gen_Entityc_int 0
typedef void (*func_mindustry_entities_EntityIndexer_change_mindustry_gen_Entityc_int)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_mindustry_entities_EntityIndexer(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_EntityIndexer(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
