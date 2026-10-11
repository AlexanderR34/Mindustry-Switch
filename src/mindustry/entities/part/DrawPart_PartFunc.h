#ifndef HEADER_mindustry_entities_part_DrawPart$PartFunc
#define HEADER_mindustry_entities_part_DrawPart$PartFunc

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_part_DrawPart$PartFunc {
	java_lang_Object parent;
} mindustry_entities_part_DrawPart$PartFunc;

extern Class class_mindustry_entities_part_DrawPart$PartFunc;


#define INDEX_mindustry_entities_part_DrawPart$PartFunc_get_float_float_R_float 0
typedef jfloat (*func_mindustry_entities_part_DrawPart$PartFunc_get_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);

void mark_mindustry_entities_part_DrawPart$PartFunc(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_part_DrawPart$PartFunc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
