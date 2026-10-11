#ifndef HEADER_java_net_URL
#define HEADER_java_net_URL

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_URL {
	java_lang_Object parent;
} java_net_URL;

extern Class class_java_net_URL;


#define VTABLE_java_net_URL_hashCode_R_int 0
typedef jint (*func_java_net_URL_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_URL_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_URL_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URL_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_URL_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_URL_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_URL_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_URL_toString_R_java_lang_String 4
typedef jobject (*func_java_net_URL_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URL_finalize 5
typedef void (*func_java_net_URL_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_URL_notify 6
typedef void (*func_java_net_URL_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_URL_notifyAll 7
typedef void (*func_java_net_URL_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_URL_wait 8
typedef void (*func_java_net_URL_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_URL_wait_long 9
typedef void (*func_java_net_URL_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_URL_wait_long_int 10
typedef void (*func_java_net_URL_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_URL_openStream_R_java_io_InputStream 11
typedef jobject (*func_java_net_URL_openStream_R_java_io_InputStream)(jcontext ctx, jobject self);
#define VTABLE_java_net_URL_openConnection_R_java_net_URLConnection 12
typedef jobject (*func_java_net_URL_openConnection_R_java_net_URLConnection)(jcontext ctx, jobject self);

void mark_java_net_URL(jobject object, jint mark, jint depth);
void clinit_java_net_URL(jcontext ctx);
void init_java_net_URL_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_net_URL_java_lang_String_java_lang_String_int_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3);
void init_java_net_URL_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_java_net_URL_java_net_URL_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_net_URL_java_net_URL_java_lang_String_java_net_URLStreamHandler(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_java_net_URL_openStream_R_java_io_InputStream(jcontext ctx, jobject self);
jobject M_java_net_URL_openConnection_R_java_net_URLConnection(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
