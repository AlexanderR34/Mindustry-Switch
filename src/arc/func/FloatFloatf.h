#ifndef HEADER_arc_func_FloatFloatf
#define HEADER_arc_func_FloatFloatf

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_FloatFloatf {
	java_lang_Object parent;
} arc_func_FloatFloatf;

extern Class class_arc_func_FloatFloatf;


#define INDEX_arc_func_FloatFloatf_get_float_R_float 0
typedef jfloat (*func_arc_func_FloatFloatf_get_float_R_float)(jcontext ctx, jobject self, jfloat param0);

void mark_arc_func_FloatFloatf(jobject object, jint mark, jint depth);
void clinit_arc_func_FloatFloatf(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
