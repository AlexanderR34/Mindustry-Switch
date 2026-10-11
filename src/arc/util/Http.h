#ifndef HEADER_arc_util_Http
#define HEADER_arc_util_Http

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Http {
	java_lang_Object parent;
} arc_util_Http;

extern Class class_arc_util_Http;

extern jobject SF_arc_util_Http_exec;

#define VTABLE_arc_util_Http_hashCode_R_int 0
typedef jint (*func_arc_util_Http_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Http_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Http_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Http_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Http_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http_finalize 5
typedef void (*func_arc_util_Http_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http_notify 6
typedef void (*func_arc_util_Http_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http_notifyAll 7
typedef void (*func_arc_util_Http_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http_wait 8
typedef void (*func_arc_util_Http_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http_wait_long 9
typedef void (*func_arc_util_Http_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Http_wait_long_int 10
typedef void (*func_arc_util_Http_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_Http(jobject object, jint mark, jint depth);
void clinit_arc_util_Http(jcontext ctx);
void init_arc_util_Http(jcontext ctx, jobject self);
jobject SM_arc_util_Http_request_arc_util_Http$HttpMethod_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Http_get_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject param0);
void SM_arc_util_Http_get_java_lang_String_arc_func_ConsT(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_Http_get_java_lang_String_arc_func_ConsT_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_arc_util_Http_post_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject param0);
void SM_arc_util_Http_post_java_lang_String_arc_func_ConsT(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_Http_post_java_lang_String_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
