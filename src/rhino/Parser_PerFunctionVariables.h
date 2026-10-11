#ifndef HEADER_rhino_Parser$PerFunctionVariables
#define HEADER_rhino_Parser$PerFunctionVariables

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Parser$PerFunctionVariables {
	java_lang_Object parent;
	jref F_savedCurrentScriptOrFn;
	jref F_savedCurrentScope;
	jint F_savedEndFlags;
	jbool F_savedInForInit;
	jref F_savedLabelSet;
	jref F_savedLoopSet;
	jref F_savedLoopAndSwitchSet;
	jref F_this$0;
} rhino_Parser$PerFunctionVariables;

extern Class class_rhino_Parser$PerFunctionVariables;


#define VTABLE_rhino_Parser$PerFunctionVariables_hashCode_R_int 0
typedef jint (*func_rhino_Parser$PerFunctionVariables_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$PerFunctionVariables_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Parser$PerFunctionVariables_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Parser$PerFunctionVariables_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Parser$PerFunctionVariables_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$PerFunctionVariables_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Parser$PerFunctionVariables_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$PerFunctionVariables_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Parser$PerFunctionVariables_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$PerFunctionVariables_finalize 5
typedef void (*func_rhino_Parser$PerFunctionVariables_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$PerFunctionVariables_notify 6
typedef void (*func_rhino_Parser$PerFunctionVariables_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$PerFunctionVariables_notifyAll 7
typedef void (*func_rhino_Parser$PerFunctionVariables_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$PerFunctionVariables_wait 8
typedef void (*func_rhino_Parser$PerFunctionVariables_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Parser$PerFunctionVariables_wait_long 9
typedef void (*func_rhino_Parser$PerFunctionVariables_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Parser$PerFunctionVariables_wait_long_int 10
typedef void (*func_rhino_Parser$PerFunctionVariables_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_Parser$PerFunctionVariables_restore 11
typedef void (*func_rhino_Parser$PerFunctionVariables_restore)(jcontext ctx, jobject self);

void mark_rhino_Parser$PerFunctionVariables(jobject object, jint mark, jint depth);
void clinit_rhino_Parser$PerFunctionVariables(jcontext ctx);
void init_rhino_Parser$PerFunctionVariables_rhino_Parser_rhino_ast_FunctionNode(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_Parser$PerFunctionVariables_restore(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
