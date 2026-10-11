#ifndef HEADER_arc_util_Http$HttpRequest
#define HEADER_arc_util_Http$HttpRequest

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Http$HttpRequest {
	java_lang_Object parent;
	jref F_method;
	jref F_url;
	jref F_headers;
	jint F_timeout;
	jref F_content;
	jref F_contentStream;
	jbool F_followRedirects;
	jbool F_includeCredentials;
	jref F_errorHandler;
} arc_util_Http$HttpRequest;

extern Class class_arc_util_Http$HttpRequest;


#define VTABLE_arc_util_Http$HttpRequest_hashCode_R_int 0
typedef jint (*func_arc_util_Http$HttpRequest_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpRequest_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Http$HttpRequest_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpRequest_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Http$HttpRequest_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpRequest_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Http$HttpRequest_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpRequest_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Http$HttpRequest_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpRequest_finalize 5
typedef void (*func_arc_util_Http$HttpRequest_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpRequest_notify 6
typedef void (*func_arc_util_Http$HttpRequest_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpRequest_notifyAll 7
typedef void (*func_arc_util_Http$HttpRequest_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpRequest_wait 8
typedef void (*func_arc_util_Http$HttpRequest_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpRequest_wait_long 9
typedef void (*func_arc_util_Http$HttpRequest_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Http$HttpRequest_wait_long_int 10
typedef void (*func_arc_util_Http$HttpRequest_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Http$HttpRequest_error_arc_func_Cons_R_arc_util_Http$HttpRequest 11
typedef jobject (*func_arc_util_Http$HttpRequest_error_arc_func_Cons_R_arc_util_Http$HttpRequest)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpRequest_method_arc_util_Http$HttpMethod_R_arc_util_Http$HttpRequest 12
typedef jobject (*func_arc_util_Http$HttpRequest_method_arc_util_Http$HttpMethod_R_arc_util_Http$HttpRequest)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpRequest_url_java_lang_String_R_arc_util_Http$HttpRequest 13
typedef jobject (*func_arc_util_Http$HttpRequest_url_java_lang_String_R_arc_util_Http$HttpRequest)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpRequest_timeout_int_R_arc_util_Http$HttpRequest 14
typedef jobject (*func_arc_util_Http$HttpRequest_timeout_int_R_arc_util_Http$HttpRequest)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_Http$HttpRequest_redirects_boolean_R_arc_util_Http$HttpRequest 15
typedef jobject (*func_arc_util_Http$HttpRequest_redirects_boolean_R_arc_util_Http$HttpRequest)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_util_Http$HttpRequest_credentials_boolean_R_arc_util_Http$HttpRequest 16
typedef jobject (*func_arc_util_Http$HttpRequest_credentials_boolean_R_arc_util_Http$HttpRequest)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_util_Http$HttpRequest_header_java_lang_String_java_lang_String_R_arc_util_Http$HttpRequest 17
typedef jobject (*func_arc_util_Http$HttpRequest_header_java_lang_String_java_lang_String_R_arc_util_Http$HttpRequest)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_util_Http$HttpRequest_content_java_lang_String_R_arc_util_Http$HttpRequest 18
typedef jobject (*func_arc_util_Http$HttpRequest_content_java_lang_String_R_arc_util_Http$HttpRequest)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpRequest_content_java_io_InputStream_R_arc_util_Http$HttpRequest 19
typedef jobject (*func_arc_util_Http$HttpRequest_content_java_io_InputStream_R_arc_util_Http$HttpRequest)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpRequest_submit_arc_func_ConsT 20
typedef void (*func_arc_util_Http$HttpRequest_submit_arc_func_ConsT)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpRequest_block_arc_func_ConsT 21
typedef void (*func_arc_util_Http$HttpRequest_block_arc_func_ConsT)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpRequest_lambda$submit$0_arc_func_ConsT 22
typedef void (*func_arc_util_Http$HttpRequest_lambda$submit$0_arc_func_ConsT)(jcontext ctx, jobject self, jobject param0);

void mark_arc_util_Http$HttpRequest(jobject object, jint mark, jint depth);
void clinit_arc_util_Http$HttpRequest(jcontext ctx);
void init_arc_util_Http$HttpRequest(jcontext ctx, jobject self);
void init_arc_util_Http$HttpRequest_arc_util_Http$HttpMethod(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_Http$HttpRequest_error_arc_func_Cons_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_Http$HttpRequest_method_arc_util_Http$HttpMethod_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_Http$HttpRequest_url_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_Http$HttpRequest_timeout_int_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jint param0);
jobject M_arc_util_Http$HttpRequest_redirects_boolean_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jbool param0);
jobject M_arc_util_Http$HttpRequest_credentials_boolean_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jbool param0);
jobject M_arc_util_Http$HttpRequest_header_java_lang_String_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_util_Http$HttpRequest_content_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_Http$HttpRequest_content_java_io_InputStream_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject param0);
void M_arc_util_Http$HttpRequest_submit_arc_func_ConsT(jcontext ctx, jobject self, jobject param0);
void M_arc_util_Http$HttpRequest_block_arc_func_ConsT(jcontext ctx, jobject self, jobject param0);
void M_arc_util_Http$HttpRequest_lambda$submit$0_arc_func_ConsT(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
