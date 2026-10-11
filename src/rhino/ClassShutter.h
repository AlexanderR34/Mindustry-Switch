#ifndef HEADER_rhino_ClassShutter
#define HEADER_rhino_ClassShutter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ClassShutter {
	java_lang_Object parent;
} rhino_ClassShutter;

extern Class class_rhino_ClassShutter;


#define INDEX_rhino_ClassShutter_visibleToScripts_java_lang_String_R_boolean 0
typedef jbool (*func_rhino_ClassShutter_visibleToScripts_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_ClassShutter(jobject object, jint mark, jint depth);
void clinit_rhino_ClassShutter(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
