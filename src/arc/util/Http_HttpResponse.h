#ifndef HEADER_arc_util_Http$HttpResponse
#define HEADER_arc_util_Http$HttpResponse

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Http$HttpResponse {
	java_lang_Object parent;
	jref F_connection;
	jref F_status;
} arc_util_Http$HttpResponse;

extern Class class_arc_util_Http$HttpResponse;


#define VTABLE_arc_util_Http$HttpResponse_hashCode_R_int 0
typedef jint (*func_arc_util_Http$HttpResponse_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpResponse_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Http$HttpResponse_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpResponse_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Http$HttpResponse_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpResponse_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Http$HttpResponse_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpResponse_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Http$HttpResponse_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpResponse_finalize 5
typedef void (*func_arc_util_Http$HttpResponse_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpResponse_notify 6
typedef void (*func_arc_util_Http$HttpResponse_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpResponse_notifyAll 7
typedef void (*func_arc_util_Http$HttpResponse_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpResponse_wait 8
typedef void (*func_arc_util_Http$HttpResponse_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpResponse_wait_long 9
typedef void (*func_arc_util_Http$HttpResponse_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Http$HttpResponse_wait_long_int 10
typedef void (*func_arc_util_Http$HttpResponse_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Http$HttpResponse_getContentLength_R_long 11
typedef jlong (*func_arc_util_Http$HttpResponse_getContentLength_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpResponse_getResult_R_Array1_byte 12
typedef jobject (*func_arc_util_Http$HttpResponse_getResult_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String 13
typedef jobject (*func_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpResponse_getResultAsStream_R_java_io_InputStream 14
typedef jobject (*func_arc_util_Http$HttpResponse_getResultAsStream_R_java_io_InputStream)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpResponse_getStatus_R_arc_util_Http$HttpStatus 15
typedef jobject (*func_arc_util_Http$HttpResponse_getStatus_R_arc_util_Http$HttpStatus)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpResponse_getHeader_java_lang_String_R_java_lang_String 16
typedef jobject (*func_arc_util_Http$HttpResponse_getHeader_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpResponse_getHeaders_R_arc_struct_ObjectMap 17
typedef jobject (*func_arc_util_Http$HttpResponse_getHeaders_R_arc_struct_ObjectMap)(jcontext ctx, jobject self);

void mark_arc_util_Http$HttpResponse(jobject object, jint mark, jint depth);
void clinit_arc_util_Http$HttpResponse(jcontext ctx);
void init_arc_util_Http$HttpResponse_java_net_HttpURLConnection(jcontext ctx, jobject self, jobject param0);
jlong M_arc_util_Http$HttpResponse_getContentLength_R_long(jcontext ctx, jobject self);
jobject M_arc_util_Http$HttpResponse_getResult_R_Array1_byte(jcontext ctx, jobject self);
jobject M_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_util_Http$HttpResponse_getResultAsStream_R_java_io_InputStream(jcontext ctx, jobject self);
jobject M_arc_util_Http$HttpResponse_getStatus_R_arc_util_Http$HttpStatus(jcontext ctx, jobject self);
jobject M_arc_util_Http$HttpResponse_getHeader_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_Http$HttpResponse_getHeaders_R_arc_struct_ObjectMap(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
