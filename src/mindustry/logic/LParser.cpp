#include "mindustry/logic/LParser.h"
#include "java/lang/Exception.h"
#include "mindustry/logic/LStatements_JumpStatement.h"
#include "arc/func/Func.h"
#include "java/util/Iterator.h"
#include "mindustry/logic/LParser.h"
#include "mindustry/logic/LStatement.h"
#include "mindustry/logic/LAssembler.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/logic/LExecutor.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "arc/struct/StringMap.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/gen/LogicIO.h"
#include "mindustry/logic/LParser_JumpIndex.h"
#include "arc/struct/Seq.h"
#include "mindustry/logic/LStatements_InvalidStatement.h"
#include "java/lang/RuntimeException.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/Vars.h"
#include "arc/struct/ObjectIntMap.h"

extern "C" {

jobject SF_mindustry_logic_LParser_tokens;
jint SF_mindustry_logic_LParser_maxJumps;
jobject SF_mindustry_logic_LParser_opNameChanges;
jobject SF_mindustry_logic_LParser_jumps;
jobject SF_mindustry_logic_LParser_jumpLocations;

void mark_mindustry_logic_LParser(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_LParser_tokens)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LParser_tokens)->clazz)->markFunction)((jobject) SF_mindustry_logic_LParser_tokens, mark, depth + 1);
		if (SF_mindustry_logic_LParser_opNameChanges)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LParser_opNameChanges)->clazz)->markFunction)((jobject) SF_mindustry_logic_LParser_opNameChanges, mark, depth + 1);
		if (SF_mindustry_logic_LParser_jumps)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LParser_jumps)->clazz)->markFunction)((jobject) SF_mindustry_logic_LParser_jumps, mark, depth + 1);
		if (SF_mindustry_logic_LParser_jumpLocations)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LParser_jumpLocations)->clazz)->markFunction)((jobject) SF_mindustry_logic_LParser_jumpLocations, mark, depth + 1);
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
	auto self = (mindustry_logic_LParser *) object;
	if (self->F_statements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_statements)->clazz)->markFunction)((jobject) self->F_statements, mark, depth + 1);
	if (self->F_chars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chars)->clazz)->markFunction)((jobject) self->F_chars, mark, depth + 1);
}

void init_mindustry_logic_LParser_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LParser:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LParser(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(25);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_statements = (jref) sp[1].o;
	LINE_NUMBER(26);
	((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_privileged = (frame[2].i);
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_toCharArray_R_Array1_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toCharArray_R_Array1_char])(ctx, (frame[1].o));
	((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_chars = (jref) sp[1].o;
	LINE_NUMBER(30);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i))) != (13)) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[3].i)) = (10);
	}
label_8:;
	{
	LINE_NUMBER(30);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LParser_comment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LParser:comment", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(37);
	jint temp0 = (jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((mindustry_logic_LParser *) NULL_CHECK(sp[1].o))->F_pos;
	((mindustry_logic_LParser *) NULL_CHECK(sp[1].o))->F_pos = (temp0 + (jint(1)));
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0)) == (10)) goto label_1;
	}
	goto label_0;
label_1:;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LParser_error_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LParser:error", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Invalid code. \u0001"_j.string, 1, (frame[1].o));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LParser_string_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LParser:string", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	frame[1].i = ((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos);
	LINE_NUMBER(46);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1));
	((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_pos = temp0;
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos)));
	LINE_NUMBER(53);
	if ((frame[3].i) != (92)) goto label_6;
	}
	{
	jint temp0 = ((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1));
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1))))) == (110)) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1))))) == (34)) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1))))) != (92)) goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(54);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	jint temp1 = (jint)SM_mindustry_logic_LParser_utf16size_int_R_int(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, (((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1))))));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(56);
	goto label_2;
	}
