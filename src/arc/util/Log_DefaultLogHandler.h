#ifndef HEADER_arc_util_Log$DefaultLogHandler
#define HEADER_arc_util_Log$DefaultLogHandler

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Log_LogHandler.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Log$DefaultLogHandler {
	java_lang_Object parent;
} arc_util_Log$DefaultLogHandler;

extern Class class_arc_util_Log$DefaultLogHandler;


#define VTABLE_arc_util_Log$DefaultLogHandler_hashCode_R_int 0
typedef jint (*func_arc_util_Log$DefaultLogHandler_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log$DefaultLogHandler_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Log$DefaultLogHandler_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Log$DefaultLogHandler_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Log$DefaultLogHandler_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log$DefaultLogHandler_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Log$DefaultLogHandler_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log$DefaultLogHandler_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Log$DefaultLogHandler_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log$DefaultLogHandler_finalize 5
typedef void (*func_arc_util_Log$DefaultLogHandler_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log$DefaultLogHandler_notify 6
typedef void (*func_arc_util_Log$DefaultLogHandler_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log$DefaultLogHandler_notifyAll 7
typedef void (*func_arc_util_Log$DefaultLogHandler_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log$DefaultLogHandler_wait 8
typedef void (*func_arc_util_Log$DefaultLogHandler_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log$DefaultLogHandler_wait_long 9
typedef void (*func_arc_util_Log$DefaultLogHandler_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Log$DefaultLogHandler_wait_long_int 10
typedef void (*func_arc_util_Log$DefaultLogHandler_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Log$DefaultLogHandler_log_arc_util_Log$LogLevel_java_lang_String 11
typedef void (*func_arc_util_Log$DefaultLogHandler_log_arc_util_Log$LogLevel_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_arc_util_Log$DefaultLogHandler(jobject object, jint mark, jint depth);
void clinit_arc_util_Log$DefaultLogHandler(jcontext ctx);
void init_arc_util_Log$DefaultLogHandler(jcontext ctx, jobject self);
void M_arc_util_Log$DefaultLogHandler_log_arc_util_Log$LogLevel_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
