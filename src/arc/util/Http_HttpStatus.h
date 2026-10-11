#ifndef HEADER_arc_util_Http$HttpStatus
#define HEADER_arc_util_Http$HttpStatus

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Http$HttpStatus {
	java_lang_Enum parent;
	jint F_code;
} arc_util_Http$HttpStatus;

extern Class class_arc_util_Http$HttpStatus;

extern jobject SF_arc_util_Http$HttpStatus_UNKNOWN_STATUS;
extern jobject SF_arc_util_Http$HttpStatus_CONTINUE;
extern jobject SF_arc_util_Http$HttpStatus_SWITCHING_PROTOCOLS;
extern jobject SF_arc_util_Http$HttpStatus_PROCESSING;
extern jobject SF_arc_util_Http$HttpStatus_EARLY_HINTS;
extern jobject SF_arc_util_Http$HttpStatus_OK;
extern jobject SF_arc_util_Http$HttpStatus_CREATED;
extern jobject SF_arc_util_Http$HttpStatus_ACCEPTED;
extern jobject SF_arc_util_Http$HttpStatus_NON_AUTHORITATIVE_INFORMATION;
extern jobject SF_arc_util_Http$HttpStatus_NO_CONTENT;
extern jobject SF_arc_util_Http$HttpStatus_RESET_CONTENT;
extern jobject SF_arc_util_Http$HttpStatus_PARTIAL_CONTENT;
extern jobject SF_arc_util_Http$HttpStatus_MULTI_STATUS;
extern jobject SF_arc_util_Http$HttpStatus_ALREADY_REPORTED;
extern jobject SF_arc_util_Http$HttpStatus_IM_USED;
extern jobject SF_arc_util_Http$HttpStatus_MULTIPLE_CHOICES;
extern jobject SF_arc_util_Http$HttpStatus_MOVED_PERMANENTLY;
extern jobject SF_arc_util_Http$HttpStatus_MOVED_TEMPORARILY;
extern jobject SF_arc_util_Http$HttpStatus_SEE_OTHER;
extern jobject SF_arc_util_Http$HttpStatus_NOT_MODIFIED;
extern jobject SF_arc_util_Http$HttpStatus_USE_PROXY;
extern jobject SF_arc_util_Http$HttpStatus_SWITCH_PROXY;
extern jobject SF_arc_util_Http$HttpStatus_TEMPORARY_REDIRECT;
extern jobject SF_arc_util_Http$HttpStatus_PERMANENT_REDIRECT;
extern jobject SF_arc_util_Http$HttpStatus_BAD_REQUEST;
extern jobject SF_arc_util_Http$HttpStatus_UNAUTHORIZED;
extern jobject SF_arc_util_Http$HttpStatus_PAYMENT_REQUIRED;
extern jobject SF_arc_util_Http$HttpStatus_FORBIDDEN;
extern jobject SF_arc_util_Http$HttpStatus_NOT_FOUND;
extern jobject SF_arc_util_Http$HttpStatus_METHOD_NOT_ALLOWED;
extern jobject SF_arc_util_Http$HttpStatus_NOT_ACCEPTABLE;
extern jobject SF_arc_util_Http$HttpStatus_PROXY_AUTHENTICATION_REQUIRED;
extern jobject SF_arc_util_Http$HttpStatus_REQUEST_TIMEOUT;
extern jobject SF_arc_util_Http$HttpStatus_CONFLICT;
extern jobject SF_arc_util_Http$HttpStatus_GONE;
extern jobject SF_arc_util_Http$HttpStatus_LENGTH_REQUIRED;
extern jobject SF_arc_util_Http$HttpStatus_PRECONDITION_FAILED;
extern jobject SF_arc_util_Http$HttpStatus_REQUEST_TOO_LONG;
extern jobject SF_arc_util_Http$HttpStatus_REQUEST_URI_TOO_LONG;
extern jobject SF_arc_util_Http$HttpStatus_UNSUPPORTED_MEDIA_TYPE;
extern jobject SF_arc_util_Http$HttpStatus_REQUESTED_RANGE_NOT_SATISFIABLE;
extern jobject SF_arc_util_Http$HttpStatus_EXPECTATION_FAILED;
extern jobject SF_arc_util_Http$HttpStatus_IM_A_TEAPOT;
extern jobject SF_arc_util_Http$HttpStatus_INSUFFICIENT_SPACE_ON_RESOURCE;
extern jobject SF_arc_util_Http$HttpStatus_METHOD_FAILURE;
extern jobject SF_arc_util_Http$HttpStatus_MISDIRECTED_REQUEST;
extern jobject SF_arc_util_Http$HttpStatus_UNPROCESSABLE_ENTITY;
extern jobject SF_arc_util_Http$HttpStatus_LOCKED;
extern jobject SF_arc_util_Http$HttpStatus_FAILED_DEPENDENCY;
extern jobject SF_arc_util_Http$HttpStatus_TOO_EARLY;
extern jobject SF_arc_util_Http$HttpStatus_UPGRADE_REQUIRED;
extern jobject SF_arc_util_Http$HttpStatus_PRECONDITION_REQUIRED;
extern jobject SF_arc_util_Http$HttpStatus_TOO_MANY_REQUESTS;
extern jobject SF_arc_util_Http$HttpStatus_REQUEST_HEADER_FIELDS_TOO_LARGE;
extern jobject SF_arc_util_Http$HttpStatus_UNAVAILABLE_FOR_LEGAL_REASONS;
extern jobject SF_arc_util_Http$HttpStatus_INTERNAL_SERVER_ERROR;
extern jobject SF_arc_util_Http$HttpStatus_NOT_IMPLEMENTED;
extern jobject SF_arc_util_Http$HttpStatus_BAD_GATEWAY;
extern jobject SF_arc_util_Http$HttpStatus_SERVICE_UNAVAILABLE;
extern jobject SF_arc_util_Http$HttpStatus_GATEWAY_TIMEOUT;
extern jobject SF_arc_util_Http$HttpStatus_HTTP_VERSION_NOT_SUPPORTED;
extern jobject SF_arc_util_Http$HttpStatus_VARIANT_ALSO_NEGOTIATES;
extern jobject SF_arc_util_Http$HttpStatus_INSUFFICIENT_STORAGE;
extern jobject SF_arc_util_Http$HttpStatus_LOOP_DETECTED;
extern jobject SF_arc_util_Http$HttpStatus_NOT_EXTENDED;
extern jobject SF_arc_util_Http$HttpStatus_NETWORK_AUTHENTICATION_REQUIRED;
extern jobject SF_arc_util_Http$HttpStatus_byCode;
extern jobject SF_arc_util_Http$HttpStatus_$VALUES;

