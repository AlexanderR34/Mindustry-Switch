#ifndef HEADER_rhino_SymbolScriptable
#define HEADER_rhino_SymbolScriptable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_SymbolScriptable {
	java_lang_Object parent;
} rhino_SymbolScriptable;

extern Class class_rhino_SymbolScriptable;


#define INDEX_rhino_SymbolScriptable_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object 0
typedef jobject (*func_rhino_SymbolScriptable_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_rhino_SymbolScriptable_has_rhino_Symbol_rhino_Scriptable_R_boolean 1
typedef jbool (*func_rhino_SymbolScriptable_has_rhino_Symbol_rhino_Scriptable_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object 2
typedef void (*func_rhino_SymbolScriptable_put_rhino_Symbol_rhino_Scriptable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define INDEX_rhino_SymbolScriptable_delete_rhino_Symbol 3
typedef void (*func_rhino_SymbolScriptable_delete_rhino_Symbol)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_SymbolScriptable(jobject object, jint mark, jint depth);
void clinit_rhino_SymbolScriptable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
