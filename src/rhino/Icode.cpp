#include "rhino/Icode.h"
#include "rhino/Icode.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/IllegalArgumentException.h"

extern "C" {

jint SF_rhino_Icode_Icode_DELNAME;
jint SF_rhino_Icode_Icode_DUP;
jint SF_rhino_Icode_Icode_DUP2;
jint SF_rhino_Icode_Icode_SWAP;
jint SF_rhino_Icode_Icode_POP;
jint SF_rhino_Icode_Icode_POP_RESULT;
jint SF_rhino_Icode_Icode_IFEQ_POP;
jint SF_rhino_Icode_Icode_VAR_INC_DEC;
jint SF_rhino_Icode_Icode_NAME_INC_DEC;
jint SF_rhino_Icode_Icode_PROP_INC_DEC;
jint SF_rhino_Icode_Icode_ELEM_INC_DEC;
jint SF_rhino_Icode_Icode_REF_INC_DEC;
jint SF_rhino_Icode_Icode_SCOPE_LOAD;
jint SF_rhino_Icode_Icode_SCOPE_SAVE;
jint SF_rhino_Icode_Icode_TYPEOFNAME;
jint SF_rhino_Icode_Icode_NAME_AND_THIS;
jint SF_rhino_Icode_Icode_PROP_AND_THIS;
jint SF_rhino_Icode_Icode_ELEM_AND_THIS;
jint SF_rhino_Icode_Icode_VALUE_AND_THIS;
jint SF_rhino_Icode_Icode_CLOSURE_EXPR;
jint SF_rhino_Icode_Icode_CLOSURE_STMT;
jint SF_rhino_Icode_Icode_CALLSPECIAL;
jint SF_rhino_Icode_Icode_RETUNDEF;
jint SF_rhino_Icode_Icode_GOSUB;
jint SF_rhino_Icode_Icode_STARTSUB;
jint SF_rhino_Icode_Icode_RETSUB;
jint SF_rhino_Icode_Icode_LINE;
jint SF_rhino_Icode_Icode_SHORTNUMBER;
jint SF_rhino_Icode_Icode_INTNUMBER;
jint SF_rhino_Icode_Icode_LITERAL_NEW;
jint SF_rhino_Icode_Icode_LITERAL_SET;
jint SF_rhino_Icode_Icode_SPARE_ARRAYLIT;
jint SF_rhino_Icode_Icode_REG_IND_C0;
jint SF_rhino_Icode_Icode_REG_IND_C1;
jint SF_rhino_Icode_Icode_REG_IND_C2;
jint SF_rhino_Icode_Icode_REG_IND_C3;
jint SF_rhino_Icode_Icode_REG_IND_C4;
jint SF_rhino_Icode_Icode_REG_IND_C5;
jint SF_rhino_Icode_Icode_REG_IND1;
jint SF_rhino_Icode_Icode_REG_IND2;
jint SF_rhino_Icode_Icode_REG_IND4;
jint SF_rhino_Icode_Icode_REG_STR_C0;
jint SF_rhino_Icode_Icode_REG_STR_C1;
jint SF_rhino_Icode_Icode_REG_STR_C2;
jint SF_rhino_Icode_Icode_REG_STR_C3;
jint SF_rhino_Icode_Icode_REG_STR1;
jint SF_rhino_Icode_Icode_REG_STR2;
jint SF_rhino_Icode_Icode_REG_STR4;
jint SF_rhino_Icode_Icode_GETVAR1;
jint SF_rhino_Icode_Icode_SETVAR1;
jint SF_rhino_Icode_Icode_UNDEF;
jint SF_rhino_Icode_Icode_ZERO;
jint SF_rhino_Icode_Icode_ONE;
jint SF_rhino_Icode_Icode_ENTERDQ;
jint SF_rhino_Icode_Icode_LEAVEDQ;
jint SF_rhino_Icode_Icode_TAIL_CALL;
jint SF_rhino_Icode_Icode_LOCAL_CLEAR;
jint SF_rhino_Icode_Icode_LITERAL_GETTER;
jint SF_rhino_Icode_Icode_LITERAL_SETTER;
jint SF_rhino_Icode_Icode_SETCONST;
jint SF_rhino_Icode_Icode_SETCONSTVAR;
jint SF_rhino_Icode_Icode_SETCONSTVAR1;
jint SF_rhino_Icode_Icode_GENERATOR;
jint SF_rhino_Icode_Icode_GENERATOR_END;
jint SF_rhino_Icode_Icode_DEBUGGER;
jint SF_rhino_Icode_Icode_GENERATOR_RETURN;
jint SF_rhino_Icode_Icode_YIELD_STAR;
jint SF_rhino_Icode_MIN_ICODE;

void mark_rhino_Icode(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_Icode *) object;
}

