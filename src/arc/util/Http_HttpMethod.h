#ifndef HEADER_arc_util_Http$HttpMethod
#define HEADER_arc_util_Http$HttpMethod

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Http$HttpMethod {
	java_lang_Enum parent;
} arc_util_Http$HttpMethod;

extern Class class_arc_util_Http$HttpMethod;

extern jobject SF_arc_util_Http$HttpMethod_GET;
extern jobject SF_arc_util_Http$HttpMethod_POST;
extern jobject SF_arc_util_Http$HttpMethod_PUT;
extern jobject SF_arc_util_Http$HttpMethod_DELETE;
extern jobject SF_arc_util_Http$HttpMethod_HEAD;
extern jobject SF_arc_util_Http$HttpMethod_CONNECT;
extern jobject SF_arc_util_Http$HttpMethod_OPTIONS;
extern jobject SF_arc_util_Http$HttpMethod_TRACE;
extern jobject SF_arc_util_Http$HttpMethod_$VALUES;

#define VTABLE_arc_util_Http$HttpMethod_hashCode_R_int 0
typedef jint (*func_arc_util_Http$HttpMethod_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpMethod_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Http$HttpMethod_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpMethod_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Http$HttpMethod_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpMethod_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Http$HttpMethod_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpMethod_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Http$HttpMethod_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpMethod_finalize 5
typedef void (*func_arc_util_Http$HttpMethod_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpMethod_notify 6
typedef void (*func_arc_util_Http$HttpMethod_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpMethod_notifyAll 7
typedef void (*func_arc_util_Http$HttpMethod_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpMethod_wait 8
typedef void (*func_arc_util_Http$HttpMethod_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpMethod_wait_long 9
typedef void (*func_arc_util_Http$HttpMethod_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Http$HttpMethod_wait_long_int 10
typedef void (*func_arc_util_Http$HttpMethod_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Http$HttpMethod_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_util_Http$HttpMethod_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpMethod_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_util_Http$HttpMethod_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Http$HttpMethod_name_R_java_lang_String 13
typedef jobject (*func_arc_util_Http$HttpMethod_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpMethod_ordinal_R_int 14
typedef jint (*func_arc_util_Http$HttpMethod_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Http$HttpMethod_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_util_Http$HttpMethod_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_util_Http$HttpMethod(jobject object, jint mark, jint depth);
void clinit_arc_util_Http$HttpMethod(jcontext ctx);
jobject SM_arc_util_Http$HttpMethod_values_R_Array1_arc_util_Http$HttpMethod(jcontext ctx);
jobject SM_arc_util_Http$HttpMethod_valueOf_java_lang_String_R_arc_util_Http$HttpMethod(jcontext ctx, jobject param0);
void init_arc_util_Http$HttpMethod_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_arc_util_Http$HttpMethod_$values_R_Array1_arc_util_Http$HttpMethod(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
