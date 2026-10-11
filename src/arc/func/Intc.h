#ifndef HEADER_arc_func_Intc
#define HEADER_arc_func_Intc

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_Intc {
	java_lang_Object parent;
} arc_func_Intc;

extern Class class_arc_func_Intc;


#define INDEX_arc_func_Intc_get_int 0
typedef void (*func_arc_func_Intc_get_int)(jcontext ctx, jobject self, jint param0);

void mark_arc_func_Intc(jobject object, jint mark, jint depth);
void clinit_arc_func_Intc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
