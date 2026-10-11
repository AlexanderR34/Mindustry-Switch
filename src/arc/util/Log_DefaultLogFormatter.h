#ifndef HEADER_arc_util_Log$DefaultLogFormatter
#define HEADER_arc_util_Log$DefaultLogFormatter

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Log_LogFormatter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Log$DefaultLogFormatter {
	java_lang_Object parent;
} arc_util_Log$DefaultLogFormatter;

extern Class class_arc_util_Log$DefaultLogFormatter;


#define VTABLE_arc_util_Log$DefaultLogFormatter_hashCode_R_int 0
typedef jint (*func_arc_util_Log$DefaultLogFormatter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log$DefaultLogFormatter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Log$DefaultLogFormatter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Log$DefaultLogFormatter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Log$DefaultLogFormatter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log$DefaultLogFormatter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Log$DefaultLogFormatter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log$DefaultLogFormatter_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Log$DefaultLogFormatter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log$DefaultLogFormatter_finalize 5
typedef void (*func_arc_util_Log$DefaultLogFormatter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log$DefaultLogFormatter_notify 6
typedef void (*func_arc_util_Log$DefaultLogFormatter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log$DefaultLogFormatter_notifyAll 7
typedef void (*func_arc_util_Log$DefaultLogFormatter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log$DefaultLogFormatter_wait 8
typedef void (*func_arc_util_Log$DefaultLogFormatter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Log$DefaultLogFormatter_wait_long 9
typedef void (*func_arc_util_Log$DefaultLogFormatter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Log$DefaultLogFormatter_wait_long_int 10
typedef void (*func_arc_util_Log$DefaultLogFormatter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Log$DefaultLogFormatter_format_java_lang_String_boolean_Array1_java_lang_Object_R_java_lang_String 11
typedef jobject (*func_arc_util_Log$DefaultLogFormatter_format_java_lang_String_boolean_Array1_java_lang_Object_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);

void mark_arc_util_Log$DefaultLogFormatter(jobject object, jint mark, jint depth);
void clinit_arc_util_Log$DefaultLogFormatter(jcontext ctx);
void init_arc_util_Log$DefaultLogFormatter(jcontext ctx, jobject self);
jobject M_arc_util_Log$DefaultLogFormatter_format_java_lang_String_boolean_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
