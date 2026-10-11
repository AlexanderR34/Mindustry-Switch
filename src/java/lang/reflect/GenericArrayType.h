#ifndef HEADER_java_lang_reflect_GenericArrayType
#define HEADER_java_lang_reflect_GenericArrayType

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Type.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_reflect_GenericArrayType {
	java_lang_Object parent;
} java_lang_reflect_GenericArrayType;

extern Class class_java_lang_reflect_GenericArrayType;


#define INDEX_java_lang_reflect_GenericArrayType_getGenericComponentType_R_java_lang_reflect_Type 0
typedef jobject (*func_java_lang_reflect_GenericArrayType_getGenericComponentType_R_java_lang_reflect_Type)(jcontext ctx, jobject self);

void mark_java_lang_reflect_GenericArrayType(jobject object, jint mark, jint depth);
void clinit_java_lang_reflect_GenericArrayType(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
