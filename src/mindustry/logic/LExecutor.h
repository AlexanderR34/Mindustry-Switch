#ifndef HEADER_mindustry_logic_LExecutor
#define HEADER_mindustry_logic_LExecutor

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LExecutor {
	java_lang_Object parent;
	jref F_instructions;
	jref F_vars;
	jref F_counter;
	jref F_unit;
	jref F_thisv;
	jref F_ipt;
	jref F_queryResult;
	jref F_binds;
	jbool F_yield;
	jbool F_stop;
	jref F_graphicsBuffer;
	jref F_textBuffer;
	jref F_links;
	jref F_build;
	jref F_linkIds;
	jref F_team;
	jbool F_privileged;
	jref F_nameMap;
} mindustry_logic_LExecutor;

extern Class class_mindustry_logic_LExecutor;

extern jint SF_mindustry_logic_LExecutor_maxInstructions;
extern jint SF_mindustry_logic_LExecutor_maxGraphicsBuffer;
extern jint SF_mindustry_logic_LExecutor_maxDisplayBuffer;
extern jint SF_mindustry_logic_LExecutor_maxTextBuffer;
extern jobject SF_mindustry_logic_LExecutor_unitTimeouts;

#define VTABLE_mindustry_logic_LExecutor_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LExecutor_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LExecutor_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LExecutor_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LExecutor_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LExecutor_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LExecutor_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor_finalize 5
typedef void (*func_mindustry_logic_LExecutor_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor_notify 6
typedef void (*func_mindustry_logic_LExecutor_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor_notifyAll 7
typedef void (*func_mindustry_logic_LExecutor_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor_wait 8
typedef void (*func_mindustry_logic_LExecutor_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor_wait_long 9
typedef void (*func_mindustry_logic_LExecutor_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LExecutor_wait_long_int 10
typedef void (*func_mindustry_logic_LExecutor_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LExecutor_timeoutDone_mindustry_gen_Unit_float_R_boolean 11
typedef jbool (*func_mindustry_logic_LExecutor_timeoutDone_mindustry_gen_Unit_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_logic_LExecutor_updateTimeout_mindustry_gen_Unit 12
typedef void (*func_mindustry_logic_LExecutor_updateTimeout_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LExecutor_initialized_R_boolean 13
typedef jbool (*func_mindustry_logic_LExecutor_initialized_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor_runOnce 14
typedef void (*func_mindustry_logic_LExecutor_runOnce)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor_load_mindustry_logic_LAssembler 15
typedef void (*func_mindustry_logic_LExecutor_load_mindustry_logic_LAssembler)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LExecutor_optionalVar_java_lang_String_R_mindustry_logic_LVar 16
typedef jobject (*func_mindustry_logic_LExecutor_optionalVar_java_lang_String_R_mindustry_logic_LVar)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LExecutor_optionalVar_int_R_mindustry_logic_LVar 17
typedef jobject (*func_mindustry_logic_LExecutor_optionalVar_int_R_mindustry_logic_LVar)(jcontext ctx, jobject self, jint param0);

void mark_mindustry_logic_LExecutor(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LExecutor(jcontext ctx);
void init_mindustry_logic_LExecutor(jcontext ctx, jobject self);
void SM_mindustry_logic_LExecutor_runLogicScript_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_logic_LExecutor_runLogicScript_java_lang_String_int_boolean(jcontext ctx, jobject param0, jint param1, jbool param2);
jbool M_mindustry_logic_LExecutor_timeoutDone_mindustry_gen_Unit_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_logic_LExecutor_updateTimeout_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_logic_LExecutor_initialized_R_boolean(jcontext ctx, jobject self);
void M_mindustry_logic_LExecutor_runOnce(jcontext ctx, jobject self);
void M_mindustry_logic_LExecutor_load_mindustry_logic_LAssembler(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_logic_LExecutor_optionalVar_java_lang_String_R_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_logic_LExecutor_optionalVar_int_R_mindustry_logic_LVar(jcontext ctx, jobject self, jint param0);
jbool SM_mindustry_logic_LExecutor_checkMapArea_int_int_int_int_boolean_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jbool param4);
void SM_mindustry_logic_LExecutor_setMapArea_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
void SM_mindustry_logic_LExecutor_logicExplosion_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jbool param5, jbool param6, jbool param7, jbool param8);
void SM_mindustry_logic_LExecutor_syncVariable_mindustry_gen_Building_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_mindustry_logic_LExecutor_setFlag_java_lang_String_boolean(jcontext ctx, jobject param0, jbool param1);
void SM_mindustry_logic_LExecutor_createMarker_int_mindustry_game_MapObjectives$ObjectiveMarker(jcontext ctx, jint param0, jobject param1);
void SM_mindustry_logic_LExecutor_removeMarker_int(jcontext ctx, jint param0);
void SM_mindustry_logic_LExecutor_updateMarker_int_mindustry_logic_LMarkerControl_double_double_double(jcontext ctx, jint param0, jobject param1, jdouble param2, jdouble param3, jdouble param4);
void SM_mindustry_logic_LExecutor_updateMarkerText_int_mindustry_logic_LMarkerControl_boolean_java_lang_String(jcontext ctx, jint param0, jobject param1, jbool param2, jobject param3);
void SM_mindustry_logic_LExecutor_updateMarkerTexture_int_java_lang_Object(jcontext ctx, jint param0, jobject param1);
jbool SM_mindustry_logic_LExecutor_lambda$load$0_mindustry_logic_LVar_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_logic_LExecutor_lambda$static$0_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
