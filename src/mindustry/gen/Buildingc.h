#ifndef HEADER_mindustry_gen_Buildingc
#define HEADER_mindustry_gen_Buildingc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "mindustry/audio/AmbientSource.h"
#include "mindustry/entities/Sized.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Timerc.h"
#include "mindustry/logic/Controllable.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/logic/Settable.h"
#include "mindustry/ui/Displayable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Buildingc {
	java_lang_Object parent;
} mindustry_gen_Buildingc;

extern Class class_mindustry_gen_Buildingc;



void mark_mindustry_gen_Buildingc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Buildingc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
