#ifndef HEADER_rhino_ErrorReporter
#define HEADER_rhino_ErrorReporter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ErrorReporter {
	java_lang_Object parent;
} rhino_ErrorReporter;

extern Class class_rhino_ErrorReporter;


#define INDEX_rhino_ErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int 0
typedef void (*func_rhino_ErrorReporter_warning_java_lang_String_java_lang_String_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
#define INDEX_rhino_ErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int 1
typedef void (*func_rhino_ErrorReporter_error_java_lang_String_java_lang_String_int_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);
#define INDEX_rhino_ErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException 2
typedef jobject (*func_rhino_ErrorReporter_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4);

void mark_rhino_ErrorReporter(jobject object, jint mark, jint depth);
void clinit_rhino_ErrorReporter(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
