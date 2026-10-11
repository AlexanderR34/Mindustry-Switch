#ifndef HEADER_java_security_Guard
#define HEADER_java_security_Guard

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_security_Guard {
	java_lang_Object parent;
} java_security_Guard;

extern Class class_java_security_Guard;


#define INDEX_java_security_Guard_checkGuard_java_lang_Object 0
typedef void (*func_java_security_Guard_checkGuard_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_security_Guard(jobject object, jint mark, jint depth);
void clinit_java_security_Guard(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
