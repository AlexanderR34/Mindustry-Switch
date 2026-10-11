#ifndef HEADER_rhino_WrapFactory
#define HEADER_rhino_WrapFactory

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_WrapFactory {
	java_lang_Object parent;
	jbool F_javaPrimitiveWrap;
} rhino_WrapFactory;

extern Class class_rhino_WrapFactory;


#define VTABLE_rhino_WrapFactory_hashCode_R_int 0
typedef jint (*func_rhino_WrapFactory_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_WrapFactory_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_WrapFactory_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_WrapFactory_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_WrapFactory_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_WrapFactory_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_WrapFactory_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_WrapFactory_toString_R_java_lang_String 4
typedef jobject (*func_rhino_WrapFactory_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_WrapFactory_finalize 5
typedef void (*func_rhino_WrapFactory_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_WrapFactory_notify 6
typedef void (*func_rhino_WrapFactory_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_WrapFactory_notifyAll 7
typedef void (*func_rhino_WrapFactory_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_WrapFactory_wait 8
typedef void (*func_rhino_WrapFactory_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_WrapFactory_wait_long 9
typedef void (*func_rhino_WrapFactory_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_WrapFactory_wait_long_int 10
typedef void (*func_rhino_WrapFactory_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object 11
typedef jobject (*func_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_rhino_WrapFactory_wrapNewObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable 12
typedef jobject (*func_rhino_WrapFactory_wrapNewObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable 13
typedef jobject (*func_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_rhino_WrapFactory_wrapJavaClass_rhino_Context_rhino_Scriptable_java_lang_Class_R_rhino_Scriptable 14
typedef jobject (*func_rhino_WrapFactory_wrapJavaClass_rhino_Context_rhino_Scriptable_java_lang_Class_R_rhino_Scriptable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_WrapFactory_isJavaPrimitiveWrap_R_boolean 15
typedef jbool (*func_rhino_WrapFactory_isJavaPrimitiveWrap_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_WrapFactory_setJavaPrimitiveWrap_boolean 16
typedef void (*func_rhino_WrapFactory_setJavaPrimitiveWrap_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_rhino_WrapFactory(jobject object, jint mark, jint depth);
void clinit_rhino_WrapFactory(jcontext ctx);
void init_rhino_WrapFactory(jcontext ctx, jobject self);
jobject M_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_rhino_WrapFactory_wrapNewObject_rhino_Context_rhino_Scriptable_java_lang_Object_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_rhino_WrapFactory_wrapAsJavaObject_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_rhino_WrapFactory_wrapJavaClass_rhino_Context_rhino_Scriptable_java_lang_Class_R_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jbool M_rhino_WrapFactory_isJavaPrimitiveWrap_R_boolean(jcontext ctx, jobject self);
void M_rhino_WrapFactory_setJavaPrimitiveWrap_boolean(jcontext ctx, jobject self, jbool param0);

#ifdef __cplusplus
}
#endif

#endif
