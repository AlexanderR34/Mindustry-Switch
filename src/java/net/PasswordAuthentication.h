#ifndef HEADER_java_net_PasswordAuthentication
#define HEADER_java_net_PasswordAuthentication

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_PasswordAuthentication {
	java_lang_Object parent;
	jref F_userName;
	jref F_password;
} java_net_PasswordAuthentication;

extern Class class_java_net_PasswordAuthentication;


#define VTABLE_java_net_PasswordAuthentication_hashCode_R_int 0
typedef jint (*func_java_net_PasswordAuthentication_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_PasswordAuthentication_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_PasswordAuthentication_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_PasswordAuthentication_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_PasswordAuthentication_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_PasswordAuthentication_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_PasswordAuthentication_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_PasswordAuthentication_toString_R_java_lang_String 4
typedef jobject (*func_java_net_PasswordAuthentication_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_PasswordAuthentication_finalize 5
typedef void (*func_java_net_PasswordAuthentication_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_PasswordAuthentication_notify 6
typedef void (*func_java_net_PasswordAuthentication_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_PasswordAuthentication_notifyAll 7
typedef void (*func_java_net_PasswordAuthentication_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_PasswordAuthentication_wait 8
typedef void (*func_java_net_PasswordAuthentication_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_PasswordAuthentication_wait_long 9
typedef void (*func_java_net_PasswordAuthentication_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_PasswordAuthentication_wait_long_int 10
typedef void (*func_java_net_PasswordAuthentication_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_PasswordAuthentication_getUserName_R_java_lang_String 11
typedef jobject (*func_java_net_PasswordAuthentication_getUserName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_PasswordAuthentication_getPassword_R_Array1_char 12
typedef jobject (*func_java_net_PasswordAuthentication_getPassword_R_Array1_char)(jcontext ctx, jobject self);

void mark_java_net_PasswordAuthentication(jobject object, jint mark, jint depth);
void clinit_java_net_PasswordAuthentication(jcontext ctx);
void init_java_net_PasswordAuthentication_java_lang_String_Array1_char(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_net_PasswordAuthentication_getUserName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_PasswordAuthentication_getPassword_R_Array1_char(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
