#ifndef HEADER_mindustry_logic_LExecutor$QueryI
#define HEADER_mindustry_logic_LExecutor$QueryI

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LExecutor_LInstruction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LExecutor$QueryI {
	java_lang_Object parent;
	jref F_shape;
	jref F_type;
	jref F_team;
	jref F_x;
	jref F_y;
	jref F_width;
	jref F_height;
} mindustry_logic_LExecutor$QueryI;

extern Class class_mindustry_logic_LExecutor$QueryI;

extern jobject SF_mindustry_logic_LExecutor$QueryI_paramSeq;
extern jobject SF_mindustry_logic_LExecutor$QueryI_paramTeam;
extern jobject SF_mindustry_logic_LExecutor$QueryI_bulletCons;

#define VTABLE_mindustry_logic_LExecutor$QueryI_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LExecutor$QueryI_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$QueryI_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LExecutor$QueryI_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LExecutor$QueryI_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LExecutor$QueryI_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$QueryI_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LExecutor$QueryI_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$QueryI_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LExecutor$QueryI_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$QueryI_finalize 5
typedef void (*func_mindustry_logic_LExecutor$QueryI_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$QueryI_notify 6
typedef void (*func_mindustry_logic_LExecutor$QueryI_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$QueryI_notifyAll 7
typedef void (*func_mindustry_logic_LExecutor$QueryI_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$QueryI_wait 8
typedef void (*func_mindustry_logic_LExecutor$QueryI_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$QueryI_wait_long 9
typedef void (*func_mindustry_logic_LExecutor$QueryI_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LExecutor$QueryI_wait_long_int 10
typedef void (*func_mindustry_logic_LExecutor$QueryI_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LExecutor$QueryI_run_mindustry_logic_LExecutor 11
typedef void (*func_mindustry_logic_LExecutor$QueryI_run_mindustry_logic_LExecutor)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_LExecutor$QueryI(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LExecutor$QueryI(jcontext ctx);
void init_mindustry_logic_LExecutor$QueryI_mindustry_logic_QueryShape_mindustry_logic_QueryType_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
void init_mindustry_logic_LExecutor$QueryI(jcontext ctx, jobject self);
void M_mindustry_logic_LExecutor$QueryI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_logic_LExecutor$QueryI_lambda$run$2_float_float_float_mindustry_gen_Building_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3);
jbool SM_mindustry_logic_LExecutor$QueryI_lambda$run$1_float_float_float_mindustry_gen_Bullet_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3);
jbool SM_mindustry_logic_LExecutor$QueryI_lambda$run$0_float_float_float_mindustry_gen_Unit_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_logic_LExecutor$QueryI_lambda$static$0_mindustry_gen_Bullet(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
