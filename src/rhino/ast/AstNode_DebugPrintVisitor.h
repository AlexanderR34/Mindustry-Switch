#ifndef HEADER_rhino_ast_AstNode$DebugPrintVisitor
#define HEADER_rhino_ast_AstNode$DebugPrintVisitor

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/ast/NodeVisitor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_AstNode$DebugPrintVisitor {
	java_lang_Object parent;
	jref F_buffer;
} rhino_ast_AstNode$DebugPrintVisitor;

extern Class class_rhino_ast_AstNode$DebugPrintVisitor;

extern jint SF_rhino_ast_AstNode$DebugPrintVisitor_DEBUG_INDENT;

#define VTABLE_rhino_ast_AstNode$DebugPrintVisitor_hashCode_R_int 0
typedef jint (*func_rhino_ast_AstNode$DebugPrintVisitor_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstNode$DebugPrintVisitor_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ast_AstNode$DebugPrintVisitor_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstNode$DebugPrintVisitor_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ast_AstNode$DebugPrintVisitor_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstNode$DebugPrintVisitor_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ast_AstNode$DebugPrintVisitor_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstNode$DebugPrintVisitor_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ast_AstNode$DebugPrintVisitor_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstNode$DebugPrintVisitor_finalize 5
typedef void (*func_rhino_ast_AstNode$DebugPrintVisitor_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstNode$DebugPrintVisitor_notify 6
typedef void (*func_rhino_ast_AstNode$DebugPrintVisitor_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstNode$DebugPrintVisitor_notifyAll 7
typedef void (*func_rhino_ast_AstNode$DebugPrintVisitor_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstNode$DebugPrintVisitor_wait 8
typedef void (*func_rhino_ast_AstNode$DebugPrintVisitor_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_AstNode$DebugPrintVisitor_wait_long 9
typedef void (*func_rhino_ast_AstNode$DebugPrintVisitor_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ast_AstNode$DebugPrintVisitor_wait_long_int 10
typedef void (*func_rhino_ast_AstNode$DebugPrintVisitor_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ast_AstNode$DebugPrintVisitor_visit_rhino_ast_AstNode_R_boolean 11
typedef jbool (*func_rhino_ast_AstNode$DebugPrintVisitor_visit_rhino_ast_AstNode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_AstNode$DebugPrintVisitor_makeIndent_int_R_java_lang_String 12
typedef jobject (*func_rhino_ast_AstNode$DebugPrintVisitor_makeIndent_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);

void mark_rhino_ast_AstNode$DebugPrintVisitor(jobject object, jint mark, jint depth);
void clinit_rhino_ast_AstNode$DebugPrintVisitor(jcontext ctx);
void init_rhino_ast_AstNode$DebugPrintVisitor_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_AstNode$DebugPrintVisitor_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_ast_AstNode$DebugPrintVisitor_makeIndent_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jbool M_rhino_ast_AstNode$DebugPrintVisitor_visit_rhino_ast_AstNode_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
