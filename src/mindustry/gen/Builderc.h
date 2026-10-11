#ifndef HEADER_mindustry_gen_Builderc
#define HEADER_mindustry_gen_Builderc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/gen/Teamc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Builderc {
	java_lang_Object parent;
} mindustry_gen_Builderc;

extern Class class_mindustry_gen_Builderc;


#define INDEX_mindustry_gen_Builderc_buildPlan_R_mindustry_entities_units_BuildPlan 0
typedef jobject (*func_mindustry_gen_Builderc_buildPlan_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Builderc_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean 1
typedef jbool (*func_mindustry_gen_Builderc_shouldSkip_mindustry_entities_units_BuildPlan_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_mindustry_gen_Builderc_addBuild_mindustry_entities_units_BuildPlan_boolean 2
typedef void (*func_mindustry_gen_Builderc_addBuild_mindustry_entities_units_BuildPlan_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define INDEX_mindustry_gen_Builderc_addBuild_mindustry_entities_units_BuildPlan 3
typedef void (*func_mindustry_gen_Builderc_addBuild_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Builderc_clearBuilding 4
typedef void (*func_mindustry_gen_Builderc_clearBuilding)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Builderc_isBuilding_R_boolean 5
typedef jbool (*func_mindustry_gen_Builderc_isBuilding_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Builderc_plans_R_arc_struct_Queue 6
typedef jobject (*func_mindustry_gen_Builderc_plans_R_arc_struct_Queue)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Builderc_activelyBuilding_R_boolean 7
typedef jbool (*func_mindustry_gen_Builderc_activelyBuilding_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Builderc_canBuild_R_boolean 8
typedef jbool (*func_mindustry_gen_Builderc_canBuild_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Builderc_updateBuilding_R_boolean 9
typedef jbool (*func_mindustry_gen_Builderc_updateBuilding_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Builderc_buildAlpha_R_float 10
typedef jfloat (*func_mindustry_gen_Builderc_buildAlpha_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Builderc_afterRead 11
typedef void (*func_mindustry_gen_Builderc_afterRead)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Builderc_buildAlpha_float 12
typedef void (*func_mindustry_gen_Builderc_buildAlpha_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Builderc_drawBuilding 13
typedef void (*func_mindustry_gen_Builderc_drawBuilding)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Builderc_drawBuildingBeam_float_float 14
typedef void (*func_mindustry_gen_Builderc_drawBuildingBeam_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_mindustry_gen_Builderc_drawPlan_mindustry_entities_units_BuildPlan_float 15
typedef void (*func_mindustry_gen_Builderc_drawPlan_mindustry_entities_units_BuildPlan_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define INDEX_mindustry_gen_Builderc_drawPlanTop_mindustry_entities_units_BuildPlan_float 16
typedef void (*func_mindustry_gen_Builderc_drawPlanTop_mindustry_entities_units_BuildPlan_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define INDEX_mindustry_gen_Builderc_plans_arc_struct_Queue 17
typedef void (*func_mindustry_gen_Builderc_plans_arc_struct_Queue)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Builderc_removeBuild_int_int_boolean 18
typedef void (*func_mindustry_gen_Builderc_removeBuild_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2);
#define INDEX_mindustry_gen_Builderc_update 19
typedef void (*func_mindustry_gen_Builderc_update)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Builderc_updateBuildLogic 20
typedef void (*func_mindustry_gen_Builderc_updateBuildLogic)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Builderc_updateBuilding_boolean 21
typedef void (*func_mindustry_gen_Builderc_updateBuilding_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Builderc_validatePlans 22
typedef void (*func_mindustry_gen_Builderc_validatePlans)(jcontext ctx, jobject self);

void mark_mindustry_gen_Builderc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Builderc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
