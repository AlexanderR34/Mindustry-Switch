#ifndef HEADER_mindustry_logic_LogicRule
#define HEADER_mindustry_logic_LogicRule

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LogicRule {
	java_lang_Enum parent;
} mindustry_logic_LogicRule;

extern Class class_mindustry_logic_LogicRule;

extern jobject SF_mindustry_logic_LogicRule_currentWaveTime;
extern jobject SF_mindustry_logic_LogicRule_waveTimer;
extern jobject SF_mindustry_logic_LogicRule_waves;
extern jobject SF_mindustry_logic_LogicRule_wave;
extern jobject SF_mindustry_logic_LogicRule_waveSpacing;
extern jobject SF_mindustry_logic_LogicRule_waveSending;
extern jobject SF_mindustry_logic_LogicRule_attackMode;
extern jobject SF_mindustry_logic_LogicRule_enemyCoreBuildRadius;
extern jobject SF_mindustry_logic_LogicRule_dropZoneRadius;
extern jobject SF_mindustry_logic_LogicRule_unitCap;
extern jobject SF_mindustry_logic_LogicRule_mapArea;
extern jobject SF_mindustry_logic_LogicRule_lighting;
extern jobject SF_mindustry_logic_LogicRule_canGameOver;
extern jobject SF_mindustry_logic_LogicRule_ambientLight;
extern jobject SF_mindustry_logic_LogicRule_unitLight;
extern jobject SF_mindustry_logic_LogicRule_solarMultiplier;
extern jobject SF_mindustry_logic_LogicRule_dragMultiplier;
extern jobject SF_mindustry_logic_LogicRule_ban;
extern jobject SF_mindustry_logic_LogicRule_unban;
extern jobject SF_mindustry_logic_LogicRule_pauseDisabled;
extern jobject SF_mindustry_logic_LogicRule_musicVolume;
extern jobject SF_mindustry_logic_LogicRule_buildSpeed;
extern jobject SF_mindustry_logic_LogicRule_unitHealth;
extern jobject SF_mindustry_logic_LogicRule_unitBuildSpeed;
extern jobject SF_mindustry_logic_LogicRule_unitMineSpeed;
extern jobject SF_mindustry_logic_LogicRule_unitCost;
extern jobject SF_mindustry_logic_LogicRule_unitDamage;
extern jobject SF_mindustry_logic_LogicRule_blockHealth;
extern jobject SF_mindustry_logic_LogicRule_blockDamage;
extern jobject SF_mindustry_logic_LogicRule_rtsMinWeight;
extern jobject SF_mindustry_logic_LogicRule_rtsMinSquad;
extern jobject SF_mindustry_logic_LogicRule_all;
extern jobject SF_mindustry_logic_LogicRule_$VALUES;

#define VTABLE_mindustry_logic_LogicRule_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LogicRule_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicRule_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LogicRule_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LogicRule_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LogicRule_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicRule_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LogicRule_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicRule_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LogicRule_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicRule_finalize 5
typedef void (*func_mindustry_logic_LogicRule_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicRule_notify 6
typedef void (*func_mindustry_logic_LogicRule_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicRule_notifyAll 7
typedef void (*func_mindustry_logic_LogicRule_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicRule_wait 8
typedef void (*func_mindustry_logic_LogicRule_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicRule_wait_long 9
typedef void (*func_mindustry_logic_LogicRule_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LogicRule_wait_long_int 10
typedef void (*func_mindustry_logic_LogicRule_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LogicRule_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_logic_LogicRule_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LogicRule_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_logic_LogicRule_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LogicRule_name_R_java_lang_String 13
typedef jobject (*func_mindustry_logic_LogicRule_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicRule_ordinal_R_int 14
typedef jint (*func_mindustry_logic_LogicRule_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicRule_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_logic_LogicRule_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_logic_LogicRule(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LogicRule(jcontext ctx);
jobject SM_mindustry_logic_LogicRule_values_R_Array1_mindustry_logic_LogicRule(jcontext ctx);
jobject SM_mindustry_logic_LogicRule_valueOf_java_lang_String_R_mindustry_logic_LogicRule(jcontext ctx, jobject param0);
void init_mindustry_logic_LogicRule_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_mindustry_logic_LogicRule_$values_R_Array1_mindustry_logic_LogicRule(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
