#ifndef HEADER_rhino_debug_DebuggableObject
#define HEADER_rhino_debug_DebuggableObject

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_debug_DebuggableObject {
	java_lang_Object parent;
} rhino_debug_DebuggableObject;

extern Class class_rhino_debug_DebuggableObject;


#define INDEX_rhino_debug_DebuggableObject_getAllIds_R_Array1_java_lang_Object 0
typedef jobject (*func_rhino_debug_DebuggableObject_getAllIds_R_Array1_java_lang_Object)(jcontext ctx, jobject self);

void mark_rhino_debug_DebuggableObject(jobject object, jint mark, jint depth);
void clinit_rhino_debug_DebuggableObject(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
