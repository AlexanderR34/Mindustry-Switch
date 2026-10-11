#ifndef HEADER_java_lang_Package
#define HEADER_java_lang_Package

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Package {
	java_lang_Object parent;
} java_lang_Package;

extern Class class_java_lang_Package;


#define VTABLE_java_lang_Package_hashCode_R_int 0
typedef jint (*func_java_lang_Package_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Package_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Package_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Package_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Package_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Package_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Package_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Package_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Package_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Package_finalize 5
typedef void (*func_java_lang_Package_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Package_notify 6
typedef void (*func_java_lang_Package_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Package_notifyAll 7
typedef void (*func_java_lang_Package_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Package_wait 8
typedef void (*func_java_lang_Package_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Package_wait_long 9
typedef void (*func_java_lang_Package_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Package_wait_long_int 10
typedef void (*func_java_lang_Package_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Package_getName_R_java_lang_String 11
typedef jobject (*func_java_lang_Package_getName_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_lang_Package(jobject object, jint mark, jint depth);
void clinit_java_lang_Package(jcontext ctx);
void init_java_lang_Package(jcontext ctx, jobject self);
jobject M_java_lang_Package_getName_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
