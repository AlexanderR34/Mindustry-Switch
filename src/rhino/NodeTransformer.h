#ifndef HEADER_rhino_NodeTransformer
#define HEADER_rhino_NodeTransformer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_NodeTransformer {
	java_lang_Object parent;
	jref F_loops;
	jref F_loopEnds;
	jbool F_hasFinally;
} rhino_NodeTransformer;

extern Class class_rhino_NodeTransformer;


#define VTABLE_rhino_NodeTransformer_hashCode_R_int 0
typedef jint (*func_rhino_NodeTransformer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NodeTransformer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_NodeTransformer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NodeTransformer_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_NodeTransformer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NodeTransformer_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_NodeTransformer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_NodeTransformer_toString_R_java_lang_String 4
typedef jobject (*func_rhino_NodeTransformer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NodeTransformer_finalize 5
typedef void (*func_rhino_NodeTransformer_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_NodeTransformer_notify 6
typedef void (*func_rhino_NodeTransformer_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_NodeTransformer_notifyAll 7
typedef void (*func_rhino_NodeTransformer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_NodeTransformer_wait 8
typedef void (*func_rhino_NodeTransformer_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_NodeTransformer_wait_long 9
typedef void (*func_rhino_NodeTransformer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_NodeTransformer_wait_long_int 10
typedef void (*func_rhino_NodeTransformer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_rhino_CompilerEnvirons 11
typedef void (*func_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_rhino_CompilerEnvirons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_boolean_rhino_CompilerEnvirons 12
typedef void (*func_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_boolean_rhino_CompilerEnvirons)(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
#define VTABLE_rhino_NodeTransformer_transformCompilationUnit_rhino_ast_ScriptNode_boolean 13
typedef void (*func_rhino_NodeTransformer_transformCompilationUnit_rhino_ast_ScriptNode_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_rhino_NodeTransformer_transformCompilationUnit_r_rhino_ast_ScriptNode_rhino_Node_rhino_ast_Scope_boolean_boolean 14
typedef void (*func_rhino_NodeTransformer_transformCompilationUnit_r_rhino_ast_ScriptNode_rhino_Node_rhino_ast_Scope_boolean_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4);
#define VTABLE_rhino_NodeTransformer_visitNew_rhino_Node_rhino_ast_ScriptNode 15
typedef void (*func_rhino_NodeTransformer_visitNew_rhino_Node_rhino_ast_ScriptNode)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NodeTransformer_visitCall_rhino_Node_rhino_ast_ScriptNode 16
typedef void (*func_rhino_NodeTransformer_visitCall_rhino_Node_rhino_ast_ScriptNode)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_NodeTransformer_visitLet_boolean_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node 17
typedef jobject (*func_rhino_NodeTransformer_visitLet_boolean_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node)(jcontext ctx, jobject self, jbool param0, jobject param1, jobject param2, jobject param3);

void mark_rhino_NodeTransformer(jobject object, jint mark, jint depth);
void clinit_rhino_NodeTransformer(jcontext ctx);
void init_rhino_NodeTransformer(jcontext ctx, jobject self);
void M_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_rhino_CompilerEnvirons(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_NodeTransformer_transform_rhino_ast_ScriptNode_boolean_rhino_CompilerEnvirons(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2);
void M_rhino_NodeTransformer_transformCompilationUnit_rhino_ast_ScriptNode_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_rhino_NodeTransformer_transformCompilationUnit_r_rhino_ast_ScriptNode_rhino_Node_rhino_ast_Scope_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4);
void M_rhino_NodeTransformer_visitNew_rhino_Node_rhino_ast_ScriptNode(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_NodeTransformer_visitCall_rhino_Node_rhino_ast_ScriptNode(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_NodeTransformer_visitLet_boolean_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject self, jbool param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_NodeTransformer_addBeforeCurrent_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_rhino_NodeTransformer_replaceCurrent_rhino_Node_rhino_Node_rhino_Node_rhino_Node_R_rhino_Node(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);

#ifdef __cplusplus
}
#endif

#endif
