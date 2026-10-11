#ifndef HEADER_mindustry_ai_RtsAI
#define HEADER_mindustry_ai_RtsAI

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_RtsAI {
	java_lang_Object parent;
	jref F_timer;
	jref F_data;
	jref F_damagedSet;
	jref F_damaged;
} mindustry_ai_RtsAI;

extern Class class_mindustry_ai_RtsAI;

extern jobject SF_mindustry_ai_RtsAI_targets;
extern jobject SF_mindustry_ai_RtsAI_squad;
extern jobject SF_mindustry_ai_RtsAI_stack;
extern jobject SF_mindustry_ai_RtsAI_used;
extern jobject SF_mindustry_ai_RtsAI_assignedTargets;
extern jobject SF_mindustry_ai_RtsAI_invalidTarget;
extern jfloat SF_mindustry_ai_RtsAI_squadRadius;
extern jint SF_mindustry_ai_RtsAI_timeUpdate;
extern jint SF_mindustry_ai_RtsAI_timerSpawn;
extern jint SF_mindustry_ai_RtsAI_maxTargetsChecked;
extern jobject SF_mindustry_ai_RtsAI_flags;
extern jobject SF_mindustry_ai_RtsAI_weights;
extern jbool SF_mindustry_ai_RtsAI_debug;

#define VTABLE_mindustry_ai_RtsAI_hashCode_R_int 0
typedef jint (*func_mindustry_ai_RtsAI_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_RtsAI_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_RtsAI_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_RtsAI_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_RtsAI_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_RtsAI_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_RtsAI_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_RtsAI_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_RtsAI_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_RtsAI_finalize 5
typedef void (*func_mindustry_ai_RtsAI_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_RtsAI_notify 6
typedef void (*func_mindustry_ai_RtsAI_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_RtsAI_notifyAll 7
typedef void (*func_mindustry_ai_RtsAI_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_RtsAI_wait 8
typedef void (*func_mindustry_ai_RtsAI_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_RtsAI_wait_long 9
typedef void (*func_mindustry_ai_RtsAI_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_RtsAI_wait_long_int 10
typedef void (*func_mindustry_ai_RtsAI_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_RtsAI_update 11
typedef void (*func_mindustry_ai_RtsAI_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_RtsAI_checkBuilding 12
typedef void (*func_mindustry_ai_RtsAI_checkBuilding)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_RtsAI_assignSquads 13
typedef void (*func_mindustry_ai_RtsAI_assignSquads)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_RtsAI_handleSquad_arc_struct_Seq_boolean_R_boolean 14
typedef jbool (*func_mindustry_ai_RtsAI_handleSquad_arc_struct_Seq_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_ai_RtsAI_findTarget_float_float_int_float_float_boolean_boolean_boolean_R_mindustry_gen_Building 15
typedef jobject (*func_mindustry_ai_RtsAI_findTarget_float_float_int_float_float_boolean_boolean_boolean_R_mindustry_gen_Building)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jbool param5, jbool param6, jbool param7);
#define VTABLE_mindustry_ai_RtsAI_estimateStats_float_float_float_float_float_float_boolean_R_float 16
typedef jfloat (*func_mindustry_ai_RtsAI_estimateStats_float_float_float_float_float_float_boolean_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6);

void mark_mindustry_ai_RtsAI(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_RtsAI(jcontext ctx);
void init_mindustry_ai_RtsAI_mindustry_game_Teams$TeamData(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_RtsAI_update(jcontext ctx, jobject self);
void M_mindustry_ai_RtsAI_checkBuilding(jcontext ctx, jobject self);
void M_mindustry_ai_RtsAI_assignSquads(jcontext ctx, jobject self);
jbool M_mindustry_ai_RtsAI_handleSquad_arc_struct_Seq_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_mindustry_ai_RtsAI_findTarget_float_float_int_float_float_boolean_boolean_boolean_R_mindustry_gen_Building(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jbool param5, jbool param6, jbool param7);
jfloat M_mindustry_ai_RtsAI_estimateStats_float_float_float_float_float_float_boolean_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6);
void SM_mindustry_ai_RtsAI_lambda$estimateStats$0_float_float_float_float_float_Array1_float_Array1_float_mindustry_gen_Unit(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jobject param6, jobject param7);
jfloat SM_mindustry_ai_RtsAI_lambda$findTarget$2_float_float_mindustry_gen_Building_R_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2);
jfloat SM_mindustry_ai_RtsAI_lambda$findTarget$1_float_float_mindustry_gen_Building_R_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2);
jbool SM_mindustry_ai_RtsAI_lambda$findTarget$0_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_ai_RtsAI_lambda$handleSquad$1_boolean_boolean_mindustry_gen_Unit_R_boolean(jcontext ctx, jbool param0, jbool param1, jobject param2);
jfloat SM_mindustry_ai_RtsAI_lambda$handleSquad$0_float_float_mindustry_gen_Building_R_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2);
void SM_mindustry_ai_RtsAI_lambda$assignSquads$0_mindustry_gen_Unit_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_ai_RtsAI_lambda$new$0(jcontext ctx);
void SM_mindustry_ai_RtsAI_lambda$new$1(jcontext ctx);
void SM_mindustry_ai_RtsAI_lambda$static$0_mindustry_game_EventType$BuildDamageEvent(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
