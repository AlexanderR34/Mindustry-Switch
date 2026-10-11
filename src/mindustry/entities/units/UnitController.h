#ifndef HEADER_mindustry_entities_units_UnitController
#define HEADER_mindustry_entities_units_UnitController

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_units_UnitController {
	java_lang_Object parent;
} mindustry_entities_units_UnitController;

extern Class class_mindustry_entities_units_UnitController;


#define INDEX_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit 0
typedef void (*func_mindustry_entities_units_UnitController_unit_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_entities_units_UnitController_unit_R_mindustry_gen_Unit 1
typedef jobject (*func_mindustry_entities_units_UnitController_unit_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define INDEX_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet 2
typedef void (*func_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_entities_units_UnitController_isValidController_R_boolean 3
typedef jbool (*func_mindustry_entities_units_UnitController_isValidController_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_entities_units_UnitController_isLogicControllable_R_boolean 4
typedef jbool (*func_mindustry_entities_units_UnitController_isLogicControllable_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_entities_units_UnitController_updateUnit 5
typedef void (*func_mindustry_entities_units_UnitController_updateUnit)(jcontext ctx, jobject self);
#define INDEX_mindustry_entities_units_UnitController_removed_mindustry_gen_Unit 6
typedef void (*func_mindustry_entities_units_UnitController_removed_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_entities_units_UnitController_afterRead_mindustry_gen_Unit 7
typedef void (*func_mindustry_entities_units_UnitController_afterRead_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_entities_units_UnitController(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_units_UnitController(jcontext ctx);
void M_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_entities_units_UnitController_isValidController_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_units_UnitController_isLogicControllable_R_boolean(jcontext ctx, jobject self);
void M_mindustry_entities_units_UnitController_updateUnit(jcontext ctx, jobject self);
void M_mindustry_entities_units_UnitController_removed_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_units_UnitController_afterRead_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
