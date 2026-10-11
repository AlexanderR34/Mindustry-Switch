#ifndef HEADER_java_lang_Comparable
#define HEADER_java_lang_Comparable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Comparable {
	java_lang_Object parent;
} java_lang_Comparable;

extern Class class_java_lang_Comparable;


#define INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int 0
typedef jint (*func_java_lang_Comparable_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_lang_Comparable(jobject object, jint mark, jint depth);
void clinit_java_lang_Comparable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
