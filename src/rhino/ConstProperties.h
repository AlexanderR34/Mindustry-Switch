#ifndef HEADER_rhino_ConstProperties
#define HEADER_rhino_ConstProperties

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ConstProperties {
	java_lang_Object parent;
} rhino_ConstProperties;

extern Class class_rhino_ConstProperties;


#define INDEX_rhino_ConstProperties_putConst_java_lang_String_rhino_Scriptable_java_lang_Object 0
typedef void (*func_rhino_ConstProperties_putConst_java_lang_String_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define INDEX_rhino_ConstProperties_defineConst_java_lang_String_rhino_Scriptable 1
typedef void (*func_rhino_ConstProperties_defineConst_java_lang_String_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_rhino_ConstProperties_isConst_java_lang_String_R_boolean 2
typedef jbool (*func_rhino_ConstProperties_isConst_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_ConstProperties(jobject object, jint mark, jint depth);
void clinit_rhino_ConstProperties(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
