#ifndef HEADER_java_lang_reflect_ParameterizedType
#define HEADER_java_lang_reflect_ParameterizedType

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Type.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_reflect_ParameterizedType {
	java_lang_Object parent;
} java_lang_reflect_ParameterizedType;

extern Class class_java_lang_reflect_ParameterizedType;


#define INDEX_java_lang_reflect_ParameterizedType_getActualTypeArguments_R_Array1_java_lang_reflect_Type 0
typedef jobject (*func_java_lang_reflect_ParameterizedType_getActualTypeArguments_R_Array1_java_lang_reflect_Type)(jcontext ctx, jobject self);
#define INDEX_java_lang_reflect_ParameterizedType_getRawType_R_java_lang_reflect_Type 1
typedef jobject (*func_java_lang_reflect_ParameterizedType_getRawType_R_java_lang_reflect_Type)(jcontext ctx, jobject self);
#define INDEX_java_lang_reflect_ParameterizedType_getOwnerType_R_java_lang_reflect_Type 2
typedef jobject (*func_java_lang_reflect_ParameterizedType_getOwnerType_R_java_lang_reflect_Type)(jcontext ctx, jobject self);

void mark_java_lang_reflect_ParameterizedType(jobject object, jint mark, jint depth);
void clinit_java_lang_reflect_ParameterizedType(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
