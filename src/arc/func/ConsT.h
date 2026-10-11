#ifndef HEADER_arc_func_ConsT
#define HEADER_arc_func_ConsT

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_ConsT {
	java_lang_Object parent;
} arc_func_ConsT;

extern Class class_arc_func_ConsT;


#define INDEX_arc_func_ConsT_get_java_lang_Object 0
typedef void (*func_arc_func_ConsT_get_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_arc_func_ConsT(jobject object, jint mark, jint depth);
void clinit_arc_func_ConsT(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