void clinit_rhino_Icode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_Icode_Icode_DELNAME = jint(0);
	SF_rhino_Icode_Icode_DUP = jint(-1);
	SF_rhino_Icode_Icode_DUP2 = jint(-2);
	SF_rhino_Icode_Icode_SWAP = jint(-3);
	SF_rhino_Icode_Icode_POP = jint(-4);
	SF_rhino_Icode_Icode_POP_RESULT = jint(-5);
	SF_rhino_Icode_Icode_IFEQ_POP = jint(-6);
	SF_rhino_Icode_Icode_VAR_INC_DEC = jint(-7);
	SF_rhino_Icode_Icode_NAME_INC_DEC = jint(-8);
	SF_rhino_Icode_Icode_PROP_INC_DEC = jint(-9);
	SF_rhino_Icode_Icode_ELEM_INC_DEC = jint(-10);
	SF_rhino_Icode_Icode_REF_INC_DEC = jint(-11);
	SF_rhino_Icode_Icode_SCOPE_LOAD = jint(-12);
	SF_rhino_Icode_Icode_SCOPE_SAVE = jint(-13);
	SF_rhino_Icode_Icode_TYPEOFNAME = jint(-14);
	SF_rhino_Icode_Icode_NAME_AND_THIS = jint(-15);
	SF_rhino_Icode_Icode_PROP_AND_THIS = jint(-16);
	SF_rhino_Icode_Icode_ELEM_AND_THIS = jint(-17);
	SF_rhino_Icode_Icode_VALUE_AND_THIS = jint(-18);
	SF_rhino_Icode_Icode_CLOSURE_EXPR = jint(-19);
	SF_rhino_Icode_Icode_CLOSURE_STMT = jint(-20);
	SF_rhino_Icode_Icode_CALLSPECIAL = jint(-21);
	SF_rhino_Icode_Icode_RETUNDEF = jint(-22);
	SF_rhino_Icode_Icode_GOSUB = jint(-23);
	SF_rhino_Icode_Icode_STARTSUB = jint(-24);
	SF_rhino_Icode_Icode_RETSUB = jint(-25);
	SF_rhino_Icode_Icode_LINE = jint(-26);
	SF_rhino_Icode_Icode_SHORTNUMBER = jint(-27);
	SF_rhino_Icode_Icode_INTNUMBER = jint(-28);
	SF_rhino_Icode_Icode_LITERAL_NEW = jint(-29);
	SF_rhino_Icode_Icode_LITERAL_SET = jint(-30);
	SF_rhino_Icode_Icode_SPARE_ARRAYLIT = jint(-31);
	SF_rhino_Icode_Icode_REG_IND_C0 = jint(-32);
	SF_rhino_Icode_Icode_REG_IND_C1 = jint(-33);
	SF_rhino_Icode_Icode_REG_IND_C2 = jint(-34);
	SF_rhino_Icode_Icode_REG_IND_C3 = jint(-35);
	SF_rhino_Icode_Icode_REG_IND_C4 = jint(-36);
	SF_rhino_Icode_Icode_REG_IND_C5 = jint(-37);
	SF_rhino_Icode_Icode_REG_IND1 = jint(-38);
	SF_rhino_Icode_Icode_REG_IND2 = jint(-39);
	SF_rhino_Icode_Icode_REG_IND4 = jint(-40);
	SF_rhino_Icode_Icode_REG_STR_C0 = jint(-41);
	SF_rhino_Icode_Icode_REG_STR_C1 = jint(-42);
	SF_rhino_Icode_Icode_REG_STR_C2 = jint(-43);
	SF_rhino_Icode_Icode_REG_STR_C3 = jint(-44);
	SF_rhino_Icode_Icode_REG_STR1 = jint(-45);
	SF_rhino_Icode_Icode_REG_STR2 = jint(-46);
	SF_rhino_Icode_Icode_REG_STR4 = jint(-47);
	SF_rhino_Icode_Icode_GETVAR1 = jint(-48);
	SF_rhino_Icode_Icode_SETVAR1 = jint(-49);
	SF_rhino_Icode_Icode_UNDEF = jint(-50);
	SF_rhino_Icode_Icode_ZERO = jint(-51);
	SF_rhino_Icode_Icode_ONE = jint(-52);
	SF_rhino_Icode_Icode_ENTERDQ = jint(-53);
	SF_rhino_Icode_Icode_LEAVEDQ = jint(-54);
	SF_rhino_Icode_Icode_TAIL_CALL = jint(-55);
	SF_rhino_Icode_Icode_LOCAL_CLEAR = jint(-56);
	SF_rhino_Icode_Icode_LITERAL_GETTER = jint(-57);
	SF_rhino_Icode_Icode_LITERAL_SETTER = jint(-58);
	SF_rhino_Icode_Icode_SETCONST = jint(-59);
	SF_rhino_Icode_Icode_SETCONSTVAR = jint(-60);
	SF_rhino_Icode_Icode_SETCONSTVAR1 = jint(-61);
	SF_rhino_Icode_Icode_GENERATOR = jint(-62);
	SF_rhino_Icode_Icode_GENERATOR_END = jint(-63);
	SF_rhino_Icode_Icode_DEBUGGER = jint(-64);
	SF_rhino_Icode_Icode_GENERATOR_RETURN = jint(-65);
	SF_rhino_Icode_Icode_YIELD_STAR = jint(-66);
	SF_rhino_Icode_MIN_ICODE = jint(-66);
}

