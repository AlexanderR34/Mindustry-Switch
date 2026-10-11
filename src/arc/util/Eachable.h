#ifndef HEADER_arc_util_Eachable
#define HEADER_arc_util_Eachable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Eachable {
	java_lang_Object parent;
} arc_util_Eachable;

extern Class class_arc_util_Eachable;


#define INDEX_arc_util_Eachable_each_arc_func_Cons 0
typedef void (*func_arc_util_Eachable_each_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);

void mark_arc_util_Eachable(jobject object, jint mark, jint depth);
void clinit_arc_util_Eachable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
