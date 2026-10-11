#ifndef HEADER_rhino_ast_Symbol
#define HEADER_rhino_ast_Symbol

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ast_Symbol {
	java_lang_Object parent;
	jint F_declType;
	jint F_index;
	jref F_name;
	jref F_node;
	jref F_containingTable;
} rhino_ast_Symbol;

extern Class class_rhino_ast_Symbol;


#define VTABLE_rhino_ast_Symbol_hashCode_R_int 0
typedef jint (*func_rhino_ast_Symbol_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Symbol_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ast_Symbol_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Symbol_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ast_Symbol_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Symbol_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ast_Symbol_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Symbol_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ast_Symbol_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Symbol_finalize 5
typedef void (*func_rhino_ast_Symbol_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Symbol_notify 6
typedef void (*func_rhino_ast_Symbol_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Symbol_notifyAll 7
typedef void (*func_rhino_ast_Symbol_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Symbol_wait 8
typedef void (*func_rhino_ast_Symbol_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Symbol_wait_long 9
typedef void (*func_rhino_ast_Symbol_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ast_Symbol_wait_long_int 10
typedef void (*func_rhino_ast_Symbol_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ast_Symbol_getDeclType_R_int 11
typedef jint (*func_rhino_ast_Symbol_getDeclType_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Symbol_setDeclType_int 12
typedef void (*func_rhino_ast_Symbol_setDeclType_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Symbol_getName_R_java_lang_String 13
typedef jobject (*func_rhino_ast_Symbol_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Symbol_setName_java_lang_String 14
typedef void (*func_rhino_ast_Symbol_setName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Symbol_getNode_R_rhino_Node 15
typedef jobject (*func_rhino_ast_Symbol_getNode_R_rhino_Node)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Symbol_getIndex_R_int 16
typedef jint (*func_rhino_ast_Symbol_getIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Symbol_setIndex_int 17
typedef void (*func_rhino_ast_Symbol_setIndex_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ast_Symbol_setNode_rhino_Node 18
typedef void (*func_rhino_ast_Symbol_setNode_rhino_Node)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Symbol_getContainingTable_R_rhino_ast_Scope 19
typedef jobject (*func_rhino_ast_Symbol_getContainingTable_R_rhino_ast_Scope)(jcontext ctx, jobject self);
#define VTABLE_rhino_ast_Symbol_setContainingTable_rhino_ast_Scope 20
typedef void (*func_rhino_ast_Symbol_setContainingTable_rhino_ast_Scope)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ast_Symbol_getDeclTypeName_R_java_lang_String 21
typedef jobject (*func_rhino_ast_Symbol_getDeclTypeName_R_java_lang_String)(jcontext ctx, jobject self);

void mark_rhino_ast_Symbol(jobject object, jint mark, jint depth);
void clinit_rhino_ast_Symbol(jcontext ctx);
void init_rhino_ast_Symbol(jcontext ctx, jobject self);
void init_rhino_ast_Symbol_int_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1);
jint M_rhino_ast_Symbol_getDeclType_R_int(jcontext ctx, jobject self);
void M_rhino_ast_Symbol_setDeclType_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_ast_Symbol_getName_R_java_lang_String(jcontext ctx, jobject self);
void M_rhino_ast_Symbol_setName_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_Symbol_getNode_R_rhino_Node(jcontext ctx, jobject self);
jint M_rhino_ast_Symbol_getIndex_R_int(jcontext ctx, jobject self);
void M_rhino_ast_Symbol_setIndex_int(jcontext ctx, jobject self, jint param0);
void M_rhino_ast_Symbol_setNode_rhino_Node(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_Symbol_getContainingTable_R_rhino_ast_Scope(jcontext ctx, jobject self);
void M_rhino_ast_Symbol_setContainingTable_rhino_ast_Scope(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ast_Symbol_getDeclTypeName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_rhino_ast_Symbol_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
