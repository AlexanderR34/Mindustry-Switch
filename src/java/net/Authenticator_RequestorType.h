#ifndef HEADER_java_net_Authenticator$RequestorType
#define HEADER_java_net_Authenticator$RequestorType

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_Authenticator$RequestorType {
	java_lang_Enum parent;
} java_net_Authenticator$RequestorType;

extern Class class_java_net_Authenticator$RequestorType;

extern jobject SF_java_net_Authenticator$RequestorType_PROXY;
extern jobject SF_java_net_Authenticator$RequestorType_SERVER;
extern jobject SF_java_net_Authenticator$RequestorType_$VALUES;

#define VTABLE_java_net_Authenticator$RequestorType_hashCode_R_int 0
typedef jint (*func_java_net_Authenticator$RequestorType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_Authenticator$RequestorType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_Authenticator$RequestorType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_Authenticator$RequestorType_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_Authenticator$RequestorType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_Authenticator$RequestorType_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_Authenticator$RequestorType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_Authenticator$RequestorType_toString_R_java_lang_String 4
typedef jobject (*func_java_net_Authenticator$RequestorType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_Authenticator$RequestorType_finalize 5
typedef void (*func_java_net_Authenticator$RequestorType_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_Authenticator$RequestorType_notify 6
typedef void (*func_java_net_Authenticator$RequestorType_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_Authenticator$RequestorType_notifyAll 7
typedef void (*func_java_net_Authenticator$RequestorType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_Authenticator$RequestorType_wait 8
typedef void (*func_java_net_Authenticator$RequestorType_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_Authenticator$RequestorType_wait_long 9
typedef void (*func_java_net_Authenticator$RequestorType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_Authenticator$RequestorType_wait_long_int 10
typedef void (*func_java_net_Authenticator$RequestorType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_Authenticator$RequestorType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_net_Authenticator$RequestorType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_Authenticator$RequestorType_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_java_net_Authenticator$RequestorType_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_Authenticator$RequestorType_name_R_java_lang_String 13
typedef jobject (*func_java_net_Authenticator$RequestorType_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_Authenticator$RequestorType_ordinal_R_int 14
typedef jint (*func_java_net_Authenticator$RequestorType_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_Authenticator$RequestorType_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_java_net_Authenticator$RequestorType_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_java_net_Authenticator$RequestorType(jobject object, jint mark, jint depth);
void clinit_java_net_Authenticator$RequestorType(jcontext ctx);
jobject SM_java_net_Authenticator$RequestorType_values_R_Array1_java_net_Authenticator$RequestorType(jcontext ctx);
jobject SM_java_net_Authenticator$RequestorType_valueOf_java_lang_String_R_java_net_Authenticator$RequestorType(jcontext ctx, jobject param0);
void init_java_net_Authenticator$RequestorType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_java_net_Authenticator$RequestorType_$values_R_Array1_java_net_Authenticator$RequestorType(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
