#ifndef HEADER_java_net_URLStreamHandlerFactory
#define HEADER_java_net_URLStreamHandlerFactory

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_URLStreamHandlerFactory {
	java_lang_Object parent;
} java_net_URLStreamHandlerFactory;

extern Class class_java_net_URLStreamHandlerFactory;


#define INDEX_java_net_URLStreamHandlerFactory_createURLStreamHandler_java_lang_String_R_java_net_URLStreamHandler 0
typedef jobject (*func_java_net_URLStreamHandlerFactory_createURLStreamHandler_java_lang_String_R_java_net_URLStreamHandler)(jcontext ctx, jobject self, jobject param0);

void mark_java_net_URLStreamHandlerFactory(jobject object, jint mark, jint depth);
void clinit_java_net_URLStreamHandlerFactory(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
