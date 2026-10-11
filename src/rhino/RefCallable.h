#ifndef HEADER_rhino_RefCallable
#define HEADER_rhino_RefCallable

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/Callable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_RefCallable {
	java_lang_Object parent;
} rhino_RefCallable;

extern Class class_rhino_RefCallable;


#define INDEX_rhino_RefCallable_refCall_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Ref 0
typedef jobject (*func_rhino_RefCallable_refCall_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Ref)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_rhino_RefCallable(jobject object, jint mark, jint depth);
void clinit_rhino_RefCallable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
