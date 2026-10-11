#ifndef HEADER_java_lang_Thread$UncaughtExceptionHandler
#define HEADER_java_lang_Thread$UncaughtExceptionHandler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Thread$UncaughtExceptionHandler {
	java_lang_Object parent;
} java_lang_Thread$UncaughtExceptionHandler;

extern Class class_java_lang_Thread$UncaughtExceptionHandler;


#define INDEX_java_lang_Thread$UncaughtExceptionHandler_uncaughtException_java_lang_Thread_java_lang_Throwable 0
typedef void (*func_java_lang_Thread$UncaughtExceptionHandler_uncaughtException_java_lang_Thread_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_java_lang_Thread$UncaughtExceptionHandler(jobject object, jint mark, jint depth);
void clinit_java_lang_Thread$UncaughtExceptionHandler(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
