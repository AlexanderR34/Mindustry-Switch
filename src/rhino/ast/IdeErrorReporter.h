#ifndef HEADER_rhino_ast_IdeErrorReporter
#define HEADER_rhino_ast_IdeErrorReporter

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/ErrorReporter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_IdeErrorReporter {
	java_lang_Object parent;
} rhino_ast_IdeErrorReporter;

extern Class class_rhino_ast_IdeErrorReporter;


#define INDEX_rhino_ast_IdeErrorReporter_warning_java_lang_String_java_lang_String_int_int 0
typedef void (*func_rhino_ast_IdeErrorReporter_warning_java_lang_String_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define INDEX_rhino_ast_IdeErrorReporter_error_java_lang_String_java_lang_String_int_int 1
typedef void (*func_rhino_ast_IdeErrorReporter_error_java_lang_String_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);

void mark_rhino_ast_IdeErrorReporter(jobject object, jint mark, jint depth);
void clinit_rhino_ast_IdeErrorReporter(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
