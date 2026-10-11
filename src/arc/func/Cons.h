#ifndef HEADER_arc_func_Cons
#define HEADER_arc_func_Cons

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_Cons {
	java_lang_Object parent;
} arc_func_Cons;

extern Class class_arc_func_Cons;


#define INDEX_arc_func_Cons_get_java_lang_Object 0
typedef void (*func_arc_func_Cons_get_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_arc_func_Cons(jobject object, jint mark, jint depth);
void clinit_arc_func_Cons(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
