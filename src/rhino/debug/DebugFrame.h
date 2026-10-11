#ifndef HEADER_rhino_debug_DebugFrame
#define HEADER_rhino_debug_DebugFrame

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_debug_DebugFrame {
	java_lang_Object parent;
} rhino_debug_DebugFrame;

extern Class class_rhino_debug_DebugFrame;


#define INDEX_rhino_debug_DebugFrame_onEnter_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object 0
typedef void (*func_rhino_debug_DebugFrame_onEnter_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define INDEX_rhino_debug_DebugFrame_onLineChange_rhino_Context_int 1
typedef void (*func_rhino_debug_DebugFrame_onLineChange_rhino_Context_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define INDEX_rhino_debug_DebugFrame_onExceptionThrown_rhino_Context_java_lang_Throwable 2
typedef void (*func_rhino_debug_DebugFrame_onExceptionThrown_rhino_Context_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_rhino_debug_DebugFrame_onExit_rhino_Context_boolean_java_lang_Object 3
typedef void (*func_rhino_debug_DebugFrame_onExit_rhino_Context_boolean_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
#define INDEX_rhino_debug_DebugFrame_onDebuggerStatement_rhino_Context 4
typedef void (*func_rhino_debug_DebugFrame_onDebuggerStatement_rhino_Context)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_debug_DebugFrame(jobject object, jint mark, jint depth);
void clinit_rhino_debug_DebugFrame(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