label_6:;
	{
	LINE_NUMBER(60);
	if ((frame[3].i) != (92)) goto label_10;
	}
	{
	jint temp0 = ((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1));
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, (((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1))))) != (117)) goto label_10;
	}
	{
	LINE_NUMBER(61);
	jint temp0 = ((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(5));
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_12;
	}
	{
	((func_mindustry_logic_LParser_error_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LParser_error_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Invalid \\u escape; expected 4 hex digits."_j))));
	}
label_12:;
	{
	LINE_NUMBER(62);
	frame[4].i = (jint(0));
	LINE_NUMBER(63);
	frame[5].i = (((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(2)));
	}
label_14:;
	{
	if ((frame[5].i) > (((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(5)))) goto label_15;
	}
	{
	LINE_NUMBER(65);
	jint temp0 = (frame[4].i) << (jint(4));
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	jint temp1 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[5].i))), (16));
	frame[4].i = (temp0 | temp1);
	LINE_NUMBER(63);
	INST_IINC(5, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(67);
	if ((frame[4].i) >= 0) goto label_18;
	}
	{
	((func_mindustry_logic_LParser_error_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LParser_error_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Invalid \\u escape; expected 4 hex digits."_j))));
	}
label_18:;
	{
	LINE_NUMBER(68);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_mindustry_logic_LParser_utf16size_int_R_int(ctx, (frame[4].i));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(5)));
	LINE_NUMBER(70);
	goto label_2;
	}
label_10:;
	{
	LINE_NUMBER(73);
	if ((frame[3].i) != (10)) goto label_21;
	}
	{
	LINE_NUMBER(74);
	((func_mindustry_logic_LParser_error_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LParser_error_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Missing closing quote \" before end of line."_j))));
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(75);
	if ((frame[3].i) != (34)) goto label_23;
	}
	LINE_NUMBER(76);
	goto label_3;
label_23:;
	{
	LINE_NUMBER(79);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_mindustry_logic_LParser_utf16size_int_R_int(ctx, (frame[3].i));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(80);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(82);
	jint temp0 = (jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	if (((jint)ARRAY_ACCESS(jchar, sp[0].o, ((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos))) == (34)) goto label_27;
	}
label_26:;
	{
	((func_mindustry_logic_LParser_error_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LParser_error_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Missing closing quote \" before end of file."_j))));
	}
label_27:;
	{
	LINE_NUMBER(83);
	if ((frame[2].i) <= (jint(65535))) goto label_28;
	}
	{
	((func_mindustry_logic_LParser_error_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LParser_error_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"String value too long."_j))));
	}
label_28:;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(87);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (frame[1].i), (((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos) - (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_logic_LParser_utf16size_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LParser:utf16size", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LParser(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(92);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	if ((frame[0].i) >= (128)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	{
	if ((frame[0].i) >= (2048)) goto label_3;
	}
	INST_ICONST(2);
	goto label_2;
label_3:;
	INST_ICONST(3);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LParser_token_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LParser:token", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	frame[1].i = ((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos);
	}
label_1:;
	{
	LINE_NUMBER(98);
	jint temp0 = (jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	frame[2].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos)));
	LINE_NUMBER(100);
	if ((frame[2].i) == (10)) goto label_2;
	}
	{
	if ((frame[2].i) == (32)) goto label_2;
	}
	{
	if ((frame[2].i) == (35)) goto label_2;
	}
	{
	if ((frame[2].i) == (9)) goto label_2;
	}
	{
	if ((frame[2].i) == (59)) goto label_2;
	}
	{
	if ((frame[2].i) != (34)) goto label_5;
	}
	goto label_2;
