#ifndef HEADER_mindustry_type_StatusEffect$TransitionHandler
#define HEADER_mindustry_type_StatusEffect$TransitionHandler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_StatusEffect$TransitionHandler {
	java_lang_Object parent;
} mindustry_type_StatusEffect$TransitionHandler;

extern Class class_mindustry_type_StatusEffect$TransitionHandler;


#define INDEX_mindustry_type_StatusEffect$TransitionHandler_handle_mindustry_gen_Unit_mindustry_entities_units_StatusEntry_float 0
typedef void (*func_mindustry_type_StatusEffect$TransitionHandler_handle_mindustry_gen_Unit_mindustry_entities_units_StatusEntry_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);

void mark_mindustry_type_StatusEffect$TransitionHandler(jobject object, jint mark, jint depth);
void clinit_mindustry_type_StatusEffect$TransitionHandler(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
