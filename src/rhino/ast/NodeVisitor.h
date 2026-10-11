#ifndef HEADER_rhino_ast_NodeVisitor
#define HEADER_rhino_ast_NodeVisitor

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_NodeVisitor {
	java_lang_Object parent;
} rhino_ast_NodeVisitor;

extern Class class_rhino_ast_NodeVisitor;


#define INDEX_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean 0
typedef jbool (*func_rhino_ast_NodeVisitor_visit_rhino_ast_AstNode_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_ast_NodeVisitor(jobject object, jint mark, jint depth);
void clinit_rhino_ast_NodeVisitor(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
