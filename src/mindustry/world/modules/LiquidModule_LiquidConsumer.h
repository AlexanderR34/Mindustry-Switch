#ifndef HEADER_mindustry_world_modules_LiquidModule$LiquidConsumer
#define HEADER_mindustry_world_modules_LiquidModule$LiquidConsumer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_modules_LiquidModule$LiquidConsumer {
	java_lang_Object parent;
} mindustry_world_modules_LiquidModule$LiquidConsumer;

extern Class class_mindustry_world_modules_LiquidModule$LiquidConsumer;


#define INDEX_mindustry_world_modules_LiquidModule$LiquidConsumer_accept_mindustry_type_Liquid_float 0
typedef void (*func_mindustry_world_modules_LiquidModule$LiquidConsumer_accept_mindustry_type_Liquid_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);

void mark_mindustry_world_modules_LiquidModule$LiquidConsumer(jobject object, jint mark, jint depth);
void clinit_mindustry_world_modules_LiquidModule$LiquidConsumer(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
