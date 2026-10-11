#ifndef HEADER_rhino_Undefined
#define HEADER_rhino_Undefined

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Undefined {
	java_lang_Object parent;
} rhino_Undefined;

extern Class class_rhino_Undefined;

extern jobject SF_rhino_Undefined_instance;
extern jobject SF_rhino_Undefined_SCRIPTABLE_UNDEFINED;

#define VTABLE_rhino_Undefined_hashCode_R_int 0
typedef jint (*func_rhino_Undefined_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Undefined_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Undefined_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Undefined_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Undefined_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Undefined_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Undefined_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Undefined_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Undefined_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Undefined_finalize 5
typedef void (*func_rhino_Undefined_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Undefined_notify 6
typedef void (*func_rhino_Undefined_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Undefined_notifyAll 7
typedef void (*func_rhino_Undefined_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Undefined_wait 8
typedef void (*func_rhino_Undefined_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Undefined_wait_long 9
typedef void (*func_rhino_Undefined_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Undefined_wait_long_int 10
typedef void (*func_rhino_Undefined_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_Undefined_readResolve_R_java_lang_Object 11
typedef jobject (*func_rhino_Undefined_readResolve_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_rhino_Undefined(jobject object, jint mark, jint depth);
void clinit_rhino_Undefined(jcontext ctx);
void init_rhino_Undefined(jcontext ctx, jobject self);
jobject M_rhino_Undefined_readResolve_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_rhino_Undefined_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_rhino_Undefined_hashCode_R_int(jcontext ctx, jobject self);
jbool SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(jcontext ctx, jobject param0);
jobject SM_rhino_Undefined_lambda$static$0_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
