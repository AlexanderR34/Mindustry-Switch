#ifndef HEADER_rhino_debug_DebuggableScript
#define HEADER_rhino_debug_DebuggableScript

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_debug_DebuggableScript {
	java_lang_Object parent;
} rhino_debug_DebuggableScript;

extern Class class_rhino_debug_DebuggableScript;


#define INDEX_rhino_debug_DebuggableScript_isTopLevel_R_boolean 0
typedef jbool (*func_rhino_debug_DebuggableScript_isTopLevel_R_boolean)(jcontext ctx, jobject self);
#define INDEX_rhino_debug_DebuggableScript_isFunction_R_boolean 1
typedef jbool (*func_rhino_debug_DebuggableScript_isFunction_R_boolean)(jcontext ctx, jobject self);
#define INDEX_rhino_debug_DebuggableScript_getFunctionName_R_java_lang_String 2
typedef jobject (*func_rhino_debug_DebuggableScript_getFunctionName_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_rhino_debug_DebuggableScript_getParamCount_R_int 3
typedef jint (*func_rhino_debug_DebuggableScript_getParamCount_R_int)(jcontext ctx, jobject self);
#define INDEX_rhino_debug_DebuggableScript_getParamAndVarCount_R_int 4
typedef jint (*func_rhino_debug_DebuggableScript_getParamAndVarCount_R_int)(jcontext ctx, jobject self);
#define INDEX_rhino_debug_DebuggableScript_getParamOrVarName_int_R_java_lang_String 5
typedef jobject (*func_rhino_debug_DebuggableScript_getParamOrVarName_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define INDEX_rhino_debug_DebuggableScript_getSourceName_R_java_lang_String 6
typedef jobject (*func_rhino_debug_DebuggableScript_getSourceName_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_rhino_debug_DebuggableScript_isGeneratedScript_R_boolean 7
typedef jbool (*func_rhino_debug_DebuggableScript_isGeneratedScript_R_boolean)(jcontext ctx, jobject self);
#define INDEX_rhino_debug_DebuggableScript_getLineNumbers_R_Array1_int 8
typedef jobject (*func_rhino_debug_DebuggableScript_getLineNumbers_R_Array1_int)(jcontext ctx, jobject self);
#define INDEX_rhino_debug_DebuggableScript_getFunctionCount_R_int 9
typedef jint (*func_rhino_debug_DebuggableScript_getFunctionCount_R_int)(jcontext ctx, jobject self);
#define INDEX_rhino_debug_DebuggableScript_getFunction_int_R_rhino_debug_DebuggableScript 10
typedef jobject (*func_rhino_debug_DebuggableScript_getFunction_int_R_rhino_debug_DebuggableScript)(jcontext ctx, jobject self, jint param0);
#define INDEX_rhino_debug_DebuggableScript_getParent_R_rhino_debug_DebuggableScript 11
typedef jobject (*func_rhino_debug_DebuggableScript_getParent_R_rhino_debug_DebuggableScript)(jcontext ctx, jobject self);

void mark_rhino_debug_DebuggableScript(jobject object, jint mark, jint depth);
void clinit_rhino_debug_DebuggableScript(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
