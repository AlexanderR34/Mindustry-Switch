#ifndef HEADER_mindustry_service_SStat
#define HEADER_mindustry_service_SStat

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_service_SStat {
	java_lang_Enum parent;
} mindustry_service_SStat;

extern Class class_mindustry_service_SStat;

extern jobject SF_mindustry_service_SStat_unitsDestroyed;
extern jobject SF_mindustry_service_SStat_attacksWon;
extern jobject SF_mindustry_service_SStat_pvpsWon;
extern jobject SF_mindustry_service_SStat_timesLaunched;
extern jobject SF_mindustry_service_SStat_blocksDestroyed;
extern jobject SF_mindustry_service_SStat_itemsLaunched;
extern jobject SF_mindustry_service_SStat_reactorsOverheated;
extern jobject SF_mindustry_service_SStat_maxUnitActive;
extern jobject SF_mindustry_service_SStat_unitTypesBuilt;
extern jobject SF_mindustry_service_SStat_unitsBuilt;
extern jobject SF_mindustry_service_SStat_bossesDefeated;
extern jobject SF_mindustry_service_SStat_maxPlayersServer;
extern jobject SF_mindustry_service_SStat_mapsMade;
extern jobject SF_mindustry_service_SStat_mapsPublished;
extern jobject SF_mindustry_service_SStat_maxWavesSurvived;
extern jobject SF_mindustry_service_SStat_blocksBuilt;
extern jobject SF_mindustry_service_SStat_maxProduction;
extern jobject SF_mindustry_service_SStat_sectorsControlled;
extern jobject SF_mindustry_service_SStat_schematicsCreated;
extern jobject SF_mindustry_service_SStat_bouldersDeconstructed;
extern jobject SF_mindustry_service_SStat_totalCampaignItems;
extern jobject SF_mindustry_service_SStat_$VALUES;

#define VTABLE_mindustry_service_SStat_hashCode_R_int 0
typedef jint (*func_mindustry_service_SStat_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_SStat_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_service_SStat_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_SStat_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_service_SStat_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_SStat_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_service_SStat_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_SStat_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_service_SStat_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_SStat_finalize 5
typedef void (*func_mindustry_service_SStat_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_SStat_notify 6
typedef void (*func_mindustry_service_SStat_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_SStat_notifyAll 7
typedef void (*func_mindustry_service_SStat_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_SStat_wait 8
typedef void (*func_mindustry_service_SStat_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_SStat_wait_long 9
typedef void (*func_mindustry_service_SStat_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_service_SStat_wait_long_int 10
typedef void (*func_mindustry_service_SStat_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_service_SStat_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_service_SStat_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_SStat_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_service_SStat_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_SStat_name_R_java_lang_String 13
typedef jobject (*func_mindustry_service_SStat_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_SStat_ordinal_R_int 14
typedef jint (*func_mindustry_service_SStat_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_SStat_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_service_SStat_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_SStat_get_R_int 16
typedef jint (*func_mindustry_service_SStat_get_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_SStat_max_int 17
typedef void (*func_mindustry_service_SStat_max_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_service_SStat_set_int 18
typedef void (*func_mindustry_service_SStat_set_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_service_SStat_add_int 19
typedef void (*func_mindustry_service_SStat_add_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_service_SStat_add 20
typedef void (*func_mindustry_service_SStat_add)(jcontext ctx, jobject self);

void mark_mindustry_service_SStat(jobject object, jint mark, jint depth);
void clinit_mindustry_service_SStat(jcontext ctx);
jobject SM_mindustry_service_SStat_values_R_Array1_mindustry_service_SStat(jcontext ctx);
jobject SM_mindustry_service_SStat_valueOf_java_lang_String_R_mindustry_service_SStat(jcontext ctx, jobject param0);
void init_mindustry_service_SStat_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint M_mindustry_service_SStat_get_R_int(jcontext ctx, jobject self);
void M_mindustry_service_SStat_max_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_service_SStat_set_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_service_SStat_add_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_service_SStat_add(jcontext ctx, jobject self);
jobject SM_mindustry_service_SStat_$values_R_Array1_mindustry_service_SStat(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
