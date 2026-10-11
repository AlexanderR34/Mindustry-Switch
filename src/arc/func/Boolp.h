#ifndef HEADER_arc_func_Boolp
#define HEADER_arc_func_Boolp

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_Boolp {
	java_lang_Object parent;
} arc_func_Boolp;

extern Class class_arc_func_Boolp;


#define INDEX_arc_func_Boolp_get_R_boolean 0
typedef jbool (*func_arc_func_Boolp_get_R_boolean)(jcontext ctx, jobject self);

void mark_arc_func_Boolp(jobject object, jint mark, jint depth);
void clinit_arc_func_Boolp(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
