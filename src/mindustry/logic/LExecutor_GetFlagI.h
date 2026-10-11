#ifndef HEADER_mindustry_logic_LExecutor$GetFlagI
#define HEADER_mindustry_logic_LExecutor$GetFlagI

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LExecutor_LInstruction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LExecutor$GetFlagI {
	java_lang_Object parent;
	jref F_result;
	jref F_flag;
} mindustry_logic_LExecutor$GetFlagI;

extern Class class_mindustry_logic_LExecutor$GetFlagI;


#define VTABLE_mindustry_logic_LExecutor$GetFlagI_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LExecutor$GetFlagI_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$GetFlagI_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LExecutor$GetFlagI_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LExecutor$GetFlagI_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LExecutor$GetFlagI_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$GetFlagI_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LExecutor$GetFlagI_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$GetFlagI_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LExecutor$GetFlagI_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$GetFlagI_finalize 5
typedef void (*func_mindustry_logic_LExecutor$GetFlagI_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$GetFlagI_notify 6
typedef void (*func_mindustry_logic_LExecutor$GetFlagI_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$GetFlagI_notifyAll 7
typedef void (*func_mindustry_logic_LExecutor$GetFlagI_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$GetFlagI_wait 8
typedef void (*func_mindustry_logic_LExecutor$GetFlagI_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$GetFlagI_wait_long 9
typedef void (*func_mindustry_logic_LExecutor$GetFlagI_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LExecutor$GetFlagI_wait_long_int 10
typedef void (*func_mindustry_logic_LExecutor$GetFlagI_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LExecutor$GetFlagI_run_mindustry_logic_LExecutor 11
typedef void (*func_mindustry_logic_LExecutor$GetFlagI_run_mindustry_logic_LExecutor)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_LExecutor$GetFlagI(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LExecutor$GetFlagI(jcontext ctx);
void init_mindustry_logic_LExecutor$GetFlagI_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_mindustry_logic_LExecutor$GetFlagI(jcontext ctx, jobject self);
void M_mindustry_logic_LExecutor$GetFlagI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
