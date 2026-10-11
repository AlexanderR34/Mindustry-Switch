#ifndef HEADER_rhino_ScriptStackElement
#define HEADER_rhino_ScriptStackElement

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ScriptStackElement {
	java_lang_Object parent;
	jref F_fileName;
	jref F_functionName;
	jint F_lineNumber;
} rhino_ScriptStackElement;

extern Class class_rhino_ScriptStackElement;


#define VTABLE_rhino_ScriptStackElement_hashCode_R_int 0
typedef jint (*func_rhino_ScriptStackElement_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptStackElement_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ScriptStackElement_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptStackElement_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ScriptStackElement_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptStackElement_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ScriptStackElement_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptStackElement_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ScriptStackElement_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptStackElement_finalize 5
typedef void (*func_rhino_ScriptStackElement_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptStackElement_notify 6
typedef void (*func_rhino_ScriptStackElement_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptStackElement_notifyAll 7
typedef void (*func_rhino_ScriptStackElement_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptStackElement_wait 8
typedef void (*func_rhino_ScriptStackElement_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptStackElement_wait_long 9
typedef void (*func_rhino_ScriptStackElement_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ScriptStackElement_wait_long_int 10
typedef void (*func_rhino_ScriptStackElement_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ScriptStackElement_renderJavaStyle_java_lang_StringBuilder 11
typedef void (*func_rhino_ScriptStackElement_renderJavaStyle_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptStackElement_renderMozillaStyle_java_lang_StringBuilder 12
typedef void (*func_rhino_ScriptStackElement_renderMozillaStyle_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptStackElement_renderV8Style_java_lang_StringBuilder 13
typedef void (*func_rhino_ScriptStackElement_renderV8Style_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptStackElement_appendV8Location_java_lang_StringBuilder 14
typedef void (*func_rhino_ScriptStackElement_appendV8Location_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_ScriptStackElement(jobject object, jint mark, jint depth);
void clinit_rhino_ScriptStackElement(jcontext ctx);
void init_rhino_ScriptStackElement_java_lang_String_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jobject M_rhino_ScriptStackElement_toString_R_java_lang_String(jcontext ctx, jobject self);
void M_rhino_ScriptStackElement_renderJavaStyle_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0);
void M_rhino_ScriptStackElement_renderMozillaStyle_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0);
void M_rhino_ScriptStackElement_renderV8Style_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0);
void M_rhino_ScriptStackElement_appendV8Location_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
