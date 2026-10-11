#ifndef HEADER_mindustry_logic_LExecutor$SpawnBulletI
#define HEADER_mindustry_logic_LExecutor$SpawnBulletI

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LExecutor_LInstruction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LExecutor$SpawnBulletI {
	java_lang_Object parent;
	jref F_result;
	jref F_from;
	jref F_weapon;
	jref F_x;
	jref F_y;
	jref F_rotation;
	jref F_team;
	jref F_owner;
	jref F_damage;
	jref F_velocityScl;
	jref F_lifeScl;
	jref F_aimX;
	jref F_aimY;
} mindustry_logic_LExecutor$SpawnBulletI;

extern Class class_mindustry_logic_LExecutor$SpawnBulletI;


#define VTABLE_mindustry_logic_LExecutor$SpawnBulletI_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LExecutor$SpawnBulletI_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$SpawnBulletI_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LExecutor$SpawnBulletI_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LExecutor$SpawnBulletI_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LExecutor$SpawnBulletI_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$SpawnBulletI_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LExecutor$SpawnBulletI_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$SpawnBulletI_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LExecutor$SpawnBulletI_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$SpawnBulletI_finalize 5
typedef void (*func_mindustry_logic_LExecutor$SpawnBulletI_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$SpawnBulletI_notify 6
typedef void (*func_mindustry_logic_LExecutor$SpawnBulletI_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$SpawnBulletI_notifyAll 7
typedef void (*func_mindustry_logic_LExecutor$SpawnBulletI_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$SpawnBulletI_wait 8
typedef void (*func_mindustry_logic_LExecutor$SpawnBulletI_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$SpawnBulletI_wait_long 9
typedef void (*func_mindustry_logic_LExecutor$SpawnBulletI_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LExecutor$SpawnBulletI_wait_long_int 10
typedef void (*func_mindustry_logic_LExecutor$SpawnBulletI_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LExecutor$SpawnBulletI_run_mindustry_logic_LExecutor 11
typedef void (*func_mindustry_logic_LExecutor$SpawnBulletI_run_mindustry_logic_LExecutor)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_LExecutor$SpawnBulletI(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LExecutor$SpawnBulletI(jcontext ctx);
void init_mindustry_logic_LExecutor$SpawnBulletI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jobject param8, jobject param9, jobject param10, jobject param11, jobject param12);
void init_mindustry_logic_LExecutor$SpawnBulletI(jcontext ctx, jobject self);
void M_mindustry_logic_LExecutor$SpawnBulletI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
