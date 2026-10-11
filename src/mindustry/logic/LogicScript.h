#ifndef HEADER_mindustry_logic_LogicScript
#define HEADER_mindustry_logic_LogicScript

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LogicScript {
	java_lang_Object parent;
	jint F_timeout;
	jref F_executor;
	jbool F_resetVars;
	jref F_script;
} mindustry_logic_LogicScript;

extern Class class_mindustry_logic_LogicScript;

extern jint SF_mindustry_logic_LogicScript_defaultTimeoutMs;
extern jint SF_mindustry_logic_LogicScript_maxTimeoutMs;

#define VTABLE_mindustry_logic_LogicScript_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LogicScript_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicScript_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LogicScript_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LogicScript_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LogicScript_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicScript_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LogicScript_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicScript_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LogicScript_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicScript_finalize 5
typedef void (*func_mindustry_logic_LogicScript_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicScript_notify 6
typedef void (*func_mindustry_logic_LogicScript_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicScript_notifyAll 7
typedef void (*func_mindustry_logic_LogicScript_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicScript_wait 8
typedef void (*func_mindustry_logic_LogicScript_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LogicScript_wait_long 9
typedef void (*func_mindustry_logic_LogicScript_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LogicScript_wait_long_int 10
typedef void (*func_mindustry_logic_LogicScript_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LogicScript_run 11
typedef void (*func_mindustry_logic_LogicScript_run)(jcontext ctx, jobject self);

void mark_mindustry_logic_LogicScript(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LogicScript(jcontext ctx);
void init_mindustry_logic_LogicScript_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_mindustry_logic_LogicScript(jcontext ctx, jobject self);
void M_mindustry_logic_LogicScript_run(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
