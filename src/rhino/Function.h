#ifndef HEADER_rhino_Function
#define HEADER_rhino_Function

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/Scriptable.h"
#include "rhino/Callable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Function {
	java_lang_Object parent;
} rhino_Function;

extern Class class_rhino_Function;


#define INDEX_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 0
typedef jobject (*func_rhino_Function_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define INDEX_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable 1
typedef jobject (*func_rhino_Function_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_rhino_Function(jobject object, jint mark, jint depth);
void clinit_rhino_Function(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
