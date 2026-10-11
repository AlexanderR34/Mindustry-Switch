#include "regexodus/PerlSubstitution.h"
#include "regexodus/MatchResult.h"
#include "java/lang/Integer.h"
#include "regexodus/PerlSubstitution_PlainElement.h"
#include "java/lang/StringBuilder.h"
#include "regexodus/Matcher.h"
#include "regexodus/Pattern.h"
#include "regexodus/TextBuffer.h"
#include "regexodus/PerlSubstitution_StringRefHandler.h"
#include "regexodus/PerlSubstitution_Element.h"
#include "regexodus/Replacer_StringBuilderBuffer.h"
#include "regexodus/PatternSyntaxException.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "regexodus/Substitution.h"
#include "java/io/Serializable.h"
#include "java/lang/String.h"
#include "regexodus/PerlSubstitution.h"
#include "java/lang/Character.h"
#include "regexodus/PerlSubstitution_IntRefHandler.h"
#include "regexodus/Replacer.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {

jlong SF_regexodus_PerlSubstitution_serialVersionUID;
jobject SF_regexodus_PerlSubstitution_refPtn;
jint SF_regexodus_PerlSubstitution_MODE_ID;
jint SF_regexodus_PerlSubstitution_NAME_ID;
jint SF_regexodus_PerlSubstitution_ESC_ID;
jint SF_regexodus_PerlSubstitution_MODE_INSENSITIVE;
jint SF_regexodus_PerlSubstitution_MODE_REVERSE;
jint SF_regexodus_PerlSubstitution_MODE_BRACKET;
jint SF_regexodus_PerlSubstitution_MODE_UPPER;
jobject SF_regexodus_PerlSubstitution_groupRef;

void mark_regexodus_PerlSubstitution(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_regexodus_PerlSubstitution_refPtn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_PerlSubstitution_refPtn)->clazz)->markFunction)((jobject) SF_regexodus_PerlSubstitution_refPtn, mark, depth + 1);
		if (SF_regexodus_PerlSubstitution_groupRef)
			((gc_mark_ptr) ((jclass) ((jobject) SF_regexodus_PerlSubstitution_groupRef)->clazz)->markFunction)((jobject) SF_regexodus_PerlSubstitution_groupRef, mark, depth + 1);
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
	auto self = (regexodus_PerlSubstitution *) object;
	if (self->F_queueEntry)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_queueEntry)->clazz)->markFunction)((jobject) self->F_queueEntry, mark, depth + 1);
}

jint SM_regexodus_PerlSubstitution_parseModes_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution:parseModes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_PerlSubstitution(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(117);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(118);
	frame[1].i = (jint(0));
	LINE_NUMBER(119);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_4;
	}
	{
	LINE_NUMBER(120);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	switch(temp0) {
		case 33: goto label_6;
		case 47: goto label_7;
		case 58: goto label_8;
		case 64: goto label_9;
		default: goto label_10;
	}
	}
label_9:;
	{
	LINE_NUMBER(122);
	frame[1].i = ((frame[1].i) ^ (jint(1)));
	LINE_NUMBER(123);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(124);
	frame[1].i = ((frame[1].i) ^ (jint(2)));
	LINE_NUMBER(125);
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(126);
	frame[1].i = ((frame[1].i) ^ (jint(4)));
	LINE_NUMBER(127);
	goto label_10;
	}
label_6:;
	{
	LINE_NUMBER(128);
	frame[1].i = ((frame[1].i) ^ (8));
	}
