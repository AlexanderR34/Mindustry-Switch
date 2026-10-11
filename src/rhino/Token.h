#ifndef HEADER_rhino_Token
#define HEADER_rhino_Token

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Token {
	java_lang_Object parent;
} rhino_Token;

extern Class class_rhino_Token;

extern jbool SF_rhino_Token_printTrees;
extern jbool SF_rhino_Token_printICode;
extern jbool SF_rhino_Token_printNames;
extern jint SF_rhino_Token_ERROR;
extern jint SF_rhino_Token_EOF;
extern jint SF_rhino_Token_EOL;
extern jint SF_rhino_Token_FIRST_BYTECODE_TOKEN;
extern jint SF_rhino_Token_ENTERWITH;
extern jint SF_rhino_Token_LEAVEWITH;
extern jint SF_rhino_Token_RETURN;
extern jint SF_rhino_Token_GOTO;
extern jint SF_rhino_Token_IFEQ;
extern jint SF_rhino_Token_IFNE;
extern jint SF_rhino_Token_SETNAME;
extern jint SF_rhino_Token_BITOR;
extern jint SF_rhino_Token_BITXOR;
extern jint SF_rhino_Token_BITAND;
extern jint SF_rhino_Token_EQ;
extern jint SF_rhino_Token_NE;
extern jint SF_rhino_Token_LT;
extern jint SF_rhino_Token_LE;
extern jint SF_rhino_Token_GT;
extern jint SF_rhino_Token_GE;
extern jint SF_rhino_Token_LSH;
extern jint SF_rhino_Token_RSH;
extern jint SF_rhino_Token_URSH;
extern jint SF_rhino_Token_ADD;
extern jint SF_rhino_Token_SUB;
extern jint SF_rhino_Token_MUL;
extern jint SF_rhino_Token_DIV;
extern jint SF_rhino_Token_MOD;
extern jint SF_rhino_Token_NOT;
extern jint SF_rhino_Token_BITNOT;
extern jint SF_rhino_Token_POS;
extern jint SF_rhino_Token_NEG;
extern jint SF_rhino_Token_NEW;
extern jint SF_rhino_Token_DELPROP;
extern jint SF_rhino_Token_TYPEOF;
extern jint SF_rhino_Token_GETPROP;
extern jint SF_rhino_Token_GETPROPNOWARN;
extern jint SF_rhino_Token_SETPROP;
extern jint SF_rhino_Token_GETELEM;
extern jint SF_rhino_Token_SETELEM;
extern jint SF_rhino_Token_CALL;
extern jint SF_rhino_Token_NAME;
extern jint SF_rhino_Token_NUMBER;
extern jint SF_rhino_Token_STRING;
extern jint SF_rhino_Token_NULL;
extern jint SF_rhino_Token_THIS;
extern jint SF_rhino_Token_FALSE;
extern jint SF_rhino_Token_TRUE;
extern jint SF_rhino_Token_SHEQ;
extern jint SF_rhino_Token_SHNE;
extern jint SF_rhino_Token_REGEXP;
extern jint SF_rhino_Token_BINDNAME;
extern jint SF_rhino_Token_THROW;
extern jint SF_rhino_Token_RETHROW;
extern jint SF_rhino_Token_IN;
extern jint SF_rhino_Token_INSTANCEOF;
extern jint SF_rhino_Token_LOCAL_LOAD;
extern jint SF_rhino_Token_GETVAR;
extern jint SF_rhino_Token_SETVAR;
extern jint SF_rhino_Token_CATCH_SCOPE;
extern jint SF_rhino_Token_ENUM_INIT_KEYS;
extern jint SF_rhino_Token_ENUM_INIT_VALUES;
extern jint SF_rhino_Token_ENUM_INIT_ARRAY;
extern jint SF_rhino_Token_ENUM_INIT_VALUES_IN_ORDER;
extern jint SF_rhino_Token_ENUM_NEXT;
extern jint SF_rhino_Token_ENUM_ID;
extern jint SF_rhino_Token_THISFN;
extern jint SF_rhino_Token_RETURN_RESULT;
extern jint SF_rhino_Token_ARRAYLIT;
extern jint SF_rhino_Token_OBJECTLIT;
extern jint SF_rhino_Token_GET_REF;
extern jint SF_rhino_Token_SET_REF;
extern jint SF_rhino_Token_DEL_REF;
extern jint SF_rhino_Token_REF_CALL;
extern jint SF_rhino_Token_REF_SPECIAL;
extern jint SF_rhino_Token_YIELD;
extern jint SF_rhino_Token_STRICT_SETNAME;
extern jint SF_rhino_Token_REF_MEMBER;
extern jint SF_rhino_Token_REF_NS_MEMBER;
extern jint SF_rhino_Token_REF_NAME;
extern jint SF_rhino_Token_REF_NS_NAME;
extern jint SF_rhino_Token_LAST_BYTECODE_TOKEN;
extern jint SF_rhino_Token_TRY;
extern jint SF_rhino_Token_SEMI;
extern jint SF_rhino_Token_LB;
extern jint SF_rhino_Token_RB;
extern jint SF_rhino_Token_LC;
extern jint SF_rhino_Token_RC;
extern jint SF_rhino_Token_LP;
extern jint SF_rhino_Token_RP;
extern jint SF_rhino_Token_COMMA;
extern jint SF_rhino_Token_ASSIGN;
extern jint SF_rhino_Token_ASSIGN_BITOR;
extern jint SF_rhino_Token_ASSIGN_BITXOR;
extern jint SF_rhino_Token_ASSIGN_BITAND;
extern jint SF_rhino_Token_ASSIGN_LSH;
extern jint SF_rhino_Token_ASSIGN_RSH;
extern jint SF_rhino_Token_ASSIGN_URSH;
extern jint SF_rhino_Token_ASSIGN_ADD;
extern jint SF_rhino_Token_ASSIGN_SUB;
extern jint SF_rhino_Token_ASSIGN_MUL;
extern jint SF_rhino_Token_ASSIGN_DIV;
extern jint SF_rhino_Token_ASSIGN_MOD;
extern jint SF_rhino_Token_FIRST_ASSIGN;
extern jint SF_rhino_Token_LAST_ASSIGN;
extern jint SF_rhino_Token_HOOK;
extern jint SF_rhino_Token_COLON;
extern jint SF_rhino_Token_OR;
extern jint SF_rhino_Token_AND;
extern jint SF_rhino_Token_INC;
extern jint SF_rhino_Token_DEC;
extern jint SF_rhino_Token_DOT;
extern jint SF_rhino_Token_FUNCTION;
extern jint SF_rhino_Token_EXPORT;
extern jint SF_rhino_Token_IMPORT;
extern jint SF_rhino_Token_IF;
extern jint SF_rhino_Token_ELSE;
extern jint SF_rhino_Token_SWITCH;
extern jint SF_rhino_Token_CASE;
extern jint SF_rhino_Token_DEFAULT;
extern jint SF_rhino_Token_WHILE;
extern jint SF_rhino_Token_DO;
extern jint SF_rhino_Token_FOR;
extern jint SF_rhino_Token_BREAK;
extern jint SF_rhino_Token_CONTINUE;
extern jint SF_rhino_Token_VAR;
extern jint SF_rhino_Token_WITH;
extern jint SF_rhino_Token_CATCH;
extern jint SF_rhino_Token_FINALLY;
extern jint SF_rhino_Token_VOID;
extern jint SF_rhino_Token_RESERVED;
extern jint SF_rhino_Token_EMPTY;
extern jint SF_rhino_Token_BLOCK;
extern jint SF_rhino_Token_LABEL;
extern jint SF_rhino_Token_TARGET;
extern jint SF_rhino_Token_LOOP;
extern jint SF_rhino_Token_EXPR_VOID;
extern jint SF_rhino_Token_EXPR_RESULT;
extern jint SF_rhino_Token_JSR;
extern jint SF_rhino_Token_SCRIPT;
extern jint SF_rhino_Token_TYPEOFNAME;
extern jint SF_rhino_Token_USE_STACK;
extern jint SF_rhino_Token_SETPROP_OP;
extern jint SF_rhino_Token_SETELEM_OP;
extern jint SF_rhino_Token_LOCAL_BLOCK;
extern jint SF_rhino_Token_SET_REF_OP;
extern jint SF_rhino_Token_TO_OBJECT;
extern jint SF_rhino_Token_TO_DOUBLE;
extern jint SF_rhino_Token_GET;
extern jint SF_rhino_Token_SET;
extern jint SF_rhino_Token_LET;
extern jint SF_rhino_Token_CONST;
extern jint SF_rhino_Token_SETCONST;
extern jint SF_rhino_Token_SETCONSTVAR;
extern jint SF_rhino_Token_ARRAYCOMP;
extern jint SF_rhino_Token_LETEXPR;
extern jint SF_rhino_Token_WITHEXPR;
extern jint SF_rhino_Token_DEBUGGER;
extern jint SF_rhino_Token_COMMENT;
extern jint SF_rhino_Token_GENEXPR;
extern jint SF_rhino_Token_METHOD;
extern jint SF_rhino_Token_ARROW;
extern jint SF_rhino_Token_YIELD_STAR;
extern jint SF_rhino_Token_LAST_TOKEN;

#define VTABLE_rhino_Token_hashCode_R_int 0
typedef jint (*func_rhino_Token_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Token_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Token_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Token_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Token_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Token_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token_finalize 5
typedef void (*func_rhino_Token_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token_notify 6
typedef void (*func_rhino_Token_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token_notifyAll 7
typedef void (*func_rhino_Token_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token_wait 8
typedef void (*func_rhino_Token_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Token_wait_long 9
typedef void (*func_rhino_Token_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Token_wait_long_int 10
typedef void (*func_rhino_Token_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_Token(jobject object, jint mark, jint depth);
void clinit_rhino_Token(jcontext ctx);
void init_rhino_Token(jcontext ctx, jobject self);
jobject SM_rhino_Token_name_int_R_java_lang_String(jcontext ctx, jint param0);
jobject SM_rhino_Token_typeToName_int_R_java_lang_String(jcontext ctx, jint param0);
jobject SM_rhino_Token_keywordToName_int_R_java_lang_String(jcontext ctx, jint param0);
jbool SM_rhino_Token_isValidToken_int_R_boolean(jcontext ctx, jint param0);

#ifdef __cplusplus
}
#endif

#endif
