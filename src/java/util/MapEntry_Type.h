#ifndef HEADER_java_util_MapEntry$Type
#define HEADER_java_util_MapEntry$Type

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_MapEntry$Type {
	java_lang_Object parent;
} java_util_MapEntry$Type;

extern Class class_java_util_MapEntry$Type;


#define INDEX_java_util_MapEntry$Type_get_java_util_MapEntry_R_java_lang_Object 0
typedef jobject (*func_java_util_MapEntry$Type_get_java_util_MapEntry_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_MapEntry$Type(jobject object, jint mark, jint depth);
void clinit_java_util_MapEntry$Type(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
