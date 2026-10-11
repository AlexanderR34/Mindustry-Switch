#ifndef HEADER_mindustry_logic_LExecutor$UnitBindI
#define HEADER_mindustry_logic_LExecutor$UnitBindI

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LExecutor_LInstruction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LExecutor$UnitBindI {
	java_lang_Object parent;
	jref F_type;
} mindustry_logic_LExecutor$UnitBindI;

extern Class class_mindustry_logic_LExecutor$UnitBindI;


#define VTABLE_mindustry_logic_LExecutor$UnitBindI_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LExecutor$UnitBindI_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$UnitBindI_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LExecutor$UnitBindI_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LExecutor$UnitBindI_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LExecutor$UnitBindI_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$UnitBindI_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LExecutor$UnitBindI_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$UnitBindI_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LExecutor$UnitBindI_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$UnitBindI_finalize 5
typedef void (*func_mindustry_logic_LExecutor$UnitBindI_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$UnitBindI_notify 6
typedef void (*func_mindustry_logic_LExecutor$UnitBindI_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$UnitBindI_notifyAll 7
typedef void (*func_mindustry_logic_LExecutor$UnitBindI_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$UnitBindI_wait 8
typedef void (*func_mindustry_logic_LExecutor$UnitBindI_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$UnitBindI_wait_long 9
typedef void (*func_mindustry_logic_LExecutor$UnitBindI_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LExecutor$UnitBindI_wait_long_int 10
typedef void (*func_mindustry_logic_LExecutor$UnitBindI_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LExecutor$UnitBindI_run_mindustry_logic_LExecutor 11
typedef void (*func_mindustry_logic_LExecutor$UnitBindI_run_mindustry_logic_LExecutor)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_LExecutor$UnitBindI(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LExecutor$UnitBindI(jcontext ctx);
void init_mindustry_logic_LExecutor$UnitBindI_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0);
void init_mindustry_logic_LExecutor$UnitBindI(jcontext ctx, jobject self);
void M_mindustry_logic_LExecutor$UnitBindI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
