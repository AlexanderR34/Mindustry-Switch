#ifndef HEADER_java_lang_reflect_GenericDeclaration
#define HEADER_java_lang_reflect_GenericDeclaration

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/AnnotatedElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_reflect_GenericDeclaration {
	java_lang_Object parent;
} java_lang_reflect_GenericDeclaration;

extern Class class_java_lang_reflect_GenericDeclaration;


#define INDEX_java_lang_reflect_GenericDeclaration_getTypeParameters_R_Array1_java_lang_reflect_TypeVariable 0
typedef jobject (*func_java_lang_reflect_GenericDeclaration_getTypeParameters_R_Array1_java_lang_reflect_TypeVariable)(jcontext ctx, jobject self);

void mark_java_lang_reflect_GenericDeclaration(jobject object, jint mark, jint depth);
void clinit_java_lang_reflect_GenericDeclaration(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
