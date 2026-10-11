#ifndef HEADER_rhino_IdFunctionCall
#define HEADER_rhino_IdFunctionCall

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_IdFunctionCall {
	java_lang_Object parent;
} rhino_IdFunctionCall;

extern Class class_rhino_IdFunctionCall;


#define INDEX_rhino_IdFunctionCall_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 0
typedef jobject (*func_rhino_IdFunctionCall_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);

void mark_rhino_IdFunctionCall(jobject object, jint mark, jint depth);
void clinit_rhino_IdFunctionCall(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
