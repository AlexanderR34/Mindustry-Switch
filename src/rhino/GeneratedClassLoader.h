#ifndef HEADER_rhino_GeneratedClassLoader
#define HEADER_rhino_GeneratedClassLoader

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_GeneratedClassLoader {
	java_lang_Object parent;
} rhino_GeneratedClassLoader;

extern Class class_rhino_GeneratedClassLoader;


#define INDEX_rhino_GeneratedClassLoader_defineClass_java_lang_String_Array1_byte_R_java_lang_Class 0
typedef jobject (*func_rhino_GeneratedClassLoader_defineClass_java_lang_String_Array1_byte_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_rhino_GeneratedClassLoader_linkClass_java_lang_Class 1
typedef void (*func_rhino_GeneratedClassLoader_linkClass_java_lang_Class)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_GeneratedClassLoader(jobject object, jint mark, jint depth);
void clinit_rhino_GeneratedClassLoader(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
