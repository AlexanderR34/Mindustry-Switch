#ifndef HEADER_regexodus_REFlags
#define HEADER_regexodus_REFlags

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_REFlags {
	java_lang_Object parent;
} regexodus_REFlags;

extern Class class_regexodus_REFlags;

extern jint SF_regexodus_REFlags_DEFAULT;
extern jint SF_regexodus_REFlags_IGNORE_CASE;
extern jint SF_regexodus_REFlags_MULTILINE;
extern jint SF_regexodus_REFlags_DOTALL;
extern jint SF_regexodus_REFlags_IGNORE_SPACES;
extern jint SF_regexodus_REFlags_UNICODE;
extern jint SF_regexodus_REFlags_XML_SCHEMA;


void mark_regexodus_REFlags(jobject object, jint mark, jint depth);
void clinit_regexodus_REFlags(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
