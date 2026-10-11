#ifndef HEADER_java_lang_FunctionalInterface
#define HEADER_java_lang_FunctionalInterface

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/annotation/Annotation.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_FunctionalInterface {
	java_lang_Object parent;
} java_lang_FunctionalInterface;

extern Class class_java_lang_FunctionalInterface;


#define INDEX_java_lang_FunctionalInterface_annotationType_R_java_lang_Class 0
typedef jobject (*func_java_lang_FunctionalInterface_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_FunctionalInterface_hashCode_R_int 0
typedef jint (*func_java_lang_FunctionalInterface_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_FunctionalInterface_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_FunctionalInterface_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_FunctionalInterface_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_FunctionalInterface_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_FunctionalInterface_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_FunctionalInterface_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_FunctionalInterface_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_FunctionalInterface_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_FunctionalInterface_finalize 5
typedef void (*func_java_lang_FunctionalInterface_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_FunctionalInterface_notify 6
typedef void (*func_java_lang_FunctionalInterface_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_FunctionalInterface_notifyAll 7
typedef void (*func_java_lang_FunctionalInterface_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_FunctionalInterface_wait 8
typedef void (*func_java_lang_FunctionalInterface_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_FunctionalInterface_wait_long 9
typedef void (*func_java_lang_FunctionalInterface_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_FunctionalInterface_wait_long_int 10
typedef void (*func_java_lang_FunctionalInterface_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_FunctionalInterface_annotationType_R_java_lang_Class 11
typedef jobject (*func_java_lang_FunctionalInterface_annotationType_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_java_lang_FunctionalInterface(jobject object, jint mark, jint depth);
void clinit_java_lang_FunctionalInterface(jcontext ctx);
jobject M_java_lang_FunctionalInterface_annotationType_R_java_lang_Class(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
