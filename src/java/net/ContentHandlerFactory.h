#ifndef HEADER_java_net_ContentHandlerFactory
#define HEADER_java_net_ContentHandlerFactory

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_ContentHandlerFactory {
	java_lang_Object parent;
} java_net_ContentHandlerFactory;

extern Class class_java_net_ContentHandlerFactory;


#define INDEX_java_net_ContentHandlerFactory_createContentHandler_java_lang_String_R_java_net_ContentHandler 0
typedef jobject (*func_java_net_ContentHandlerFactory_createContentHandler_java_lang_String_R_java_net_ContentHandler)(jcontext ctx, jobject self, jobject param0);

void mark_java_net_ContentHandlerFactory(jobject object, jint mark, jint depth);
void clinit_java_net_ContentHandlerFactory(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
