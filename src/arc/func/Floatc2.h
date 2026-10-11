#ifndef HEADER_arc_func_Floatc2
#define HEADER_arc_func_Floatc2

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_Floatc2 {
	java_lang_Object parent;
} arc_func_Floatc2;

extern Class class_arc_func_Floatc2;


#define INDEX_arc_func_Floatc2_get_float_float 0
typedef void (*func_arc_func_Floatc2_get_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);

void mark_arc_func_Floatc2(jobject object, jint mark, jint depth);
void clinit_arc_func_Floatc2(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
