#ifndef HEADER_rhino_module_RequireBuilder
#define HEADER_rhino_module_RequireBuilder

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_module_RequireBuilder {
	java_lang_Object parent;
	jbool F_sandboxed;
	jref F_moduleScriptProvider;
	jref F_preExec;
	jref F_postExec;
} rhino_module_RequireBuilder;

extern Class class_rhino_module_RequireBuilder;


#define VTABLE_rhino_module_RequireBuilder_hashCode_R_int 0
typedef jint (*func_rhino_module_RequireBuilder_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_RequireBuilder_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_module_RequireBuilder_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_module_RequireBuilder_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_module_RequireBuilder_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_RequireBuilder_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_module_RequireBuilder_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_RequireBuilder_toString_R_java_lang_String 4
typedef jobject (*func_rhino_module_RequireBuilder_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_RequireBuilder_finalize 5
typedef void (*func_rhino_module_RequireBuilder_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_RequireBuilder_notify 6
typedef void (*func_rhino_module_RequireBuilder_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_RequireBuilder_notifyAll 7
typedef void (*func_rhino_module_RequireBuilder_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_RequireBuilder_wait 8
typedef void (*func_rhino_module_RequireBuilder_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_RequireBuilder_wait_long 9
typedef void (*func_rhino_module_RequireBuilder_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_module_RequireBuilder_wait_long_int 10
typedef void (*func_rhino_module_RequireBuilder_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_module_RequireBuilder_setModuleScriptProvider_rhino_module_ModuleScriptProvider_R_rhino_module_RequireBuilder 11
typedef jobject (*func_rhino_module_RequireBuilder_setModuleScriptProvider_rhino_module_ModuleScriptProvider_R_rhino_module_RequireBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_module_RequireBuilder_setPostExec_rhino_Script_R_rhino_module_RequireBuilder 12
typedef jobject (*func_rhino_module_RequireBuilder_setPostExec_rhino_Script_R_rhino_module_RequireBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_module_RequireBuilder_setPreExec_rhino_Script_R_rhino_module_RequireBuilder 13
typedef jobject (*func_rhino_module_RequireBuilder_setPreExec_rhino_Script_R_rhino_module_RequireBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_module_RequireBuilder_setSandboxed_boolean_R_rhino_module_RequireBuilder 14
typedef jobject (*func_rhino_module_RequireBuilder_setSandboxed_boolean_R_rhino_module_RequireBuilder)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_rhino_module_RequireBuilder_createRequire_rhino_Context_rhino_Scriptable_R_rhino_module_Require 15
typedef jobject (*func_rhino_module_RequireBuilder_createRequire_rhino_Context_rhino_Scriptable_R_rhino_module_Require)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_rhino_module_RequireBuilder(jobject object, jint mark, jint depth);
void clinit_rhino_module_RequireBuilder(jcontext ctx);
void init_rhino_module_RequireBuilder(jcontext ctx, jobject self);
jobject M_rhino_module_RequireBuilder_setModuleScriptProvider_rhino_module_ModuleScriptProvider_R_rhino_module_RequireBuilder(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_module_RequireBuilder_setPostExec_rhino_Script_R_rhino_module_RequireBuilder(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_module_RequireBuilder_setPreExec_rhino_Script_R_rhino_module_RequireBuilder(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_module_RequireBuilder_setSandboxed_boolean_R_rhino_module_RequireBuilder(jcontext ctx, jobject self, jbool param0);
jobject M_rhino_module_RequireBuilder_createRequire_rhino_Context_rhino_Scriptable_R_rhino_module_Require(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
