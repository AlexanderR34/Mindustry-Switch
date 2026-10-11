#ifndef HEADER_arc_util_CommandHandler$CommandResponse
#define HEADER_arc_util_CommandHandler$CommandResponse

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_CommandHandler$CommandResponse {
	java_lang_Object parent;
	jref F_type;
	jref F_command;
	jref F_runCommand;
} arc_util_CommandHandler$CommandResponse;

extern Class class_arc_util_CommandHandler$CommandResponse;


#define VTABLE_arc_util_CommandHandler$CommandResponse_hashCode_R_int 0
typedef jint (*func_arc_util_CommandHandler$CommandResponse_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler$CommandResponse_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_CommandHandler$CommandResponse_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_CommandHandler$CommandResponse_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_CommandHandler$CommandResponse_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler$CommandResponse_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_CommandHandler$CommandResponse_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler$CommandResponse_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_CommandHandler$CommandResponse_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler$CommandResponse_finalize 5
typedef void (*func_arc_util_CommandHandler$CommandResponse_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler$CommandResponse_notify 6
typedef void (*func_arc_util_CommandHandler$CommandResponse_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler$CommandResponse_notifyAll 7
typedef void (*func_arc_util_CommandHandler$CommandResponse_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler$CommandResponse_wait 8
typedef void (*func_arc_util_CommandHandler$CommandResponse_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_CommandHandler$CommandResponse_wait_long 9
typedef void (*func_arc_util_CommandHandler$CommandResponse_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_CommandHandler$CommandResponse_wait_long_int 10
typedef void (*func_arc_util_CommandHandler$CommandResponse_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_CommandHandler$CommandResponse(jobject object, jint mark, jint depth);
void clinit_arc_util_CommandHandler$CommandResponse(jcontext ctx);
void init_arc_util_CommandHandler$CommandResponse_arc_util_CommandHandler$ResponseType_arc_util_CommandHandler$Command_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
