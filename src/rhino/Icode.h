#ifndef HEADER_rhino_Icode
#define HEADER_rhino_Icode

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Icode {
	java_lang_Object parent;
} rhino_Icode;

extern Class class_rhino_Icode;

extern jint SF_rhino_Icode_Icode_DELNAME;
extern jint SF_rhino_Icode_Icode_DUP;
extern jint SF_rhino_Icode_Icode_DUP2;
extern jint SF_rhino_Icode_Icode_SWAP;
extern jint SF_rhino_Icode_Icode_POP;
extern jint SF_rhino_Icode_Icode_POP_RESULT;
extern jint SF_rhino_Icode_Icode_IFEQ_POP;
extern jint SF_rhino_Icode_Icode_VAR_INC_DEC;
extern jint SF_rhino_Icode_Icode_NAME_INC_DEC;
extern jint SF_rhino_Icode_Icode_PROP_INC_DEC;
extern jint SF_rhino_Icode_Icode_ELEM_INC_DEC;
extern jint SF_rhino_Icode_Icode_REF_INC_DEC;
extern jint SF_rhino_Icode_Icode_SCOPE_LOAD;
extern jint SF_rhino_Icode_Icode_SCOPE_SAVE;
extern jint SF_rhino_Icode_Icode_TYPEOFNAME;
extern jint SF_rhino_Icode_Icode_NAME_AND_THIS;
extern jint SF_rhino_Icode_Icode_PROP_AND_THIS;
extern jint SF_rhino_Icode_Icode_ELEM_AND_THIS;
extern jint SF_rhino_Icode_Icode_VALUE_AND_THIS;
extern jint SF_rhino_Icode_Icode_CLOSURE_EXPR;
extern jint SF_rhino_Icode_Icode_CLOSURE_STMT;
extern jint SF_rhino_Icode_Icode_CALLSPECIAL;
extern jint SF_rhino_Icode_Icode_RETUNDEF;
extern jint SF_rhino_Icode_Icode_GOSUB;
extern jint SF_rhino_Icode_Icode_STARTSUB;
extern jint SF_rhino_Icode_Icode_RETSUB;
extern jint SF_rhino_Icode_Icode_LINE;
extern jint SF_rhino_Icode_Icode_SHORTNUMBER;
extern jint SF_rhino_Icode_Icode_INTNUMBER;
extern jint SF_rhino_Icode_Icode_LITERAL_NEW;
extern jint SF_rhino_Icode_Icode_LITERAL_SET;
extern jint SF_rhino_Icode_Icode_SPARE_ARRAYLIT;
extern jint SF_rhino_Icode_Icode_REG_IND_C0;
extern jint SF_rhino_Icode_Icode_REG_IND_C1;
extern jint SF_rhino_Icode_Icode_REG_IND_C2;
extern jint SF_rhino_Icode_Icode_REG_IND_C3;
extern jint SF_rhino_Icode_Icode_REG_IND_C4;
extern jint SF_rhino_Icode_Icode_REG_IND_C5;
extern jint SF_rhino_Icode_Icode_REG_IND1;
extern jint SF_rhino_Icode_Icode_REG_IND2;
extern jint SF_rhino_Icode_Icode_REG_IND4;
extern jint SF_rhino_Icode_Icode_REG_STR_C0;
extern jint SF_rhino_Icode_Icode_REG_STR_C1;
extern jint SF_rhino_Icode_Icode_REG_STR_C2;
extern jint SF_rhino_Icode_Icode_REG_STR_C3;
extern jint SF_rhino_Icode_Icode_REG_STR1;
extern jint SF_rhino_Icode_Icode_REG_STR2;
extern jint SF_rhino_Icode_Icode_REG_STR4;
extern jint SF_rhino_Icode_Icode_GETVAR1;
extern jint SF_rhino_Icode_Icode_SETVAR1;
extern jint SF_rhino_Icode_Icode_UNDEF;
extern jint SF_rhino_Icode_Icode_ZERO;
extern jint SF_rhino_Icode_Icode_ONE;
extern jint SF_rhino_Icode_Icode_ENTERDQ;
extern jint SF_rhino_Icode_Icode_LEAVEDQ;
extern jint SF_rhino_Icode_Icode_TAIL_CALL;
extern jint SF_rhino_Icode_Icode_LOCAL_CLEAR;
extern jint SF_rhino_Icode_Icode_LITERAL_GETTER;
extern jint SF_rhino_Icode_Icode_LITERAL_SETTER;
extern jint SF_rhino_Icode_Icode_SETCONST;
extern jint SF_rhino_Icode_Icode_SETCONSTVAR;
extern jint SF_rhino_Icode_Icode_SETCONSTVAR1;
extern jint SF_rhino_Icode_Icode_GENERATOR;
extern jint SF_rhino_Icode_Icode_GENERATOR_END;
extern jint SF_rhino_Icode_Icode_DEBUGGER;
extern jint SF_rhino_Icode_Icode_GENERATOR_RETURN;
extern jint SF_rhino_Icode_Icode_YIELD_STAR;
extern jint SF_rhino_Icode_MIN_ICODE;

#define VTABLE_rhino_Icode_hashCode_R_int 0
typedef jint (*func_rhino_Icode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Icode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Icode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Icode_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Icode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Icode_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Icode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Icode_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Icode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Icode_finalize 5
typedef void (*func_rhino_Icode_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Icode_notify 6
typedef void (*func_rhino_Icode_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Icode_notifyAll 7
typedef void (*func_rhino_Icode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Icode_wait 8
typedef void (*func_rhino_Icode_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Icode_wait_long 9
typedef void (*func_rhino_Icode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Icode_wait_long_int 10
typedef void (*func_rhino_Icode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_Icode(jobject object, jint mark, jint depth);
void clinit_rhino_Icode(jcontext ctx);
void init_rhino_Icode(jcontext ctx, jobject self);
jobject SM_rhino_Icode_bytecodeName_int_R_java_lang_String(jcontext ctx, jint param0);
jbool SM_rhino_Icode_validIcode_int_R_boolean(jcontext ctx, jint param0);
jbool SM_rhino_Icode_validTokenCode_int_R_boolean(jcontext ctx, jint param0);
jbool SM_rhino_Icode_validBytecode_int_R_boolean(jcontext ctx, jint param0);

#ifdef __cplusplus
}
#endif

#endif
