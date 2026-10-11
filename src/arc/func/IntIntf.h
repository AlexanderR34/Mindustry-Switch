#ifndef HEADER_arc_func_IntIntf
#define HEADER_arc_func_IntIntf

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_IntIntf {
	java_lang_Object parent;
} arc_func_IntIntf;

extern Class class_arc_func_IntIntf;


#define INDEX_arc_func_IntIntf_get_int_R_int 0
typedef jint (*func_arc_func_IntIntf_get_int_R_int)(jcontext ctx, jobject self, jint param0);

void mark_arc_func_IntIntf(jobject object, jint mark, jint depth);
void clinit_arc_func_IntIntf(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
