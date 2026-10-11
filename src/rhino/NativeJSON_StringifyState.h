#ifndef HEADER_rhino_NativeJSON$StringifyState
#define HEADER_rhino_NativeJSON$StringifyState

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_NativeJSON$StringifyState {
	java_lang_Object parent;
	jref F_stack;
	jref F_indent;
	jref F_gap;
	jref F_replacer;
	jref F_propertyList;
	jref F_space;
	jref F_cx;
	jref F_scope;
} rhino_NativeJSON$StringifyState;

extern Class class_rhino_NativeJSON$StringifyState;


#define VTABLE_rhino_NativeJSON$StringifyState_hashCode_R_int 0
typedef jint (*func_rhino_NativeJSON$StringifyState_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJSON$StringifyState_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_NativeJSON$StringifyState_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeJSON$StringifyState_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_NativeJSON$StringifyState_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJSON$StringifyState_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_NativeJSON$StringifyState_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJSON$StringifyState_toString_R_java_lang_String 4
typedef jobject (*func_rhino_NativeJSON$StringifyState_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJSON$StringifyState_finalize 5
typedef void (*func_rhino_NativeJSON$StringifyState_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJSON$StringifyState_notify 6
typedef void (*func_rhino_NativeJSON$StringifyState_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJSON$StringifyState_notifyAll 7
typedef void (*func_rhino_NativeJSON$StringifyState_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJSON$StringifyState_wait 8
typedef void (*func_rhino_NativeJSON$StringifyState_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeJSON$StringifyState_wait_long 9
typedef void (*func_rhino_NativeJSON$StringifyState_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_NativeJSON$StringifyState_wait_long_int 10
typedef void (*func_rhino_NativeJSON$StringifyState_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_NativeJSON$StringifyState(jobject object, jint mark, jint depth);
void clinit_rhino_NativeJSON$StringifyState(jcontext ctx);
void init_rhino_NativeJSON$StringifyState_rhino_Context_rhino_Scriptable_java_lang_String_java_lang_String_rhino_Callable_java_util_List_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);

#ifdef __cplusplus
}
#endif

#endif
