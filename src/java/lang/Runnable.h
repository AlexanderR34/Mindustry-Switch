#ifndef HEADER_java_lang_Runnable
#define HEADER_java_lang_Runnable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Runnable {
	java_lang_Object parent;
} java_lang_Runnable;

extern Class class_java_lang_Runnable;


#define INDEX_java_lang_Runnable_run 0
typedef void (*func_java_lang_Runnable_run)(jcontext ctx, jobject self);

void mark_java_lang_Runnable(jobject object, jint mark, jint depth);
void clinit_java_lang_Runnable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