label_5:;
	{
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(102);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(104);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (frame[1].i), (((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos) - (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LParser_checkRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LParser:checkRead", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), (((jobject) createStringLiteral(ctx, u8"op"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(111);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	jint temp0 = jint(1);
	clinit_mindustry_logic_LParser(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LParser_opNameChanges;
	clinit_mindustry_logic_LParser(ctx);
	sp[2].o = (jobject)SF_mindustry_logic_LParser_tokens;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(1)));
	clinit_mindustry_logic_LParser(ctx);
	sp[3].o = (jobject)SF_mindustry_logic_LParser_tokens;
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (jint(1)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (checkCast(ctx, &class_java_lang_String, sp[1].o));
	}
label_1:;
	{
	LINE_NUMBER(113);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), (((jobject) createStringLiteral(ctx, u8"status"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(114);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_logic_LParser(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LParser_tokens;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_statusEffect_java_lang_String_R_mindustry_type_StatusEffect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_statusEffect_java_lang_String_R_mindustry_type_StatusEffect])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)))));
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(115);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	jint temp0 = jint(2);
	clinit_mindustry_logic_LParser(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LParser_tokens;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"@status-\u0001"_j.string, 1, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(2)))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_3:;
	LINE_NUMBER(118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LParser_statement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LParser:statement", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	frame[1].i = (jint(0));
	LINE_NUMBER(123);
	((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_tok = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(125);
	jint temp0 = (jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	frame[2].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, ((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos)));
	LINE_NUMBER(127);
	jint temp0 = (jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_tok;
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LParser(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LParser_tokens;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Line too long; may only contain \u0001 tokens"_j.string, 1, boxInteger(ctx, (((jarray) nullCheck(ctx, sp[1].o))->length)));
	((func_mindustry_logic_LParser_error_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LParser_error_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(130);
	if ((frame[2].i) == (10)) goto label_7;
	}
	{
	if ((frame[2].i) != (59)) goto label_11;
	}
	goto label_7;
label_11:;
	{
	LINE_NUMBER(132);
	if ((frame[1].i) == 0) goto label_12;
	}
	{
	if ((frame[2].i) == (32)) goto label_12;
	}
	{
	if ((frame[2].i) == (35)) goto label_12;
	}
	{
	if ((frame[2].i) == (9)) goto label_12;
	}
	{
	LINE_NUMBER(133);
	((func_mindustry_logic_LParser_error_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LParser_error_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Expected space after string/token."_j))));
	}
label_12:;
	{
	LINE_NUMBER(136);
	frame[1].i = (jint(0));
	LINE_NUMBER(138);
	if ((frame[2].i) != (35)) goto label_15;
	}
	{
	LINE_NUMBER(139);
	((func_mindustry_logic_LParser_comment) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LParser_comment])(ctx, (frame[0].o));
	LINE_NUMBER(140);
	goto label_7;
	}
label_15:;
	{
	LINE_NUMBER(141);
	if ((frame[2].i) != (34)) goto label_18;
	}
	{
	LINE_NUMBER(142);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((mindustry_logic_LParser *) NULL_CHECK(sp[1].o))->F_tok;
	((mindustry_logic_LParser *) NULL_CHECK(sp[1].o))->F_tok = (temp0 + (jint(1)));
	sp[1].o = (jobject)((func_mindustry_logic_LParser_string_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LParser_string_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(143);
	frame[1].i = (jint(1));
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(144);
	if ((frame[2].i) == (32)) goto label_22;
	}
	{
	if ((frame[2].i) == (9)) goto label_22;
	}
	{
	LINE_NUMBER(145);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((mindustry_logic_LParser *) NULL_CHECK(sp[1].o))->F_tok;
	((mindustry_logic_LParser *) NULL_CHECK(sp[1].o))->F_tok = (temp0 + (jint(1)));
	sp[1].o = (jobject)((func_mindustry_logic_LParser_token_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LParser_token_R_java_lang_String])(ctx, (frame[0].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(146);
	frame[1].i = (jint(1));
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	}
label_21:;
	LINE_NUMBER(150);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(153);
	if (((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_tok) <= 0) goto label_25;
	}
	{
	LINE_NUMBER(154);
	((func_mindustry_logic_LParser_checkRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LParser_checkRead])(ctx, (frame[0].o));
	LINE_NUMBER(157);
	if (((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_tok) != (jint(1))) goto label_28;
	}
	{
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	clinit_mindustry_logic_LParser(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LParser_tokens;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (58)) goto label_28;
	}
	{
	LINE_NUMBER(158);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_jumpLocations;
	if (((jint)((arc_struct_ObjectIntMap *) NULL_CHECK(sp[0].o))->F_size) < (500)) goto label_30;
	}
	{
	LINE_NUMBER(159);
	((func_mindustry_logic_LParser_error_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LParser_error_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Too many jump locations. Max jumps: 500"_j))));
	}
label_30:;
	{
	LINE_NUMBER(161);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	jint temp0 = jint(0);
	clinit_mindustry_logic_LParser(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LParser_tokens;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (jint(1))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(162);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_jumpLocations;
	jint temp2 = (jint)((func_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp2 == 0) goto label_33;
	}
	{
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Jump label already defined: \"\u0001\"."_j.string, 1, (frame[2].o));
	((func_mindustry_logic_LParser_error_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LParser_error_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_33:;
	{
	LINE_NUMBER(165);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_jumpLocations;
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, (frame[2].o), ((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_line));
	LINE_NUMBER(166);
	goto label_25;
	}
label_28:;
	{
	LINE_NUMBER(168);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(170);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), (((jobject) createStringLiteral(ctx, u8"jump"_j))));
	if (temp0 == 0) goto label_37;
	}
	{
	if (((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_tok) <= (jint(1))) goto label_37;
	}
	{
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	jint temp0 = (jint)SM_arc_util_Strings_canParseInt_java_lang_String_R_boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)))));
	if (temp0 != 0) goto label_37;
	}
	INST_ICONST(1);
	goto label_38;
label_37:;
	INST_ICONST(0);
label_38:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	if (sp[0].i == 0) goto label_40;
	}
	{
	LINE_NUMBER(171);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))));
	LINE_NUMBER(172);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"-1"_j)));
	}
label_40:;
	{
	LINE_NUMBER(175);
	frame[4].i = (jint(1));
	}
label_43:;
	{
	if ((frame[4].i) >= ((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_tok)) goto label_0;
	}
	{
	LINE_NUMBER(176);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))), (((jobject) createStringLiteral(ctx, u8"@configure"_j))));
	if (temp0 == 0) goto label_45;
	}
	{
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (((jobject) createStringLiteral(ctx, u8"@config"_j)));
	}
label_45:;
	{
	LINE_NUMBER(177);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i))), (((jobject) createStringLiteral(ctx, u8"configure"_j))));
	if (temp0 == 0) goto label_46;
	}
	{
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)) = (((jobject) createStringLiteral(ctx, u8"config"_j)));
	}
