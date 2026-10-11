#ifndef HEADER_mindustry_logic_LExecutor$NoopI
#define HEADER_mindustry_logic_LExecutor$NoopI

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LExecutor_LInstruction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LExecutor$NoopI {
	java_lang_Object parent;
} mindustry_logic_LExecutor$NoopI;

extern Class class_mindustry_logic_LExecutor$NoopI;


#define VTABLE_mindustry_logic_LExecutor$NoopI_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LExecutor$NoopI_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$NoopI_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LExecutor$NoopI_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LExecutor$NoopI_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LExecutor$NoopI_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$NoopI_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LExecutor$NoopI_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$NoopI_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LExecutor$NoopI_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$NoopI_finalize 5
typedef void (*func_mindustry_logic_LExecutor$NoopI_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$NoopI_notify 6
typedef void (*func_mindustry_logic_LExecutor$NoopI_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$NoopI_notifyAll 7
typedef void (*func_mindustry_logic_LExecutor$NoopI_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$NoopI_wait 8
typedef void (*func_mindustry_logic_LExecutor$NoopI_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$NoopI_wait_long 9
typedef void (*func_mindustry_logic_LExecutor$NoopI_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LExecutor$NoopI_wait_long_int 10
typedef void (*func_mindustry_logic_LExecutor$NoopI_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LExecutor$NoopI_run_mindustry_logic_LExecutor 11
typedef void (*func_mindustry_logic_LExecutor$NoopI_run_mindustry_logic_LExecutor)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_LExecutor$NoopI(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LExecutor$NoopI(jcontext ctx);
void init_mindustry_logic_LExecutor$NoopI(jcontext ctx, jobject self);
void M_mindustry_logic_LExecutor$NoopI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