label_10:;
	{
	LINE_NUMBER(119);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void init_regexodus_PerlSubstitution(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_PerlSubstitution(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(153);
	init_regexodus_PerlSubstitution_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_regexodus_PerlSubstitution_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_PerlSubstitution(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(155);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(156);
	clinit_regexodus_Matcher(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Matcher);
	clinit_regexodus_PerlSubstitution(ctx);
	sp[1].o = (jobject)SF_regexodus_PerlSubstitution_refPtn;
	init_regexodus_Matcher_regexodus_Pattern(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(157);
	((func_regexodus_Matcher_setTarget_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_regexodus_Matcher_setTarget_java_lang_CharSequence])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_regexodus_PerlSubstitution_makeQueue_regexodus_Matcher_R_regexodus_PerlSubstitution$Element(ctx, (frame[2].o));
	((regexodus_PerlSubstitution *) NULL_CHECK(sp[0].o))->F_queueEntry = (jref) sp[1].o;
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_regexodus_PerlSubstitution_value_regexodus_MatchResult_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution:value", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(162);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = (jint)((func_regexodus_MatchResult_length_R_int) resolveInterfaceMethod(ctx, &class_regexodus_MatchResult, INDEX_regexodus_MatchResult_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	init_java_lang_StringBuilder_int(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)SM_regexodus_Replacer_wrap_java_lang_StringBuilder_R_regexodus_Replacer$StringBuilderBuffer(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(163);
	((func_regexodus_PerlSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_PerlSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_regexodus_PerlSubstitution_makeQueue_regexodus_Matcher_R_regexodus_PerlSubstitution$Element(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution:makeQueue", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_PerlSubstitution(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(168);
	jint temp0 = (jint)((func_regexodus_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_find_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(170);
	frame[2].i = (jint(0));
	LINE_NUMBER(171);
	jint temp0 = (jint)((func_regexodus_Matcher_isCaptured_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_isCaptured_int_R_boolean])(ctx, (frame[0].o), (clinit_regexodus_PerlSubstitution(ctx), (jint)SF_regexodus_PerlSubstitution_NAME_ID));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(172);
	jint temp0 = (jint)((func_regexodus_Matcher_isCaptured_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_isCaptured_int_R_boolean])(ctx, (frame[0].o), (clinit_regexodus_PerlSubstitution(ctx), (jint)SF_regexodus_PerlSubstitution_MODE_ID));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((func_regexodus_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_group_int_R_java_lang_String])(ctx, (frame[0].o), (clinit_regexodus_PerlSubstitution(ctx), (jint)SF_regexodus_PerlSubstitution_MODE_ID));
	frame[3].o = sp[0].o;
	LINE_NUMBER(175);
	frame[4].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 >= temp1) goto label_6;
	}
	{
	LINE_NUMBER(176);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[3].o), (frame[4].i));
	switch(temp0) {
		case 33: goto label_11;
		case 47: goto label_12;
		case 58: goto label_13;
		case 64: goto label_14;
		default: goto label_15;
	}
	}
label_14:;
	{
	LINE_NUMBER(178);
	frame[2].i = ((frame[2].i) ^ (jint(1)));
	LINE_NUMBER(179);
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(180);
	frame[2].i = ((frame[2].i) ^ (jint(2)));
	LINE_NUMBER(181);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(182);
	frame[2].i = ((frame[2].i) ^ (jint(4)));
	LINE_NUMBER(183);
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(184);
	frame[2].i = ((frame[2].i) ^ (8));
	}
label_15:;
	{
	LINE_NUMBER(175);
	INST_IINC(4, 1);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(189);
	jint temp0 = (jint)((func_regexodus_Matcher_charAt_int_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_charAt_int_int_R_char])(ctx, (frame[0].o), (jint(0)), (clinit_regexodus_PerlSubstitution(ctx), (jint)SF_regexodus_PerlSubstitution_NAME_ID));
	frame[3].i = temp0;
	LINE_NUMBER(190);
	if ((frame[3].i) != (38)) goto label_20;
	}
	{
	LINE_NUMBER(191);
	clinit_regexodus_PerlSubstitution$IntRefHandler(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PerlSubstitution$IntRefHandler);
	sp[1].o = (jobject)((func_regexodus_Matcher_prefix_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_prefix_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	init_regexodus_PerlSubstitution$IntRefHandler_java_lang_String_java_lang_Integer_int(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].i));
	frame[1].o = sp[0].o;
	goto label_23;
	}
label_20:;
	{
	LINE_NUMBER(192);
	jint temp0 = (jint)SM_java_lang_Character_isDigit_char_R_boolean(ctx, (frame[3].i));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(193);
	clinit_regexodus_PerlSubstitution$IntRefHandler(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PerlSubstitution$IntRefHandler);
	sp[1].o = (jobject)((func_regexodus_Matcher_prefix_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_prefix_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_regexodus_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_group_int_R_java_lang_String])(ctx, (frame[0].o), (clinit_regexodus_PerlSubstitution(ctx), (jint)SF_regexodus_PerlSubstitution_NAME_ID));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[2].o);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	init_regexodus_PerlSubstitution$IntRefHandler_java_lang_String_java_lang_Integer_int(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].i));
	frame[1].o = sp[0].o;
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(195);
	clinit_regexodus_PerlSubstitution$StringRefHandler(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PerlSubstitution$StringRefHandler);
	sp[1].o = (jobject)((func_regexodus_Matcher_prefix_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_prefix_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_regexodus_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_group_int_R_java_lang_String])(ctx, (frame[0].o), (clinit_regexodus_PerlSubstitution(ctx), (jint)SF_regexodus_PerlSubstitution_NAME_ID));
	init_regexodus_PerlSubstitution$StringRefHandler_java_lang_String_java_lang_String_int(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].i));
	frame[1].o = sp[0].o;
	}
label_23:;
	LINE_NUMBER(196);
	goto label_27;
label_4:;
	{
	LINE_NUMBER(198);
	clinit_regexodus_PerlSubstitution$PlainElement(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PerlSubstitution$PlainElement);
	sp[1].o = (jobject)((func_regexodus_Matcher_prefix_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_prefix_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_regexodus_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_group_int_R_java_lang_String])(ctx, (frame[0].o), (clinit_regexodus_PerlSubstitution(ctx), (jint)SF_regexodus_PerlSubstitution_ESC_ID));
	init_regexodus_PerlSubstitution$PlainElement_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[1].o = sp[0].o;
	}
label_27:;
	{
	LINE_NUMBER(200);
	((func_regexodus_Matcher_setTarget_regexodus_Matcher_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_setTarget_regexodus_Matcher_int])(ctx, (frame[0].o), (frame[0].o), (-2));
	LINE_NUMBER(201);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_regexodus_PerlSubstitution_makeQueue_regexodus_Matcher_R_regexodus_PerlSubstitution$Element(ctx, (frame[0].o));
	((regexodus_PerlSubstitution$Element *) NULL_CHECK(sp[0].o))->F_next = (jref) sp[1].o;
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_1:;
	{
	LINE_NUMBER(204);
	clinit_regexodus_PerlSubstitution$PlainElement(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_PerlSubstitution$PlainElement);
	sp[1].o = (jobject)((func_regexodus_Matcher_target_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_Matcher_target_R_java_lang_String])(ctx, (frame[0].o));
	init_regexodus_PerlSubstitution$PlainElement_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_regexodus_PerlSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution:appendSubstitution", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((regexodus_PerlSubstitution *) NULL_CHECK((frame[0].o)))->F_queueEntry;
	frame[3].o = sp[0].o;
	}
label_1:;
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_2;
	{
	LINE_NUMBER(209);
	((func_regexodus_PerlSubstitution$Element_append_regexodus_MatchResult_regexodus_TextBuffer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_regexodus_PerlSubstitution$Element_append_regexodus_MatchResult_regexodus_TextBuffer])(ctx, (frame[3].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(208);
	sp[0].o = (jobject)((regexodus_PerlSubstitution$Element *) NULL_CHECK((frame[3].o)))->F_next;
	frame[3].o = sp[0].o;
	goto label_1;
	}
label_2:;
	LINE_NUMBER(211);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_regexodus_PerlSubstitution_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(215);
	sp[0].o = (jobject)((regexodus_PerlSubstitution *) NULL_CHECK((frame[0].o)))->F_queueEntry;
	frame[2].o = sp[0].o;
	}
label_2:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_3;
	{
	LINE_NUMBER(216);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(215);
	sp[0].o = (jobject)((regexodus_PerlSubstitution$Element *) NULL_CHECK((frame[2].o)))->F_next;
	frame[2].o = sp[0].o;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_regexodus_PerlSubstitution_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(223);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(224);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(226);
	frame[2].o = (checkCast(ctx, &class_regexodus_PerlSubstitution, (frame[1].o)));
	LINE_NUMBER(228);
	sp[0].o = (jobject)((regexodus_PerlSubstitution *) NULL_CHECK((frame[0].o)))->F_queueEntry;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((regexodus_PerlSubstitution *) NULL_CHECK((frame[0].o)))->F_queueEntry;
	sp[1].o = (jobject)((regexodus_PerlSubstitution *) NULL_CHECK((frame[2].o)))->F_queueEntry;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((regexodus_PerlSubstitution *) NULL_CHECK((frame[2].o)))->F_queueEntry;
	if (sp[0].o != nullptr) goto label_7;
	}
	INST_ICONST(1);
	goto label_6;
label_7:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_regexodus_PerlSubstitution_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((regexodus_PerlSubstitution *) NULL_CHECK((frame[0].o)))->F_queueEntry;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((regexodus_PerlSubstitution *) NULL_CHECK((frame[0].o)))->F_queueEntry;
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, sp[0].o);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_regexodus_PerlSubstitution(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_regexodus_PerlSubstitution_serialVersionUID = jlong(-1537346657932720807ll);
	SF_regexodus_PerlSubstitution_MODE_INSENSITIVE = jint(1);
	SF_regexodus_PerlSubstitution_MODE_REVERSE = jint(2);
	SF_regexodus_PerlSubstitution_MODE_BRACKET = jint(4);
	SF_regexodus_PerlSubstitution_MODE_UPPER = jint(8);
	SF_regexodus_PerlSubstitution_groupRef = ((jobject) createStringLiteral(ctx, u8"\\$(?:(?:\\{({=mode}\\p{Po}+)?({=name}\\w+)\\})|({=name}\\d+|\\&)|\\\\({esc}.))"_j));
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "regexodus/PerlSubstitution:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_regexodus_PerlSubstitution(ctx);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_regexodus_PatternSyntaxException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(139);
	clinit_regexodus_Pattern(ctx);
	sp[0].o = gcAlloc(ctx, &class_regexodus_Pattern);
	init_regexodus_Pattern_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\\$(?:(?:\\{({=mode}\\p{Po}+)?({=name}\\w+)\\})|({=name}\\d+|\\&)|\\\\({esc}.))"_j))));
	clinit_regexodus_PerlSubstitution(ctx);
	SF_regexodus_PerlSubstitution_refPtn = sp[0].o;
	LINE_NUMBER(140);
	clinit_regexodus_PerlSubstitution(ctx);
	sp[0].o = (jobject)SF_regexodus_PerlSubstitution_refPtn;
	sp[0].o = (jobject)((func_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mode"_j))));
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	clinit_regexodus_PerlSubstitution(ctx);
	SF_regexodus_PerlSubstitution_MODE_ID = temp0;
	LINE_NUMBER(141);
	clinit_regexodus_PerlSubstitution(ctx);
	sp[0].o = (jobject)SF_regexodus_PerlSubstitution_refPtn;
	sp[0].o = (jobject)((func_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name"_j))));
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	clinit_regexodus_PerlSubstitution(ctx);
	SF_regexodus_PerlSubstitution_NAME_ID = temp1;
	LINE_NUMBER(142);
	clinit_regexodus_PerlSubstitution(ctx);
	sp[0].o = (jobject)SF_regexodus_PerlSubstitution_refPtn;
	sp[0].o = (jobject)((func_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_regexodus_Pattern_groupId_java_lang_String_R_java_lang_Integer])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"esc"_j))));
	jint temp2 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	clinit_regexodus_PerlSubstitution(ctx);
	SF_regexodus_PerlSubstitution_ESC_ID = temp2;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(145);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(143);
	frame[0].o = sp[0].o;
	LINE_NUMBER(144);
	((func_regexodus_PatternSyntaxException_printStackTrace) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_regexodus_PatternSyntaxException_printStackTrace])(ctx, (frame[0].o));
	}
label_7:;
	LINE_NUMBER(146);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_regexodus_PerlSubstitution[] {
	(void *) M_regexodus_PerlSubstitution_hashCode_R_int,
	(void *) M_regexodus_PerlSubstitution_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_regexodus_PerlSubstitution_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_regexodus_PerlSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer,
	(void *) M_regexodus_PerlSubstitution_value_regexodus_MatchResult_R_java_lang_String,
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
	{ "appendSubstitution", "(Lregexodus/MatchResult;Lregexodus/TextBuffer;)V" },
	{ "value", "(Lregexodus/MatchResult;)Ljava/lang/String;" },
};

static jclass interfaces[] { &class_regexodus_Substitution, &class_java_io_Serializable, };

static jclass innerClasses[] {
	&class_regexodus_PerlSubstitution$StringRefHandler,
	&class_regexodus_PerlSubstitution$IntRefHandler,
	&class_regexodus_PerlSubstitution$PlainElement,
	&class_regexodus_PerlSubstitution$Element,
};

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_regexodus_PerlSubstitution_serialVersionUID, "J", 26 },
	{ "refPtn", &class_regexodus_Pattern, (intptr_t) &SF_regexodus_PerlSubstitution_refPtn, "Lregexodus/Pattern;", 10 },
	{ "MODE_ID", &class_int, (intptr_t) &SF_regexodus_PerlSubstitution_MODE_ID, "I", 10 },
	{ "NAME_ID", &class_int, (intptr_t) &SF_regexodus_PerlSubstitution_NAME_ID, "I", 10 },
	{ "ESC_ID", &class_int, (intptr_t) &SF_regexodus_PerlSubstitution_ESC_ID, "I", 10 },
	{ "MODE_INSENSITIVE", &class_int, (intptr_t) &SF_regexodus_PerlSubstitution_MODE_INSENSITIVE, "I", 25 },
	{ "MODE_REVERSE", &class_int, (intptr_t) &SF_regexodus_PerlSubstitution_MODE_REVERSE, "I", 25 },
	{ "MODE_BRACKET", &class_int, (intptr_t) &SF_regexodus_PerlSubstitution_MODE_BRACKET, "I", 25 },
	{ "MODE_UPPER", &class_int, (intptr_t) &SF_regexodus_PerlSubstitution_MODE_UPPER, "I", 25 },
	{ "groupRef", &class_java_lang_String, (intptr_t) &SF_regexodus_PerlSubstitution_groupRef, "Ljava/lang/String;", 26 },
	{ "queueEntry", &class_regexodus_PerlSubstitution$Element, offsetof(regexodus_PerlSubstitution, F_queueEntry), "Lregexodus/PerlSubstitution$Element;", 2 },
};

