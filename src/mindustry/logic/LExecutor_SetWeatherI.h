#ifndef HEADER_mindustry_logic_LExecutor$SetWeatherI
#define HEADER_mindustry_logic_LExecutor$SetWeatherI

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LExecutor_LInstruction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LExecutor$SetWeatherI {
	java_lang_Object parent;
	jref F_type;
	jref F_state;
} mindustry_logic_LExecutor$SetWeatherI;

extern Class class_mindustry_logic_LExecutor$SetWeatherI;


#define VTABLE_mindustry_logic_LExecutor$SetWeatherI_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LExecutor$SetWeatherI_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$SetWeatherI_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LExecutor$SetWeatherI_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LExecutor$SetWeatherI_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LExecutor$SetWeatherI_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$SetWeatherI_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LExecutor$SetWeatherI_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$SetWeatherI_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LExecutor$SetWeatherI_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$SetWeatherI_finalize 5
typedef void (*func_mindustry_logic_LExecutor$SetWeatherI_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$SetWeatherI_notify 6
typedef void (*func_mindustry_logic_LExecutor$SetWeatherI_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$SetWeatherI_notifyAll 7
typedef void (*func_mindustry_logic_LExecutor$SetWeatherI_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$SetWeatherI_wait 8
typedef void (*func_mindustry_logic_LExecutor$SetWeatherI_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$SetWeatherI_wait_long 9
typedef void (*func_mindustry_logic_LExecutor$SetWeatherI_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LExecutor$SetWeatherI_wait_long_int 10
typedef void (*func_mindustry_logic_LExecutor$SetWeatherI_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LExecutor$SetWeatherI_run_mindustry_logic_LExecutor 11
typedef void (*func_mindustry_logic_LExecutor$SetWeatherI_run_mindustry_logic_LExecutor)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_LExecutor$SetWeatherI(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LExecutor$SetWeatherI(jcontext ctx);
void init_mindustry_logic_LExecutor$SetWeatherI_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_logic_LExecutor$SetWeatherI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
