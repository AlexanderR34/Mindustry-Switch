#ifndef HEADER_arc_util_Log$LogFormatter
#define HEADER_arc_util_Log$LogFormatter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Log$LogFormatter {
	java_lang_Object parent;
} arc_util_Log$LogFormatter;

extern Class class_arc_util_Log$LogFormatter;


#define INDEX_arc_util_Log$LogFormatter_format_java_lang_String_boolean_Array1_java_lang_Object_R_java_lang_String 0
typedef jobject (*func_arc_util_Log$LogFormatter_format_java_lang_String_boolean_Array1_java_lang_Object_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);

void mark_arc_util_Log$LogFormatter(jobject object, jint mark, jint depth);
void clinit_arc_util_Log$LogFormatter(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
