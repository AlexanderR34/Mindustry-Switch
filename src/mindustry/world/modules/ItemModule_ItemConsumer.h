#ifndef HEADER_mindustry_world_modules_ItemModule$ItemConsumer
#define HEADER_mindustry_world_modules_ItemModule$ItemConsumer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_modules_ItemModule$ItemConsumer {
	java_lang_Object parent;
} mindustry_world_modules_ItemModule$ItemConsumer;

extern Class class_mindustry_world_modules_ItemModule$ItemConsumer;


#define INDEX_mindustry_world_modules_ItemModule$ItemConsumer_accept_mindustry_type_Item_int 0
typedef void (*func_mindustry_world_modules_ItemModule$ItemConsumer_accept_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_mindustry_world_modules_ItemModule$ItemConsumer(jobject object, jint mark, jint depth);
void clinit_mindustry_world_modules_ItemModule$ItemConsumer(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
