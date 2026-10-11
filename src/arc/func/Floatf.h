#ifndef HEADER_arc_func_Floatf
#define HEADER_arc_func_Floatf

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_Floatf {
	java_lang_Object parent;
} arc_func_Floatf;

extern Class class_arc_func_Floatf;


#define INDEX_arc_func_Floatf_get_java_lang_Object_R_float 0
typedef jfloat (*func_arc_func_Floatf_get_java_lang_Object_R_float)(jcontext ctx, jobject self, jobject param0);

void mark_arc_func_Floatf(jobject object, jint mark, jint depth);
void clinit_arc_func_Floatf(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