#define VTABLE_arc_util_Http$HttpStatus_hashCode_R_int 0
typedef jint (*func_arc_util_Http$HttpStatus_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatus_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Http$HttpStatus_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpStatus_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Http$HttpStatus_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatus_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Http$HttpStatus_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatus_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Http$HttpStatus_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatus_finalize 5
typedef void (*func_arc_util_Http$HttpStatus_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatus_notify 6
typedef void (*func_arc_util_Http$HttpStatus_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatus_notifyAll 7
typedef void (*func_arc_util_Http$HttpStatus_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatus_wait 8
typedef void (*func_arc_util_Http$HttpStatus_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatus_wait_long 9
typedef void (*func_arc_util_Http$HttpStatus_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Http$HttpStatus_wait_long_int 10
typedef void (*func_arc_util_Http$HttpStatus_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Http$HttpStatus_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_util_Http$HttpStatus_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpStatus_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_util_Http$HttpStatus_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpStatus_name_R_java_lang_String 13
typedef jobject (*func_arc_util_Http$HttpStatus_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatus_ordinal_R_int 14
typedef jint (*func_arc_util_Http$HttpStatus_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpStatus_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_util_Http$HttpStatus_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_util_Http$HttpStatus(jobject object, jint mark, jint depth);
void clinit_arc_util_Http$HttpStatus(jcontext ctx);
jobject SM_arc_util_Http$HttpStatus_values_R_Array1_arc_util_Http$HttpStatus(jcontext ctx);
jobject SM_arc_util_Http$HttpStatus_valueOf_java_lang_String_R_arc_util_Http$HttpStatus(jcontext ctx, jobject param0);
void init_arc_util_Http$HttpStatus_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject SM_arc_util_Http$HttpStatus_byCode_int_R_arc_util_Http$HttpStatus(jcontext ctx, jint param0);
jobject SM_arc_util_Http$HttpStatus_$values_R_Array1_arc_util_Http$HttpStatus(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
