#ifndef HEADER_rhino_Evaluator
#define HEADER_rhino_Evaluator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Evaluator {
	java_lang_Object parent;
} rhino_Evaluator;

extern Class class_rhino_Evaluator;


#define INDEX_rhino_Evaluator_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_java_lang_Object 0
typedef jobject (*func_rhino_Evaluator_compile_rhino_CompilerEnvirons_rhino_ast_ScriptNode_java_lang_String_boolean_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
#define INDEX_rhino_Evaluator_createFunctionObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Function 1
typedef jobject (*func_rhino_Evaluator_createFunctionObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Function)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define INDEX_rhino_Evaluator_createScriptObject_java_lang_Object_R_rhino_Script 2
typedef jobject (*func_rhino_Evaluator_createScriptObject_java_lang_Object_R_rhino_Script)(jcontext ctx, jobject self, jobject param0);
#define INDEX_rhino_Evaluator_captureStackInfo_rhino_RhinoException 3
typedef void (*func_rhino_Evaluator_captureStackInfo_rhino_RhinoException)(jcontext ctx, jobject self, jobject param0);
#define INDEX_rhino_Evaluator_getSourcePositionFromStack_rhino_Context_Array1_int_R_java_lang_String 4
typedef jobject (*func_rhino_Evaluator_getSourcePositionFromStack_rhino_Context_Array1_int_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_rhino_Evaluator_getPatchedStack_rhino_RhinoException_java_lang_String_R_java_lang_String 5
typedef jobject (*func_rhino_Evaluator_getPatchedStack_rhino_RhinoException_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_rhino_Evaluator_getScriptStack_rhino_RhinoException_R_java_util_List 6
typedef jobject (*func_rhino_Evaluator_getScriptStack_rhino_RhinoException_R_java_util_List)(jcontext ctx, jobject self, jobject param0);
#define INDEX_rhino_Evaluator_setEvalScriptFlag_rhino_Script 7
typedef void (*func_rhino_Evaluator_setEvalScriptFlag_rhino_Script)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_Evaluator(jobject object, jint mark, jint depth);
void clinit_rhino_Evaluator(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
