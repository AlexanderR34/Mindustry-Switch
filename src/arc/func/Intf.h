#ifndef HEADER_arc_func_Intf
#define HEADER_arc_func_Intf

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_func_Intf {
	java_lang_Object parent;
} arc_func_Intf;

extern Class class_arc_func_Intf;


#define INDEX_arc_func_Intf_get_java_lang_Object_R_int 0
typedef jint (*func_arc_func_Intf_get_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_arc_func_Intf(jobject object, jint mark, jint depth);
void clinit_arc_func_Intf(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
