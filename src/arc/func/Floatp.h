#ifndef HEADER_arc_func_Floatp
#define HEADER_arc_func_Floatp

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_Floatp {
	java_lang_Object parent;
} arc_func_Floatp;

extern Class class_arc_func_Floatp;


#define INDEX_arc_func_Floatp_get_R_float 0
typedef jfloat (*func_arc_func_Floatp_get_R_float)(jcontext ctx, jobject self);

void mark_arc_func_Floatp(jobject object, jint mark, jint depth);
void clinit_arc_func_Floatp(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
