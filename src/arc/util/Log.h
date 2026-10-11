#ifndef HEADER_arc_util_Log
#define HEADER_arc_util_Log

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Log {
	java_lang_Object parent;
} arc_util_Log;

extern Class class_arc_util_Log;

extern jobject SF_arc_util_Log_empty;
extern jbool SF_arc_util_Log_useColors;
extern jobject SF_arc_util_Log_level;
extern jobject SF_arc_util_Log_logger;
extern jobject SF_arc_util_Log_formatter;

#define VTABLE_arc_util_Log_hashCode_R_int 0
typedef jint (*func_arc_util_Log_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Log_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Log_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Log_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Log_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Log_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log_finalize 5
typedef void (*func_arc_util_Log_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log_notify 6
typedef void (*func_arc_util_Log_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log_notifyAll 7
typedef void (*func_arc_util_Log_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log_wait 8
typedef void (*func_arc_util_Log_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log_wait_long 9
typedef void (*func_arc_util_Log_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Log_wait_long_int 10
typedef void (*func_arc_util_Log_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_Log(jobject object, jint mark, jint depth);
void clinit_arc_util_Log(jcontext ctx);
void init_arc_util_Log(jcontext ctx, jobject self);
void SM_arc_util_Log_log_arc_util_Log$LogLevel_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_arc_util_Log_debug_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_Log_debug_java_lang_Object(jcontext ctx, jobject param0);
void SM_arc_util_Log_infoList_Array1_java_lang_Object(jcontext ctx, jobject param0);
void SM_arc_util_Log_infoTag_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_Log_info_java_lang_Object(jcontext ctx, jobject param0);
void SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_Log_errTag_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_Log_err_java_lang_Throwable(jcontext ctx, jobject param0);
void SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Log_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Log_formatColors_java_lang_String_boolean_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0, jbool param1, jobject param2);
jobject SM_arc_util_Log_removeColors_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_Log_addColors_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
