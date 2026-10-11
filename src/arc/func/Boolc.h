#ifndef HEADER_arc_func_Boolc
#define HEADER_arc_func_Boolc

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_Boolc {
	java_lang_Object parent;
} arc_func_Boolc;

extern Class class_arc_func_Boolc;


#define INDEX_arc_func_Boolc_get_boolean 0
typedef void (*func_arc_func_Boolc_get_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_arc_func_Boolc(jobject object, jint mark, jint depth);
void clinit_arc_func_Boolc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
