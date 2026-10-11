#ifndef HEADER_rhino_ContextFactory
#define HEADER_rhino_ContextFactory

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ContextFactory {
	java_lang_Object parent;
	volatile jbool F_sealed;
	jref F_listenersLock;
	volatile jref F_listeners;
	jbool F_disabledListening;
	jref F_applicationClassLoader;
} rhino_ContextFactory;

extern Class class_rhino_ContextFactory;

extern volatile jbool SF_rhino_ContextFactory_hasCustomGlobal;
extern jobject SF_rhino_ContextFactory_global;

#define VTABLE_rhino_ContextFactory_hashCode_R_int 0
typedef jint (*func_rhino_ContextFactory_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ContextFactory_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContextFactory_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ContextFactory_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ContextFactory_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ContextFactory_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory_finalize 5
typedef void (*func_rhino_ContextFactory_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory_notify 6
typedef void (*func_rhino_ContextFactory_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory_notifyAll 7
typedef void (*func_rhino_ContextFactory_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory_wait 8
typedef void (*func_rhino_ContextFactory_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory_wait_long 9
typedef void (*func_rhino_ContextFactory_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ContextFactory_wait_long_int 10
typedef void (*func_rhino_ContextFactory_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ContextFactory_makeContext_R_rhino_Context 11
typedef jobject (*func_rhino_ContextFactory_makeContext_R_rhino_Context)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory_hasFeature_rhino_Context_int_R_boolean 12
typedef jbool (*func_rhino_ContextFactory_hasFeature_rhino_Context_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_ContextFactory_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader 13
typedef jobject (*func_rhino_ContextFactory_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContextFactory_getApplicationClassLoader_R_java_lang_ClassLoader 14
typedef jobject (*func_rhino_ContextFactory_getApplicationClassLoader_R_java_lang_ClassLoader)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory_initApplicationClassLoader_java_lang_ClassLoader 15
typedef void (*func_rhino_ContextFactory_initApplicationClassLoader_java_lang_ClassLoader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContextFactory_doTopCall_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 16
typedef jobject (*func_rhino_ContextFactory_doTopCall_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_rhino_ContextFactory_observeInstructionCount_rhino_Context_int 17
typedef void (*func_rhino_ContextFactory_observeInstructionCount_rhino_Context_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_ContextFactory_onContextCreated_rhino_Context 18
typedef void (*func_rhino_ContextFactory_onContextCreated_rhino_Context)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContextFactory_onContextReleased_rhino_Context 19
typedef void (*func_rhino_ContextFactory_onContextReleased_rhino_Context)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContextFactory_addListener_rhino_ContextFactory$Listener 20
typedef void (*func_rhino_ContextFactory_addListener_rhino_ContextFactory$Listener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContextFactory_removeListener_rhino_ContextFactory$Listener 21
typedef void (*func_rhino_ContextFactory_removeListener_rhino_ContextFactory$Listener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContextFactory_disableContextListening 22
typedef void (*func_rhino_ContextFactory_disableContextListening)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory_isSealed_R_boolean 23
typedef jbool (*func_rhino_ContextFactory_isSealed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory_seal 24
typedef void (*func_rhino_ContextFactory_seal)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory_checkNotSealed 25
typedef void (*func_rhino_ContextFactory_checkNotSealed)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory_call_rhino_ContextAction_R_java_lang_Object 26
typedef jobject (*func_rhino_ContextFactory_call_rhino_ContextAction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ContextFactory_enterContext_R_rhino_Context 27
typedef jobject (*func_rhino_ContextFactory_enterContext_R_rhino_Context)(jcontext ctx, jobject self);
#define VTABLE_rhino_ContextFactory_enterContext_rhino_Context_R_rhino_Context 28
typedef jobject (*func_rhino_ContextFactory_enterContext_rhino_Context_R_rhino_Context)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_ContextFactory(jobject object, jint mark, jint depth);
void clinit_rhino_ContextFactory(jcontext ctx);
void init_rhino_ContextFactory(jcontext ctx, jobject self);
jobject SM_rhino_ContextFactory_getGlobal_R_rhino_ContextFactory(jcontext ctx);
jbool SM_rhino_ContextFactory_hasExplicitGlobal_R_boolean(jcontext ctx);
void SM_rhino_ContextFactory_initGlobal_rhino_ContextFactory(jcontext ctx, jobject param0);
jobject SM_rhino_ContextFactory_getGlobalSetter_R_rhino_ContextFactory$GlobalSetter(jcontext ctx);
jobject M_rhino_ContextFactory_makeContext_R_rhino_Context(jcontext ctx, jobject self);
jbool M_rhino_ContextFactory_hasFeature_rhino_Context_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_rhino_ContextFactory_createClassLoader_java_lang_ClassLoader_R_rhino_GeneratedClassLoader(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ContextFactory_getApplicationClassLoader_R_java_lang_ClassLoader(jcontext ctx, jobject self);
void M_rhino_ContextFactory_initApplicationClassLoader_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ContextFactory_doTopCall_rhino_Callable_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
void M_rhino_ContextFactory_observeInstructionCount_rhino_Context_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_rhino_ContextFactory_onContextCreated_rhino_Context(jcontext ctx, jobject self, jobject param0);
void M_rhino_ContextFactory_onContextReleased_rhino_Context(jcontext ctx, jobject self, jobject param0);
void M_rhino_ContextFactory_addListener_rhino_ContextFactory$Listener(jcontext ctx, jobject self, jobject param0);
void M_rhino_ContextFactory_removeListener_rhino_ContextFactory$Listener(jcontext ctx, jobject self, jobject param0);
void M_rhino_ContextFactory_disableContextListening(jcontext ctx, jobject self);
jbool M_rhino_ContextFactory_isSealed_R_boolean(jcontext ctx, jobject self);
void M_rhino_ContextFactory_seal(jcontext ctx, jobject self);
void M_rhino_ContextFactory_checkNotSealed(jcontext ctx, jobject self);
jobject M_rhino_ContextFactory_call_rhino_ContextAction_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ContextFactory_enterContext_R_rhino_Context(jcontext ctx, jobject self);
jobject M_rhino_ContextFactory_enterContext_rhino_Context_R_rhino_Context(jcontext ctx, jobject self, jobject param0);
jobject SM_rhino_ContextFactory_access$002_rhino_ContextFactory_R_rhino_ContextFactory(jcontext ctx, jobject param0);
jobject SM_rhino_ContextFactory_access$000_R_rhino_ContextFactory(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
