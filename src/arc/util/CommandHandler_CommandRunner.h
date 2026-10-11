#ifndef HEADER_arc_util_CommandHandler$CommandRunner
#define HEADER_arc_util_CommandHandler$CommandRunner

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_CommandHandler$CommandRunner {
	java_lang_Object parent;
} arc_util_CommandHandler$CommandRunner;

extern Class class_arc_util_CommandHandler$CommandRunner;


#define INDEX_arc_util_CommandHandler$CommandRunner_accept_Array1_java_lang_String_java_lang_Object 0
typedef void (*func_arc_util_CommandHandler$CommandRunner_accept_Array1_java_lang_String_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_util_CommandHandler$CommandRunner(jobject object, jint mark, jint depth);
void clinit_arc_util_CommandHandler$CommandRunner(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
