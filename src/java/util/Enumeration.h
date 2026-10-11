#ifndef HEADER_java_util_Enumeration
#define HEADER_java_util_Enumeration

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Enumeration {
	java_lang_Object parent;
} java_util_Enumeration;

extern Class class_java_util_Enumeration;


#define INDEX_java_util_Enumeration_hasMoreElements_R_boolean 0
typedef jbool (*func_java_util_Enumeration_hasMoreElements_R_boolean)(jcontext ctx, jobject self);
#define INDEX_java_util_Enumeration_nextElement_R_java_lang_Object 1
typedef jobject (*func_java_util_Enumeration_nextElement_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_java_util_Enumeration(jobject object, jint mark, jint depth);
void clinit_java_util_Enumeration(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
