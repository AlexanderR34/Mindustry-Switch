#ifndef HEADER_java_lang_ThreadLocal
#define HEADER_java_lang_ThreadLocal

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_ThreadLocal {
	java_lang_Object parent;
	jref F_value;
	jref F__initialized;
} java_lang_ThreadLocal;

extern Class class_java_lang_ThreadLocal;


#define VTABLE_java_lang_ThreadLocal_hashCode_R_int 0
typedef jint (*func_java_lang_ThreadLocal_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_ThreadLocal_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ThreadLocal_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_ThreadLocal_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_ThreadLocal_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_ThreadLocal_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal_finalize 5
typedef void (*func_java_lang_ThreadLocal_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal_notify 6
typedef void (*func_java_lang_ThreadLocal_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal_notifyAll 7
typedef void (*func_java_lang_ThreadLocal_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal_wait 8
typedef void (*func_java_lang_ThreadLocal_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal_wait_long 9
typedef void (*func_java_lang_ThreadLocal_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_ThreadLocal_wait_long_int 10
typedef void (*func_java_lang_ThreadLocal_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_ThreadLocal_initialValue_R_java_lang_Object 11
typedef jobject (*func_java_lang_ThreadLocal_initialValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal_get_R_java_lang_Object 12
typedef jobject (*func_java_lang_ThreadLocal_get_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ThreadLocal_set_java_lang_Object 13
typedef void (*func_java_lang_ThreadLocal_set_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ThreadLocal_remove 14
typedef void (*func_java_lang_ThreadLocal_remove)(jcontext ctx, jobject self);

void mark_java_lang_ThreadLocal(jobject object, jint mark, jint depth);
void clinit_java_lang_ThreadLocal(jcontext ctx);
void init_java_lang_ThreadLocal(jcontext ctx, jobject self);
jobject M_java_lang_ThreadLocal_initialValue_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_lang_ThreadLocal_get_R_java_lang_Object(jcontext ctx, jobject self);
void M_java_lang_ThreadLocal_set_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_java_lang_ThreadLocal_remove(jcontext ctx, jobject self);
jobject SM_java_lang_ThreadLocal_withInitial_java_util_function_Supplier_R_java_lang_ThreadLocal(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
