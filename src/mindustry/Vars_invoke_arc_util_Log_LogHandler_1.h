#ifndef HEADER_mindustry_Vars_invoke_arc_util_Log$LogHandler_1
#define HEADER_mindustry_Vars_invoke_arc_util_Log$LogHandler_1

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Log_LogHandler.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_Vars_invoke_arc_util_Log$LogHandler_1 {
	java_lang_Object parent;
	jref F_field0;
	jref F_field1;
} mindustry_Vars_invoke_arc_util_Log$LogHandler_1;

extern Class class_mindustry_Vars_invoke_arc_util_Log$LogHandler_1;


#define VTABLE_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_hashCode_R_int 0
typedef jint (*func_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_finalize 5
typedef void (*func_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_notify 6
typedef void (*func_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_notifyAll 7
typedef void (*func_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_wait 8
typedef void (*func_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_wait_long 9
typedef void (*func_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_wait_long_int 10
typedef void (*func_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_log_arc_util_Log$LogLevel_java_lang_String 11
typedef void (*func_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_log_arc_util_Log$LogLevel_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_Vars_invoke_arc_util_Log$LogHandler_1(jobject object, jint mark, jint depth);
void clinit_mindustry_Vars_invoke_arc_util_Log$LogHandler_1(jcontext ctx);
void M_mindustry_Vars_invoke_arc_util_Log$LogHandler_1_log_arc_util_Log$LogLevel_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
