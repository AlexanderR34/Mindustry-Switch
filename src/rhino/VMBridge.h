#ifndef HEADER_rhino_VMBridge
#define HEADER_rhino_VMBridge

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_VMBridge {
	java_lang_Object parent;
} rhino_VMBridge;

extern Class class_rhino_VMBridge;

extern jobject SF_rhino_VMBridge_contextLocal;

#define VTABLE_rhino_VMBridge_hashCode_R_int 0
typedef jint (*func_rhino_VMBridge_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_VMBridge_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_VMBridge_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_VMBridge_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_VMBridge_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_VMBridge_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_VMBridge_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_VMBridge_toString_R_java_lang_String 4
typedef jobject (*func_rhino_VMBridge_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_VMBridge_finalize 5
typedef void (*func_rhino_VMBridge_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_VMBridge_notify 6
typedef void (*func_rhino_VMBridge_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_VMBridge_notifyAll 7
typedef void (*func_rhino_VMBridge_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_VMBridge_wait 8
typedef void (*func_rhino_VMBridge_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_VMBridge_wait_long 9
typedef void (*func_rhino_VMBridge_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_VMBridge_wait_long_int 10
typedef void (*func_rhino_VMBridge_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_VMBridge(jobject object, jint mark, jint depth);
void clinit_rhino_VMBridge(jcontext ctx);
void init_rhino_VMBridge(jcontext ctx, jobject self);
jobject SM_rhino_VMBridge_getThreadContextHelper_R_java_lang_Object(jcontext ctx);
jobject SM_rhino_VMBridge_getContext_java_lang_Object_R_rhino_Context(jcontext ctx, jobject param0);
void SM_rhino_VMBridge_setContext_java_lang_Object_rhino_Context(jcontext ctx, jobject param0, jobject param1);
jbool SM_rhino_VMBridge_tryToMakeAccessible_java_lang_reflect_AccessibleObject_R_boolean(jcontext ctx, jobject param0);
jobject SM_rhino_VMBridge_getInterfaceProxyHelper_rhino_ContextFactory_Array1_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_rhino_VMBridge_newInterfaceProxy_java_lang_Object_rhino_ContextFactory_rhino_InterfaceAdapter_java_lang_Object_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jobject SM_rhino_VMBridge_lambda$newInterfaceProxy$0_java_lang_Object_rhino_InterfaceAdapter_rhino_ContextFactory_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);

#ifdef __cplusplus
}
#endif

#endif
