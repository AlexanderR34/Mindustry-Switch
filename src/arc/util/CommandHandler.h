#ifndef HEADER_arc_util_CommandHandler
#define HEADER_arc_util_CommandHandler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_CommandHandler {
	java_lang_Object parent;
	jref F_prefix;
	jref F_commands;
	jref F_orderedCommands;
} arc_util_CommandHandler;

extern Class class_arc_util_CommandHandler;


#define VTABLE_arc_util_CommandHandler_hashCode_R_int 0
typedef jint (*func_arc_util_CommandHandler_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_CommandHandler_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_CommandHandler_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_CommandHandler_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_CommandHandler_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_CommandHandler_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler_finalize 5
typedef void (*func_arc_util_CommandHandler_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler_notify 6
typedef void (*func_arc_util_CommandHandler_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler_notifyAll 7
typedef void (*func_arc_util_CommandHandler_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler_wait 8
typedef void (*func_arc_util_CommandHandler_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler_wait_long 9
typedef void (*func_arc_util_CommandHandler_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_CommandHandler_wait_long_int 10
typedef void (*func_arc_util_CommandHandler_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_CommandHandler_setPrefix_java_lang_String 11
typedef void (*func_arc_util_CommandHandler_setPrefix_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_CommandHandler_getPrefix_R_java_lang_String 12
typedef jobject (*func_arc_util_CommandHandler_getPrefix_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler_handleMessage_java_lang_String_R_arc_util_CommandHandler$CommandResponse 13
typedef jobject (*func_arc_util_CommandHandler_handleMessage_java_lang_String_R_arc_util_CommandHandler$CommandResponse)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_CommandHandler_handleMessage_java_lang_String_java_lang_Object_R_arc_util_CommandHandler$CommandResponse 14
typedef jobject (*func_arc_util_CommandHandler_handleMessage_java_lang_String_java_lang_Object_R_arc_util_CommandHandler$CommandResponse)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_util_CommandHandler_removeCommand_java_lang_String 15
typedef void (*func_arc_util_CommandHandler_removeCommand_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command 16
typedef jobject (*func_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command 17
typedef jobject (*func_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_func_Cons_R_arc_util_CommandHandler$Command 18
typedef jobject (*func_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_func_Cons_R_arc_util_CommandHandler$Command)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons_R_arc_util_CommandHandler$Command 19
typedef jobject (*func_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons_R_arc_util_CommandHandler$Command)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_arc_util_CommandHandler_getCommandList_R_arc_struct_Seq 20
typedef jobject (*func_arc_util_CommandHandler_getCommandList_R_arc_struct_Seq)(jcontext ctx, jobject self);

void mark_arc_util_CommandHandler(jobject object, jint mark, jint depth);
void clinit_arc_util_CommandHandler(jcontext ctx);
void init_arc_util_CommandHandler_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_util_CommandHandler_setPrefix_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_CommandHandler_getPrefix_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_util_CommandHandler_handleMessage_java_lang_String_R_arc_util_CommandHandler$CommandResponse(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_CommandHandler_handleMessage_java_lang_String_java_lang_Object_R_arc_util_CommandHandler$CommandResponse(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_util_CommandHandler_removeCommand_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_util_CommandHandler$CommandRunner_R_arc_util_CommandHandler$Command(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_arc_util_CommandHandler_register_java_lang_String_java_lang_String_arc_func_Cons_R_arc_util_CommandHandler$Command(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_arc_util_CommandHandler_register_java_lang_String_java_lang_String_java_lang_String_arc_func_Cons_R_arc_util_CommandHandler$Command(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_arc_util_CommandHandler_getCommandList_R_arc_struct_Seq(jcontext ctx, jobject self);
void SM_arc_util_CommandHandler_lambda$register$2_arc_func_Cons_Array1_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_arc_util_CommandHandler_lambda$register$1_arc_func_Cons_Array1_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_arc_util_CommandHandler_lambda$register$0_java_lang_String_arc_util_CommandHandler$Command_R_boolean(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
