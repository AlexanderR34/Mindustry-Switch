#ifndef HEADER_rhino_module_ModuleScriptProvider
#define HEADER_rhino_module_ModuleScriptProvider

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_module_ModuleScriptProvider {
	java_lang_Object parent;
} rhino_module_ModuleScriptProvider;

extern Class class_rhino_module_ModuleScriptProvider;


#define INDEX_rhino_module_ModuleScriptProvider_getModuleScript_rhino_Context_java_lang_String_java_net_URI_java_net_URI_rhino_Scriptable_R_rhino_module_ModuleScript 0
typedef jobject (*func_rhino_module_ModuleScriptProvider_getModuleScript_rhino_Context_java_lang_String_java_net_URI_java_net_URI_rhino_Scriptable_R_rhino_module_ModuleScript)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);

void mark_rhino_module_ModuleScriptProvider(jobject object, jint mark, jint depth);
void clinit_rhino_module_ModuleScriptProvider(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
