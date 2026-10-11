#ifndef HEADER_java_lang_AutoCloseable
#define HEADER_java_lang_AutoCloseable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_AutoCloseable {
	java_lang_Object parent;
} java_lang_AutoCloseable;

extern Class class_java_lang_AutoCloseable;


#define INDEX_java_lang_AutoCloseable_close 0
typedef void (*func_java_lang_AutoCloseable_close)(jcontext ctx, jobject self);

void mark_java_lang_AutoCloseable(jobject object, jint mark, jint depth);
void clinit_java_lang_AutoCloseable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
