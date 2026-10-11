#ifndef HEADER_java_net_FileNameMap
#define HEADER_java_net_FileNameMap

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_FileNameMap {
	java_lang_Object parent;
} java_net_FileNameMap;

extern Class class_java_net_FileNameMap;


#define INDEX_java_net_FileNameMap_getContentTypeFor_java_lang_String_R_java_lang_String 0
typedef jobject (*func_java_net_FileNameMap_getContentTypeFor_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_java_net_FileNameMap(jobject object, jint mark, jint depth);
void clinit_java_net_FileNameMap(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
