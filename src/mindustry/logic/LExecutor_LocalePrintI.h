#ifndef HEADER_mindustry_logic_LExecutor$LocalePrintI
#define HEADER_mindustry_logic_LExecutor$LocalePrintI

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LExecutor_LInstruction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LExecutor$LocalePrintI {
	java_lang_Object parent;
	jref F_name;
} mindustry_logic_LExecutor$LocalePrintI;

extern Class class_mindustry_logic_LExecutor$LocalePrintI;


#define VTABLE_mindustry_logic_LExecutor$LocalePrintI_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LExecutor$LocalePrintI_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$LocalePrintI_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LExecutor$LocalePrintI_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LExecutor$LocalePrintI_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LExecutor$LocalePrintI_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$LocalePrintI_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LExecutor$LocalePrintI_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$LocalePrintI_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LExecutor$LocalePrintI_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$LocalePrintI_finalize 5
typedef void (*func_mindustry_logic_LExecutor$LocalePrintI_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$LocalePrintI_notify 6
typedef void (*func_mindustry_logic_LExecutor$LocalePrintI_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$LocalePrintI_notifyAll 7
typedef void (*func_mindustry_logic_LExecutor$LocalePrintI_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$LocalePrintI_wait 8
typedef void (*func_mindustry_logic_LExecutor$LocalePrintI_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$LocalePrintI_wait_long 9
typedef void (*func_mindustry_logic_LExecutor$LocalePrintI_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LExecutor$LocalePrintI_wait_long_int 10
typedef void (*func_mindustry_logic_LExecutor$LocalePrintI_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LExecutor$LocalePrintI_run_mindustry_logic_LExecutor 11
typedef void (*func_mindustry_logic_LExecutor$LocalePrintI_run_mindustry_logic_LExecutor)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_LExecutor$LocalePrintI(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LExecutor$LocalePrintI(jcontext ctx);
void init_mindustry_logic_LExecutor$LocalePrintI_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0);
void init_mindustry_logic_LExecutor$LocalePrintI(jcontext ctx, jobject self);
void M_mindustry_logic_LExecutor$LocalePrintI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
