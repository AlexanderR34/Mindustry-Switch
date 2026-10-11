#ifndef HEADER_mindustry_world_modules_ItemModule$ItemCalculator
#define HEADER_mindustry_world_modules_ItemModule$ItemCalculator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_modules_ItemModule$ItemCalculator {
	java_lang_Object parent;
} mindustry_world_modules_ItemModule$ItemCalculator;

extern Class class_mindustry_world_modules_ItemModule$ItemCalculator;


#define INDEX_mindustry_world_modules_ItemModule$ItemCalculator_get_mindustry_type_Item_int_R_float 0
typedef jfloat (*func_mindustry_world_modules_ItemModule$ItemCalculator_get_mindustry_type_Item_int_R_float)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_mindustry_world_modules_ItemModule$ItemCalculator(jobject object, jint mark, jint depth);
void clinit_mindustry_world_modules_ItemModule$ItemCalculator(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
