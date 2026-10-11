#ifndef HEADER_mindustry_logic_LExecutor$RadarI
#define HEADER_mindustry_logic_LExecutor$RadarI

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LExecutor_LInstruction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LExecutor$RadarI {
	java_lang_Object parent;
	jref F_target1;
	jref F_target2;
	jref F_target3;
	jref F_sort;
	jref F_radar;
	jref F_sortOrder;
	jref F_output;
	jref F_lastTarget;
	jref F_lastSourceBuild;
	jref F_timer;
} mindustry_logic_LExecutor$RadarI;

extern Class class_mindustry_logic_LExecutor$RadarI;

extern jfloat SF_mindustry_logic_LExecutor$RadarI_bestValue;
extern jobject SF_mindustry_logic_LExecutor$RadarI_best;

#define VTABLE_mindustry_logic_LExecutor$RadarI_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LExecutor$RadarI_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$RadarI_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LExecutor$RadarI_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LExecutor$RadarI_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LExecutor$RadarI_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$RadarI_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LExecutor$RadarI_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$RadarI_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LExecutor$RadarI_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$RadarI_finalize 5
typedef void (*func_mindustry_logic_LExecutor$RadarI_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$RadarI_notify 6
typedef void (*func_mindustry_logic_LExecutor$RadarI_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$RadarI_notifyAll 7
typedef void (*func_mindustry_logic_LExecutor$RadarI_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$RadarI_wait 8
typedef void (*func_mindustry_logic_LExecutor$RadarI_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$RadarI_wait_long 9
typedef void (*func_mindustry_logic_LExecutor$RadarI_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LExecutor$RadarI_wait_long_int 10
typedef void (*func_mindustry_logic_LExecutor$RadarI_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LExecutor$RadarI_run_mindustry_logic_LExecutor 11
typedef void (*func_mindustry_logic_LExecutor$RadarI_run_mindustry_logic_LExecutor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LExecutor$RadarI_find_mindustry_logic_Ranged_float_int_mindustry_game_Team 12
typedef void (*func_mindustry_logic_LExecutor$RadarI_find_mindustry_logic_Ranged_float_int_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_mindustry_logic_LExecutor$RadarI_lambda$find$0_mindustry_logic_Ranged_float_mindustry_game_Team_int_mindustry_gen_Unit 13
typedef void (*func_mindustry_logic_LExecutor$RadarI_lambda$find$0_mindustry_logic_Ranged_float_mindustry_game_Team_int_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2, jint param3, jobject param4);

void mark_mindustry_logic_LExecutor$RadarI(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LExecutor$RadarI(jcontext ctx);
void init_mindustry_logic_LExecutor$RadarI_mindustry_logic_RadarTarget_mindustry_logic_RadarTarget_mindustry_logic_RadarTarget_mindustry_logic_RadarSort_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
void init_mindustry_logic_LExecutor$RadarI(jcontext ctx, jobject self);
void M_mindustry_logic_LExecutor$RadarI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LExecutor$RadarI_find_mindustry_logic_Ranged_float_int_mindustry_game_Team(jcontext ctx, jobject self, jobject param0, jfloat param1, jint param2, jobject param3);
void M_mindustry_logic_LExecutor$RadarI_lambda$find$0_mindustry_logic_Ranged_float_mindustry_game_Team_int_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2, jint param3, jobject param4);

#ifdef __cplusplus
}
#endif

#endif
