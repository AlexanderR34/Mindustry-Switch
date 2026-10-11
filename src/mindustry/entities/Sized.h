#ifndef HEADER_mindustry_entities_Sized
#define HEADER_mindustry_entities_Sized

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Position.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_Sized {
	java_lang_Object parent;
} mindustry_entities_Sized;

extern Class class_mindustry_entities_Sized;


#define INDEX_mindustry_entities_Sized_hitSize_R_float 0
typedef jfloat (*func_mindustry_entities_Sized_hitSize_R_float)(jcontext ctx, jobject self);

void mark_mindustry_entities_Sized(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_Sized(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
