#ifndef HEADER_arc_util_Log$LogHandler
#define HEADER_arc_util_Log$LogHandler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Log$LogHandler {
	java_lang_Object parent;
} arc_util_Log$LogHandler;

extern Class class_arc_util_Log$LogHandler;


#define INDEX_arc_util_Log$LogHandler_log_arc_util_Log$LogLevel_java_lang_String 0
typedef void (*func_arc_util_Log$LogHandler_log_arc_util_Log$LogLevel_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_util_Log$LogHandler(jobject object, jint mark, jint depth);
void clinit_arc_util_Log$LogHandler(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
