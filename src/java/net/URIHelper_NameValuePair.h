#ifndef HEADER_java_net_URIHelper$NameValuePair
#define HEADER_java_net_URIHelper$NameValuePair

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_URIHelper$NameValuePair {
	java_lang_Object parent;
	jref F_name;
	jref F_value;
} java_net_URIHelper$NameValuePair;

extern Class class_java_net_URIHelper$NameValuePair;


#define VTABLE_java_net_URIHelper$NameValuePair_hashCode_R_int 0
typedef jint (*func_java_net_URIHelper$NameValuePair_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$NameValuePair_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_URIHelper$NameValuePair_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URIHelper$NameValuePair_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_URIHelper$NameValuePair_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$NameValuePair_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_URIHelper$NameValuePair_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$NameValuePair_toString_R_java_lang_String 4
typedef jobject (*func_java_net_URIHelper$NameValuePair_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$NameValuePair_finalize 5
typedef void (*func_java_net_URIHelper$NameValuePair_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$NameValuePair_notify 6
typedef void (*func_java_net_URIHelper$NameValuePair_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$NameValuePair_notifyAll 7
typedef void (*func_java_net_URIHelper$NameValuePair_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$NameValuePair_wait 8
typedef void (*func_java_net_URIHelper$NameValuePair_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$NameValuePair_wait_long 9
typedef void (*func_java_net_URIHelper$NameValuePair_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_URIHelper$NameValuePair_wait_long_int 10
typedef void (*func_java_net_URIHelper$NameValuePair_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_URIHelper$NameValuePair_getName_R_java_lang_String 11
typedef jobject (*func_java_net_URIHelper$NameValuePair_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String 12
typedef jobject (*func_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_net_URIHelper$NameValuePair(jobject object, jint mark, jint depth);
void clinit_java_net_URIHelper$NameValuePair(jcontext ctx);
void init_java_net_URIHelper$NameValuePair_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_net_URIHelper$NameValuePair_getName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
