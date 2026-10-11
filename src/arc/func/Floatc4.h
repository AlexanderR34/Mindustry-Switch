#ifndef HEADER_arc_func_Floatc4
#define HEADER_arc_func_Floatc4

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_Floatc4 {
	java_lang_Object parent;
} arc_func_Floatc4;

extern Class class_arc_func_Floatc4;


#define INDEX_arc_func_Floatc4_get_float_float_float_float 0
typedef void (*func_arc_func_Floatc4_get_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);

void mark_arc_func_Floatc4(jobject object, jint mark, jint depth);
void clinit_arc_func_Floatc4(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
