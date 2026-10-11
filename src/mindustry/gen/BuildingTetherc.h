#ifndef HEADER_mindustry_gen_BuildingTetherc
#define HEADER_mindustry_gen_BuildingTetherc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/gen/Physicsc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Shieldc.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/gen/Velc.h"
#include "mindustry/gen/Weaponsc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_BuildingTetherc {
	java_lang_Object parent;
} mindustry_gen_BuildingTetherc;

extern Class class_mindustry_gen_BuildingTetherc;


#define INDEX_mindustry_gen_BuildingTetherc_building_R_mindustry_gen_Building 0
typedef jobject (*func_mindustry_gen_BuildingTetherc_building_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_BuildingTetherc_building_mindustry_gen_Building 1
typedef void (*func_mindustry_gen_BuildingTetherc_building_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_BuildingTetherc_update 2
typedef void (*func_mindustry_gen_BuildingTetherc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_BuildingTetherc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_BuildingTetherc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
