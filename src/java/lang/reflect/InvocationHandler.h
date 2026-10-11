#ifndef HEADER_java_lang_reflect_InvocationHandler
#define HEADER_java_lang_reflect_InvocationHandler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_reflect_InvocationHandler {
	java_lang_Object parent;
} java_lang_reflect_InvocationHandler;

extern Class class_java_lang_reflect_InvocationHandler;


#define INDEX_java_lang_reflect_InvocationHandler_invoke_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object 0
typedef jobject (*func_java_lang_reflect_InvocationHandler_invoke_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_java_lang_reflect_InvocationHandler(jobject object, jint mark, jint depth);
void clinit_java_lang_reflect_InvocationHandler(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
