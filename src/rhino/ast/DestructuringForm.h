#ifndef HEADER_rhino_ast_DestructuringForm
#define HEADER_rhino_ast_DestructuringForm

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_DestructuringForm {
	java_lang_Object parent;
} rhino_ast_DestructuringForm;

extern Class class_rhino_ast_DestructuringForm;


#define INDEX_rhino_ast_DestructuringForm_setIsDestructuring_boolean 0
typedef void (*func_rhino_ast_DestructuringForm_setIsDestructuring_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_rhino_ast_DestructuringForm_isDestructuring_R_boolean 1
typedef jbool (*func_rhino_ast_DestructuringForm_isDestructuring_R_boolean)(jcontext ctx, jobject self);

void mark_rhino_ast_DestructuringForm(jobject object, jint mark, jint depth);
void clinit_rhino_ast_DestructuringForm(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
