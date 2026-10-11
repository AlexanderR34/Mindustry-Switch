#ifndef HEADER_arc_func_Intc2
#define HEADER_arc_func_Intc2

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_Intc2 {
	java_lang_Object parent;
} arc_func_Intc2;

extern Class class_arc_func_Intc2;


#define INDEX_arc_func_Intc2_get_int_int 0
typedef void (*func_arc_func_Intc2_get_int_int)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_arc_func_Intc2(jobject object, jint mark, jint depth);
void clinit_arc_func_Intc2(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
