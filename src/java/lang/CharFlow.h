#ifndef HEADER_java_lang_CharFlow
#define HEADER_java_lang_CharFlow

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_CharFlow {
	java_lang_Object parent;
	jref F_characters;
	jint F_pointer;
} java_lang_CharFlow;

extern Class class_java_lang_CharFlow;


#define VTABLE_java_lang_CharFlow_hashCode_R_int 0
typedef jint (*func_java_lang_CharFlow_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_CharFlow_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_CharFlow_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_CharFlow_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_CharFlow_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_CharFlow_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_CharFlow_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_CharFlow_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_CharFlow_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_CharFlow_finalize 5
typedef void (*func_java_lang_CharFlow_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_CharFlow_notify 6
typedef void (*func_java_lang_CharFlow_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_CharFlow_notifyAll 7
typedef void (*func_java_lang_CharFlow_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_CharFlow_wait 8
typedef void (*func_java_lang_CharFlow_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_CharFlow_wait_long 9
typedef void (*func_java_lang_CharFlow_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_CharFlow_wait_long_int 10
typedef void (*func_java_lang_CharFlow_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_lang_CharFlow(jobject object, jint mark, jint depth);
void clinit_java_lang_CharFlow(jcontext ctx);
void init_java_lang_CharFlow_Array1_char(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
