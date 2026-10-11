#ifndef HEADER_java_lang_reflect_TypeVariable
#define HEADER_java_lang_reflect_TypeVariable

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Type.h"
#include "java/lang/reflect/AnnotatedElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_reflect_TypeVariable {
	java_lang_Object parent;
} java_lang_reflect_TypeVariable;

extern Class class_java_lang_reflect_TypeVariable;


#define INDEX_java_lang_reflect_TypeVariable_getBounds_R_Array1_java_lang_reflect_Type 0
typedef jobject (*func_java_lang_reflect_TypeVariable_getBounds_R_Array1_java_lang_reflect_Type)(jcontext ctx, jobject self);
#define INDEX_java_lang_reflect_TypeVariable_getGenericDeclaration_R_java_lang_reflect_GenericDeclaration 1
typedef jobject (*func_java_lang_reflect_TypeVariable_getGenericDeclaration_R_java_lang_reflect_GenericDeclaration)(jcontext ctx, jobject self);
#define INDEX_java_lang_reflect_TypeVariable_getName_R_java_lang_String 2
typedef jobject (*func_java_lang_reflect_TypeVariable_getName_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_lang_reflect_TypeVariable(jobject object, jint mark, jint depth);
void clinit_java_lang_reflect_TypeVariable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
