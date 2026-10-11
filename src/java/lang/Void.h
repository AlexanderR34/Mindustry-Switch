#ifndef HEADER_java_lang_Void
#define HEADER_java_lang_Void

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Void {
	java_lang_Object parent;
} java_lang_Void;

extern Class class_java_lang_Void;

extern jobject SF_java_lang_Void_TYPE;

#define VTABLE_java_lang_Void_hashCode_R_int 0
typedef jint (*func_java_lang_Void_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Void_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Void_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Void_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Void_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Void_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Void_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Void_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Void_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Void_finalize 5
typedef void (*func_java_lang_Void_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Void_notify 6
typedef void (*func_java_lang_Void_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Void_notifyAll 7
typedef void (*func_java_lang_Void_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Void_wait 8
typedef void (*func_java_lang_Void_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Void_wait_long 9
typedef void (*func_java_lang_Void_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Void_wait_long_int 10
typedef void (*func_java_lang_Void_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_lang_Void(jobject object, jint mark, jint depth);
void clinit_java_lang_Void(jcontext ctx);
void init_java_lang_Void(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
