#ifndef HEADER_mindustry_gen_UnitTetherc
#define HEADER_mindustry_gen_UnitTetherc

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

typedef struct mindustry_gen_UnitTetherc {
	java_lang_Object parent;
} mindustry_gen_UnitTetherc;

extern Class class_mindustry_gen_UnitTetherc;


#define INDEX_mindustry_gen_UnitTetherc_spawner_R_mindustry_gen_Unit 0
typedef jobject (*func_mindustry_gen_UnitTetherc_spawner_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_UnitTetherc_spawnerUnitId_R_int 1
typedef jint (*func_mindustry_gen_UnitTetherc_spawnerUnitId_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_UnitTetherc_afterRead 2
typedef void (*func_mindustry_gen_UnitTetherc_afterRead)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_UnitTetherc_afterSync 3
typedef void (*func_mindustry_gen_UnitTetherc_afterSync)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_UnitTetherc_spawner_mindustry_gen_Unit 4
typedef void (*func_mindustry_gen_UnitTetherc_spawner_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_UnitTetherc_spawnerUnitId_int 5
typedef void (*func_mindustry_gen_UnitTetherc_spawnerUnitId_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_mindustry_gen_UnitTetherc_update 6
typedef void (*func_mindustry_gen_UnitTetherc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_UnitTetherc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_UnitTetherc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
