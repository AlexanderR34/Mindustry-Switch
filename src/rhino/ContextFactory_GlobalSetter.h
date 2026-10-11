#ifndef HEADER_rhino_ContextFactory$GlobalSetter
#define HEADER_rhino_ContextFactory$GlobalSetter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ContextFactory$GlobalSetter {
	java_lang_Object parent;
} rhino_ContextFactory$GlobalSetter;

extern Class class_rhino_ContextFactory$GlobalSetter;


#define INDEX_rhino_ContextFactory$GlobalSetter_setContextFactoryGlobal_rhino_ContextFactory 0
typedef void (*func_rhino_ContextFactory$GlobalSetter_setContextFactoryGlobal_rhino_ContextFactory)(jcontext ctx, jobject self, jobject param0);
#define INDEX_rhino_ContextFactory$GlobalSetter_getContextFactoryGlobal_R_rhino_ContextFactory 1
typedef jobject (*func_rhino_ContextFactory$GlobalSetter_getContextFactoryGlobal_R_rhino_ContextFactory)(jcontext ctx, jobject self);

void mark_rhino_ContextFactory$GlobalSetter(jobject object, jint mark, jint depth);
void clinit_rhino_ContextFactory$GlobalSetter(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
