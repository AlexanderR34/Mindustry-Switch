#ifndef HEADER_rhino_ContextFactory$1GlobalSetterImpl
#define HEADER_rhino_ContextFactory$1GlobalSetterImpl

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/ContextFactory_GlobalSetter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ContextFactory$1GlobalSetterImpl {
	java_lang_Object parent;
} rhino_ContextFactory$1GlobalSetterImpl;

extern Class class_rhino_ContextFactory$1GlobalSetterImpl;


#define VTABLE_rhino_ContextFactory$1GlobalSetterImpl_hashCode_R_int 0
typedef jint (*func_rhino_ContextFactory$1GlobalSetterImpl_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory$1GlobalSetterImpl_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ContextFactory$1GlobalSetterImpl_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContextFactory$1GlobalSetterImpl_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ContextFactory$1GlobalSetterImpl_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory$1GlobalSetterImpl_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ContextFactory$1GlobalSetterImpl_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory$1GlobalSetterImpl_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ContextFactory$1GlobalSetterImpl_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory$1GlobalSetterImpl_finalize 5
typedef void (*func_rhino_ContextFactory$1GlobalSetterImpl_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory$1GlobalSetterImpl_notify 6
typedef void (*func_rhino_ContextFactory$1GlobalSetterImpl_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory$1GlobalSetterImpl_notifyAll 7
typedef void (*func_rhino_ContextFactory$1GlobalSetterImpl_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory$1GlobalSetterImpl_wait 8
typedef void (*func_rhino_ContextFactory$1GlobalSetterImpl_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory$1GlobalSetterImpl_wait_long 9
typedef void (*func_rhino_ContextFactory$1GlobalSetterImpl_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ContextFactory$1GlobalSetterImpl_wait_long_int 10
typedef void (*func_rhino_ContextFactory$1GlobalSetterImpl_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ContextFactory$1GlobalSetterImpl_setContextFactoryGlobal_rhino_ContextFactory 11
typedef void (*func_rhino_ContextFactory$1GlobalSetterImpl_setContextFactoryGlobal_rhino_ContextFactory)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContextFactory$1GlobalSetterImpl_getContextFactoryGlobal_R_rhino_ContextFactory 12
typedef jobject (*func_rhino_ContextFactory$1GlobalSetterImpl_getContextFactoryGlobal_R_rhino_ContextFactory)(jcontext ctx, jobject self);

void mark_rhino_ContextFactory$1GlobalSetterImpl(jobject object, jint mark, jint depth);
void clinit_rhino_ContextFactory$1GlobalSetterImpl(jcontext ctx);
void init_rhino_ContextFactory$1GlobalSetterImpl(jcontext ctx, jobject self);
void M_rhino_ContextFactory$1GlobalSetterImpl_setContextFactoryGlobal_rhino_ContextFactory(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ContextFactory$1GlobalSetterImpl_getContextFactoryGlobal_R_rhino_ContextFactory(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
