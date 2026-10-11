#ifndef HEADER_arc_func_Prov
#define HEADER_arc_func_Prov

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_Prov {
	java_lang_Object parent;
} arc_func_Prov;

extern Class class_arc_func_Prov;


#define INDEX_arc_func_Prov_get_R_java_lang_Object 0
typedef jobject (*func_arc_func_Prov_get_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_arc_func_Prov(jobject object, jint mark, jint depth);
void clinit_arc_func_Prov(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
