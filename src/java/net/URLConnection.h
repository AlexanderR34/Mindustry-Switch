#ifndef HEADER_java_net_URLConnection
#define HEADER_java_net_URLConnection

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_URLConnection {
	java_lang_Object parent;
	jref F_url;
	jlong F_ifModifiedSince;
	jbool F_useCaches;
	jbool F_connected;
	jbool F_doOutput;
	jbool F_doInput;
	jbool F_allowUserInteraction;
} java_net_URLConnection;

extern Class class_java_net_URLConnection;

extern jobject SF_java_net_URLConnection_contentHandlers;

#define VTABLE_java_net_URLConnection_hashCode_R_int 0
typedef jint (*func_java_net_URLConnection_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_URLConnection_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URLConnection_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_URLConnection_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_URLConnection_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_toString_R_java_lang_String 4
typedef jobject (*func_java_net_URLConnection_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_finalize 5
typedef void (*func_java_net_URLConnection_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_notify 6
typedef void (*func_java_net_URLConnection_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_notifyAll 7
typedef void (*func_java_net_URLConnection_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_wait 8
typedef void (*func_java_net_URLConnection_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_wait_long 9
typedef void (*func_java_net_URLConnection_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_URLConnection_wait_long_int 10
typedef void (*func_java_net_URLConnection_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_URLConnection_connect 11
typedef void (*func_java_net_URLConnection_connect)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_setConnectTimeout_int 12
typedef void (*func_java_net_URLConnection_setConnectTimeout_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_net_URLConnection_getConnectTimeout_R_int 13
typedef jint (*func_java_net_URLConnection_getConnectTimeout_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_setReadTimeout_int 14
typedef void (*func_java_net_URLConnection_setReadTimeout_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_net_URLConnection_getReadTimeout_R_int 15
typedef jint (*func_java_net_URLConnection_getReadTimeout_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_getURL_R_java_net_URL 16
typedef jobject (*func_java_net_URLConnection_getURL_R_java_net_URL)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_getContentLength_R_int 17
typedef jint (*func_java_net_URLConnection_getContentLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_getContentLengthLong_R_long 18
typedef jlong (*func_java_net_URLConnection_getContentLengthLong_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_getContentType_R_java_lang_String 19
typedef jobject (*func_java_net_URLConnection_getContentType_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_getContentEncoding_R_java_lang_String 20
typedef jobject (*func_java_net_URLConnection_getContentEncoding_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_getExpiration_R_long 21
typedef jlong (*func_java_net_URLConnection_getExpiration_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_getDate_R_long 22
typedef jlong (*func_java_net_URLConnection_getDate_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_getLastModified_R_long 23
typedef jlong (*func_java_net_URLConnection_getLastModified_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String 24
typedef jobject (*func_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URLConnection_getHeaderFields_R_java_util_Map 25
typedef jobject (*func_java_net_URLConnection_getHeaderFields_R_java_util_Map)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_getHeaderFieldInt_java_lang_String_int_R_int 26
typedef jint (*func_java_net_URLConnection_getHeaderFieldInt_java_lang_String_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_net_URLConnection_getHeaderFieldLong_java_lang_String_long_R_long 27
typedef jlong (*func_java_net_URLConnection_getHeaderFieldLong_java_lang_String_long_R_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_java_net_URLConnection_getHeaderFieldDate_java_lang_String_long_R_long 28
typedef jlong (*func_java_net_URLConnection_getHeaderFieldDate_java_lang_String_long_R_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_java_net_URLConnection_getHeaderFieldKey_int_R_java_lang_String 29
typedef jobject (*func_java_net_URLConnection_getHeaderFieldKey_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_net_URLConnection_getHeaderField_int_R_java_lang_String 30
typedef jobject (*func_java_net_URLConnection_getHeaderField_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_net_URLConnection_getContent_R_java_lang_Object 31
typedef jobject (*func_java_net_URLConnection_getContent_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_getContent_Array1_java_lang_Class_R_java_lang_Object 32
typedef jobject (*func_java_net_URLConnection_getContent_Array1_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URLConnection_getPermission_R_java_security_Permission 33
typedef jobject (*func_java_net_URLConnection_getPermission_R_java_security_Permission)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_getInputStream_R_java_io_InputStream 34
typedef jobject (*func_java_net_URLConnection_getInputStream_R_java_io_InputStream)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_getOutputStream_R_java_io_OutputStream 35
typedef jobject (*func_java_net_URLConnection_getOutputStream_R_java_io_OutputStream)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_setDoInput_boolean 36
typedef void (*func_java_net_URLConnection_setDoInput_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_net_URLConnection_getDoInput_R_boolean 37
typedef jbool (*func_java_net_URLConnection_getDoInput_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_setDoOutput_boolean 38
typedef void (*func_java_net_URLConnection_setDoOutput_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_net_URLConnection_getDoOutput_R_boolean 39
typedef jbool (*func_java_net_URLConnection_getDoOutput_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_setAllowUserInteraction_boolean 40
typedef void (*func_java_net_URLConnection_setAllowUserInteraction_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_net_URLConnection_getAllowUserInteraction_R_boolean 41
typedef jbool (*func_java_net_URLConnection_getAllowUserInteraction_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_setUseCaches_boolean 42
typedef void (*func_java_net_URLConnection_setUseCaches_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_net_URLConnection_getUseCaches_R_boolean 43
typedef jbool (*func_java_net_URLConnection_getUseCaches_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_setIfModifiedSince_long 44
typedef void (*func_java_net_URLConnection_setIfModifiedSince_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_URLConnection_getIfModifiedSince_R_long 45
typedef jlong (*func_java_net_URLConnection_getIfModifiedSince_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_getDefaultUseCaches_R_boolean 46
typedef jbool (*func_java_net_URLConnection_getDefaultUseCaches_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLConnection_setDefaultUseCaches_boolean 47
typedef void (*func_java_net_URLConnection_setDefaultUseCaches_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_net_URLConnection_setRequestProperty_java_lang_String_java_lang_String 48
typedef void (*func_java_net_URLConnection_setRequestProperty_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_net_URLConnection_addRequestProperty_java_lang_String_java_lang_String 49
typedef void (*func_java_net_URLConnection_addRequestProperty_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_net_URLConnection_getRequestProperty_java_lang_String_R_java_lang_String 50
typedef jobject (*func_java_net_URLConnection_getRequestProperty_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URLConnection_getRequestProperties_R_java_util_Map 51
typedef jobject (*func_java_net_URLConnection_getRequestProperties_R_java_util_Map)(jcontext ctx, jobject self);

void mark_java_net_URLConnection(jobject object, jint mark, jint depth);
void clinit_java_net_URLConnection(jcontext ctx);
jobject SM_java_net_URLConnection_getFileNameMap_R_java_net_FileNameMap(jcontext ctx);
void SM_java_net_URLConnection_setFileNameMap_java_net_FileNameMap(jcontext ctx, jobject param0);
void M_java_net_URLConnection_setConnectTimeout_int(jcontext ctx, jobject self, jint param0);
jint M_java_net_URLConnection_getConnectTimeout_R_int(jcontext ctx, jobject self);
void M_java_net_URLConnection_setReadTimeout_int(jcontext ctx, jobject self, jint param0);
jint M_java_net_URLConnection_getReadTimeout_R_int(jcontext ctx, jobject self);
void init_java_net_URLConnection_java_net_URL(jcontext ctx, jobject self, jobject param0);
jobject M_java_net_URLConnection_getURL_R_java_net_URL(jcontext ctx, jobject self);
jint M_java_net_URLConnection_getContentLength_R_int(jcontext ctx, jobject self);
jlong M_java_net_URLConnection_getContentLengthLong_R_long(jcontext ctx, jobject self);
jobject M_java_net_URLConnection_getContentType_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_net_URLConnection_getContentEncoding_R_java_lang_String(jcontext ctx, jobject self);
jlong M_java_net_URLConnection_getExpiration_R_long(jcontext ctx, jobject self);
jlong M_java_net_URLConnection_getDate_R_long(jcontext ctx, jobject self);
jlong M_java_net_URLConnection_getLastModified_R_long(jcontext ctx, jobject self);
jobject M_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_net_URLConnection_getHeaderFields_R_java_util_Map(jcontext ctx, jobject self);
jint M_java_net_URLConnection_getHeaderFieldInt_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jlong M_java_net_URLConnection_getHeaderFieldLong_java_lang_String_long_R_long(jcontext ctx, jobject self, jobject param0, jlong param1);
jlong M_java_net_URLConnection_getHeaderFieldDate_java_lang_String_long_R_long(jcontext ctx, jobject self, jobject param0, jlong param1);
jobject M_java_net_URLConnection_getHeaderFieldKey_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jobject M_java_net_URLConnection_getHeaderField_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jobject M_java_net_URLConnection_getContent_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_net_URLConnection_getContent_Array1_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_net_URLConnection_getPermission_R_java_security_Permission(jcontext ctx, jobject self);
jobject M_java_net_URLConnection_getInputStream_R_java_io_InputStream(jcontext ctx, jobject self);
jobject M_java_net_URLConnection_getOutputStream_R_java_io_OutputStream(jcontext ctx, jobject self);
jobject M_java_net_URLConnection_toString_R_java_lang_String(jcontext ctx, jobject self);
void M_java_net_URLConnection_setDoInput_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_java_net_URLConnection_getDoInput_R_boolean(jcontext ctx, jobject self);
void M_java_net_URLConnection_setDoOutput_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_java_net_URLConnection_getDoOutput_R_boolean(jcontext ctx, jobject self);
void M_java_net_URLConnection_setAllowUserInteraction_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_java_net_URLConnection_getAllowUserInteraction_R_boolean(jcontext ctx, jobject self);
void SM_java_net_URLConnection_setDefaultAllowUserInteraction_boolean(jcontext ctx, jbool param0);
jbool SM_java_net_URLConnection_getDefaultAllowUserInteraction_R_boolean(jcontext ctx);
void M_java_net_URLConnection_setUseCaches_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_java_net_URLConnection_getUseCaches_R_boolean(jcontext ctx, jobject self);
void M_java_net_URLConnection_setIfModifiedSince_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_net_URLConnection_getIfModifiedSince_R_long(jcontext ctx, jobject self);
jbool M_java_net_URLConnection_getDefaultUseCaches_R_boolean(jcontext ctx, jobject self);
void M_java_net_URLConnection_setDefaultUseCaches_boolean(jcontext ctx, jobject self, jbool param0);
void SM_java_net_URLConnection_setDefaultUseCaches_java_lang_String_boolean(jcontext ctx, jobject param0, jbool param1);
jbool SM_java_net_URLConnection_getDefaultUseCaches_java_lang_String_R_boolean(jcontext ctx, jobject param0);
void M_java_net_URLConnection_setRequestProperty_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_net_URLConnection_addRequestProperty_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_net_URLConnection_getRequestProperty_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_net_URLConnection_getRequestProperties_R_java_util_Map(jcontext ctx, jobject self);
void SM_java_net_URLConnection_setDefaultRequestProperty_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_net_URLConnection_getDefaultRequestProperty_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
void SM_java_net_URLConnection_setContentHandlerFactory_java_net_ContentHandlerFactory(jcontext ctx, jobject param0);
jobject SM_java_net_URLConnection_guessContentTypeFromName_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_net_URLConnection_guessContentTypeFromStream_java_io_InputStream_R_java_lang_String(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
