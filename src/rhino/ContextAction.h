#ifndef HEADER_rhino_ContextAction
#define HEADER_rhino_ContextAction

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ContextAction {
	java_lang_Object parent;
} rhino_ContextAction;

extern Class class_rhino_ContextAction;


#define INDEX_rhino_ContextAction_run_rhino_Context_R_java_lang_Object 0
typedef jobject (*func_rhino_ContextAction_run_rhino_Context_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_ContextAction(jobject object, jint mark, jint depth);
void clinit_rhino_ContextAction(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
