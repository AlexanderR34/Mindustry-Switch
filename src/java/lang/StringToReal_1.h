#ifndef HEADER_java_lang_StringToReal$1
#define HEADER_java_lang_StringToReal$1

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_StringToReal$1 {
	java_lang_Object parent;
} java_lang_StringToReal$1;

extern Class class_java_lang_StringToReal$1;


#define VTABLE_java_lang_StringToReal$1_hashCode_R_int 0
typedef jint (*func_java_lang_StringToReal$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_StringToReal$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringToReal$1_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_StringToReal$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal$1_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_StringToReal$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal$1_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_StringToReal$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal$1_finalize 5
typedef void (*func_java_lang_StringToReal$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal$1_notify 6
typedef void (*func_java_lang_StringToReal$1_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal$1_notifyAll 7
typedef void (*func_java_lang_StringToReal$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal$1_wait 8
typedef void (*func_java_lang_StringToReal$1_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal$1_wait_long 9
typedef void (*func_java_lang_StringToReal$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_StringToReal$1_wait_long_int 10
typedef void (*func_java_lang_StringToReal$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_lang_StringToReal$1(jobject object, jint mark, jint depth);
void clinit_java_lang_StringToReal$1(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
