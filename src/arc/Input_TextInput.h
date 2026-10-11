#ifndef HEADER_arc_Input$TextInput
#define HEADER_arc_Input$TextInput

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_Input$TextInput {
	java_lang_Object parent;
	jbool F_multiline;
	jbool F_allowEmpty;
	jref F_title;
	jref F_text;
	jref F_message;
	jbool F_numeric;
	jref F_accepted;
	jref F_canceled;
	jint F_maxLength;
} arc_Input$TextInput;

extern Class class_arc_Input$TextInput;


#define VTABLE_arc_Input$TextInput_hashCode_R_int 0
typedef jint (*func_arc_Input$TextInput_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$TextInput_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_Input$TextInput_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Input$TextInput_clone_R_java_lang_Object 2
typedef jobject (*func_arc_Input$TextInput_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$TextInput_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_Input$TextInput_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$TextInput_toString_R_java_lang_String 4
typedef jobject (*func_arc_Input$TextInput_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$TextInput_finalize 5
typedef void (*func_arc_Input$TextInput_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$TextInput_notify 6
typedef void (*func_arc_Input$TextInput_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$TextInput_notifyAll 7
typedef void (*func_arc_Input$TextInput_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$TextInput_wait 8
typedef void (*func_arc_Input$TextInput_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_Input$TextInput_wait_long 9
typedef void (*func_arc_Input$TextInput_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_Input$TextInput_wait_long_int 10
typedef void (*func_arc_Input$TextInput_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_Input$TextInput(jobject object, jint mark, jint depth);
void clinit_arc_Input$TextInput(jcontext ctx);
void init_arc_Input$TextInput(jcontext ctx, jobject self);
void SM_arc_Input$TextInput_lambda$new$1(jcontext ctx);
void SM_arc_Input$TextInput_lambda$new$0_java_lang_String(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