static MethodMetadata methods[] {
	{ "parseModes", (intptr_t) SM_regexodus_PerlSubstitution_parseModes_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 9 },
	{ "<init>", (intptr_t) init_regexodus_PerlSubstitution, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_regexodus_PerlSubstitution_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "value", (intptr_t) M_regexodus_PerlSubstitution_value_regexodus_MatchResult_R_java_lang_String, VTABLE_regexodus_PerlSubstitution_value_regexodus_MatchResult_R_java_lang_String, "(Lregexodus/MatchResult;)Ljava/lang/String;", 1 },
	{ "makeQueue", (intptr_t) SM_regexodus_PerlSubstitution_makeQueue_regexodus_Matcher_R_regexodus_PerlSubstitution$Element, 0, "(Lregexodus/Matcher;)Lregexodus/PerlSubstitution$Element;", 10 },
	{ "appendSubstitution", (intptr_t) M_regexodus_PerlSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer, VTABLE_regexodus_PerlSubstitution_appendSubstitution_regexodus_MatchResult_regexodus_TextBuffer, "(Lregexodus/MatchResult;Lregexodus/TextBuffer;)V", 1 },
	{ "toString", (intptr_t) M_regexodus_PerlSubstitution_toString_R_java_lang_String, VTABLE_regexodus_PerlSubstitution_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "equals", (intptr_t) M_regexodus_PerlSubstitution_equals_java_lang_Object_R_boolean, VTABLE_regexodus_PerlSubstitution_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_regexodus_PerlSubstitution_hashCode_R_int, VTABLE_regexodus_PerlSubstitution_hashCode_R_int, "()I", 1 },
	{ "<clinit>", (intptr_t) clinit_regexodus_PerlSubstitution, 0, "()V", 8 },
};

Class class_regexodus_PerlSubstitution{
		.nativeName = (intptr_t) "regexodus/PerlSubstitution",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(regexodus_PerlSubstitution),
		.classVtable = (intptr_t) vtable_regexodus_PerlSubstitution,
		.staticInitializer = (intptr_t) clinit_regexodus_PerlSubstitution,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_regexodus_PerlSubstitution,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_regexodus_PerlSubstitution = registerClass(&class_regexodus_PerlSubstitution);

}
