#ifndef HEADER_arc_func_Longf
#define HEADER_arc_func_Longf

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_Longf {
	java_lang_Object parent;
} arc_func_Longf;

extern Class class_arc_func_Longf;


#define INDEX_arc_func_Longf_get_java_lang_Object_R_long 0
typedef jlong (*func_arc_func_Longf_get_java_lang_Object_R_long)(jcontext ctx, jobject self, jobject param0);

void mark_arc_func_Longf(jobject object, jint mark, jint depth);
void clinit_arc_func_Longf(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
