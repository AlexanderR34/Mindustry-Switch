#ifndef HEADER_rhino_module_ModuleScript
#define HEADER_rhino_module_ModuleScript

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_module_ModuleScript {
	java_lang_Object parent;
	jref F_script;
	jref F_uri;
	jref F_base;
} rhino_module_ModuleScript;

extern Class class_rhino_module_ModuleScript;


#define VTABLE_rhino_module_ModuleScript_hashCode_R_int 0
typedef jint (*func_rhino_module_ModuleScript_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_ModuleScript_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_module_ModuleScript_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_module_ModuleScript_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_module_ModuleScript_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_ModuleScript_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_module_ModuleScript_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_ModuleScript_toString_R_java_lang_String 4
typedef jobject (*func_rhino_module_ModuleScript_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_ModuleScript_finalize 5
typedef void (*func_rhino_module_ModuleScript_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_ModuleScript_notify 6
typedef void (*func_rhino_module_ModuleScript_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_ModuleScript_notifyAll 7
typedef void (*func_rhino_module_ModuleScript_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_ModuleScript_wait 8
typedef void (*func_rhino_module_ModuleScript_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_ModuleScript_wait_long 9
typedef void (*func_rhino_module_ModuleScript_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_module_ModuleScript_wait_long_int 10
typedef void (*func_rhino_module_ModuleScript_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_module_ModuleScript_getScript_R_rhino_Script 11
typedef jobject (*func_rhino_module_ModuleScript_getScript_R_rhino_Script)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_ModuleScript_getUri_R_java_net_URI 12
typedef jobject (*func_rhino_module_ModuleScript_getUri_R_java_net_URI)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_ModuleScript_getBase_R_java_net_URI 13
typedef jobject (*func_rhino_module_ModuleScript_getBase_R_java_net_URI)(jcontext ctx, jobject self);
#define VTABLE_rhino_module_ModuleScript_isSandboxed_R_boolean 14
typedef jbool (*func_rhino_module_ModuleScript_isSandboxed_R_boolean)(jcontext ctx, jobject self);

void mark_rhino_module_ModuleScript(jobject object, jint mark, jint depth);
void clinit_rhino_module_ModuleScript(jcontext ctx);
void init_rhino_module_ModuleScript_rhino_Script_java_net_URI_java_net_URI(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_rhino_module_ModuleScript_getScript_R_rhino_Script(jcontext ctx, jobject self);
jobject M_rhino_module_ModuleScript_getUri_R_java_net_URI(jcontext ctx, jobject self);
jobject M_rhino_module_ModuleScript_getBase_R_java_net_URI(jcontext ctx, jobject self);
jbool M_rhino_module_ModuleScript_isSandboxed_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