label_46:;
	{
	LINE_NUMBER(175);
	INST_IINC(4, 1);
	goto label_43;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(183);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_tokens;
	sp[0].o = (jobject)SM_mindustry_gen_LogicIO_read_Array1_java_lang_String_int_R_mindustry_logic_LStatement(ctx, sp[0].o, ((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_tok));
	frame[4].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(187);
	goto label_47;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(184);
	frame[5].o = sp[0].o;
	LINE_NUMBER(186);
	clinit_mindustry_logic_LStatements$InvalidStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$InvalidStatement);
	init_mindustry_logic_LStatements$InvalidStatement(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_47:;
	{
	LINE_NUMBER(190);
	if (((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_privileged) != 0) goto label_49;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_49;
	{
	jint temp0 = (jint)((func_mindustry_logic_LStatement_privileged_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_logic_LStatement_privileged_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_49;
	}
	{
	LINE_NUMBER(191);
	clinit_mindustry_logic_LStatements$InvalidStatement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$InvalidStatement);
	init_mindustry_logic_LStatements$InvalidStatement(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_49:;
	{
	LINE_NUMBER(195);
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_logic_LStatements$JumpStatement)) == 0) goto label_51;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_logic_LStatements$JumpStatement, (frame[4].o)));
	if ((frame[2].i) == 0) goto label_51;
	}
	{
	LINE_NUMBER(196);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_jumps;
	clinit_mindustry_logic_LParser$JumpIndex(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_logic_LParser$JumpIndex);
	init_mindustry_logic_LParser$JumpIndex_mindustry_logic_LStatements$JumpStatement_java_lang_String(ctx, sp[1].o, (frame[5].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_51:;
	{
	LINE_NUMBER(199);
	if ((frame[4].o) == nullptr) goto label_54;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_statements;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	goto label_56;
	}
label_54:;
	{
	LINE_NUMBER(203);
	clinit_mindustry_logic_LAssembler(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LAssembler_customParsers;
	clinit_mindustry_logic_LParser(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LParser_tokens;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))));
	if (temp0 == 0) goto label_57;
	}
	{
	LINE_NUMBER(204);
	clinit_mindustry_logic_LAssembler(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LAssembler_customParsers;
	clinit_mindustry_logic_LParser(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LParser_tokens;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))));
	sp[0].o = checkCast(ctx, &class_arc_func_Func, sp[0].o);
	clinit_mindustry_logic_LParser(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LParser_tokens;
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_mindustry_logic_LStatement, sp[0].o));
	LINE_NUMBER(206);
	if (((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_privileged) != 0) goto label_60;
	}
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_60;
	{
	jint temp0 = (jint)((func_mindustry_logic_LStatement_privileged_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_logic_LStatement_privileged_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_60;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_statements;
	clinit_mindustry_logic_LStatements$InvalidStatement(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$InvalidStatement);
	init_mindustry_logic_LStatements$InvalidStatement(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_62;
	}
label_60:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_statements;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_62:;
	LINE_NUMBER(211);
	goto label_56;
label_57:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_statements;
	clinit_mindustry_logic_LStatements$InvalidStatement(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_logic_LStatements$InvalidStatement);
	init_mindustry_logic_LStatements$InvalidStatement(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_56:;
	{
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_line = (((jint)((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_line) + (jint(1)));
	}
label_25:;
	LINE_NUMBER(219);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LParser_parse_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LParser:parse", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(222);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_jumps;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(223);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_jumpLocations;
	((func_arc_struct_ObjectIntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_clear])(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(225);
	jint temp0 = (jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	if (((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_line) >= (clinit_mindustry_logic_LExecutor(ctx), (jint)SF_mindustry_logic_LExecutor_maxInstructions)) goto label_3;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_chars;
	switch(((jint)ARRAY_ACCESS(jchar, sp[0].o, ((jint)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_pos)))) {
		case 10: goto label_5;
		case 32: goto label_5;
		case 59: goto label_5;
		default: goto label_6;
	}
	}
label_5:;
	{
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_logic_LParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	goto label_2;
	}
label_6:;
	{
	LINE_NUMBER(228);
	((func_mindustry_logic_LParser_statement) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LParser_statement])(ctx, (frame[0].o));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(233);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_jumps;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_logic_LParser$JumpIndex, sp[0].o));
	LINE_NUMBER(234);
	clinit_mindustry_logic_LParser(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LParser_jumpLocations;
	sp[1].o = (jobject)((mindustry_logic_LParser$JumpIndex *) NULL_CHECK((frame[2].o)))->F_location;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LParser$JumpIndex *) NULL_CHECK((frame[2].o)))->F_location;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Undefined jump location: \"\u0001\". Make sure the jump label exists and is typed correctly."_j.string, 1, sp[1].o);
	((func_mindustry_logic_LParser_error_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LParser_error_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_logic_LParser$JumpIndex *) NULL_CHECK((frame[2].o)))->F_jump;
	clinit_mindustry_logic_LParser(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LParser_jumpLocations;
	sp[2].o = (jobject)((mindustry_logic_LParser$JumpIndex *) NULL_CHECK((frame[2].o)))->F_location;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[1].o, sp[2].o, (jint(-1)));
	((mindustry_logic_LStatements$JumpStatement *) NULL_CHECK(sp[0].o))->F_destIndex = temp0;
	LINE_NUMBER(238);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((mindustry_logic_LParser *) NULL_CHECK((frame[0].o)))->F_statements;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_LParser(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_logic_LParser_maxJumps = jint(500);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LParser:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LParser(ctx);
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (16));
	clinit_mindustry_logic_LParser(ctx);
	SF_mindustry_logic_LParser_tokens = sp[0].o;
	LINE_NUMBER(12);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"atan2"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"angle"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"dst"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"len"_j)));
	sp[0].o = (jobject)SM_arc_struct_StringMap_of_Array1_java_lang_Object_R_arc_struct_StringMap(ctx, sp[0].o);
	clinit_mindustry_logic_LParser(ctx);
	SF_mindustry_logic_LParser_opNameChanges = sp[0].o;
	LINE_NUMBER(17);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_logic_LParser(ctx);
	SF_mindustry_logic_LParser_jumps = sp[0].o;
	LINE_NUMBER(18);
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[0].o);
	clinit_mindustry_logic_LParser(ctx);
	SF_mindustry_logic_LParser_jumpLocations = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LParser[] {
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
	(void *) M_mindustry_logic_LParser_comment,
	(void *) M_mindustry_logic_LParser_error_java_lang_String,
	(void *) M_mindustry_logic_LParser_string_R_java_lang_String,
	(void *) M_mindustry_logic_LParser_token_R_java_lang_String,
	(void *) M_mindustry_logic_LParser_checkRead,
	(void *) M_mindustry_logic_LParser_statement,
	(void *) M_mindustry_logic_LParser_parse_R_arc_struct_Seq,
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
	{ "comment", "()V" },
	{ "error", "(Ljava/lang/String;)V" },
	{ "string", "()Ljava/lang/String;" },
	{ "token", "()Ljava/lang/String;" },
	{ "checkRead", "()V" },
	{ "statement", "()V" },
	{ "parse", "()Larc/struct/Seq;" },
};

static jclass innerClasses[] {
	&class_mindustry_logic_LParser$JumpIndex,
};

static FieldMetadata fields[] {
	{ "tokens", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_mindustry_logic_LParser_tokens, "[Ljava/lang/String;", 26 },
	{ "maxJumps", &class_int, (intptr_t) &SF_mindustry_logic_LParser_maxJumps, "I", 26 },
	{ "opNameChanges", &class_arc_struct_StringMap, (intptr_t) &SF_mindustry_logic_LParser_opNameChanges, "Larc/struct/StringMap;", 26 },
	{ "jumps", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_logic_LParser_jumps, "Larc/struct/Seq;", 26 },
	{ "jumpLocations", &class_arc_struct_ObjectIntMap, (intptr_t) &SF_mindustry_logic_LParser_jumpLocations, "Larc/struct/ObjectIntMap;", 26 },
	{ "statements", &class_arc_struct_Seq, offsetof(mindustry_logic_LParser, F_statements), "Larc/struct/Seq;", 0 },
	{ "chars", getArrayClass(&class_char, 1), offsetof(mindustry_logic_LParser, F_chars), "[C", 0 },
	{ "pos", &class_int, offsetof(mindustry_logic_LParser, F_pos), "I", 0 },
	{ "line", &class_int, offsetof(mindustry_logic_LParser, F_line), "I", 0 },
	{ "tok", &class_int, offsetof(mindustry_logic_LParser, F_tok), "I", 0 },
	{ "privileged", &class_boolean, offsetof(mindustry_logic_LParser, F_privileged), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LParser_java_lang_String_boolean, 0, "(Ljava/lang/String;Z)V", 0 },
	{ "comment", (intptr_t) M_mindustry_logic_LParser_comment, VTABLE_mindustry_logic_LParser_comment, "()V", 0 },
	{ "error", (intptr_t) M_mindustry_logic_LParser_error_java_lang_String, VTABLE_mindustry_logic_LParser_error_java_lang_String, "(Ljava/lang/String;)V", 0 },
	{ "string", (intptr_t) M_mindustry_logic_LParser_string_R_java_lang_String, VTABLE_mindustry_logic_LParser_string_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "utf16size", (intptr_t) SM_mindustry_logic_LParser_utf16size_int_R_int, 0, "(I)I", 8 },
	{ "token", (intptr_t) M_mindustry_logic_LParser_token_R_java_lang_String, VTABLE_mindustry_logic_LParser_token_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "checkRead", (intptr_t) M_mindustry_logic_LParser_checkRead, VTABLE_mindustry_logic_LParser_checkRead, "()V", 0 },
	{ "statement", (intptr_t) M_mindustry_logic_LParser_statement, VTABLE_mindustry_logic_LParser_statement, "()V", 0 },
	{ "parse", (intptr_t) M_mindustry_logic_LParser_parse_R_arc_struct_Seq, VTABLE_mindustry_logic_LParser_parse_R_arc_struct_Seq, "()Larc/struct/Seq;", 0 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_LParser, 0, "()V", 8 },
};

Class class_mindustry_logic_LParser{
		.nativeName = (intptr_t) "mindustry/logic/LParser",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LParser),
		.classVtable = (intptr_t) vtable_mindustry_logic_LParser,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LParser,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LParser,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LParser = registerClass(&class_mindustry_logic_LParser);

}
