#ifndef HEADER_mindustry_world_modules_LiquidModule$LiquidCalculator
#define HEADER_mindustry_world_modules_LiquidModule$LiquidCalculator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_modules_LiquidModule$LiquidCalculator {
	java_lang_Object parent;
} mindustry_world_modules_LiquidModule$LiquidCalculator;

extern Class class_mindustry_world_modules_LiquidModule$LiquidCalculator;


#define INDEX_mindustry_world_modules_LiquidModule$LiquidCalculator_get_mindustry_type_Liquid_float_R_float 0
typedef jfloat (*func_mindustry_world_modules_LiquidModule$LiquidCalculator_get_mindustry_type_Liquid_float_R_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);

void mark_mindustry_world_modules_LiquidModule$LiquidCalculator(jobject object, jint mark, jint depth);
void clinit_mindustry_world_modules_LiquidModule$LiquidCalculator(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
