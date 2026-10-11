#ifndef HEADER_arc_func_Func2
#define HEADER_arc_func_Func2

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_Func2 {
	java_lang_Object parent;
} arc_func_Func2;

extern Class class_arc_func_Func2;


#define INDEX_arc_func_Func2_get_java_lang_Object_java_lang_Object_R_java_lang_Object 0
typedef jobject (*func_arc_func_Func2_get_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_func_Func2(jobject object, jint mark, jint depth);
void clinit_arc_func_Func2(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
