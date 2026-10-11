#ifndef HEADER_rhino_ScriptRuntime$MessageProvider
#define HEADER_rhino_ScriptRuntime$MessageProvider

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ScriptRuntime$MessageProvider {
	java_lang_Object parent;
} rhino_ScriptRuntime$MessageProvider;

extern Class class_rhino_ScriptRuntime$MessageProvider;


#define INDEX_rhino_ScriptRuntime$MessageProvider_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String 0
typedef jobject (*func_rhino_ScriptRuntime$MessageProvider_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_rhino_ScriptRuntime$MessageProvider(jobject object, jint mark, jint depth);
void clinit_rhino_ScriptRuntime$MessageProvider(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