void init_rhino_Icode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Icode:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Icode(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Icode_bytecodeName_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Icode:bytecodeName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Icode(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(139);
	jint temp0 = (jint)SM_rhino_Icode_validBytecode_int_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(140);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[0].i));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_Icode_validIcode_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Icode:validIcode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Icode(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(291);
	if ((-66) > (frame[0].i)) goto label_1;
	}
	INST_ILOAD(0);
	if ((--sp)->i > 0) goto label_1;
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_Icode_validTokenCode_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Icode:validTokenCode", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Icode(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(295);
	if ((jint(2)) > (frame[0].i)) goto label_1;
	}
	{
	if ((frame[0].i) > (81)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_Icode_validBytecode_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Icode:validBytecode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Icode(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(300);
	jint temp0 = (jint)SM_rhino_Icode_validIcode_int_R_boolean(ctx, (frame[0].i));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_rhino_Icode_validTokenCode_int_R_boolean(ctx, (frame[0].i));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_Icode[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
};

static FieldMetadata fields[] {
	{ "Icode_DELNAME", &class_int, (intptr_t) &SF_rhino_Icode_Icode_DELNAME, "I", 24 },
	{ "Icode_DUP", &class_int, (intptr_t) &SF_rhino_Icode_Icode_DUP, "I", 24 },
	{ "Icode_DUP2", &class_int, (intptr_t) &SF_rhino_Icode_Icode_DUP2, "I", 24 },
	{ "Icode_SWAP", &class_int, (intptr_t) &SF_rhino_Icode_Icode_SWAP, "I", 24 },
	{ "Icode_POP", &class_int, (intptr_t) &SF_rhino_Icode_Icode_POP, "I", 24 },
	{ "Icode_POP_RESULT", &class_int, (intptr_t) &SF_rhino_Icode_Icode_POP_RESULT, "I", 24 },
	{ "Icode_IFEQ_POP", &class_int, (intptr_t) &SF_rhino_Icode_Icode_IFEQ_POP, "I", 24 },
	{ "Icode_VAR_INC_DEC", &class_int, (intptr_t) &SF_rhino_Icode_Icode_VAR_INC_DEC, "I", 24 },
	{ "Icode_NAME_INC_DEC", &class_int, (intptr_t) &SF_rhino_Icode_Icode_NAME_INC_DEC, "I", 24 },
	{ "Icode_PROP_INC_DEC", &class_int, (intptr_t) &SF_rhino_Icode_Icode_PROP_INC_DEC, "I", 24 },
	{ "Icode_ELEM_INC_DEC", &class_int, (intptr_t) &SF_rhino_Icode_Icode_ELEM_INC_DEC, "I", 24 },
	{ "Icode_REF_INC_DEC", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REF_INC_DEC, "I", 24 },
	{ "Icode_SCOPE_LOAD", &class_int, (intptr_t) &SF_rhino_Icode_Icode_SCOPE_LOAD, "I", 24 },
	{ "Icode_SCOPE_SAVE", &class_int, (intptr_t) &SF_rhino_Icode_Icode_SCOPE_SAVE, "I", 24 },
	{ "Icode_TYPEOFNAME", &class_int, (intptr_t) &SF_rhino_Icode_Icode_TYPEOFNAME, "I", 24 },
	{ "Icode_NAME_AND_THIS", &class_int, (intptr_t) &SF_rhino_Icode_Icode_NAME_AND_THIS, "I", 24 },
	{ "Icode_PROP_AND_THIS", &class_int, (intptr_t) &SF_rhino_Icode_Icode_PROP_AND_THIS, "I", 24 },
	{ "Icode_ELEM_AND_THIS", &class_int, (intptr_t) &SF_rhino_Icode_Icode_ELEM_AND_THIS, "I", 24 },
	{ "Icode_VALUE_AND_THIS", &class_int, (intptr_t) &SF_rhino_Icode_Icode_VALUE_AND_THIS, "I", 24 },
	{ "Icode_CLOSURE_EXPR", &class_int, (intptr_t) &SF_rhino_Icode_Icode_CLOSURE_EXPR, "I", 24 },
	{ "Icode_CLOSURE_STMT", &class_int, (intptr_t) &SF_rhino_Icode_Icode_CLOSURE_STMT, "I", 24 },
	{ "Icode_CALLSPECIAL", &class_int, (intptr_t) &SF_rhino_Icode_Icode_CALLSPECIAL, "I", 24 },
	{ "Icode_RETUNDEF", &class_int, (intptr_t) &SF_rhino_Icode_Icode_RETUNDEF, "I", 24 },
	{ "Icode_GOSUB", &class_int, (intptr_t) &SF_rhino_Icode_Icode_GOSUB, "I", 24 },
	{ "Icode_STARTSUB", &class_int, (intptr_t) &SF_rhino_Icode_Icode_STARTSUB, "I", 24 },
	{ "Icode_RETSUB", &class_int, (intptr_t) &SF_rhino_Icode_Icode_RETSUB, "I", 24 },
	{ "Icode_LINE", &class_int, (intptr_t) &SF_rhino_Icode_Icode_LINE, "I", 24 },
	{ "Icode_SHORTNUMBER", &class_int, (intptr_t) &SF_rhino_Icode_Icode_SHORTNUMBER, "I", 24 },
	{ "Icode_INTNUMBER", &class_int, (intptr_t) &SF_rhino_Icode_Icode_INTNUMBER, "I", 24 },
	{ "Icode_LITERAL_NEW", &class_int, (intptr_t) &SF_rhino_Icode_Icode_LITERAL_NEW, "I", 24 },
	{ "Icode_LITERAL_SET", &class_int, (intptr_t) &SF_rhino_Icode_Icode_LITERAL_SET, "I", 24 },
	{ "Icode_SPARE_ARRAYLIT", &class_int, (intptr_t) &SF_rhino_Icode_Icode_SPARE_ARRAYLIT, "I", 24 },
	{ "Icode_REG_IND_C0", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REG_IND_C0, "I", 24 },
	{ "Icode_REG_IND_C1", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REG_IND_C1, "I", 24 },
	{ "Icode_REG_IND_C2", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REG_IND_C2, "I", 24 },
	{ "Icode_REG_IND_C3", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REG_IND_C3, "I", 24 },
	{ "Icode_REG_IND_C4", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REG_IND_C4, "I", 24 },
	{ "Icode_REG_IND_C5", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REG_IND_C5, "I", 24 },
	{ "Icode_REG_IND1", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REG_IND1, "I", 24 },
	{ "Icode_REG_IND2", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REG_IND2, "I", 24 },
	{ "Icode_REG_IND4", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REG_IND4, "I", 24 },
	{ "Icode_REG_STR_C0", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REG_STR_C0, "I", 24 },
	{ "Icode_REG_STR_C1", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REG_STR_C1, "I", 24 },
	{ "Icode_REG_STR_C2", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REG_STR_C2, "I", 24 },
	{ "Icode_REG_STR_C3", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REG_STR_C3, "I", 24 },
	{ "Icode_REG_STR1", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REG_STR1, "I", 24 },
	{ "Icode_REG_STR2", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REG_STR2, "I", 24 },
	{ "Icode_REG_STR4", &class_int, (intptr_t) &SF_rhino_Icode_Icode_REG_STR4, "I", 24 },
	{ "Icode_GETVAR1", &class_int, (intptr_t) &SF_rhino_Icode_Icode_GETVAR1, "I", 24 },
	{ "Icode_SETVAR1", &class_int, (intptr_t) &SF_rhino_Icode_Icode_SETVAR1, "I", 24 },
	{ "Icode_UNDEF", &class_int, (intptr_t) &SF_rhino_Icode_Icode_UNDEF, "I", 24 },
	{ "Icode_ZERO", &class_int, (intptr_t) &SF_rhino_Icode_Icode_ZERO, "I", 24 },
	{ "Icode_ONE", &class_int, (intptr_t) &SF_rhino_Icode_Icode_ONE, "I", 24 },
	{ "Icode_ENTERDQ", &class_int, (intptr_t) &SF_rhino_Icode_Icode_ENTERDQ, "I", 24 },
	{ "Icode_LEAVEDQ", &class_int, (intptr_t) &SF_rhino_Icode_Icode_LEAVEDQ, "I", 24 },
	{ "Icode_TAIL_CALL", &class_int, (intptr_t) &SF_rhino_Icode_Icode_TAIL_CALL, "I", 24 },
	{ "Icode_LOCAL_CLEAR", &class_int, (intptr_t) &SF_rhino_Icode_Icode_LOCAL_CLEAR, "I", 24 },
	{ "Icode_LITERAL_GETTER", &class_int, (intptr_t) &SF_rhino_Icode_Icode_LITERAL_GETTER, "I", 24 },
	{ "Icode_LITERAL_SETTER", &class_int, (intptr_t) &SF_rhino_Icode_Icode_LITERAL_SETTER, "I", 24 },
	{ "Icode_SETCONST", &class_int, (intptr_t) &SF_rhino_Icode_Icode_SETCONST, "I", 24 },
	{ "Icode_SETCONSTVAR", &class_int, (intptr_t) &SF_rhino_Icode_Icode_SETCONSTVAR, "I", 24 },
	{ "Icode_SETCONSTVAR1", &class_int, (intptr_t) &SF_rhino_Icode_Icode_SETCONSTVAR1, "I", 24 },
	{ "Icode_GENERATOR", &class_int, (intptr_t) &SF_rhino_Icode_Icode_GENERATOR, "I", 24 },
	{ "Icode_GENERATOR_END", &class_int, (intptr_t) &SF_rhino_Icode_Icode_GENERATOR_END, "I", 24 },
	{ "Icode_DEBUGGER", &class_int, (intptr_t) &SF_rhino_Icode_Icode_DEBUGGER, "I", 24 },
	{ "Icode_GENERATOR_RETURN", &class_int, (intptr_t) &SF_rhino_Icode_Icode_GENERATOR_RETURN, "I", 24 },
	{ "Icode_YIELD_STAR", &class_int, (intptr_t) &SF_rhino_Icode_Icode_YIELD_STAR, "I", 24 },
	{ "MIN_ICODE", &class_int, (intptr_t) &SF_rhino_Icode_MIN_ICODE, "I", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Icode, 0, "()V", 0 },
	{ "bytecodeName", (intptr_t) SM_rhino_Icode_bytecodeName_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 8 },
	{ "validIcode", (intptr_t) SM_rhino_Icode_validIcode_int_R_boolean, 0, "(I)Z", 8 },
	{ "validTokenCode", (intptr_t) SM_rhino_Icode_validTokenCode_int_R_boolean, 0, "(I)Z", 8 },
	{ "validBytecode", (intptr_t) SM_rhino_Icode_validBytecode_int_R_boolean, 0, "(I)Z", 8 },
};

Class class_rhino_Icode{
		.nativeName = (intptr_t) "rhino/Icode",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Icode),
		.classVtable = (intptr_t) vtable_rhino_Icode,
		.staticInitializer = (intptr_t) clinit_rhino_Icode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Icode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 68,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Icode = registerClass(&class_rhino_Icode);

}
