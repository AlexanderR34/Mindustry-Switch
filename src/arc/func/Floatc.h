#ifndef HEADER_arc_func_Floatc
#define HEADER_arc_func_Floatc

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_Floatc {
	java_lang_Object parent;
} arc_func_Floatc;

extern Class class_arc_func_Floatc;


#define INDEX_arc_func_Floatc_get_float 0
typedef void (*func_arc_func_Floatc_get_float)(jcontext ctx, jobject self, jfloat param0);

void mark_arc_func_Floatc(jobject object, jint mark, jint depth);
void clinit_arc_func_Floatc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
