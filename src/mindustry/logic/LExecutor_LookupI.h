#ifndef HEADER_mindustry_logic_LExecutor$LookupI
#define HEADER_mindustry_logic_LExecutor$LookupI

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LExecutor_LInstruction.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LExecutor$LookupI {
	java_lang_Object parent;
	jref F_dest;
	jref F_from;
	jref F_type;
} mindustry_logic_LExecutor$LookupI;

extern Class class_mindustry_logic_LExecutor$LookupI;


#define VTABLE_mindustry_logic_LExecutor$LookupI_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LExecutor$LookupI_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$LookupI_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LExecutor$LookupI_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LExecutor$LookupI_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LExecutor$LookupI_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$LookupI_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LExecutor$LookupI_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$LookupI_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LExecutor$LookupI_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$LookupI_finalize 5
typedef void (*func_mindustry_logic_LExecutor$LookupI_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$LookupI_notify 6
typedef void (*func_mindustry_logic_LExecutor$LookupI_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$LookupI_notifyAll 7
typedef void (*func_mindustry_logic_LExecutor$LookupI_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$LookupI_wait 8
typedef void (*func_mindustry_logic_LExecutor$LookupI_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LExecutor$LookupI_wait_long 9
typedef void (*func_mindustry_logic_LExecutor$LookupI_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LExecutor$LookupI_wait_long_int 10
typedef void (*func_mindustry_logic_LExecutor$LookupI_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LExecutor$LookupI_run_mindustry_logic_LExecutor 11
typedef void (*func_mindustry_logic_LExecutor$LookupI_run_mindustry_logic_LExecutor)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_LExecutor$LookupI(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LExecutor$LookupI(jcontext ctx);
void init_mindustry_logic_LExecutor$LookupI_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_ctype_ContentType(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_mindustry_logic_LExecutor$LookupI(jcontext ctx, jobject self);
void M_mindustry_logic_LExecutor$LookupI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
