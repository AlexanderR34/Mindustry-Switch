#ifndef HEADER_rhino_Script
#define HEADER_rhino_Script

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Script {
	java_lang_Object parent;
} rhino_Script;

extern Class class_rhino_Script;


#define INDEX_rhino_Script_exec_rhino_Context_rhino_Scriptable_R_java_lang_Object 0
typedef jobject (*func_rhino_Script_exec_rhino_Context_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_rhino_Script(jobject object, jint mark, jint depth);
void clinit_rhino_Script(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
