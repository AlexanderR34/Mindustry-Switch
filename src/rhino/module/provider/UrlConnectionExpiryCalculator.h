#ifndef HEADER_rhino_module_provider_UrlConnectionExpiryCalculator
#define HEADER_rhino_module_provider_UrlConnectionExpiryCalculator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_module_provider_UrlConnectionExpiryCalculator {
	java_lang_Object parent;
} rhino_module_provider_UrlConnectionExpiryCalculator;

extern Class class_rhino_module_provider_UrlConnectionExpiryCalculator;


#define INDEX_rhino_module_provider_UrlConnectionExpiryCalculator_calculateExpiry_java_net_URLConnection_R_long 0
typedef jlong (*func_rhino_module_provider_UrlConnectionExpiryCalculator_calculateExpiry_java_net_URLConnection_R_long)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_module_provider_UrlConnectionExpiryCalculator(jobject object, jint mark, jint depth);
void clinit_rhino_module_provider_UrlConnectionExpiryCalculator(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
