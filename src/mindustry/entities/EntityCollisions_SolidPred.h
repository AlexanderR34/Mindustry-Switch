#ifndef HEADER_mindustry_entities_EntityCollisions$SolidPred
#define HEADER_mindustry_entities_EntityCollisions$SolidPred

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_EntityCollisions$SolidPred {
	java_lang_Object parent;
} mindustry_entities_EntityCollisions$SolidPred;

extern Class class_mindustry_entities_EntityCollisions$SolidPred;


#define INDEX_mindustry_entities_EntityCollisions$SolidPred_solid_int_int_R_boolean 0
typedef jbool (*func_mindustry_entities_EntityCollisions$SolidPred_solid_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_mindustry_entities_EntityCollisions$SolidPred(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_EntityCollisions$SolidPred(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
