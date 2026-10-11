#ifndef HEADER_arc_func_Boolf
#define HEADER_arc_func_Boolf

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_Boolf {
	java_lang_Object parent;
} arc_func_Boolf;

extern Class class_arc_func_Boolf;


#define INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean 0
typedef jbool (*func_arc_func_Boolf_get_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_arc_func_Boolf(jobject object, jint mark, jint depth);
void clinit_arc_func_Boolf(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
