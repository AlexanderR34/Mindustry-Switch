#ifndef HEADER_rhino_debug_Debugger
#define HEADER_rhino_debug_Debugger

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_debug_Debugger {
	java_lang_Object parent;
} rhino_debug_Debugger;

extern Class class_rhino_debug_Debugger;


#define INDEX_rhino_debug_Debugger_handleCompilationDone_rhino_Context_rhino_debug_DebuggableScript_java_lang_String 0
typedef void (*func_rhino_debug_Debugger_handleCompilationDone_rhino_Context_rhino_debug_DebuggableScript_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define INDEX_rhino_debug_Debugger_getFrame_rhino_Context_rhino_debug_DebuggableScript_R_rhino_debug_DebugFrame 1
typedef jobject (*func_rhino_debug_Debugger_getFrame_rhino_Context_rhino_debug_DebuggableScript_R_rhino_debug_DebugFrame)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_rhino_debug_Debugger(jobject object, jint mark, jint depth);
void clinit_rhino_debug_Debugger(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
