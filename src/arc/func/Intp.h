#ifndef HEADER_arc_func_Intp
#define HEADER_arc_func_Intp

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_Intp {
	java_lang_Object parent;
} arc_func_Intp;

extern Class class_arc_func_Intp;


#define INDEX_arc_func_Intp_get_R_int 0
typedef jint (*func_arc_func_Intp_get_R_int)(jcontext ctx, jobject self);

void mark_arc_func_Intp(jobject object, jint mark, jint depth);
void clinit_arc_func_Intp(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
