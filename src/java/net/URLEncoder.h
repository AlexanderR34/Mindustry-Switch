#ifndef HEADER_java_net_URLEncoder
#define HEADER_java_net_URLEncoder

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_URLEncoder {
	java_lang_Object parent;
} java_net_URLEncoder;

extern Class class_java_net_URLEncoder;


#define VTABLE_java_net_URLEncoder_hashCode_R_int 0
typedef jint (*func_java_net_URLEncoder_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLEncoder_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_URLEncoder_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URLEncoder_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_URLEncoder_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLEncoder_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_URLEncoder_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLEncoder_toString_R_java_lang_String 4
typedef jobject (*func_java_net_URLEncoder_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLEncoder_finalize 5
typedef void (*func_java_net_URLEncoder_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLEncoder_notify 6
typedef void (*func_java_net_URLEncoder_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLEncoder_notifyAll 7
typedef void (*func_java_net_URLEncoder_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLEncoder_wait 8
typedef void (*func_java_net_URLEncoder_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLEncoder_wait_long 9
typedef void (*func_java_net_URLEncoder_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_URLEncoder_wait_long_int 10
typedef void (*func_java_net_URLEncoder_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_net_URLEncoder(jobject object, jint mark, jint depth);
void clinit_java_net_URLEncoder(jcontext ctx);
void init_java_net_URLEncoder(jcontext ctx, jobject self);
jobject SM_java_net_URLEncoder_encode_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
